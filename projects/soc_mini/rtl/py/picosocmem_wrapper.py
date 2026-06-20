from migen import *
from litex.soc.interconnect.wishbone import Interface

class PicoSoCMemWrapper(Module):
    def __init__(self, platform, words=256):
        # 1. Định nghĩa giao diện Wishbone (Chuẩn để SoC kết nối)
        self.bus = Interface()
        
        # 2. Khai báo Instance module Verilog
        self.specials += Instance("picosoc_mem",
            # Tham số hóa
            p_WORDS = words,
            
            # Kết nối tín hiệu điều khiển
            i_clk   = ClockSignal("sys"),
            
            # Kết nối Bus Wishbone của LiteX vào các port của Verilog
            # Wishbone addr là byte-address, cần dịch phải 2 bit để khớp với word-address
            i_addr  = self.bus.adr[0:22], 
            i_wdata = self.bus.dat_w,
            i_wen   = self.bus.sel & Replicate(self.bus.stb & self.bus.cyc & self.bus.we, 4),
            
            # Đọc dữ liệu trả về bus
            o_rdata = self.bus.dat_r
        )

        # Logic xác nhận truy cập bus (Acknowledge)
        # Bộ nhớ thường phản hồi trong 1 chu kỳ clock (Wait state = 0)
        self.comb += self.bus.ack.eq(self.bus.stb & self.bus.cyc)
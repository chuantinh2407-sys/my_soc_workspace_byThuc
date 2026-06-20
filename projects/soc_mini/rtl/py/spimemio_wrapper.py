from migen import *
from litex.soc.interconnect.wishbone import Interface
from litex.soc.interconnect.csr import *

class SPIMemIOWrapper(Module, AutoCSR):
    def __init__(self, platform):
        # 1. Giao diện Bus (Wishbone Slave - để CPU cấu hình)
        self.bus = Interface()
        
        # 2. Định nghĩa các chân SPI vật lý
        self.flash_csb = Signal()
        self.flash_clk = Signal()
        self.flash_io  = Signal(4) # MOSI, MISO, IO2, IO3
        self.flash_oe  = Signal(4)
        
        # 3. Kết nối module Verilog spimemio
        self.specials += Instance("spimemio",
            i_clk    = ClockSignal("sys"),
            i_resetn = ~ResetSignal("sys"),
            
            # Kết nối Wishbone
            i_valid  = self.bus.stb & self.bus.cyc,
            o_ready  = self.bus.ack,
            i_addr   = self.bus.adr[0:24],
            o_rdata  = self.bus.dat_r,
            
            # Chân SPI Flash vật lý
            o_flash_csb  = self.flash_csb,
            o_flash_clk  = self.flash_clk,
            
            # Gộp các chân IO (Bit 0-3 tương ứng io0-io3)
            o_flash_io0_oe = self.flash_oe[0],
            o_flash_io1_oe = self.flash_oe[1],
            o_flash_io2_oe = self.flash_oe[2],
            o_flash_io3_oe = self.flash_oe[3],
            
            o_flash_io0_do = self.flash_io[0],
            o_flash_io1_do = self.flash_io[1],
            o_flash_io2_do = self.flash_io[2],
            o_flash_io3_do = self.flash_io[3],
            
            i_flash_io0_di = self.flash_io[0], # Nối feedback
            i_flash_io1_di = self.flash_io[1],
            i_flash_io2_di = self.flash_io[2],
            i_flash_io3_di = self.flash_io[3],
            
            # Kết nối cấu hình (CSR)
            i_cfgreg_we = 0, # Tạm để 0 nếu không cần ghi từ CPU
            i_cfgreg_di = 0
        )
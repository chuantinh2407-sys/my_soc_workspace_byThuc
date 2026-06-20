from migen import *
from litex.soc.interconnect.csr import *

class SimpleUARTWrapper(Module, AutoCSR):
    def __init__(self, platform):
        # 1. Định nghĩa các chân vật lý (Pins)
        self.tx = Signal()
        self.rx = Signal()
        
        # 2. Khai báo các thanh ghi điều khiển (CSRs)
        # Tự động tạo thanh ghi 32-bit: _div (bộ chia clock) và _dat (dữ liệu)
        self._div = CSRStorage(32, name="div")
        self._dat = CSRStorage(32, name="dat") # Ghi dữ liệu
        self._dat_status = CSRStatus(32, name="dat_status") # Đọc dữ liệu nhận
        
        # 3. Kết nối với module Verilog
        self.specials += Instance("simpleuart",
            i_clk    = ClockSignal("sys"),
            i_resetn = ~ResetSignal("sys"),
            
            # Kết nối các chân serial
            o_ser_tx = self.tx,
            i_ser_rx = self.rx,
            
            # Kết nối bộ chia clock (div)
            i_reg_div_we = self._div.we,
            i_reg_div_di = self._div.storage,
            o_reg_div_do = self._dat_status.status, # Ví dụ ánh xạ
            
            # Kết nối dữ liệu (dat)
            i_reg_dat_we = self._dat.we,
            i_reg_dat_re = self._dat_status.re,
            i_reg_dat_di = self._dat.storage,
            o_reg_dat_do = self._dat_status.status,
            o_reg_dat_wait = self._dat_status.re # Logic tùy chỉnh theo thiết kế của bạn
        )
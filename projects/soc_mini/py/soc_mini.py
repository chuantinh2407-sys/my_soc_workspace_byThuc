# =========================================================================
# 🔥 HOTFIX CHO PYTHON 3.12 
# Nhằm mục đích ép LiteX tự sinh tên thanh ghi, 
# để vượt qua lỗi dò frame (Cannot extract CSR name) của Python 3.12
# =========================================================================
import litex.soc.interconnect.csr as csr

def make_patch(original_init, prefix):
    def patched(self, *args, **kwargs):
        if "name" not in kwargs or kwargs["name"] is None:
            kwargs["name"] = f"{prefix}_{abs(id(self))}"
        return original_init(self, *args, **kwargs)
    return patched

csr.CSRStorage.__init__ = make_patch(csr.CSRStorage.__init__, "autostor")
csr.CSRStatus.__init__ = make_patch(csr.CSRStatus.__init__, "autostat")
# =========================================================================

from migen import *
from litex.build.xilinx import XilinxPlatform
from litex.build.generic_platform import Pins, IOStandard, Subsignal 
from litex.soc.integration.soc_core import SoCCore
from litex.soc.integration.builder import Builder

# 1. Định nghĩa Platform kèm sơ đồ chân thực tế
class MyPlatform(XilinxPlatform):
    def __init__(self):
        # Khởi tạo lớp cơ sở với tham số io=[] để tránh lỗi thiếu argument
        XilinxPlatform.__init__(self, "xc7a35t-csg324-1", io=[], toolchain="vivado")
        
        # Ý nghĩa của đoạn này là định nghĩa các chân giao tiếp cơ bản trên board
        self.add_extension([
            ("clk", 0, Pins("E3"), IOStandard("LVCMOS33")),
            ("serial", 0,
                Subsignal("tx", Pins("D10")),
                Subsignal("rx", Pins("A9")),
                IOStandard("LVCMOS33")
            ),
            ("spiflash", 0,
                Subsignal("cs_n", Pins("L13")),
                Subsignal("clk",  Pins("E16")),
                Subsignal("mosi", Pins("K17")),
                Subsignal("miso", Pins("K18")),
                IOStandard("LVCMOS33")
            )
        ])

class _CRG(Module):
    def __init__(self, platform):
        # Thêm name="sys" vào đây để ép cứng tên Clock Domain
        self.clock_domains.cd_sys = ClockDomain(name="sys")
        
        self.comb += self.cd_sys.clk.eq(platform.request("clk"))

# 2. Định nghĩa cấu trúc SoC
class MySoC(SoCCore):
    def __init__(self, platform):
        SoCCore.__init__(self, platform, 
            cpu_type="picorv32", 
            clk_freq=50e6,
            integrated_rom_size=0x8000,
            integrated_main_ram_size=0x2000,
            with_uart=True,
            with_timer=True
        )
        
        # THÊM MỚI: Nhúng khối CRG vào SoC
        self.submodules.crg = _CRG(platform)
        
        # Nhúng thư mục chứa các file thiết kế Verilog
        platform.add_source_dir("rtl/veri")

# 3. Quy trình thực thi sinh file Verilog mục tiêu
if __name__ == "__main__":
    platform = MyPlatform()
    soc      = MySoC(platform)
    
    # Sử dụng Builder nhằm mục đích đóng gói toàn bộ kiến trúc một cách chuẩn xác
    # compile_gateware=False để LiteX chỉ sinh mã nguồn (top.v, .xdc) mà không gọi Vivado
    # Sửa lại dòng khởi tạo Builder ở cuối file của bạn:
    # Sửa lại dòng này
    # Bật compile_software=True để LiteX tự tạo môi trường build phần mềm chuẩn cho SoC của bạn
    builder = Builder(soc, output_dir="build", compile_gateware=True, compile_software=False)
    builder.build()
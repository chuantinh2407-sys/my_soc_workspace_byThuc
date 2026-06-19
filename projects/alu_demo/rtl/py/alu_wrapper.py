from amaranth import *

class ALUWrapper(Elaboratable):
    """
    Wraps the alu_core Verilog module to be used within an Amaranth/LiteX system.
    """
    def __init__(self):
        # Port definitions matching the alu_core module
        self.a             = Signal(32)
        self.b             = Signal(32)
        self.op            = Signal(4)
        self.result        = Signal(32)
        self.zero_flag     = Signal()
        self.carry_flag    = Signal()
        self.overflow_flag = Signal()

    def elaborate(self, platform):
        m = Module()
        # Instantiate the Verilog black box
        m.submodules.alu = Instance("alu_core",
            i_a             = self.a,
            i_b             = self.b,
            i_op            = self.op,
            o_result        = self.result,
            o_zero_flag     = self.zero_flag,
            o_carry_flag    = self.carry_flag,
            o_overflow_flag = self.overflow_flag
        )
        return m
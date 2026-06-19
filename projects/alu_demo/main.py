import os
from amaranth import *
from amaranth.back import verilog
from rtl.py.alu_wrapper import ALUWrapper

class ALUSystem(Elaboratable):
    def __init__(self):
        self.a = Signal(32)
        self.b = Signal(32)
        self.op = Signal(4)
        self.result = Signal(32)
        self.zero = Signal()
        self.carry = Signal()
        self.overflow = Signal()

    def elaborate(self, platform):
        m = Module()
        
        m.submodules.alu = alu = ALUWrapper()
        
        m.d.comb += [
            alu.a.eq(self.a),
            alu.b.eq(self.b),
            alu.op.eq(self.op),
            self.result.eq(alu.result),
            self.zero.eq(alu.zero_flag),
            self.carry.eq(alu.carry_flag),
            self.overflow.eq(alu.overflow_flag)
        ]
        return m

if __name__ == "__main__":
    build_dir = os.path.join(os.path.dirname(__file__), "build", "gateware")
    verilog_file = os.path.join(build_dir, "alu_system_top.v")
    
    top = ALUSystem()
    
    with open(verilog_file, "w") as f:
        f.write(verilog.convert(top, ports=[
            top.a, 
            top.b, 
            top.op, 
            top.result, 
            top.zero, 
            top.carry, 
            top.overflow
        ]))
        
    print(f"Successfully generated: {verilog_file}")
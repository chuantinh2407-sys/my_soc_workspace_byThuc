module alu_core (
   input  [31:0] a
  ,input  [31:0] b
  ,input  [3:0]  op
  ,output [31:0] result
  ,output        zero_flag
  ,output        carry_flag
  ,output        overflow_flag
);

  reg [31:0] result_reg;
  reg        zero_flag_reg;
  reg        carry_flag_reg;
  reg        overflow_flag_reg;

  always @(*) begin
    case (op)
      4'b0000: begin // ADD
        {carry_flag_reg, result_reg} = a + b;
        overflow_flag_reg = (a[31] == b[31]) && (result_reg[31] != a[31]);
      end
      4'b0001: begin // SUB
        {carry_flag_reg, result_reg} = a - b;
        overflow_flag_reg = (a[31] != b[31]) && (result_reg[31] != a[31]);
      end
      4'b0010: begin // AND
        result_reg = a & b;
        carry_flag_reg = 1'b0;
        overflow_flag_reg = 1'b0;
      end
      4'b0011: begin // OR
        result_reg = a | b;
        carry_flag_reg = 1'b0;
        overflow_flag_reg = 1'b0;
      end
      4'b0100: begin // XOR
        result_reg = a ^ b;
        carry_flag_reg = 1'b0;
        overflow_flag_reg = 1'b0;
      end
      default: begin
        result_reg = 32'b0;
        carry_flag_reg = 1'b0;
        overflow_flag_reg = 1'b0;
      end
    endcase

    zero_flag_reg = (result_reg == 32'b0);
  end

  assign result        = result_reg;
  assign zero_flag     = zero_flag_reg;
  assign carry_flag    = carry_flag_reg;
  assign overflow_flag = overflow_flag_reg;  
endmodule
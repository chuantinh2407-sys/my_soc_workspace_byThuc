module picosoc_mem #(
  parameter integer WORDS = 256
) (
  input clk,
  input [3:0] wen,
  input [21:0] addr,
  input [31:0] wdata,
  output reg [31:0] rdata
);
  // Khai báo bộ nhớ
  reg [31:0] mem [0:WORDS-1];

  // Khối initial phải nằm ngoài always
  initial begin
    // Sử dụng đường dẫn tuyệt đối để hệ thống tìm thấy tệp firmware
    $readmemh("/home/nguyen-van-thuc/ic_workspace/my_soc_workspace/projects/soc_mini/firmware/firmware.hex", mem);
  end

  always @(posedge clk) begin
    // Đọc dữ liệu (Đúng: Synchronous Read)
    rdata <= mem[addr];

    // Ghi dữ liệu (Byte-enable)
    if (wen[0]) mem[addr][ 7: 0] <= wdata[ 7: 0];
    if (wen[1]) mem[addr][15: 8] <= wdata[15: 8];
    if (wen[2]) mem[addr][23:16] <= wdata[23:16]; // Chú ý: bạn đang để bit 23-16 <= 23-8 là sai, đã sửa lại
    if (wen[3]) mem[addr][31:24] <= wdata[31:24];
  end
endmodule
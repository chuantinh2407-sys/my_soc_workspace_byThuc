SoC Generator Tool - Automated System-on-Chip Framework
SoC Generator Tool là một khung làm việc (framework) tự động hóa, được thiết kế để đơn giản hóa quá trình tích hợp các Intellectual Property (IP) Cores vào một kiến trúc System-on-Chip (SoC) thống nhất. Bằng cách kết hợp sức mạnh của Python (để tự động hóa) và Verilog (để tổng hợp phần cứng), dự án này giúp các kỹ sư thiết kế phần cứng loại bỏ các thao tác thủ công, giảm thiểu sai sót trong việc kết nối tín hiệu (port mapping) và tối ưu hóa thời gian phát triển dự án.
Table of Contents
 
1. Introduction

2. Key Features and Applications

3. Repository File Structure

4. Module Specifications

5. Getting Started Guide

6. Development Workflow

7. References and Resources

8. Contact Information

1. Introduction
Trong các dự án thiết kế vi mạch (IC Design) hiện đại, việc quản lý hàng chục module IP khác nhau là một thách thức lớn. SoC Generator Tool ra đời với tư duy Lập trình hướng đối tượng (OOP), giúp đóng gói các IP (như UART, SPI, Memory Controller) thành các đối tượng có thể quản lý, kiểm soát và kết nối một cách logic thay vì ghép nối thủ công.

2. Key Features and Applications
Modular Design: Cấu trúc dạng module cho phép "cắm" các ngoại vi mới (peripherals) vào hệ thống mà không phá vỡ kiến trúc cũ.

Configuration-Driven: Hệ thống sử dụng các script cấu hình thay vì hard-code các thông số vào Verilog, giúp dễ dàng thay đổi địa chỉ bộ nhớ hoặc baudrate.

Automated Integration: Tự động phát sinh file soc_top.v với kết nối bus chính xác.

Prototyping Ready: Phù hợp cho việc thử nghiệm trên các dòng FPGA của Xilinx (Vivado), Intel/Altera (Quartus) hoặc giả lập bằng Icarus Verilog.

3. Repository File Structure
Dự án được phân tầng để đảm bảo sự tách biệt giữa logic IP và logic điều khiển:

MY_SOC_WORKSPACE/
├── imported_ips/    # Chứa các IP nguyên bản (đã được kiểm chứng)
├── soc/             # Chứa firmware (C code), linker script (.lds)
├── scripts/         # Các công cụ hỗ trợ xây dựng hệ thống
├── python/          # Logic generator (OOP class definition)
└── README.md        # Tài liệu hướng dẫn sử dụng

Module,Chức năng chính,Giao diện
simpleuart,"Truyền nhận dữ liệu nối tiếp, debug hệ thống",UART (8-N-1)
spiflash,Điều khiển bộ nhớ Flash ngoài,SPI
spimemio,Cầu nối I/O truy xuất bộ nhớ Flash theo thời gian thực,Wishbone / SPI
picosoc,"Module trung tâm, quản lý kết nối giữa CPU và các Slave",System Bus

5. Getting Started Guide
Để bắt đầu sử dụng framework này, bạn cần cài đặt môi trường làm việc:

Yêu cầu hệ thống: Cài đặt Python 3.10+, trình biên dịch Verilog (như Icarus hoặc Vivado).

Cloning: git clone [https://github.com/chuantinh2407-sys/project_soc.git](https://github.com/chuantinh2407-sys/project_soc.git)

Cấu hình: Chỉnh sửa các thông số IP trong thư mục python/.

Build: Chạy lệnh python scripts/generate.py để sinh ra file thiết kế phần cứng hoàn chỉnh.

6. Development Workflow
Quy trình thiết kế của dự án tuân thủ theo 3 bước chuẩn công nghiệp:

Abstraction: Định nghĩa các IP Core thành các class trong Python.

Generation: Sử dụng script để tự động tạo ra sơ đồ kết nối tín hiệu (interconnect).

Verification: Kiểm chứng bằng cách chạy các file testbench trong môi trường giả lập để đảm bảo không có xung đột bus.

7. References and Resources
Dự án tham khảo kiến trúc mở từ các nguồn uy tín:

PicoSoC Project: Nền tảng CPU RISC-V PicoRV32.

RISC-V ISA Specifications: Tiêu chuẩn tập lệnh RISC-V.

Awesome HDL Resources: Tài liệu hướng dẫn thiết kế hardware hiệu quả.

8. Contact Information
Nếu bạn có thắc mắc kỹ thuật hoặc muốn đóng góp vào dự án:

Tác giả: Nguyễn Văn Thục

Email: chuantinh2407@gmail.com

University Email: 24161421@student.hcmute.edu.vn

GitHub: @chuantinh2407-sys

Dedicated to the pursuit of Excellence in IC Design.
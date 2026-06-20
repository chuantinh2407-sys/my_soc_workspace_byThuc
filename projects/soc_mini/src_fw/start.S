.section .text
.global _start

_start:
    /* Khởi tạo Stack Pointer trỏ lên đỉnh của vùng SRAM (0x01000000 + 0x2000) */
    li sp, 0x01002000
    
    /* Nhảy vào hàm main trong code C của bạn */
    call main

/* Nếu hàm main vô tình kết thúc, kẹt lại ở vòng lặp vô tận này để tránh crash CPU */
end_loop:
    j end_loop
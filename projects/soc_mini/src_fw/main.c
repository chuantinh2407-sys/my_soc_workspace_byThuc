// Địa chỉ UART dành cho môi trường mô phỏng Verilator
#define UART_RXTX_ADDR 0x82001000  

#define UART_RXTX (*(volatile unsigned int *)UART_RXTX_ADDR)

void main(void) {
    while(1) {
        UART_RXTX = 'A';
        for(volatile int i = 0; i < 100000; i++);
    }
}
CC=riscv64-unknown-elf-gcc
OBJCOPY=riscv64-unknown-elf-objcopy

LITEX_SOFTWARE_DIR = ../build/software

# Thêm cờ -ffreestanding để báo cho GCC biết ta đang chạy trần (không có hệ điều hành/thư viện chuẩn)
CFLAGS=-mabi=ilp32 -march=rv32i -O2 -g -Wall \
       -I$(LITEX_SOFTWARE_DIR)/include \
       -I$(LITEX_SOFTWARE_DIR)/include/base \
       -ffreestanding

# Bỏ file crt0.o và -lbase đi. Chỉ dùng các file linker script (.ld) để lấy địa chỉ bộ nhớ
LDFLAGS=-nostdlib -nostartfiles -nodefaultlibs \
        -T $(LITEX_SOFTWARE_DIR)/include/generated/output_format.ld \
        -T $(LITEX_SOFTWARE_DIR)/include/generated/regions.ld

all: firmware.bin

# Compile cả start.S và main.c
firmware.elf: start.S main.c
	$(CC) $(CFLAGS) start.S main.c -o firmware.elf $(LDFLAGS)

firmware.bin: firmware.elf
	$(OBJCOPY) -O binary firmware.elf firmware.bin

clean:
	rm -f *.elf *.bin *.o
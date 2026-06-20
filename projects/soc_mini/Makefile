#======================================
# NGUYEN VAN THUC - 2026
# Project: SOC_MINI
#======================================

SHELL := /bin/bash
PROJECT_NAME := $(shell basename "$(CURDIR)")

# --- Đường dẫn ---
BUILD_DIR    := build
GATEWARE     := $(BUILD_DIR)/gateware
RTL_DIR      := rtl
CONSTR_DIR   := constraints
COMPILE_F    := compile.f
TCL_SCRIPT   := ../../scripts/vivado_build.tcl
SCRIPTS_DIR  := ../../scripts
# Đã trỏ lại đúng tên thư mục chứa C code của bạn
FIRMWARE_DIR := src_fw

.PHONY: all build gen-list bitstream lint clean help gui build-firmware

# Mặc định gõ 'make' sẽ build phần cứng rồi mới build firmware
all: bitstream build-firmware

build-firmware:
	@echo "[INFO] Building firmware..."
	@$(MAKE) -C $(FIRMWARE_DIR) all

# 1. Sinh Gateware qua LiteX (Sửa lệnh gọi để phù hợp với tên file soc_mini.py)
build:
	@echo "[INFO] Generating Gateware via LiteX..."
	@mkdir -p "$(BUILD_DIR)"
	@python3 py/soc_mini.py 

# 2. Tạo danh sách file cho Vivado
gen-list:
	@echo "[INFO] Generating compile.f..."
	@find $(RTL_DIR) -name "*.v" > "$(COMPILE_F)"
	@# LiteX thường sinh ra file .v và .xdc mang tên dự án hoặc 'top'
	@echo "$(GATEWARE)/soc_mini.v" >> "$(COMPILE_F)"
	@echo "$(GATEWARE)/soc_mini.xdc" >> "$(COMPILE_F)"

# 3. Chạy flow Vivado
bitstream: build gen-list
	@echo "[INFO] Starting Vivado pipeline..."
	@source "$(SCRIPTS_DIR)/env.sh" && \
	vivado -mode batch -source "$(TCL_SCRIPT)" -tclargs "$(PROJECT_NAME)"

# 4. Mở Vivado GUI
gui:
	@echo "[INFO] Opening Vivado GUI..."
	@source "$(SCRIPTS_DIR)/env.sh" && \
	vivado $(GATEWARE)/*.xpr &

# 5. Kiểm tra chất lượng (Lint)
lint:
	@$(SCRIPTS_DIR)/lint_check.sh

# 6. Dọn dẹp
clean:
	@echo "[INFO] Cleaning up..."
	rm -rf $(BUILD_DIR) $(COMPILE_F) *.log *.jou .Xil vivado*
	@$(MAKE) -C $(FIRMWARE_DIR) clean

help:
	@echo "--- Hướng dẫn sử dụng Makefile ---"
	@echo " make build          : Sinh file Verilog (dùng python3 py/soc_mini.py)"
	@echo " make gen-list       : Tạo file danh sách mã nguồn compile.f"
	@echo " make bitstream      : Build file .bit cho Vivado qua TCL script"
	@echo " make build-firmware : Biên dịch code C ra file .bin"
	@echo " make gui            : Mở giao diện Vivado để xem project"
	@echo " make all            : Chạy full flow (Gateware -> Bitstream -> Firmware)"
	@echo " make clean          : Xóa toàn bộ file tạm và thư mục build"
#======================================
# NGUYEN VAN THUC - 2026
# chuantinh2407@gmail.com
#24161421@student.hcmute.edu.vn
#======================================

# ==============================================================================
# LOCAL PROJECT MAKEFILE
# Purpose: Orchestrates build, linting, and programming for the local project
# ==============================================================================

# Force Bash to ensure 'source' and shell pipes work correctly
SHELL := /bin/bash

# Auto-detect project name from current directory
PROJECT_NAME := $(shell basename "$(CURDIR)")

# Paths management
BUILD_DIR    := build
GATEWARE     := $(BUILD_DIR)/gateware
COMPILE_F    := compile.f
TCL_SCRIPT   := ../../scripts/vivado_build.tcl
VIVADO_LOG   := $(BUILD_DIR)/vivado.log
ROOT_DIR     := $(abspath ../..)
SCRIPTS_DIR  := $(ROOT_DIR)/scripts

.PHONY: all build gen-list bitstream lint program clean help

# Default target
all: bitstream

help:
	@echo "--- Project: $(PROJECT_NAME) ---"
	@echo "  make build     : Compile Python/Amaranth to Verilog."
	@echo "  make gen-list  : Auto-discover RTL files and generate $(COMPILE_F)."
	@echo "  make bitstream : Full flow (Build -> Gen-list -> Synthesis -> Bitstream)."
	@echo "  make lint      : Run static code analysis."
	@echo "  make program   : Upload bitstream to FPGA."
	@echo "  make clean     : Deep clean build artifacts."

# 1. Build Gateware
build:
	@echo "[INFO] Building gateware..."
	@mkdir -p "$(GATEWARE)"
	@python3 main.py || { echo "[ERROR] Build failed!"; exit 1; }

# 2. Generate Filelist
gen-list:
	@echo "[INFO] Updating $(COMPILE_F)..."
	@find ./rtl/veri -name "*.v" > "$(COMPILE_F)"
	@echo "$(GATEWARE)/alu_system_top.v" >> "$(COMPILE_F)"

# 3. Synthesis & Implementation
bitstream: build gen-list
	@echo "[INFO] Starting Vivado Flow for $(PROJECT_NAME)..."
	@source "$(SCRIPTS_DIR)/env.sh" && \
	vivado -mode batch -source "$(TCL_SCRIPT)" -tclargs "$(PROJECT_NAME)" | tee "$(VIVADO_LOG)"

# 4. Code Quality
lint:
	@echo "[INFO] Running Lint..."
	@$(SCRIPTS_DIR)/lint_check.sh

# 5. FPGA Programming
program:
	@echo "[INFO] Uploading bitstream..."
	@source "$(SCRIPTS_DIR)/env.sh" && \
	vivado -mode batch -source "$(SCRIPTS_DIR)/program.tcl" -tclargs "$(PROJECT_NAME)"

# 6. Maintenance
clean:
	@echo "[INFO] Cleaning build artifacts..."
	@rm -rf "$(BUILD_DIR)" "$(COMPILE_F)" *.log *.jou *.str .Xil
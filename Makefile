#======================================
# NGUYEN VAN THUC - 2026
# chuantinh2407@gmail.com
#24161421@student.hcmute.edu.vn
#======================================

# ==============================================================================
# MASTER WORKSPACE MAKEFILE
# Purpose: Orchestrate all projects and global workspace maintenance
# ==============================================================================

# Find all sub-projects in the 'projects/' directory
PROJECTS := $(wildcard projects/*)

.PHONY: all bitstream clean-all lint-all help

help:
	@echo "--- Master Workspace Controls ---"
	@echo "  make all       : Build all projects in the workspace."
	@echo "  make lint-all  : Run linting check on all projects."
	@echo "  make clean-all : Deep clean all build artifacts across all projects."
	@echo "  make help      : Display this message."

# Run target for all projects
# The -C flag tells make to change directory before executing
all:
	@for p in $(PROJECTS); do \
		echo "--- Building project: $$p ---"; \
		$(MAKE) -C $$p bitstream || exit 1; \
	done

lint-all:
	@for p in $(PROJECTS); do \
		echo "--- Linting project: $$p ---"; \
		$(MAKE) -C $$p lint; \
	done

clean-all:
	@echo "[INFO] Deep cleaning all projects..."
	@find . -type f \( -name "*.jou" -o -name "*.log" -o -name "*.str" \) -delete
	@find . -type d -name ".Xil" -exec rm -rf {} +
	@for p in $(PROJECTS); do \
		$(MAKE) -C $$p clean; \
	done
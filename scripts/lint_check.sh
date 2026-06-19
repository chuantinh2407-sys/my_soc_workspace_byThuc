#!/bin/bash
# LINT_CHECK.SH - Smart Linting Script

echo "--- Starting Code Linting ---"

# Check Python code using flake8
# --exclude: Exclude virtual environment, git directory, build directory, and backup files
# --ignore: E501: Ignore line length warnings for better readability in some cases
flake8 . --exclude=venv,.git,build,*.backup.* --ignore=E501

# verilator --lint-only -f compile.f 

echo "--- Linting Finished ---"
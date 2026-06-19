#!/bin/bash
# Description: Synchronize dependencies for project portability

echo "--- Updating dependency list ---"

# Ensure we use the current project's venv
if [ -z "$VIRTUAL_ENV" ]; then
    echo "Warning: Virtual environment not active. Activating..."
    source venv/bin/activate
fi

# Only keep essential dependencies (cleaner list)
pip freeze | grep -E "litex|migen|pyserial|requests|colorama" > requirements.txt

echo "--- requirements.txt updated! ---"
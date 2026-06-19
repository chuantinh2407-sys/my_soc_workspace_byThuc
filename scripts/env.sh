#!/bin/bash
# scripts/env.sh

# 1. Activate Virtual Environment
if [ -z "$VIRTUAL_ENV" ]; then
    source "$(dirname "$0")/../venv/bin/activate"
fi

VIVADO_PATH="/home/nguyen-van-thuc/ic_workspace/vanthuc/downloads/tools/Vivado/2023.2/settings64.sh"
if [ -f "$VIVADO_PATH" ]; then
    source "$VIVADO_PATH"
else
    echo "ERROR: Vivado settings not found at $VIVADO_PATH"
fi

echo "Environment fully loaded!"
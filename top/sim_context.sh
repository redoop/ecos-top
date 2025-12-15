#!/bin/bash

# Enhanced Netlist Simulation Runner for asic_top_netlist_tb_fixed.sv
# Optimized for the new fixed testbench with improved error handling and reporting

set -e

# === Configuration ===
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Tool paths (using same as run_sim.sh)
IVERILOG="/opt/tools/oss-cad/oss-cad-suite/bin/iverilog"
VVP="/opt/tools/oss-cad/oss-cad-suite/bin/vvp"
GTKWAVE="/opt/tools/oss-cad/oss-cad-suite/bin/gtkwave"

# PDK Configuration (same as run_sim.sh)
PDK_ROOT="/opt/github/riscv-ai-accelerator/chisel/synthesis/pdk/icsprout55-pdk"
PDK_STD_CELL_DIR="$PDK_ROOT/IP/STD_cell/ics55_LLSC_H7C_V1p10C100"
PDK_IO_DIR="$PDK_ROOT/IP/IO/ICsprout_55LLULP1233_IO_251013"

# File paths
NETLIST_DIR="$PROJECT_ROOT/top/netlist"
NETLIST_FILE="$NETLIST_DIR/asic_top_V1210.syn.v"

# Technology library files from PDK (actual paths, same as run_sim.sh)
LIB_FILES=(
    "$PDK_STD_CELL_DIR/ics55_LLSC_H7CL/verilog/ics55_LLSC_H7CL.v"
    "$PDK_STD_CELL_DIR/ics55_LLSC_H7CR/verilog/ics55_LLSC_H7CR.v"
    "$PDK_IO_DIR/verilog/icsIOA_N55_3P3.v"
)

# Additional PDK library files (if available)
PDK_ADDITIONAL_LIBS=(
    "$PDK_STD_CELL_DIR/ics55_LLSC_H7CH/verilog/ics55_LLSC_H7CH.v"
)

# Fallback to local copies if PDK not available
LOCAL_LIB_FILES=(
    "$NETLIST_DIR/ics55_LLSC_H7CL.v"
    "$NETLIST_DIR/ics55_LLSC_H7CR.v"
    "$NETLIST_DIR/icsIOA_N55_3P3.v"
)
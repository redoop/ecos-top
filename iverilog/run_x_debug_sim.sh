#!/bin/bash

# X-State Debug Simulation Runner
# 专门用于调试 X 态问题的仿真脚本

set -e

# === Configuration ===
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Use system iverilog
IVERILOG="iverilog"
VVP="vvp"

# PDK Configuration
PDK_ROOT="/opt/github/riscv-ai-accelerator/chisel/synthesis/pdk/icsprout55-pdk"
PDK_STD_CELL_DIR="$PDK_ROOT/IP/STD_cell/ics55_LLSC_H7C_V1p10C100"
PDK_IO_DIR="$PDK_ROOT/IP/IO/ICsprout_55LLULP1233_IO_251013"

NETLIST_DIR="$PROJECT_ROOT/netlist"
NETLIST_FILE="$NETLIST_DIR/asic_top_V1210.syn.v"
TESTBENCH_FILE="$PROJECT_ROOT/tb/asic_top_netlist_tb_x_debug.sv"

# Technology library files from PDK
LIB_FILES=(
    "$PDK_STD_CELL_DIR/ics55_LLSC_H7CL/verilog/ics55_LLSC_H7CL.v"
    "$PDK_STD_CELL_DIR/ics55_LLSC_H7CR/verilog/ics55_LLSC_H7CR.v"
    "$PDK_IO_DIR/verilog/icsIOA_N55_3P3.v"
)

# Additional PDK library files
PDK_ADDITIONAL_LIBS=(
    "$PDK_STD_CELL_DIR/ics55_LLSC_H7CH/verilog/ics55_LLSC_H7CH.v"
)

OUTPUT_DIR="$PROJECT_ROOT/work"
EXECUTABLE="$OUTPUT_DIR/asic_top_x_debug"
VCD_FILE="$OUTPUT_DIR/asic_top_netlist_x_debug.vcd"

COMPILE_LOG="$OUTPUT_DIR/x_debug_compile.log"
SIM_LOG="$OUTPUT_DIR/x_debug_simulation.log"

# === Helper Functions ===
print_header() {
    echo ""
    echo "============================================================"
    echo "$1"
    echo "============================================================"
}

check_file() {
    if [ ! -f "$1" ]; then
        echo "❌ Error: File not found: $1"
        exit 1
    fi
}

# === Main Script ===
main() {
    print_header "🔍 X-State Debug Simulation with icsprout55 PDK"

    # Check files
    check_file "$NETLIST_FILE"
    check_file "$TESTBENCH_FILE"

    # Check library files and collect available ones
    AVAILABLE_LIBS=()
    for lib_file in "${LIB_FILES[@]}"; do
        if [ -f "$lib_file" ]; then
            AVAILABLE_LIBS+=("$lib_file")
            echo "✅ Found library: $(basename $lib_file)"
        else
            echo "⚠️  Warning: Library file not found: $lib_file"
        fi
    done

    # Check additional PDK libraries
    for lib_file in "${PDK_ADDITIONAL_LIBS[@]}"; do
        if [ -f "$lib_file" ]; then
            AVAILABLE_LIBS+=("$lib_file")
            echo "✅ Found additional PDK library: $(basename $lib_file)"
        fi
    done

    if [ ${#AVAILABLE_LIBS[@]} -eq 0 ]; then
        echo "❌ Error: No library files found in PDK!"
        exit 1
    fi

    # Create output directory
    mkdir -p "$OUTPUT_DIR"

    print_header "📋 X-Debug Configuration"
    echo "PDK Root: $PDK_ROOT"
    echo "Available Libraries: ${#AVAILABLE_LIBS[@]} files"
    echo "Netlist: $(basename $NETLIST_FILE)"
    echo "Testbench: $(basename $TESTBENCH_FILE)"
    echo "Focus: X-state detection and debugging"

    # Compilation phase with X-state friendly options
    print_header "⚙️  Compilation Phase (X-Debug Mode)"
    echo "Command: iverilog -g2009 -Wall -Wno-timescale ..."
    echo ""

    # Add PDK include paths
    PDK_INCLUDES=()
    if [ -d "$PDK_STD_CELL_DIR" ]; then
        PDK_INCLUDES+=("-I$PDK_STD_CELL_DIR")
    fi
    if [ -d "$PDK_IO_DIR" ]; then
        PDK_INCLUDES+=("-I$PDK_IO_DIR")
    fi

    # 编译时添加 X-state 友好的选项
    if $IVERILOG -g2009 -Wall -Wno-timescale \
        "${PDK_INCLUDES[@]}" \
        -o "$EXECUTABLE" \
        "${AVAILABLE_LIBS[@]}" \
        "$NETLIST_FILE" \
        "$TESTBENCH_FILE" \
        > "$COMPILE_LOG" 2>&1; then
        echo "✅ Compilation successful!"
        if [ -f "$EXECUTABLE" ]; then
            EXEC_SIZE=$(stat -c%s "$EXECUTABLE" 2>/dev/null || stat -f%z "$EXECUTABLE" 2>/dev/null)
            echo "   Executable: $EXEC_SIZE bytes ($((EXEC_SIZE / 1024)) KB)"
        fi
    else
        COMPILE_EXIT=$?
        echo "❌ Compilation failed (exit code: $COMPILE_EXIT)!"
        echo ""
        echo "--- Compilation Errors ---"
        tail -50 "$COMPILE_LOG"
        exit $COMPILE_EXIT
    fi

    # Simulation phase
    print_header "▶️  X-Debug Simulation Phase"
    echo "Command: vvp -n $EXECUTABLE"
    echo "Monitoring for X-states and Z-states..."
    echo ""

    START_TIME=$(date +%s%N)

    if $VVP -n "$EXECUTABLE" > "$SIM_LOG" 2>&1; then
        echo "✅ Simulation completed successfully!"
    else
        SIM_EXIT=$?
        echo "⚠️  Simulation exit code: $SIM_EXIT"
    fi

    END_TIME=$(date +%s%N)
    ELAPSED_MS=$(( (END_TIME - START_TIME) / 1000000 ))

    echo "   Simulation time: ${ELAPSED_MS}ms"

    # Check VCD output
    if [ -f "$VCD_FILE" ]; then
        VCD_SIZE=$(stat -c%s "$VCD_FILE" 2>/dev/null || stat -f%z "$VCD_FILE" 2>/dev/null)
        if [ "$VCD_SIZE" -gt 1048576 ]; then
            VCD_SIZE_MB=$(echo "scale=2; $VCD_SIZE / 1024 / 1024" | bc -l 2>/dev/null || echo "$((VCD_SIZE / 1024 / 1024))")
            echo "✅ VCD file: ${VCD_SIZE_MB} MB"
        else
            echo "✅ VCD file: $((VCD_SIZE / 1024)) KB"
        fi
    else
        echo "⚠️  VCD file not generated"
    fi

    # Analyze simulation output for X-states
    print_header "🔍 X-State Analysis"
    if grep -q "X-state" "$SIM_LOG"; then
        echo "⚠️  X-states detected in simulation:"
        grep "X-state" "$SIM_LOG" | head -10
    else
        echo "✅ No X-states reported in simulation log"
    fi

    if grep -q "Z-state" "$SIM_LOG"; then
        echo "⚠️  Z-states detected in simulation:"
        grep "Z-state" "$SIM_LOG" | head -10
    else
        echo "✅ No Z-states reported in simulation log"
    fi

    # Summary
    print_header "📊 X-Debug Results Summary"
    echo "PDK Configuration:"
    echo "  PDK Root: $PDK_ROOT"
    echo "  Libraries used: ${#AVAILABLE_LIBS[@]} files"
    echo ""
    echo "Output files:"
    echo "  Executable: $EXECUTABLE"
    echo "  VCD file: $VCD_FILE"
    echo "  Compile log: $COMPILE_LOG"
    echo "  Simulation log: $SIM_LOG"

    echo ""
    echo "--- Key Simulation Messages ---"
    grep -E "(SUCCESS|WARNING|ERROR|X-state|Z-state)" "$SIM_LOG" | tail -20

    print_header "✅ X-Debug Complete"
    echo "Next steps:"
    echo "  1. View waveforms for X-state analysis:"
    echo "     gtkwave $VCD_FILE"
    echo "  2. Check simulation log for details:"
    echo "     cat $SIM_LOG"
    echo "  3. If X-states found, check signal initialization in testbench"
}

# Run
main "$@"
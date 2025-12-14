#!/bin/bash

# Netlist Simulation Runner - Using system iverilog
# Uses Homebrew-installed iverilog and vvp

set -e

# === Configuration ===
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Use system iverilog (Homebrew)
IVERILOG="iverilog"
VVP="vvp"

NETLIST_DIR="$PROJECT_ROOT/netlist"
NETLIST_FILE="$NETLIST_DIR/asic_top_V1210.syn.v"
TESTBENCH_FILE="$PROJECT_ROOT/tb/asic_top_netlist_tb.sv"

# Technology library files
LIB_FILES=(
    "$NETLIST_DIR/ics55_LLSC_H7CL.v"
    "$NETLIST_DIR/ics55_LLSC_H7CR.v"
    "$NETLIST_DIR/icsIOA_N55_3P3.v"
)

OUTPUT_DIR="$PROJECT_ROOT/work"
EXECUTABLE="$OUTPUT_DIR/asic_top_netlist"
VCD_FILE="$OUTPUT_DIR/asic_top_netlist.vcd"

COMPILE_LOG="$OUTPUT_DIR/compile.log"
SIM_LOG="$OUTPUT_DIR/simulation.log"

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

check_tool() {
    if ! command -v "$1" &> /dev/null; then
        echo "❌ Error: Tool not found: $1"
        echo "   Please install with: brew install icarus-verilog"
        exit 1
    fi
}

# === Main Script ===
main() {
    print_header "🔧 Netlist Simulation with Homebrew iverilog"

    # Check tools
    check_tool "iverilog"
    check_tool "vvp"

    # Check files
    check_file "$NETLIST_FILE"
    check_file "$TESTBENCH_FILE"

    # Check library files
    for lib_file in "${LIB_FILES[@]}"; do
        if [ ! -f "$lib_file" ]; then
            echo "⚠️  Warning: Library file not found: $lib_file"
            echo "   This may cause compilation errors!"
        fi
    done

    # Create output directory
    mkdir -p "$OUTPUT_DIR"

    # Get tool versions
    IVERILOG_VERSION=$(iverilog -V 2>&1 | head -1)
    VVP_VERSION=$(vvp -V 2>&1 | head -1 || echo "vvp version unknown")

    print_header "📋 Tool Information"
    echo "iverilog: $IVERILOG_VERSION"
    echo "vvp: $VVP_VERSION"
    echo ""
    echo "Netlist: $(basename $NETLIST_FILE)"
    echo "  Size: $(stat -f%z $NETLIST_FILE | numfmt --to=iec 2>/dev/null || du -h $NETLIST_FILE | cut -f1)"
    echo "Testbench: $(basename $TESTBENCH_FILE)"

    # Compilation phase
    print_header "⚙️  Compilation Phase"
    echo "Command: iverilog -g2009 -Wall -o $EXECUTABLE ..."
    echo ""

    if $IVERILOG -g2009 -Wall \
        -o "$EXECUTABLE" \
        "${LIB_FILES[@]}" \
        "$NETLIST_FILE" \
        "$TESTBENCH_FILE" \
        > "$COMPILE_LOG" 2>&1; then
        echo "✅ Compilation successful!"
        if [ -f "$EXECUTABLE" ]; then
            EXEC_SIZE=$(stat -f%z "$EXECUTABLE" 2>/dev/null || stat -c%s "$EXECUTABLE")
            echo "   Executable: $EXEC_SIZE bytes ($((EXEC_SIZE / 1024)) KB)"
        fi
    else
        COMPILE_EXIT=$?
        echo "❌ Compilation failed (exit code: $COMPILE_EXIT)!"
        echo ""
        echo "--- Compilation Errors ---"
        cat "$COMPILE_LOG"
        exit $COMPILE_EXIT
    fi

    # Simulation phase
    print_header "▶️  Simulation Phase"
    echo "Command: vvp -n $EXECUTABLE"
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
        VCD_SIZE=$(stat -f%z "$VCD_FILE" 2>/dev/null || stat -c%s "$VCD_FILE")
        if [ "$VCD_SIZE" -gt 1048576 ]; then
            VCD_SIZE_MB=$(echo "scale=2; $VCD_SIZE / 1024 / 1024" | bc)
            echo "✅ VCD file: $VCD_SIZE_MB MB"
        else
            echo "✅ VCD file: $((VCD_SIZE / 1024)) KB"
        fi
    else
        echo "⚠️  VCD file not generated"
    fi

    # Summary
    print_header "📊 Results Summary"
    echo "Output files:"
    echo "  Executable: $EXECUTABLE"
    echo "  VCD file: $VCD_FILE"
    echo "  Compile log: $COMPILE_LOG"
    echo "  Simulation log: $SIM_LOG"

    echo ""
    echo "--- Simulation Output ---"
    cat "$SIM_LOG"

    print_header "✅ Complete"
    echo "Next steps:"
    echo "  1. View waveforms:"
    echo "     gtkwave $VCD_FILE"
    echo "  2. Or use GTKWave:"
    echo "     open -a GTKWave $VCD_FILE  (if installed)"
}

# Run
main "$@"

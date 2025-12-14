#!/bin/bash

# Netlist Simulation Runner Script for asic_top_V1210.syn.v
# Uses iverilog from oss-cad-suite

set -e

# === Configuration ===
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"

IVERILOG_PATH="/opt/oss-cad-suite/bin/iverilog"
VVP_PATH="/opt/oss-cad-suite/bin/vvp"

NETLIST_FILE="$PROJECT_ROOT/iverilog/netlist/asic_top_V1210.syn.v"
TESTBENCH_FILE="$PROJECT_ROOT/iverilog/tb/asic_top_netlist_tb.sv"
OUTPUT_DIR="$PROJECT_ROOT/iverilog/work"
VCD_FILE="$OUTPUT_DIR/asic_top_netlist.vcd"

COMPILE_LOG="$OUTPUT_DIR/compile.log"
SIM_LOG="$OUTPUT_DIR/simulation.log"

# === Helper Functions ===
print_header() {
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
    if [ ! -f "$1" ]; then
        echo "❌ Error: Tool not found: $1"
        echo "   Please ensure oss-cad-suite is installed at:"
        echo "   /opt/oss-cad-suite"
        exit 1
    fi
}

# === Main Script ===
main() {
    print_header "🔧 Netlist Simulation Setup"

    # Check if all required files exist
    print_header "📋 Checking Files"
    check_file "$NETLIST_FILE"
    check_file "$TESTBENCH_FILE"
    check_tool "$IVERILOG_PATH"
    check_tool "$VVP_PATH"

    echo "✓ Netlist: $NETLIST_FILE"
    echo "✓ Testbench: $TESTBENCH_FILE"
    echo "✓ iverilog: $IVERILOG_PATH"
    echo "✓ vvp: $VVP_PATH"

    # Ensure work directory exists
    mkdir -p "$OUTPUT_DIR"

    # Compilation phase
    print_header "⚙️  Compilation Phase"
    echo "Compiling with iverilog..."
    echo "Command: $IVERILOG_PATH -o $OUTPUT_DIR/asic_top_netlist $NETLIST_FILE $TESTBENCH_FILE"

    if "$IVERILOG_PATH" \
        -g2009 \
        -o "$OUTPUT_DIR/asic_top_netlist" \
        "$NETLIST_FILE" \
        "$TESTBENCH_FILE" \
        > "$COMPILE_LOG" 2>&1; then
        echo "✅ Compilation successful!"
    else
        echo "❌ Compilation failed!"
        echo "--- Compilation Log ---"
        tail -50 "$COMPILE_LOG"
        exit 1
    fi

    # Simulation phase
    print_header "▶️  Simulation Phase"
    echo "Running simulation..."
    echo "VCD output: $VCD_FILE"

    if "$VVP_PATH" \
        -n \
        "$OUTPUT_DIR/asic_top_netlist" \
        > "$SIM_LOG" 2>&1; then
        echo "✅ Simulation completed successfully!"
    else
        echo "⚠️  Simulation completed with warnings/errors"
        echo "--- Simulation Log (last 30 lines) ---"
        tail -30 "$SIM_LOG"
    fi

    # Summary
    print_header "📊 Simulation Summary"

    if [ -f "$VCD_FILE" ]; then
        VCD_SIZE=$(stat -f%z "$VCD_FILE" 2>/dev/null || stat -c%s "$VCD_FILE" 2>/dev/null)
        VCD_SIZE_MB=$(echo "scale=2; $VCD_SIZE / 1024 / 1024" | bc)
        echo "✅ VCD file generated: $VCD_FILE"
        echo "   Size: $VCD_SIZE_MB MB"
    else
        echo "⚠️  VCD file not found"
    fi

    echo ""
    echo "Log files:"
    echo "  Compilation log: $COMPILE_LOG"
    echo "  Simulation log: $SIM_LOG"
    echo ""

    print_header "📝 Next Steps"
    echo "1. View waveforms using:"
    echo "   gtkwave $VCD_FILE"
    echo ""
    echo "2. Analyze simulation logs:"
    echo "   tail -f $SIM_LOG"
    echo ""
}

# Run main function
main "$@"

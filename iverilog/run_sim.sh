#!/bin/bash

# Netlist Simulation Runner - Using system iverilog with icsprout55 PDK
# Uses Homebrew-installed iverilog and vvp with icsprout55-pdk technology libraries

set -e

# === Configuration ===
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Use system iverilog (Homebrew)
IVERILOG="/opt/tools/oss-cad/oss-cad-suite/bin/iverilog"
VVP="/opt/tools/oss-cad/oss-cad-suite/bin/vvp"

# PDK Configuration
PDK_ROOT="/opt/github/riscv-ai-accelerator/chisel/synthesis/pdk/icsprout55-pdk"
PDK_STD_CELL_DIR="$PDK_ROOT/IP/STD_cell/ics55_LLSC_H7C_V1p10C100"
PDK_IO_DIR="$PDK_ROOT/IP/IO/ICsprout_55LLULP1233_IO_251013"

NETLIST_DIR="$PROJECT_ROOT/netlist"
NETLIST_FILE="$NETLIST_DIR/asic_top_V1210.syn.v"
TESTBENCH_FILE="$PROJECT_ROOT/tb/asic_top_netlist_tb.sv"
TESTBENCH_X_DEBUG="$PROJECT_ROOT/tb/asic_top_netlist_tb_x_debug.sv"

# Technology library files from PDK (actual paths)
LIB_FILES=(
    "$PDK_STD_CELL_DIR/ics55_LLSC_H7CL/verilog/ics55_LLSC_H7CL.v"
    "$PDK_STD_CELL_DIR/ics55_LLSC_H7CR/verilog/ics55_LLSC_H7CR.v"
    "$PDK_IO_DIR/verilog/icsIOA_N55_3P3.v"
)

# Additional PDK library files (if available)
PDK_ADDITIONAL_LIBS=(
    "$PDK_STD_CELL_DIR/ics55_LLSC_H7CH/verilog/ics55_LLSC_H7CH.v"
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

check_pdk() {
    echo "🔍 Verifying PDK configuration..."
    
    if [ ! -d "$PDK_ROOT" ]; then
        echo "❌ Error: PDK root directory not found: $PDK_ROOT"
        return 1
    fi
    
    echo "✅ PDK root found: $PDK_ROOT"
    
    # Check for PDK directories
    local pdk_dirs=("IP" "prtech")
    for dir in "${pdk_dirs[@]}"; do
        if [ -d "$PDK_ROOT/$dir" ]; then
            echo "✅ Found PDK directory: $dir"
        else
            echo "⚠️  PDK directory not found: $dir"
        fi
    done
    
    # Check standard cell directory
    if [ -d "$PDK_STD_CELL_DIR" ]; then
        echo "✅ Found standard cell directory"
    else
        echo "⚠️  Standard cell directory not found"
    fi
    
    # Check IO directory
    if [ -d "$PDK_IO_DIR" ]; then
        echo "✅ Found IO directory"
    else
        echo "⚠️  IO directory not found"
    fi
    
    return 0
}

# === Main Script ===
main() {
    print_header "🔧 Netlist Simulation with icsprout55 PDK"

    # Check tools
    check_tool "iverilog"
    check_tool "vvp"

    # Check PDK
    check_pdk

    # Check files
    check_file "$NETLIST_FILE"
    check_file "$TESTBENCH_FILE"

    # Check PDK directory
    if [ ! -d "$PDK_ROOT" ]; then
        echo "❌ Error: PDK directory not found: $PDK_ROOT"
        echo "   Please ensure the PDK is installed at the specified path"
        exit 1
    fi

    # Check library files
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
        echo "   Please check PDK installation and library paths"
        exit 1
    fi

    # Create output directory
    mkdir -p "$OUTPUT_DIR"

    # Get tool versions
    IVERILOG_VERSION=$(iverilog -V 2>&1 | head -1)
    VVP_VERSION=$(vvp -V 2>&1 | head -1 || echo "vvp version unknown")

    print_header "📋 Tool Information"
    echo "iverilog: $IVERILOG_VERSION"
    echo "vvp: $VVP_VERSION"
    echo ""
    echo "PDK Root: $PDK_ROOT"
    echo "Available Libraries: ${#AVAILABLE_LIBS[@]} files"
    echo ""
    echo "Netlist: $(basename $NETLIST_FILE)"
    echo "  Size: $(stat -f%z $NETLIST_FILE | numfmt --to=iec 2>/dev/null || du -h $NETLIST_FILE | cut -f1)"
    echo "Testbench: $(basename $TESTBENCH_FILE)"

    # Compilation phase
    print_header "⚙️  Compilation Phase"
    echo "Command: iverilog -g2009 -Wall -o $EXECUTABLE ..."
    echo "Using PDK libraries: ${#AVAILABLE_LIBS[@]} files"
    echo ""

    # Add PDK include paths
    PDK_INCLUDES=()
    if [ -d "$PDK_STD_CELL_DIR" ]; then
        PDK_INCLUDES+=("-I$PDK_STD_CELL_DIR")
    fi
    if [ -d "$PDK_IO_DIR" ]; then
        PDK_INCLUDES+=("-I$PDK_IO_DIR")
    fi

    if $IVERILOG -g2009 -Wall \
        "${PDK_INCLUDES[@]}" \
        -o "$EXECUTABLE" \
        "${AVAILABLE_LIBS[@]}" \
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

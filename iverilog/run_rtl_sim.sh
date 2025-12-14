#!/bin/bash

# RTL Frontend Simulation Runner Script
# Based on top/run/Makefile but adapted for iverilog
# Usage: ./run_rtl_sim.sh [ip_sel=value] [prog=value] [wave=value]

set -e

# === Configuration ===
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"

IVERILOG_PATH="/opt/oss-cad-suite/bin/iverilog"
VVP_PATH="/opt/oss-cad-suite/bin/vvp"
GTKWAVE_PATH="/opt/oss-cad-suite/bin/gtkwave"

TOP_DIR="$PROJECT_ROOT/top"
WORK_DIR="$SCRIPT_DIR/work"
DESIGN="soc_tb"

# Output files
EXECUTABLE="$WORK_DIR/$DESIGN"
VCD_FILE="$WORK_DIR/$DESIGN.vcd"
COMPILE_LOG="$WORK_DIR/compile.log"
SIM_LOG="$WORK_DIR/sim.log"

# === Parse command line arguments ===
IP_SEL=""
PROG=""
WAVE=""

for arg in "$@"; do
    case $arg in
        --help|-h)
            # Help will be handled at the end of script
            ;;
        ip_sel=*)
            IP_SEL="${arg#*=}"
            ;;
        prog=*)
            PROG="${arg#*=}"
            ;;
        wave=*)
            WAVE="${arg#*=}"
            ;;
        *)
            echo "Unknown argument: $arg"
            echo "Usage: $0 [ip_sel=value] [prog=value] [wave=value]"
            exit 1
            ;;
    esac
done

# === Helper Functions ===
print_header() {
    echo "============================================================"
    echo "$1"
    echo "============================================================"
}

check_file() {
    if [ ! -f "$1" ]; then
        echo "❌ Error: File not found: $1"
        return 1
    fi
    return 0
}

check_tool() {
    if [ ! -f "$1" ]; then
        echo "❌ Error: Tool not found: $1"
        echo "   Please ensure oss-cad-suite is installed at:"
        echo "   /opt/oss-cad-suite"
        return 1
    fi
    return 0
}

# === Helper Functions for File Lists ===
parse_filelist() {
    local filelist_file="$1"
    local base_path="$2"
    
    if [ ! -f "$filelist_file" ]; then
        echo "Warning: Filelist not found: $filelist_file" >&2
        return 1
    fi
    
    while IFS= read -r line || [[ -n "$line" ]]; do
        # Remove trailing whitespace
        line=$(echo "$line" | sed 's/[[:space:]]*$//')
        
        # Skip empty lines and comments (both // and # style)
        [[ -z "$line" || "$line" =~ ^[[:space:]]*// || "$line" =~ ^[[:space:]]*# ]] && continue
        
        # Handle $RTL_PATH variable substitution
        if [[ "$line" =~ \$RTL_PATH ]]; then
            line="${line/\$RTL_PATH/$base_path}"
        fi
        
        # Convert relative paths to absolute
        if [[ "$line" =~ ^\.\./ ]]; then
            line="$base_path/$line"
        elif [[ ! "$line" =~ ^/ ]]; then
            line="$base_path/$line"
        fi
        
        # Normalize path (remove extra slashes and resolve ..)
        if command -v realpath >/dev/null 2>&1; then
            line=$(realpath "$line" 2>/dev/null || echo "$line")
        else
            # Fallback for systems without realpath
            line=$(cd "$(dirname "$line")" 2>/dev/null && echo "$(pwd)/$(basename "$line")" || echo "$line")
        fi
        
        echo "$line"
    done < "$filelist_file"
}

# === File Lists from Filelist Files ===
FILELIST_DIR="$TOP_DIR/filelist"

# Initialize arrays
RTL_FILES=()
TB_FILES=()
LIB_FILES=()

# Load RTL files from asic_top.f
ASIC_TOP_FILELIST="$FILELIST_DIR/asic_top.f"
if [ -f "$ASIC_TOP_FILELIST" ]; then
    echo "📋 Loading RTL files from: $ASIC_TOP_FILELIST"
    while IFS= read -r rtl_file; do
        if [ -n "$rtl_file" ]; then
            RTL_FILES+=("$rtl_file")
            echo "  + RTL: $rtl_file"
        fi
    done < <(parse_filelist "$ASIC_TOP_FILELIST" "$TOP_DIR")
fi

# Load IP files from ip.f
IP_FILELIST="$FILELIST_DIR/ip.f"
if [ -f "$IP_FILELIST" ]; then
    echo "📋 Loading IP files from: $IP_FILELIST"
    while IFS= read -r ip_file; do
        if [ -n "$ip_file" ]; then
            RTL_FILES+=("$ip_file")
            echo "  + IP: $ip_file"
        fi
    done < <(parse_filelist "$IP_FILELIST" "$TOP_DIR")
fi

# Load library files from lib.f
LIB_FILELIST="$FILELIST_DIR/lib.f"
if [ -f "$LIB_FILELIST" ]; then
    echo "📋 Loading library files from: $LIB_FILELIST"
    while IFS= read -r lib_file; do
        if [ -n "$lib_file" ]; then
            LIB_FILES+=("$lib_file")
            echo "  + LIB: $lib_file"
        fi
    done < <(parse_filelist "$LIB_FILELIST" "$TOP_DIR")
fi

# Load testbench files from asic_tblist.f
TB_FILELIST="$FILELIST_DIR/asic_tblist.f"
if [ -f "$TB_FILELIST" ]; then
    echo "📋 Loading testbench files from: $TB_FILELIST"
    while IFS= read -r tb_file; do
        if [ -n "$tb_file" ]; then
            TB_FILES+=("$tb_file")
            echo "  + TB: $tb_file"
        fi
    done < <(parse_filelist "$TB_FILELIST" "$TOP_DIR")
fi

# Combine all files for compilation
ALL_SOURCE_FILES=("${RTL_FILES[@]}" "${LIB_FILES[@]}" "${TB_FILES[@]}")

# === Include Directories ===
INCLUDE_DIRS=(
    "-I$TOP_DIR"
    "-I$TOP_DIR/utils"
    "-I$PROJECT_ROOT/project_2005/source"
    "-I$PROJECT_ROOT/project_2017/source"
    "-I$PROJECT_ROOT/project_2021/source"
    "-I$PROJECT_ROOT/project_2024/source"
    "-I$PROJECT_ROOT/project_2025/source"
    "-I$TOP_DIR/tb"
    "-I$TOP_DIR/tb/include"
)

# === Build Test Defines ===
TEST_DEFINES=()
if [ -n "$IP_SEL" ]; then
    TEST_DEFINES+=("-D$IP_SEL")
fi
if [ -n "$PROG" ]; then
    TEST_DEFINES+=("-D$PROG")
fi
if [ -n "$WAVE" ]; then
    TEST_DEFINES+=("-D$WAVE")
fi

# === Main Script ===
main() {
    print_header "🔧 RTL Frontend Simulation Setup"

    # Check tools
    print_header "📋 Checking Tools and Files"
    check_tool "$IVERILOG_PATH" || exit 1
    check_tool "$VVP_PATH" || exit 1
    echo "✓ iverilog: $IVERILOG_PATH"
    echo "✓ vvp: $VVP_PATH"

    # Check filelist files
    echo ""
    echo "Filelist Files:"
    MISSING_FILELIST=0
    for filelist in "$ASIC_TOP_FILELIST" "$IP_FILELIST" "$LIB_FILELIST" "$TB_FILELIST"; do
        if [ -f "$filelist" ]; then
            echo "  ✓ $filelist"
        else
            echo "  ⚠️  $filelist (not found)"
        fi
    done

    # Check all source files
    echo ""
    echo "Source Files (${#ALL_SOURCE_FILES[@]} total):"
    MISSING_FILES=0
    
    if [ ${#RTL_FILES[@]} -gt 0 ]; then
        echo "  RTL Files (${#RTL_FILES[@]}):"
        for file in "${RTL_FILES[@]}"; do
            if check_file "$file"; then
                echo "    ✓ $file"
            else
                echo "    ❌ $file (missing)"
                MISSING_FILES=1
            fi
        done
    fi
    
    if [ ${#LIB_FILES[@]} -gt 0 ]; then
        echo "  Library Files (${#LIB_FILES[@]}):"
        for file in "${LIB_FILES[@]}"; do
            if check_file "$file"; then
                echo "    ✓ $file"
            else
                echo "    ❌ $file (missing)"
                MISSING_FILES=1
            fi
        done
    fi
    
    if [ ${#TB_FILES[@]} -gt 0 ]; then
        echo "  Testbench Files (${#TB_FILES[@]}):"
        for file in "${TB_FILES[@]}"; do
            if check_file "$file"; then
                echo "    ✓ $file"
            else
                echo "    ❌ $file (missing)"
                MISSING_FILES=1
            fi
        done
    fi

    if [ $MISSING_FILES -eq 1 ]; then
        echo ""
        echo "❌ Some required files are missing. Please check the file paths."
        exit 1
    fi
    
    if [ ${#ALL_SOURCE_FILES[@]} -eq 0 ]; then
        echo ""
        echo "❌ No source files found in any filelist. Please check filelist files."
        exit 1
    fi

    # Ensure work directory exists
    mkdir -p "$WORK_DIR"

    # Show test configuration
    if [ -n "$IP_SEL" ] || [ -n "$PROG" ] || [ -n "$WAVE" ]; then
        echo ""
        echo "Test Configuration:"
        [ -n "$IP_SEL" ] && echo "  ip_sel: $IP_SEL"
        [ -n "$PROG" ] && echo "  prog: $PROG"
        [ -n "$WAVE" ] && echo "  wave: $WAVE"
    fi

    # Compilation phase
    print_header "⚙️  Compilation Phase"
    echo "Compiling RTL design with iverilog..."
    echo "Design: $DESIGN"
    echo "Top module: soc_tb"

    # Build iverilog command
    IVERILOG_CMD=(
        "$IVERILOG_PATH"
        "-g2009"
        "-Wno-timescale"
        "-Wno-portbind"
        "-Wno-sensitivity-entire-vector"
        "-gno-assertions"
        "-gno-specify"
        "-gno-shared-loop-index"
        "-DIVERILOG"
        "-Dno_warning"
        "-DS50"
        "-DSVA_OFF"
        "-DRANDOMIZE_REG_INIT"
        "-DPDK_BEHAV"
        "${INCLUDE_DIRS[@]}"
        "${TEST_DEFINES[@]}"
        "-o" "$EXECUTABLE"
        "${ALL_SOURCE_FILES[@]}"
    )

    echo ""
    echo "Running compilation..."
    "${IVERILOG_CMD[@]}" > "$COMPILE_LOG" 2>&1
    COMPILE_EXIT_CODE=$?
    
    # Check if executable was generated (more reliable than exit code for iverilog)
    if [ -f "$EXECUTABLE" ]; then
        echo "✅ Compilation successful!"
        echo "   Executable: $EXECUTABLE"
        if [ $COMPILE_EXIT_CODE -ne 0 ]; then
            echo "⚠️  Note: Compilation had warnings (exit code: $COMPILE_EXIT_CODE)"
            echo "--- Recent warnings (last 10 lines) ---"
            tail -10 "$COMPILE_LOG"
        fi
    else
        echo "❌ Compilation failed!"
        echo "--- Compilation Log (last 50 lines) ---"
        tail -50 "$COMPILE_LOG"
        exit 1
    fi

    # Simulation phase
    print_header "▶️  Simulation Phase"
    echo "Running RTL simulation..."
    echo "VCD output: $VCD_FILE"

    if "$VVP_PATH" -n "$EXECUTABLE" > "$SIM_LOG" 2>&1; then
        echo "✅ Simulation completed successfully!"
    else
        SIM_EXIT_CODE=$?
        echo "⚠️  Simulation completed with exit code: $SIM_EXIT_CODE"
        echo "--- Simulation Log (last 30 lines) ---"
        tail -30 "$SIM_LOG"
    fi

    # Summary
    print_header "📊 Simulation Summary"

    if [ -f "$VCD_FILE" ]; then
        VCD_SIZE=$(stat -f%z "$VCD_FILE" 2>/dev/null || stat -c%s "$VCD_FILE" 2>/dev/null)
        VCD_SIZE_MB=$(echo "scale=2; $VCD_SIZE / 1024 / 1024" | bc -l 2>/dev/null || echo "$((VCD_SIZE / 1024 / 1024))")
        echo "✅ VCD file generated: $VCD_FILE"
        echo "   Size: $VCD_SIZE_MB MB"
    else
        echo "⚠️  VCD file not found"
    fi

    echo ""
    echo "Generated files:"
    ls -la "$WORK_DIR/" 2>/dev/null || echo "No files in work directory"

    echo ""
    echo "Log files:"
    echo "  Compilation log: $COMPILE_LOG"
    echo "  Simulation log: $SIM_LOG"

    print_header "📝 Next Steps"
    echo "1. View waveforms using:"
    echo "   $GTKWAVE_PATH $VCD_FILE"
    echo ""
    echo "2. Analyze simulation logs:"
    echo "   tail -f $SIM_LOG"
    echo ""
    echo "3. Re-run with different options:"
    echo "   $0 ip_sel=uart prog=test wave=1"
    echo ""

    # Offer to open waveform viewer
    if [ -f "$VCD_FILE" ] && [ -f "$GTKWAVE_PATH" ]; then
        echo "Would you like to open the waveform viewer? (y/n)"
        read -r response
        if [[ "$response" =~ ^[Yy]$ ]]; then
            echo "Opening GTKWave..."
            "$GTKWAVE_PATH" "$VCD_FILE" &
        fi
    fi
}

# === Help Function ===
show_help() {
    echo "RTL Frontend Simulation Runner"
    echo ""
    echo "Usage: $0 [options]"
    echo ""
    echo "Options:"
    echo "  ip_sel=<value>    IP selection option"
    echo "  prog=<value>      Program option"
    echo "  wave=<value>      Wave generation option"
    echo ""
    echo "Examples:"
    echo "  $0                           # Basic simulation"
    echo "  $0 ip_sel=uart               # Simulate with UART IP"
    echo "  $0 prog=test wave=1          # Test program with waveforms"
    echo "  $0 ip_sel=spi prog=boot      # SPI IP with boot program"
    echo ""
    echo "Files:"
    echo "  Design: $DESIGN"
    echo "  Work directory: $WORK_DIR"
    echo "  VCD output: $VCD_FILE"
    echo ""
}

# === Script Entry Point ===
# Check for help first
if [ "$1" = "--help" ] || [ "$1" = "-h" ]; then
    show_help
    exit 0
fi

# Run main function
main "$@"
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
NETLIST_DIR="$PROJECT_ROOT/netlist"
NETLIST_FILE="$NETLIST_DIR/asic_top_V1210.syn.v"
TESTBENCH_FILE="$PROJECT_ROOT/asic_top_netlist_tb_fixed.sv"

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

# Output configuration
OUTPUT_DIR="$PROJECT_ROOT/work"
EXECUTABLE="$OUTPUT_DIR/asic_top_netlist_fixed"
VCD_FILE="$OUTPUT_DIR/asic_top_netlist_fixed.vcd"
COMPILE_LOG="$OUTPUT_DIR/compile_fixed.log"
SIM_LOG="$OUTPUT_DIR/simulation_fixed.log"

# === Helper Functions ===
print_header() {
    echo ""
    echo "============================================================"
    echo "$1"
    echo "============================================================"
}

print_status() {
    echo "🔍 $1"
}

print_success() {
    echo "✅ $1"
}

print_warning() {
    echo "⚠️  $1"
}

print_error() {
    echo "❌ $1"
}

check_file() {
    if [ ! -f "$1" ]; then
        print_error "File not found: $1"
        return 1
    fi
    return 0
}

check_tool() {
    if [ ! -f "$1" ]; then
        print_error "Tool not found: $1"
        print_error "Please ensure OSS CAD Suite is installed at /opt/tools/oss-cad/oss-cad-suite"
        return 1
    fi
    return 0
}

check_pdk() {
    print_status "Verifying PDK configuration..."
    
    if [ ! -d "$PDK_ROOT" ]; then
        print_warning "PDK root directory not found: $PDK_ROOT"
        print_warning "Will try to use local library files instead"
        return 1
    fi
    
    print_success "PDK root found: $PDK_ROOT"
    
    # Check for PDK directories
    local pdk_dirs=("IP" "prtech")
    for dir in "${pdk_dirs[@]}"; do
        if [ -d "$PDK_ROOT/$dir" ]; then
            print_success "Found PDK directory: $dir"
        else
            print_warning "PDK directory not found: $dir"
        fi
    done
    
    # Check standard cell directory
    if [ -d "$PDK_STD_CELL_DIR" ]; then
        print_success "Found standard cell directory"
    else
        print_warning "Standard cell directory not found"
    fi
    
    # Check IO directory
    if [ -d "$PDK_IO_DIR" ]; then
        print_success "Found IO directory"
    else
        print_warning "IO directory not found"
    fi
    
    return 0
}

get_file_size() {
    if [ -f "$1" ]; then
        if command -v stat >/dev/null 2>&1; then
            # Try macOS stat first, then Linux stat
            stat -f%z "$1" 2>/dev/null || stat -c%s "$1" 2>/dev/null || echo "0"
        else
            echo "0"
        fi
    else
        echo "0"
    fi
}

format_size() {
    local size=$1
    if [ "$size" -gt 1048576 ]; then
        echo "$(echo "scale=2; $size / 1024 / 1024" | bc 2>/dev/null || echo "$((size / 1048576))") MB"
    elif [ "$size" -gt 1024 ]; then
        echo "$((size / 1024)) KB"
    else
        echo "$size bytes"
    fi
}

# === Verification Functions ===
verify_environment() {
    print_header "🔧 Environment Verification"
    
    local errors=0
    
    # Check tools
    print_status "Checking simulation tools..."
    if check_tool "$IVERILOG"; then
        IVERILOG_VERSION=$($IVERILOG -V 2>&1 | head -1 || echo "Unknown version")
        print_success "iverilog: $IVERILOG_VERSION"
    else
        errors=$((errors + 1))
    fi
    
    if check_tool "$VVP"; then
        VVP_VERSION=$($VVP -V 2>&1 | head -1 || echo "Unknown version")
        print_success "vvp: $VVP_VERSION"
    else
        errors=$((errors + 1))
    fi
    
    # Check files
    print_status "Checking required files..."
    
    if check_file "$NETLIST_FILE"; then
        local netlist_size=$(get_file_size "$NETLIST_FILE")
        print_success "Netlist: $(basename "$NETLIST_FILE") ($(format_size $netlist_size))"
    else
        errors=$((errors + 1))
    fi
    
    if check_file "$TESTBENCH_FILE"; then
        local tb_size=$(get_file_size "$TESTBENCH_FILE")
        print_success "Testbench: $(basename "$TESTBENCH_FILE") ($(format_size $tb_size))"
    else
        errors=$((errors + 1))
    fi
    
    # Check PDK and determine library files to use
    print_status "Checking PDK and technology library files..."
    
    # Initialize available libraries array
    AVAILABLE_LIBS=()
    
    if check_pdk; then
        # PDK is available, use PDK library files
        print_status "Using PDK library files..."
        for lib_file in "${LIB_FILES[@]}"; do
            if [ -f "$lib_file" ]; then
                AVAILABLE_LIBS+=("$lib_file")
                local lib_size=$(get_file_size "$lib_file")
                print_success "PDK Library: $(basename "$lib_file") ($(format_size $lib_size))"
            else
                print_warning "PDK library file not found: $lib_file"
            fi
        done
        
        # Check additional PDK libraries
        for lib_file in "${PDK_ADDITIONAL_LIBS[@]}"; do
            if [ -f "$lib_file" ]; then
                AVAILABLE_LIBS+=("$lib_file")
                local lib_size=$(get_file_size "$lib_file")
                print_success "Additional PDK Library: $(basename "$lib_file") ($(format_size $lib_size))"
            fi
        done
    else
        # PDK not available, use local library files
        print_status "PDK not available, using local library files..."
        for lib_file in "${LOCAL_LIB_FILES[@]}"; do
            if [ -f "$lib_file" ]; then
                AVAILABLE_LIBS+=("$lib_file")
                local lib_size=$(get_file_size "$lib_file")
                print_success "Local Library: $(basename "$lib_file") ($(format_size $lib_size))"
            else
                print_warning "Local library file not found: $lib_file"
            fi
        done
    fi
    
    if [ ${#AVAILABLE_LIBS[@]} -eq 0 ]; then
        print_error "No technology library files found!"
        print_error "Please check PDK installation or ensure local library files are present"
        errors=$((errors + 1))
    else
        print_success "Found ${#AVAILABLE_LIBS[@]} technology library files"
    fi
    
    # Create output directory
    mkdir -p "$OUTPUT_DIR"
    print_success "Output directory: $OUTPUT_DIR"
    
    if [ $errors -gt 0 ]; then
        print_error "Environment verification failed with $errors errors"
        exit 1
    fi
    
    print_success "Environment verification completed successfully"
}

# === Compilation Function ===
compile_design() {
    print_header "⚙️  Compilation Phase"
    
    print_status "Preparing compilation..."
    
    # Build file list using available libraries determined in verify_environment
    local file_list=()
    for lib_file in "${AVAILABLE_LIBS[@]}"; do
        file_list+=("$lib_file")
    done
    file_list+=("$NETLIST_FILE")
    file_list+=("$TESTBENCH_FILE")
    
    print_status "Files to compile: ${#file_list[@]}"
    for file in "${file_list[@]}"; do
        echo "  - $(basename "$file")"
    done
    
    # Add PDK include paths if PDK is available
    local pdk_includes=()
    if [ -d "$PDK_STD_CELL_DIR" ]; then
        pdk_includes+=("-I$PDK_STD_CELL_DIR")
    fi
    if [ -d "$PDK_IO_DIR" ]; then
        pdk_includes+=("-I$PDK_IO_DIR")
    fi
    
    # VCD depth configuration
    local vcd_defines=()
    case "${VCD_DEPTH:-default}" in
        "full")
            vcd_defines+=("-DVCD_DEPTH_FULL")
            print_status "VCD Configuration: Full hierarchy (WARNING: Very large file!)"
            ;;
        "deep")
            vcd_defines+=("-DVCD_DEPTH_DEEP")
            print_status "VCD Configuration: Deep dump (5 levels)"
            ;;
        "medium")
            vcd_defines+=("-DVCD_DEPTH_MEDIUM")
            print_status "VCD Configuration: Medium dump (3 levels)"
            ;;
        *)
            print_status "VCD Configuration: Multi-layer dump (4 levels) - Default"
            ;;
    esac
    
    # Compilation command
    local compile_cmd="$IVERILOG -g2009 -Wall -Winfloop"
    
    print_status "Starting compilation..."
    echo "Command: iverilog -g2009 -Wall -Winfloop -o $(basename "$EXECUTABLE") ..."
    if [ ${#pdk_includes[@]} -gt 0 ]; then
        echo "PDK includes: ${pdk_includes[*]}"
    fi
    if [ ${#vcd_defines[@]} -gt 0 ]; then
        echo "VCD defines: ${vcd_defines[*]}"
    fi
    
    # Execute compilation
    local start_time=$(date +%s)
    
    if $compile_cmd "${pdk_includes[@]}" "${vcd_defines[@]}" -o "$EXECUTABLE" "${file_list[@]}" > "$COMPILE_LOG" 2>&1; then
        local end_time=$(date +%s)
        local compile_time=$((end_time - start_time))
        
        print_success "Compilation completed in ${compile_time}s"
        
        if [ -f "$EXECUTABLE" ]; then
            local exec_size=$(get_file_size "$EXECUTABLE")
            print_success "Executable generated: $(format_size $exec_size)"
        fi
    else
        local compile_exit=$?
        print_error "Compilation failed (exit code: $compile_exit)"
        
        echo ""
        echo "--- Compilation Log (last 30 lines) ---"
        tail -30 "$COMPILE_LOG" 2>/dev/null || cat "$COMPILE_LOG"
        
        exit $compile_exit
    fi
}

# === Simulation Function ===
run_simulation() {
    print_header "▶️  Simulation Phase"
    
    print_status "Starting enhanced netlist simulation..."
    echo "Executable: $(basename "$EXECUTABLE")"
    echo "Expected VCD: $(basename "$VCD_FILE")"
    
    # Run simulation with timing
    local start_time=$(date +%s%N)
    
    if $VVP -n "$EXECUTABLE" > "$SIM_LOG" 2>&1; then
        local end_time=$(date +%s%N)
        local elapsed_ms=$(( (end_time - start_time) / 1000000 ))
        
        print_success "Simulation completed successfully in ${elapsed_ms}ms"
    else
        local sim_exit=$?
        local end_time=$(date +%s%N)
        local elapsed_ms=$(( (end_time - start_time) / 1000000 ))
        
        print_warning "Simulation completed with exit code $sim_exit (${elapsed_ms}ms)"
    fi
    
    # Check VCD file
    if [ -f "$VCD_FILE" ]; then
        local vcd_size=$(get_file_size "$VCD_FILE")
        print_success "VCD file generated: $(format_size $vcd_size)"
        
        # Basic VCD validation
        if [ "$vcd_size" -gt 100 ]; then
            print_success "VCD file appears to contain data"
        else
            print_warning "VCD file is very small, may be empty"
        fi
    else
        print_warning "VCD file was not generated"
    fi
}

# === Results Analysis ===
analyze_results() {
    print_header "📊 Results Analysis"
    
    # Analyze simulation log
    if [ -f "$SIM_LOG" ]; then
        print_status "Analyzing simulation output..."
        
        # Count key messages
        local success_count=$(grep -c "SUCCESS" "$SIM_LOG" 2>/dev/null || echo "0")
        local error_count=$(grep -c "ERROR" "$SIM_LOG" 2>/dev/null || echo "0")
        local warning_count=$(grep -c "WARNING" "$SIM_LOG" 2>/dev/null || echo "0")
        local x_state_count=$(grep -c "X-state" "$SIM_LOG" 2>/dev/null || echo "0")
        local z_state_count=$(grep -c "Z-state" "$SIM_LOG" 2>/dev/null || echo "0")
        
        echo "Message Statistics:"
        echo "  SUCCESS messages: $success_count"
        echo "  ERROR messages: $error_count"
        echo "  WARNING messages: $warning_count"
        echo "  X-state detections: $x_state_count"
        echo "  Z-state detections: $z_state_count"
        
        # Show key simulation messages
        echo ""
        echo "--- Key Simulation Messages ---"
        grep -E "(SUCCESS|ERROR|WARNING|PHASE|Complete)" "$SIM_LOG" 2>/dev/null | tail -20 || echo "No key messages found"
        
        # Overall assessment
        echo ""
        if [ "$error_count" -eq 0 ] && [ "$x_state_count" -eq 0 ] && [ "$z_state_count" -eq 0 ]; then
            print_success "Simulation appears to have completed successfully without issues"
        elif [ "$error_count" -gt 0 ]; then
            print_warning "Simulation completed but errors were detected"
        else
            print_warning "Simulation completed but warnings were detected"
        fi
    else
        print_warning "Simulation log not found"
    fi
}

# === Summary Report ===
generate_summary() {
    print_header "📋 Simulation Summary"
    
    echo "Configuration:"
    echo "  Testbench: asic_top_netlist_tb_fixed.sv (Enhanced Version)"
    echo "  Netlist: $(basename "$NETLIST_FILE")"
    if [ -d "$PDK_ROOT" ]; then
        echo "  PDK Root: $PDK_ROOT"
        echo "  Technology Libraries: ${#AVAILABLE_LIBS[@]} files (from PDK)"
    else
        echo "  Technology Libraries: ${#AVAILABLE_LIBS[@]} files (local copies)"
    fi
    echo ""
    
    echo "Output Files:"
    if [ -f "$EXECUTABLE" ]; then
        local exec_size=$(get_file_size "$EXECUTABLE")
        echo "  ✅ Executable: $(basename "$EXECUTABLE") ($(format_size $exec_size))"
    else
        echo "  ❌ Executable: Not generated"
    fi
    
    if [ -f "$VCD_FILE" ]; then
        local vcd_size=$(get_file_size "$VCD_FILE")
        echo "  ✅ VCD File: $(basename "$VCD_FILE") ($(format_size $vcd_size))"
    else
        echo "  ❌ VCD File: Not generated"
    fi
    
    if [ -f "$COMPILE_LOG" ]; then
        echo "  ✅ Compile Log: $(basename "$COMPILE_LOG")"
    fi
    
    if [ -f "$SIM_LOG" ]; then
        echo "  ✅ Simulation Log: $(basename "$SIM_LOG")"
    fi
    
    echo ""
    echo "VCD Depth Configuration:"
    echo "  Current: ${VCD_DEPTH:-default} (4 levels)"
    echo "  Options: VCD_DEPTH=full|deep|medium|default ./run_netlist_fixed_sim.sh"
    echo ""
    
    echo "Next Steps:"
    if [ -f "$VCD_FILE" ]; then
        echo "  1. View waveforms:"
        echo "     $GTKWAVE $VCD_FILE"
        echo ""
        echo "  2. Or use system GTKWave (if available):"
        echo "     gtkwave $VCD_FILE"
    fi
    
    echo ""
    echo "  3. Review logs:"
    echo "     cat $SIM_LOG"
    echo "     cat $COMPILE_LOG"
    echo ""
    echo "  4. Run with different VCD depths:"
    echo "     VCD_DEPTH=deep ./run_netlist_fixed_sim.sh    # 5 levels"
    echo "     VCD_DEPTH=full ./run_netlist_fixed_sim.sh    # All levels (large file!)"
}

# === Main Function ===
main() {
    print_header "🚀 Enhanced ASIC Top Netlist Simulation"
    echo "Using: asic_top_netlist_tb_fixed.sv"
    echo "Date: $(date)"
    
    # Run all phases
    verify_environment
    compile_design
    run_simulation
    analyze_results
    generate_summary
    
    print_header "✅ Simulation Complete"
    
    # Auto-open waveform viewer if requested
    if [ "$1" = "--view" ] && [ -f "$VCD_FILE" ] && [ -f "$GTKWAVE" ]; then
        print_status "Opening waveform viewer..."
        $GTKWAVE "$VCD_FILE" &
    fi
}

# === Script Entry Point ===
if [ "${BASH_SOURCE[0]}" = "${0}" ]; then
    main "$@"
fi
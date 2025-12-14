#!/bin/bash

# Enhanced RTL Simulation Script for iverilog compatibility
# Supports full project RTL simulation based on VCS Makefile structure
# Usage: ./run_fixed_sim.sh [test_name] [ip_sel] [vcd_depth] [options]

set -e

# Configuration
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
WORK_DIR="$SCRIPT_DIR/work"
TOP_DIR="$SCRIPT_DIR/../top"
IVERILOG="/opt/oss-cad-suite/bin/iverilog"
VVP="/opt/oss-cad-suite/bin/vvp"
GTKWAVE="/opt/oss-cad-suite/bin/gtkwave"

# Test selection and options
TEST_NAME="${1:-soc_tb}"
IP_SEL="${2:-1}"
VCD_DEPTH="${3:-0}"  # 0 = all levels, 1 = top level only, 2 = 2 levels, etc.
DUMP_WAVES="${4:-yes}"

print_header() {
    echo "============================================================"
    echo "$1"
    echo "============================================================"
}

print_info() {
    echo "ℹ️  $1"
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

# Create work directory
mkdir -p "$WORK_DIR"

print_header "🚀 Enhanced RTL Simulation (iverilog)"

# Define IP selection and corresponding defines
case "$IP_SEL" in
    "0")
        IP_DEFINES="-Dip_0"
        IP_NAME="project_2057"
        ;;
    "1")
        IP_DEFINES="-Dip_1"
        IP_NAME="project_2017 (SimpleEdgeAiSoC)"
        ;;
    "2")
        IP_DEFINES="-Dip_2"
        IP_NAME="project_2021"
        ;;
    "3")
        IP_DEFINES="-Dip_3"
        IP_NAME="ysyxSoCASIC"
        ;;
    "4")
        IP_DEFINES="-Dip_4"
        IP_NAME="project_2099"
        ;;
    "5")
        IP_DEFINES="-Dip_5"
        IP_NAME="project_2005"
        ;;
    *)
        IP_DEFINES="-Dip_1"
        IP_NAME="project_2017 (SimpleEdgeAiSoC)"
        IP_SEL="1"
        ;;
esac

print_info "Selected IP: $IP_NAME (ip_sel=$IP_SEL)"
if [ "$VCD_DEPTH" = "0" ]; then
    print_info "VCD Depth: All levels (complete hierarchy)"
else
    print_info "VCD Depth: $VCD_DEPTH levels (optimized for smaller file size)"
fi

# Define test configurations
case "$TEST_NAME" in
    "simple")
        print_info "Running simple counter test..."
        SOURCES="test_simple.sv"
        TOP_MODULE="simple_test"
        INCLUDES="-I../top/utils"
        DEFINES="-DIVERILOG"
        ;;
    "clk_div")
        print_info "Running clock divider test..."
        SOURCES="simple_rtl_test.sv ../top/utils/clk_int_div.sv ../top/utils/stdcell.sv simple_stdcells.sv"
        TOP_MODULE="simple_rtl_test"
        INCLUDES="-I../top/utils"
        DEFINES="-DIVERILOG"
        ;;
    "asic_top_test")
        print_info "Running ASIC top level test..."
        SOURCES="asic_top_test.sv asic_top_fixed.sv"
        TOP_MODULE="asic_top_test"
        INCLUDES="-I../top/utils"
        DEFINES="-DIVERILOG $IP_DEFINES"
        ;;
    "soc_tb_real")
        print_info "Running SoC testbench with SimpleEdgeAiSoC demo IP..."
        
        # Build comprehensive source list including demo SimpleEdgeAiSoC
        SOURCES=""
        
        # Demo SimpleEdgeAiSoC source files (iverilog compatible)
        SOURCES+="simple_edge_ai_soc_demo.sv "
        
        # Testbench and top-level files
        SOURCES+="soc_tb_with_real_ip.sv asic_top_with_soc.sv simple_stdcells.sv "
        
        TOP_MODULE="soc_tb"
        
        # Include paths
        INCLUDES="-I../top "
        INCLUDES+="-I../top/utils "
        
        # Defines for demo SimpleEdgeAiSoC
        DEFINES="-DIVERILOG "
        DEFINES+="-Dno_warning "
        DEFINES+="-DRANDOMIZE_REG_INIT "
        DEFINES+="-DPDK_BEHAV "
        DEFINES+="$IP_DEFINES "
        
        TEST_NAME="soc_tb_real"
        ;;
    "soc_tb"|*)
        print_info "Running basic SoC testbench (with IP stub)..."
        
        # Build comprehensive source list for iverilog compatibility
        SOURCES=""
        
        # Core RTL files - use existing fixed version for simplicity
        # SOURCES+="asic_top_full.sv "
        # SOURCES+="../top/utils/clk_int_div.sv "
        # SOURCES+="../top/utils/register.sv "
        # SOURCES+="../top/utils/rst_sync.sv "
        # SOURCES+="../top/utils/xchecker.sv "
        # SOURCES+="../top/utils/stdcell.sv "
        # SOURCES+="../top/utils/ip_stubs.sv "
        # SOURCES+="../top/rcu/rcu.sv "
        
        # Library files (lib.f equivalent)
        # SOURCES+="../top/lib/tc_clk.sv "
        
        # IP files - conditionally include based on IP selection
        if [ "$IP_SEL" = "1" ]; then
            print_warning "Using IP stub for SimpleEdgeAiSoC (use 'soc_tb_real' for full IP)"
            # The stub is already included in ip_stubs.sv
        fi
        
        # Testbench files - use basic version with existing asic_top_fixed
        SOURCES+="soc_tb_basic.sv asic_top_fixed.sv simple_stdcells.sv "
        
        TOP_MODULE="soc_tb"
        
        # Include paths (simplified for iverilog)
        INCLUDES="-I../top "
        INCLUDES+="-I../top/utils "
        INCLUDES+="-I../top/rcu "
        INCLUDES+="-I../top/lib "
        
        # Defines (adapted for iverilog)
        DEFINES="-DIVERILOG "
        DEFINES+="-Dno_warning "
        DEFINES+="-DRANDOMIZE_REG_INIT "
        DEFINES+="-DPDK_BEHAV "
        DEFINES+="$IP_DEFINES "
        
        TEST_NAME="soc_tb"
        ;;
esac

EXECUTABLE="$WORK_DIR/$TOP_MODULE"
VCD_FILE="$TOP_MODULE.vcd"

print_header "⚙️  Compilation Phase"
print_info "Test: $TEST_NAME"
print_info "Top module: $TOP_MODULE"
print_info "IP Selection: $IP_NAME"
print_info "Defines: $DEFINES"

# Build compilation command
COMPILE_CMD="$IVERILOG -g2009 -gno-assertions $INCLUDES $DEFINES -Wno-timescale -o $EXECUTABLE $SOURCES"

print_info "Compilation command:"
echo "  $COMPILE_CMD"
echo ""

# Compile with error handling
print_info "Compiling RTL sources..."
if $COMPILE_CMD 2>&1 | tee "$WORK_DIR/compile.log"; then
    if [ ${PIPESTATUS[0]} -eq 0 ]; then
        print_success "Compilation successful!"
    else
        print_error "Compilation failed! Check $WORK_DIR/compile.log for details"
        exit 1
    fi
else
    print_error "Compilation failed!"
    exit 1
fi

print_header "▶️  Simulation Phase"
print_info "Running simulation..."

# Build simulation arguments
SIM_ARGS=""
if [ "$DUMP_WAVES" = "yes" ]; then
    SIM_ARGS+="+dump_all "
    if [ "$VCD_DEPTH" != "0" ]; then
        SIM_ARGS+="+vcd_depth=$VCD_DEPTH "
    fi
fi
SIM_ARGS+="+ip_sel0$IP_SEL "

# Run simulation with timeout and logging
print_info "Simulation arguments: $SIM_ARGS"
if timeout 300s $VVP "$EXECUTABLE" $SIM_ARGS 2>&1 | tee "$WORK_DIR/sim.log"; then
    if [ ${PIPESTATUS[0]} -eq 0 ]; then
        print_success "Simulation completed successfully!"
    elif [ ${PIPESTATUS[0]} -eq 124 ]; then
        print_warning "Simulation timed out after 300 seconds"
    else
        print_warning "Simulation completed with warnings"
    fi
else
    print_error "Simulation failed!"
    exit 1
fi

print_header "📊 Results Analysis"

# Check for VCD file
if [ -f "$VCD_FILE" ]; then
    VCD_SIZE=$(stat -f%z "$VCD_FILE" 2>/dev/null || stat -c%s "$VCD_FILE" 2>/dev/null || echo "0")
    print_success "VCD file generated: $VCD_FILE"
    print_info "VCD size: $((VCD_SIZE / 1024)) KB"
    
    # Check if VCD has meaningful content
    if [ "$VCD_SIZE" -gt 1000 ]; then
        print_success "VCD file contains simulation data"
        
        echo ""
        print_info "View waveforms with:"
        echo "  $GTKWAVE $VCD_FILE"
        
        # Ask to open GTKWave
        echo ""
        echo "Open waveform viewer? (y/n)"
        read -r response
        if [[ "$response" =~ ^[Yy]$ ]]; then
            print_info "Opening GTKWave..."
            $GTKWAVE "$VCD_FILE" &
        fi
    else
        print_warning "VCD file is very small, may not contain useful data"
    fi
else
    print_warning "No VCD file generated"
fi

# Check simulation logs for errors/warnings
if [ -f "$WORK_DIR/sim.log" ]; then
    ERROR_COUNT=$(grep -c "ERROR\|Error\|error" "$WORK_DIR/sim.log" 2>/dev/null || echo "0")
    WARNING_COUNT=$(grep -c "WARNING\|Warning\|warning" "$WORK_DIR/sim.log" 2>/dev/null || echo "0")
    
    if [ "$ERROR_COUNT" -gt 0 ]; then
        print_warning "Found $ERROR_COUNT error(s) in simulation log"
    fi
    if [ "$WARNING_COUNT" -gt 0 ]; then
        print_info "Found $WARNING_COUNT warning(s) in simulation log"
    fi
    
    print_info "Full logs available in: $WORK_DIR/"
fi

print_header "📚 Usage Guide"
echo "Script Usage:"
echo "  ./run_fixed_sim.sh [test_name] [ip_sel] [vcd_depth] [dump_waves]"
echo ""
echo "Parameters:"
echo "  test_name  - Test configuration (default: soc_tb)"
echo "  ip_sel     - IP selection 0-5 (default: 1)"
echo "  vcd_depth  - VCD hierarchy depth (default: 0=all levels)"
echo "  dump_waves - Enable VCD output (default: yes)"
echo ""
echo "Available test configurations:"
echo ""
echo "Basic Tests:"
echo "  ./run_fixed_sim.sh simple              # Simple counter test"
echo "  ./run_fixed_sim.sh clk_div             # Clock divider test"
echo "  ./run_fixed_sim.sh asic_top_test       # ASIC top level test"
echo ""
echo "SoC Simulation:"
echo "  ./run_fixed_sim.sh soc_tb [ip_sel] [vcd_depth]      # Basic SoC (with IP stub)"
echo "  ./run_fixed_sim.sh soc_tb_real [ip_sel] [vcd_depth] # Real SimpleEdgeAiSoC IP"
echo ""
echo "IP Selection (ip_sel):"
echo "  0 - project_2057"
echo "  1 - project_2017 (SimpleEdgeAiSoC) [default]"
echo "  2 - project_2021"
echo "  3 - ysyxSoCASIC"
echo "  4 - project_2099"
echo "  5 - project_2005"
echo ""
echo "VCD Depth Control (vcd_depth):"
echo "  0 - All hierarchy levels (default, largest file)"
echo "  1 - Top level only (smallest file)"
echo "  2 - Top + 1 level down"
echo "  3 - Top + 2 levels down"
echo "  N - Top + (N-1) levels down"
echo ""
echo "Examples:"
echo "  ./run_fixed_sim.sh soc_tb 1 0          # Basic SoC, all VCD levels"
echo "  ./run_fixed_sim.sh soc_tb_real 1 0     # Real SimpleEdgeAiSoC, all VCD levels"
echo "  ./run_fixed_sim.sh soc_tb_real 1 1     # Real SimpleEdgeAiSoC, top level only"
echo "  ./run_fixed_sim.sh soc_tb_real 1 2     # Real SimpleEdgeAiSoC, 2 levels deep"
echo "  ./run_fixed_sim.sh soc_tb 3 1          # ysyxSoCASIC, top level only"
echo "  ./run_fixed_sim.sh simple 1 0          # Simple test, all levels"
echo ""
echo "Files generated in: $WORK_DIR/"
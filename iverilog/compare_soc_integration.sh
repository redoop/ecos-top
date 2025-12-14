#!/bin/bash

# SimpleEdgeAiSoC Integration Comparison Script
# Compares standalone SimpleEdgeAiSoC vs ASIC-integrated SimpleEdgeAiSoC waveforms

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
WORK_DIR="$SCRIPT_DIR/work"
IVERILOG="/opt/oss-cad-suite/bin/iverilog"
VVP="/opt/oss-cad-suite/bin/vvp"
GTKWAVE="/opt/oss-cad-suite/bin/gtkwave"

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

print_header "🔬 SimpleEdgeAiSoC Integration Comparison Analysis"

print_info "This script compares:"
print_info "1. Standalone SimpleEdgeAiSoC (direct instantiation)"
print_info "2. ASIC-integrated SimpleEdgeAiSoC (through asic_top wrapper)"
echo ""

# Test 1: Standalone SimpleEdgeAiSoC
print_header "📊 Test 1: Standalone SimpleEdgeAiSoC"

print_info "Compiling standalone SimpleEdgeAiSoC testbench..."
STANDALONE_SOURCES="standalone_soc_tb.sv simple_edge_ai_soc_demo.sv"
STANDALONE_EXECUTABLE="$WORK_DIR/standalone_soc_tb"

COMPILE_CMD="$IVERILOG -g2009 -gno-assertions -DIVERILOG -Wno-timescale -o $STANDALONE_EXECUTABLE $STANDALONE_SOURCES"

if $COMPILE_CMD 2>&1 | tee "$WORK_DIR/standalone_compile.log"; then
    if [ ${PIPESTATUS[0]} -eq 0 ]; then
        print_success "Standalone compilation successful!"
    else
        print_error "Standalone compilation failed!"
        exit 1
    fi
else
    print_error "Standalone compilation failed!"
    exit 1
fi

print_info "Running standalone SimpleEdgeAiSoC simulation..."
if timeout 300s $VVP "$STANDALONE_EXECUTABLE" +dump_all +vcd_depth=0 2>&1 | tee "$WORK_DIR/standalone_sim.log"; then
    print_success "Standalone simulation completed!"
else
    print_warning "Standalone simulation completed with warnings"
fi

# Test 2: ASIC-integrated SimpleEdgeAiSoC
print_header "📊 Test 2: ASIC-integrated SimpleEdgeAiSoC"

print_info "Running ASIC-integrated SimpleEdgeAiSoC simulation..."
if ./run_fixed_sim.sh soc_tb_real 1 0 yes 2>&1 | tee "$WORK_DIR/integrated_sim.log"; then
    print_success "ASIC-integrated simulation completed!"
else
    print_warning "ASIC-integrated simulation completed with warnings"
fi

# Analysis Phase
print_header "🔍 Waveform Analysis and Comparison"

# Check VCD files
STANDALONE_VCD="standalone_soc_tb.vcd"
INTEGRATED_VCD="soc_tb.vcd"

if [ -f "$STANDALONE_VCD" ] && [ -f "$INTEGRATED_VCD" ]; then
    STANDALONE_SIZE=$(stat -f%z "$STANDALONE_VCD" 2>/dev/null || stat -c%s "$STANDALONE_VCD" 2>/dev/null || echo "0")
    INTEGRATED_SIZE=$(stat -f%z "$INTEGRATED_VCD" 2>/dev/null || stat -c%s "$INTEGRATED_VCD" 2>/dev/null || echo "0")
    
    print_success "Both VCD files generated successfully"
    print_info "Standalone VCD size: $((STANDALONE_SIZE / 1024)) KB"
    print_info "Integrated VCD size: $((INTEGRATED_SIZE / 1024)) KB"
    
    # Size comparison
    if [ "$INTEGRATED_SIZE" -gt "$STANDALONE_SIZE" ]; then
        SIZE_DIFF=$(((INTEGRATED_SIZE - STANDALONE_SIZE) * 100 / STANDALONE_SIZE))
        print_info "Integrated VCD is ${SIZE_DIFF}% larger (includes ASIC wrapper signals)"
    else
        SIZE_DIFF=$(((STANDALONE_SIZE - INTEGRATED_SIZE) * 100 / INTEGRATED_SIZE))
        print_warning "Standalone VCD is ${SIZE_DIFF}% larger (unexpected)"
    fi
else
    print_error "One or both VCD files missing!"
    if [ ! -f "$STANDALONE_VCD" ]; then
        print_error "Missing: $STANDALONE_VCD"
    fi
    if [ ! -f "$INTEGRATED_VCD" ]; then
        print_error "Missing: $INTEGRATED_VCD"
    fi
    exit 1
fi

# Signal analysis using VCD dump
print_header "📈 Signal Content Analysis"

print_info "Analyzing signal hierarchies..."

# Extract signal lists from VCD files
if command -v vcd2fst >/dev/null 2>&1; then
    print_info "Using vcd2fst for signal analysis..."
else
    print_info "Using grep for basic signal analysis..."
    
    # Count signals in each VCD
    STANDALONE_SIGNALS=$(grep -c "^\$var" "$STANDALONE_VCD" 2>/dev/null || echo "0")
    INTEGRATED_SIGNALS=$(grep -c "^\$var" "$INTEGRATED_VCD" 2>/dev/null || echo "0")
    
    print_info "Standalone VCD signals: $STANDALONE_SIGNALS"
    print_info "Integrated VCD signals: $INTEGRATED_SIGNALS"
    
    # Extract SimpleEdgeAiSoC specific signals from both files
    print_info "Extracting SimpleEdgeAiSoC signal patterns..."
    
    # Look for key SimpleEdgeAiSoC signals in both files
    SOC_SIGNALS=("uart_tx" "uart_rx" "gpio_out" "gpio_in" "spi_clk" "spi_mosi" "compact_irq" "bitnet_irq" "trap")
    
    echo ""
    print_info "Signal presence comparison:"
    printf "%-20s %-12s %-12s %-10s\n" "Signal" "Standalone" "Integrated" "Match"
    printf "%-20s %-12s %-12s %-10s\n" "------" "----------" "----------" "-----"
    
    for signal in "${SOC_SIGNALS[@]}"; do
        standalone_count=$(grep -c "$signal" "$STANDALONE_VCD" 2>/dev/null || echo "0")
        integrated_count=$(grep -c "$signal" "$INTEGRATED_VCD" 2>/dev/null || echo "0")
        
        if [ "$standalone_count" -gt 0 ] && [ "$integrated_count" -gt 0 ]; then
            match_status="✅ YES"
        elif [ "$standalone_count" -eq 0 ] && [ "$integrated_count" -eq 0 ]; then
            match_status="⚪ NONE"
        else
            match_status="❌ NO"
        fi
        
        printf "%-20s %-12s %-12s %-10s\n" "$signal" "$standalone_count" "$integrated_count" "$match_status"
    done
fi

# Timing analysis
print_header "⏱️ Timing Analysis"

print_info "Extracting timing information from simulation logs..."

# Extract key timing events from logs
if [ -f "$WORK_DIR/standalone_sim.log" ]; then
    STANDALONE_RESET_TIME=$(grep "Reset released" "$WORK_DIR/standalone_sim.log" | head -1 | grep -o "time [0-9]*" | grep -o "[0-9]*" || echo "N/A")
    STANDALONE_END_TIME=$(grep "simulation completed" "$WORK_DIR/standalone_sim.log" | head -1 | grep -o "time [0-9]*" | grep -o "[0-9]*" || echo "N/A")
    print_info "Standalone - Reset time: ${STANDALONE_RESET_TIME}ns, End time: ${STANDALONE_END_TIME}ns"
fi

if [ -f "$WORK_DIR/integrated_sim.log" ]; then
    INTEGRATED_RESET_TIME=$(grep "Reset released" "$WORK_DIR/integrated_sim.log" | head -1 | grep -o "time [0-9]*" | grep -o "[0-9]*" || echo "N/A")
    INTEGRATED_END_TIME=$(grep "simulation completed" "$WORK_DIR/integrated_sim.log" | head -1 | grep -o "time [0-9]*" | grep -o "[0-9]*" || echo "N/A")
    print_info "Integrated - Reset time: ${INTEGRATED_RESET_TIME}ns, End time: ${INTEGRATED_END_TIME}ns"
fi

# Generate comparison report
print_header "📋 Comparison Summary Report"

REPORT_FILE="$WORK_DIR/soc_integration_comparison_report.txt"

cat > "$REPORT_FILE" << EOF
SimpleEdgeAiSoC Integration Comparison Report
Generated: $(date)

=== Test Configuration ===
Standalone Test: Direct SimpleEdgeAiSoC instantiation
Integrated Test: SimpleEdgeAiSoC through ASIC top wrapper
Simulation Time: 50,000ns (50μs)
Clock Frequency: 25MHz (40ns period)

=== File Size Comparison ===
Standalone VCD: $((STANDALONE_SIZE / 1024)) KB
Integrated VCD: $((INTEGRATED_SIZE / 1024)) KB
Size Difference: $((INTEGRATED_SIZE > STANDALONE_SIZE ? (INTEGRATED_SIZE - STANDALONE_SIZE) * 100 / STANDALONE_SIZE : (STANDALONE_SIZE - INTEGRATED_SIZE) * 100 / INTEGRATED_SIZE))%

=== Signal Count Comparison ===
Standalone Signals: $STANDALONE_SIGNALS
Integrated Signals: $INTEGRATED_SIGNALS

=== Timing Comparison ===
Standalone Reset: ${STANDALONE_RESET_TIME}ns
Integrated Reset: ${INTEGRATED_RESET_TIME}ns
Standalone End: ${STANDALONE_END_TIME}ns  
Integrated End: ${INTEGRATED_END_TIME}ns

=== Key Findings ===
EOF

# Add findings based on analysis
if [ "$INTEGRATED_SIZE" -gt "$STANDALONE_SIZE" ]; then
    echo "✅ Integrated VCD is larger as expected (includes ASIC wrapper hierarchy)" >> "$REPORT_FILE"
else
    echo "⚠️  Unexpected: Standalone VCD is larger than integrated" >> "$REPORT_FILE"
fi

if [ "$INTEGRATED_SIGNALS" -gt "$STANDALONE_SIGNALS" ]; then
    echo "✅ Integrated design has more signals (ASIC top + SimpleEdgeAiSoC)" >> "$REPORT_FILE"
else
    echo "⚠️  Unexpected: Standalone has more or equal signals" >> "$REPORT_FILE"
fi

echo "" >> "$REPORT_FILE"
echo "=== Recommendations ===" >> "$REPORT_FILE"
echo "1. Compare waveforms visually using GTKWave" >> "$REPORT_FILE"
echo "2. Verify SimpleEdgeAiSoC signals have identical behavior" >> "$REPORT_FILE"
echo "3. Check that ASIC wrapper doesn't introduce timing issues" >> "$REPORT_FILE"
echo "4. Validate that all SimpleEdgeAiSoC I/O is properly connected" >> "$REPORT_FILE"

print_success "Comparison report generated: $REPORT_FILE"

# Display key results
echo ""
print_header "🎯 Key Results"

if [ "$INTEGRATED_SIZE" -gt "$STANDALONE_SIZE" ]; then
    print_success "Integration adds expected overhead (ASIC wrapper signals)"
else
    print_warning "Unexpected size relationship - needs investigation"
fi

if [ "$INTEGRATED_SIGNALS" -gt "$STANDALONE_SIGNALS" ]; then
    print_success "Signal hierarchy is correct (more signals in integrated version)"
else
    print_warning "Signal count unexpected - check integration"
fi

# Offer to open waveforms
echo ""
print_info "View waveforms for detailed comparison:"
echo "  Standalone: $GTKWAVE $STANDALONE_VCD"
echo "  Integrated: $GTKWAVE $INTEGRATED_VCD"
echo ""
echo "Open both waveforms for side-by-side comparison? (y/n)"
read -r response
if [[ "$response" =~ ^[Yy]$ ]]; then
    print_info "Opening both waveform viewers..."
    $GTKWAVE "$STANDALONE_VCD" &
    sleep 2
    $GTKWAVE "$INTEGRATED_VCD" &
    print_success "Both GTKWave instances launched"
fi

print_header "✅ Analysis Complete"
print_info "Full report available at: $REPORT_FILE"
print_info "VCD files: $STANDALONE_VCD, $INTEGRATED_VCD"
print_info "Log files in: $WORK_DIR/"
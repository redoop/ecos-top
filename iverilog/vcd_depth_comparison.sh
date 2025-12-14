#!/bin/bash

# VCD Depth Comparison Script
# Demonstrates VCD file size differences with various depth settings

echo "============================================================"
echo "🎯 VCD Depth Control Comparison"
echo "============================================================"

# Clean up previous files
rm -f soc_tb_depth*.vcd simple_test_depth*.vcd

echo "Testing VCD depth control with different test cases..."
echo ""

# Test 1: Simple test with different depths
echo "📊 Testing Simple Counter (simple_test)..."
echo "   Depth 1 (top only)..."
./run_fixed_sim.sh simple 1 1 yes > /dev/null 2>&1
if [ -f "simple_test.vcd" ]; then
    SIZE_SIMPLE_1=$(stat -f%z "simple_test.vcd" 2>/dev/null || stat -c%s "simple_test.vcd" 2>/dev/null)
    mv simple_test.vcd simple_test_depth1.vcd
fi

echo "   Depth 0 (all levels)..."
./run_fixed_sim.sh simple 1 0 yes > /dev/null 2>&1
if [ -f "simple_test.vcd" ]; then
    SIZE_SIMPLE_0=$(stat -f%z "simple_test.vcd" 2>/dev/null || stat -c%s "simple_test.vcd" 2>/dev/null)
    mv simple_test.vcd simple_test_depth0.vcd
fi

# Test 2: SoC testbench with different depths
echo "📊 Testing SoC Testbench (soc_tb)..."
echo "   Depth 1 (top only)..."
./run_fixed_sim.sh soc_tb 1 1 yes > /dev/null 2>&1
if [ -f "soc_tb.vcd" ]; then
    SIZE_SOC_1=$(stat -f%z "soc_tb.vcd" 2>/dev/null || stat -c%s "soc_tb.vcd" 2>/dev/null)
    mv soc_tb.vcd soc_tb_depth1.vcd
fi

echo "   Depth 2 (2 levels)..."
./run_fixed_sim.sh soc_tb 1 2 yes > /dev/null 2>&1
if [ -f "soc_tb.vcd" ]; then
    SIZE_SOC_2=$(stat -f%z "soc_tb.vcd" 2>/dev/null || stat -c%s "soc_tb.vcd" 2>/dev/null)
    mv soc_tb.vcd soc_tb_depth2.vcd
fi

echo "   Depth 0 (all levels)..."
./run_fixed_sim.sh soc_tb 1 0 yes > /dev/null 2>&1
if [ -f "soc_tb.vcd" ]; then
    SIZE_SOC_0=$(stat -f%z "soc_tb.vcd" 2>/dev/null || stat -c%s "soc_tb.vcd" 2>/dev/null)
    mv soc_tb.vcd soc_tb_depth0.vcd
fi

echo ""
echo "============================================================"
echo "📈 VCD File Size Analysis"
echo "============================================================"

# Simple test results
if [ -n "$SIZE_SIMPLE_1" ] && [ -n "$SIZE_SIMPLE_0" ]; then
    echo "Simple Counter Test:"
    echo "  Depth 1 (top only):    $SIZE_SIMPLE_1 bytes"
    echo "  Depth 0 (all levels):  $SIZE_SIMPLE_0 bytes"
    
    if [ "$SIZE_SIMPLE_0" -gt 0 ]; then
        RATIO_SIMPLE=$((SIZE_SIMPLE_1 * 100 / SIZE_SIMPLE_0))
        REDUCTION_SIMPLE=$((100 - RATIO_SIMPLE))
        echo "  Size reduction: ${REDUCTION_SIMPLE}% (${RATIO_SIMPLE}% of original)"
    fi
    echo ""
fi

# SoC test results
if [ -n "$SIZE_SOC_1" ] && [ -n "$SIZE_SOC_2" ] && [ -n "$SIZE_SOC_0" ]; then
    echo "SoC Testbench:"
    echo "  Depth 1 (top only):    $SIZE_SOC_1 bytes"
    echo "  Depth 2 (2 levels):    $SIZE_SOC_2 bytes"
    echo "  Depth 0 (all levels):  $SIZE_SOC_0 bytes"
    
    if [ "$SIZE_SOC_0" -gt 0 ]; then
        RATIO_SOC_1=$((SIZE_SOC_1 * 100 / SIZE_SOC_0))
        RATIO_SOC_2=$((SIZE_SOC_2 * 100 / SIZE_SOC_0))
        REDUCTION_SOC_1=$((100 - RATIO_SOC_1))
        REDUCTION_SOC_2=$((100 - RATIO_SOC_2))
        echo "  Depth 1 reduction: ${REDUCTION_SOC_1}% (${RATIO_SOC_1}% of original)"
        echo "  Depth 2 reduction: ${REDUCTION_SOC_2}% (${RATIO_SOC_2}% of original)"
    fi
    echo ""
fi

echo "Generated VCD files:"
ls -la *_depth*.vcd 2>/dev/null | while read line; do
    echo "  $line"
done

echo ""
echo "============================================================"
echo "🎯 VCD Depth Control Benefits"
echo "============================================================"
echo "VCD depth control is especially useful for:"
echo ""
echo "1. 🗂️  Large SoC designs with deep hierarchies"
echo "   - Reduces file size significantly"
echo "   - Faster waveform loading in GTKWave"
echo "   - Less storage space required"
echo ""
echo "2. ⏱️  Long simulation runs"
echo "   - Prevents huge VCD files"
echo "   - Maintains simulation performance"
echo "   - Easier file management"
echo ""
echo "3. 🔍 Focused debugging sessions"
echo "   - Top-level signals for system overview"
echo "   - Specific depth for targeted analysis"
echo "   - Cleaner waveform viewer interface"
echo ""
echo "4. 💾 Storage-constrained environments"
echo "   - CI/CD pipelines with limited disk space"
echo "   - Embedded development systems"
echo "   - Cloud-based simulation environments"
echo ""
echo "Usage examples:"
echo "  ./run_fixed_sim.sh soc_tb 1 1    # Minimal VCD (top level only)"
echo "  ./run_fixed_sim.sh soc_tb 1 2    # Moderate VCD (2 levels deep)"
echo "  ./run_fixed_sim.sh soc_tb 1 3    # Extended VCD (3 levels deep)"
echo "  ./run_fixed_sim.sh soc_tb 1 0    # Full VCD (all levels)"
echo ""
echo "============================================================"
echo "✅ VCD Depth Control Feature Complete"
echo "============================================================"
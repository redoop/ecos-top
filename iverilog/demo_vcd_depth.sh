#!/bin/bash

# VCD Depth Control Demo Script
# Demonstrates the effect of different VCD depth settings

echo "============================================================"
echo "🎯 VCD Depth Control Demo"
echo "============================================================"

# Clean up previous files
rm -f *.vcd

echo "Testing different VCD depth levels..."
echo ""

# Test depth 1 (top level only)
echo "📊 Testing VCD Depth 1 (top level only)..."
./run_fixed_sim.sh simple 1 1 yes > /dev/null 2>&1
if [ -f "simple_test.vcd" ]; then
    SIZE_1=$(stat -f%z "simple_test.vcd" 2>/dev/null || stat -c%s "simple_test.vcd" 2>/dev/null)
    echo "   VCD Size (depth 1): $((SIZE_1)) bytes"
    mv simple_test.vcd simple_test_depth1.vcd
fi

# Test depth 2 (2 levels)
echo "📊 Testing VCD Depth 2 (2 levels)..."
./run_fixed_sim.sh simple 1 2 yes > /dev/null 2>&1
if [ -f "simple_test.vcd" ]; then
    SIZE_2=$(stat -f%z "simple_test.vcd" 2>/dev/null || stat -c%s "simple_test.vcd" 2>/dev/null)
    echo "   VCD Size (depth 2): $((SIZE_2)) bytes"
    mv simple_test.vcd simple_test_depth2.vcd
fi

# Test depth 0 (all levels)
echo "📊 Testing VCD Depth 0 (all levels)..."
./run_fixed_sim.sh simple 1 0 yes > /dev/null 2>&1
if [ -f "simple_test.vcd" ]; then
    SIZE_0=$(stat -f%z "simple_test.vcd" 2>/dev/null || stat -c%s "simple_test.vcd" 2>/dev/null)
    echo "   VCD Size (depth 0): $((SIZE_0)) bytes"
    mv simple_test.vcd simple_test_depth0.vcd
fi

echo ""
echo "============================================================"
echo "📈 VCD File Size Comparison"
echo "============================================================"

if [ -n "$SIZE_1" ] && [ -n "$SIZE_2" ] && [ -n "$SIZE_0" ]; then
    echo "VCD Depth 1 (top only):    $SIZE_1 bytes"
    echo "VCD Depth 2 (2 levels):    $SIZE_2 bytes"
    echo "VCD Depth 0 (all levels):  $SIZE_0 bytes"
    echo ""
    
    # Calculate ratios
    if [ "$SIZE_0" -gt 0 ]; then
        RATIO_1=$((SIZE_1 * 100 / SIZE_0))
        RATIO_2=$((SIZE_2 * 100 / SIZE_0))
        echo "Size reduction with depth control:"
        echo "  Depth 1: ${RATIO_1}% of full size ($(((100 - RATIO_1)))% reduction)"
        echo "  Depth 2: ${RATIO_2}% of full size ($(((100 - RATIO_2)))% reduction)"
    fi
fi

echo ""
echo "Generated VCD files:"
ls -la *_depth*.vcd 2>/dev/null || echo "No VCD files found"

echo ""
echo "============================================================"
echo "🎯 Usage Examples"
echo "============================================================"
echo "For large designs, use higher depth values to reduce VCD file size:"
echo ""
echo "  ./run_fixed_sim.sh soc_tb 1 1    # Minimal VCD (top level only)"
echo "  ./run_fixed_sim.sh soc_tb 1 2    # Moderate VCD (2 levels)"
echo "  ./run_fixed_sim.sh soc_tb 1 0    # Full VCD (all levels)"
echo ""
echo "This is especially useful for:"
echo "  - Large SoC designs with deep hierarchies"
echo "  - Long simulation runs"
echo "  - Storage-constrained environments"
echo "  - Quick debugging sessions"
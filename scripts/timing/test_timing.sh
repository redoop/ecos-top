#!/bin/bash
# Test timing constraints for ip1_SimpleEdgeAiSoC

echo "Testing timing constraints..."

# Create test TCL script for Design Compiler
cat > test_constraints.tcl << 'EOF'
# Load design and constraints
read_verilog ip1_SimpleEdgeAiSoC.v
read_sdc constraints/timing_constraints.sdc

# Check constraint syntax
check_design
report_clock -skew
report_clock_tree

# Run timing analysis
compile_ultra
report_timing -delay_type max -max_paths 10
report_timing -delay_type min -max_paths 10

# Check for untested paths
report_analysis_coverage -status_details untested

# Generate summary
report_constraint -all_violators
report_qor

exit
EOF

# Run Design Compiler test
dc_shell -f test_constraints.tcl > constraint_test_results.log 2>&1

# Check results
echo "Constraint test completed. Results:"
grep -E "(Error|Warning|untested|Violated)" constraint_test_results.log | head -20

# Quick validation
if grep -q "0 (  0%)" constraint_test_results.log; then
    echo "✓ Constraints appear to fix untested paths"
else
    echo "✗ Some paths may still be untested"
fi

echo "Full results in: constraint_test_results.log"

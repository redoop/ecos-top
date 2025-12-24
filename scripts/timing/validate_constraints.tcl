# Quick constraint validation script
source constraints/timing_constraints.sdc

# Check clock definitions
report_clocks
all_clocks

# Verify clock groups
report_clock_groups

# Check for constraint conflicts
check_timing -verbose

# Report any remaining issues
report_analysis_coverage -check_type {setup hold} -status_details untested

puts "Constraint validation complete"

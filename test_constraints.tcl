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

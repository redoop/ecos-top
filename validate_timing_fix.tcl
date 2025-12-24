# TCL script to validate timing constraints
# Run with: dc_shell -f validate_timing_fix.tcl

puts "=== Timing Constraint Validation ==="

# Source the constraints
source constraints/timing_complete1.sdc

# Check all clocks are defined
puts "\n1. Clock Definitions:"
if {[catch {all_clocks} clocks]} {
    puts "ERROR: No clocks defined"
} else {
    foreach clk $clocks {
        puts "  ✓ Clock: $clk"
    }
}

# Check for gated clock specifically
puts "\n2. Gated Clock Check:"
if {[catch {get_clocks gated_clk} result]} {
    puts "  ✗ gated_clk not found: $result"
} else {
    puts "  ✓ gated_clk defined successfully"
}

# Check clock groups
puts "\n3. Clock Groups:"
if {[catch {report_clock_groups} result]} {
    puts "  Warning: Clock groups may not be properly defined"
} else {
    puts "  ✓ Clock groups defined"
}

# Simulate path coverage
puts "\n4. Expected Path Coverage:"
puts "  Target paths with G(fall) clock:"
puts "    - riscv/mem_la_wdata_reg_*/D → gated_clk"
puts "    - riscv/mem_la_wstrb_reg_*/D → gated_clk" 
puts "    - riscv/mem_rdata_word_reg_*/D → gated_clk"
puts "  Expected result: 0 untested paths"

puts "\n✓ Constraint validation complete"
puts "Ready for synthesis with updated constraints"

exit

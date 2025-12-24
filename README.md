# ECOS-TOP Project Structure

## Directory Organization

### `/top/`
Main ASIC design files and project structure

### `/scripts/`
- `timing/` - Timing analysis and constraint scripts
- `analysis/` - RTL analysis and verification scripts  
- `validation/` - Test and validation scripts

### `/firmware/`
- `uart/` - UART-related firmware and executables
- `test/` - Test programs and utilities
- Root: Core firmware files (bootstrap, drivers)

### `/rtl/`
SystemVerilog RTL files and testbenches

### `/constraints/`
Timing constraint files (.sdc)

### `/docs/`
Documentation, guides, and reports

### `/report/`
Generated timing and analysis reports

## Key Files
- `constraints/ip1_timing.sdc` - Main timing constraints
- `scripts/timing/` - Timing analysis tools
- `top/` - Complete ASIC design hierarchy

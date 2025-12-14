# RTL Frontend Simulation with iverilog

This directory now supports both RTL frontend simulation and netlist simulation using iverilog.

## Overview

Based on the VCS Makefile from `top/run/Makefile`, this setup provides:

1. **RTL Frontend Simulation** - Simulates the original SystemVerilog RTL code
2. **Netlist Simulation** - Simulates the synthesized netlist (existing functionality)

## Quick Start

### RTL Frontend Simulation

```bash
# Basic RTL simulation
make rtl

# RTL simulation with waveform viewer
make rtl-wave

# RTL simulation with test options
make -f Makefile_rtl sim ip_sel=uart prog=test wave=1

# Using the shell script
./run_rtl_sim.sh ip_sel=spi prog=boot wave=1
```

### Netlist Simulation (existing)

```bash
# Netlist simulation (default)
make
# or
make netlist

# Netlist simulation with waveforms
make view
```

## File Structure

```
iverilog/
├── Makefile              # Main Makefile (supports both RTL and netlist)
├── Makefile_rtl          # RTL-specific Makefile
├── run_rtl_sim.sh        # RTL simulation script
├── run_simulation.sh     # Netlist simulation script (existing)
├── README_RTL.md         # This file
├── netlist/              # Netlist files
├── tb/                   # Testbench files
└── work/                 # Simulation outputs
```

## RTL Files Used

The RTL simulation includes these files from `../top/`:

### RTL Sources
- `asic_top.sv` - Top-level design
- `utils/config.svh` - Configuration header
- `utils/clk_int_div.sv` - Clock divider
- `utils/register.sv` - Register utilities
- `utils/rst_sync.sv` - Reset synchronizer
- `utils/xchecker.sv` - Checker utilities
- `utils/stdcell.sv` - Standard cell models
- `rcu/rcu.sv` - RCU module

### Testbench Files
- `tb/soc_tb.sv` - Main testbench
- `tb/N25Qxxx.v` - Flash memory model
- `tb/tty.v` - TTY model

## Test Options

The RTL simulation supports the same test options as the original VCS setup:

- `ip_sel=<value>` - IP selection (e.g., uart, spi)
- `prog=<value>` - Program selection (e.g., test, boot)
- `wave=<value>` - Wave generation control

## Include Directories

The simulation includes the same directories as the VCS setup:
- `../top` and `../top/utils`
- `../../project_*/source` directories
- `../top/tb` and `../top/tb/include`

## Compilation Defines

RTL simulation uses these defines (equivalent to VCS setup):
- `-DIVERILOG` - Indicates iverilog compilation
- `-Dno_warning` - Suppress warnings
- `-DS50` - S50 configuration
- `-DSVA_OFF` - Disable SVA
- `-DRANDOMIZE_REG_INIT` - Random register initialization
- `-DPDK_BEHAV` - PDK behavioral models

## Output Files

Simulation generates:
- `work/soc_tb` - Compiled executable
- `work/soc_tb.vcd` - Waveform file (VCD format)
- `work/compile.log` - Compilation log
- `work/sim.log` - Simulation log

## Waveform Viewing

Use GTKWave to view simulation waveforms:

```bash
# Automatic (after RTL simulation)
make rtl-wave

# Manual
gtkwave work/soc_tb.vcd
```

## Troubleshooting

### Missing Files
If you get "file not found" errors, check:
1. RTL files exist in `../top/` directory
2. Testbench files exist in `../top/tb/` directory
3. Include directories are accessible

### Compilation Errors
Check `work/compile.log` for detailed error messages:
```bash
tail -50 work/compile.log
```

### Tool Installation
Ensure oss-cad-suite is installed at:
```
/opt/oss-cad-suite
```

Update the path in Makefiles if installed elsewhere.

## Comparison with VCS

| Feature | VCS (original) | iverilog (this setup) |
|---------|----------------|----------------------|
| RTL Simulation | ✅ | ✅ |
| Netlist Simulation | ✅ | ✅ |
| Waveform Format | FSDB | VCD |
| Waveform Viewer | Verdi | GTKWave |
| Test Options | +define | -D define |
| Include Dirs | +incdir+ | +incdir+ |
| Compilation Speed | Fast | Very Fast |
| Memory Usage | High | Low |

## Examples

```bash
# Basic RTL simulation
make rtl

# RTL with UART IP and test program
./run_rtl_sim.sh ip_sel=uart prog=test

# RTL with waveforms
make rtl-wave

# Netlist simulation (existing functionality)
make netlist

# Clean all outputs
make clean

# Debug file paths and configuration
make -f Makefile_rtl debug
```
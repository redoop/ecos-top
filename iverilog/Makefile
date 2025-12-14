# Makefile for RTL and Netlist Simulation using iverilog
# Supports both RTL frontend simulation and netlist simulation

.PHONY: all rtl netlist compile simulate clean help show-results analyze rtl-sim rtl-wave

# === Paths ===
OSS_CAD_SUITE := /opt/oss-cad-suite
IVERILOG := $(OSS_CAD_SUITE)/bin/iverilog
VVP := $(OSS_CAD_SUITE)/bin/vvp
GTKWAVE := $(OSS_CAD_SUITE)/bin/gtkwave

PROJECT_ROOT := $(shell pwd)
NETLIST_DIR := $(PROJECT_ROOT)/netlist
TB_DIR := $(PROJECT_ROOT)/tb
WORK_DIR := $(PROJECT_ROOT)/work

NETLIST_FILE := $(NETLIST_DIR)/asic_top_V1210.syn.v
TB_FILE := $(TB_DIR)/asic_top_netlist_tb.sv

# === Output Files ===
EXECUTABLE := $(WORK_DIR)/asic_top_netlist
VCD_FILE := $(WORK_DIR)/asic_top_netlist.vcd
COMPILE_LOG := $(WORK_DIR)/compile.log
SIM_LOG := $(WORK_DIR)/simulation.log

# === iverilog Flags ===
IVERILOG_FLAGS := -g2009 -Wall
VVP_FLAGS := -n

# === Default Target ===
all: netlist

# === RTL Simulation Targets ===
rtl: rtl-sim

rtl-sim:
	@echo "Running RTL frontend simulation..."
	@$(MAKE) -f Makefile_rtl all

rtl-wave:
	@echo "Running RTL simulation with waveform viewer..."
	@$(MAKE) -f Makefile_rtl wave

# === Netlist Simulation (original functionality) ===
netlist: compile simulate show-results

# === Create work directory ===
$(WORK_DIR):
	@mkdir -p $(WORK_DIR)

# === Compilation Target ===
compile: $(WORK_DIR) $(NETLIST_FILE) $(TB_FILE)
	@echo "=================================================="
	@echo "⚙️  Compiling Netlist with iverilog..."
	@echo "=================================================="
	@echo "Netlist: $(NETLIST_FILE)"
	@echo "Testbench: $(TB_FILE)"
	@echo "Output: $(EXECUTABLE)"
	@echo ""
	@if [ ! -f "$(IVERILOG)" ]; then \
		echo "❌ Error: iverilog not found at $(IVERILOG)"; \
		exit 1; \
	fi
	@$(IVERILOG) $(IVERILOG_FLAGS) -o $(EXECUTABLE) \
		$(NETLIST_DIR)/ics55_LLSC_H7CL.v \
		$(NETLIST_DIR)/ics55_LLSC_H7CR.v \
		$(NETLIST_DIR)/icsIOA_N55_3P3.v \
		$(NETLIST_FILE) $(TB_FILE) > $(COMPILE_LOG) 2>&1
	@if [ $$? -eq 0 ]; then \
		echo "✅ Compilation successful!"; \
		echo "   Executable: $(EXECUTABLE)"; \
	else \
		echo "❌ Compilation failed! Check $(COMPILE_LOG)"; \
		tail -20 $(COMPILE_LOG); \
		exit 1; \
	fi

# === Simulation Target ===
simulate: compile
	@echo ""
	@echo "=================================================="
	@echo "▶️  Running Simulation..."
	@echo "=================================================="
	@$(VVP) $(VVP_FLAGS) $(EXECUTABLE) > $(SIM_LOG) 2>&1
	@if [ $$? -eq 0 ]; then \
		echo "✅ Simulation completed successfully!"; \
	else \
		echo "⚠️  Simulation completed with status: $$?"; \
	fi
	@if [ -f "$(VCD_FILE)" ]; then \
		VCD_SIZE=$$(stat -f%z "$(VCD_FILE)" 2>/dev/null || stat -c%s "$(VCD_FILE)"); \
		echo "✅ VCD file generated: $(VCD_FILE)"; \
		echo "   Size: $$((VCD_SIZE / 1024)) KB"; \
	else \
		echo "⚠️  VCD file not generated"; \
	fi

# === Show Results ===
show-results:
	@echo ""
	@echo "=================================================="
	@echo "📊 Simulation Results"
	@echo "=================================================="
	@if [ -f "$(SIM_LOG)" ]; then \
		echo "--- Last 20 lines of simulation log: ---"; \
		tail -20 $(SIM_LOG); \
	fi

# === View Waveforms ===
view: simulate
	@echo ""
	@echo "Opening waveform viewer..."
	@if [ -f "$(VCD_FILE)" ]; then \
		$(GTKWAVE) $(VCD_FILE) &; \
	else \
		echo "❌ VCD file not found: $(VCD_FILE)"; \
		exit 1; \
	fi

# === Analyze Netlist ===
analyze:
	@echo "=================================================="
	@echo "📋 Netlist Analysis"
	@echo "=================================================="
	@if [ -f "$(NETLIST_FILE)" ]; then \
		echo "Netlist file: $(NETLIST_FILE)"; \
		echo "File size: $$(stat -f%z "$(NETLIST_FILE)" 2>/dev/null || stat -c%s "$(NETLIST_FILE)") bytes"; \
		echo ""; \
		echo "Module statistics:"; \
		grep -c "^module" $(NETLIST_FILE) || true; \
		echo "modules found"; \
		echo ""; \
		echo "First 30 lines of netlist:"; \
		head -30 $(NETLIST_FILE); \
	else \
		echo "❌ Netlist file not found: $(NETLIST_FILE)"; \
	fi

# === Clean Target ===
clean:
	@echo "Cleaning simulation files..."
	@rm -f $(EXECUTABLE)
	@rm -f $(VCD_FILE)
	@rm -f $(COMPILE_LOG)
	@rm -f $(SIM_LOG)
	@echo "✅ Clean completed"

# === Help Target ===
help:
	@echo "=================================================="
	@echo "RTL & Netlist Simulation Makefile"
	@echo "=================================================="
	@echo ""
	@echo "Available targets:"
	@echo ""
	@echo "RTL Frontend Simulation:"
	@echo "  make rtl          - Run RTL frontend simulation"
	@echo "  make rtl-sim      - Same as 'make rtl'"
	@echo "  make rtl-wave     - Run RTL simulation with waveform viewer"
	@echo ""
	@echo "Netlist Simulation:"
	@echo "  make netlist      - Run netlist simulation (default)"
	@echo "  make all          - Same as 'make netlist'"
	@echo "  make compile      - Compile netlist with testbench"
	@echo "  make simulate     - Run compiled netlist simulation"
	@echo "  make view         - Run netlist simulation and open waveform viewer"
	@echo ""
	@echo "Utility targets:"
	@echo "  make show-results - Display simulation results"
	@echo "  make analyze      - Analyze netlist file"
	@echo "  make clean        - Remove generated files"
	@echo "  make help         - Show this help message"
	@echo ""
	@echo "Configuration:"
	@echo "  OSS_CAD_SUITE: $(OSS_CAD_SUITE)"
	@echo "  Netlist:       $(NETLIST_FILE)"
	@echo "  Testbench:     $(TB_FILE)"
	@echo "  Work dir:      $(WORK_DIR)"
	@echo ""
	@echo "Examples:"
	@echo "  make rtl          # RTL frontend simulation"
	@echo "  make rtl-wave     # RTL simulation with waveforms"
	@echo "  make netlist      # Netlist simulation"
	@echo "  make clean        # Clean simulation artifacts"
	@echo "  make analyze      # Show netlist info"
	@echo ""
	@echo "For RTL simulation options, use:"
	@echo "  make -f Makefile_rtl help"
	@echo ""

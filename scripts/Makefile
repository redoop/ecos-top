# Stub Module Solution Makefile using iverilog
# Automatically patches SimpleEdgeAiSoC.sv for compatibility

DESIGN := soc_tb
TOP_DIR := ../top
WORK_DIR := work

# Tools
IVERILOG := /opt/tools/oss-cad/oss-cad-suite/bin/iverilog
VVP := /opt/tools/oss-cad/oss-cad-suite/bin/vvp
GTKWAVE := /opt/tools/oss-cad/oss-cad-suite/bin/gtkwave

# Include paths
INCDIRS := -I$(TOP_DIR) \
           -I$(TOP_DIR)/utils \
           -I$(TOP_DIR)/tb \
           -I$(TOP_DIR)/tb/include

# Source files
RTL_FILES := iverilog_stubs.sv \
             $(TOP_DIR)/asic_top.sv \
             $(TOP_DIR)/utils/config.svh \
             $(TOP_DIR)/utils/clk_int_div.sv \
             $(TOP_DIR)/utils/register.sv \
             $(TOP_DIR)/utils/rst_sync.sv \
             $(TOP_DIR)/utils/xchecker.sv \
             $(TOP_DIR)/utils/stdcell.sv \
             $(TOP_DIR)/rcu/rcu.sv \
             SimpleEdgeAiSoC_patched.sv \
             $(TOP_DIR)/lib/tc_clk.sv

TB_FILES := soc_tb_stub.sv

# Simulation options
IVERILOG_OPTS := -g2005-sv -Wall -Wno-timescale -gno-assertions -gno-specify -Wno-sensitivity-entire-vector

# Default target
all: compile

# Create work directory
$(WORK_DIR):
	mkdir -p $(WORK_DIR)

# Create patched SimpleEdgeAiSoC.sv
SimpleEdgeAiSoC_patched.sv: $(TOP_DIR)/project_2017/source/SimpleEdgeAiSoC.sv
	sed -e 's/static //g' -e 's/automatic //g' $< > SimpleEdgeAiSoC_temp.sv
	python3 fix_x_issues.py SimpleEdgeAiSoC_temp.sv $@
	rm -f SimpleEdgeAiSoC_temp.sv

# Compile
compile: $(WORK_DIR) SimpleEdgeAiSoC_patched.sv
	$(IVERILOG) $(IVERILOG_OPTS) $(INCDIRS) -o $(WORK_DIR)/$(DESIGN) $(RTL_FILES) $(TB_FILES)

# Run simulation
sim: compile
	cd $(WORK_DIR) && $(VVP) $(DESIGN) -vcd +init_memories +debug_x

# Run simulation with X detection
sim-debug: compile
	cd $(WORK_DIR) && $(VVP) $(DESIGN) -vcd +init_memories +debug_x +verbose

# View waveform
wave:
	$(GTKWAVE) $(WORK_DIR)/$(DESIGN).vcd &

# Clean
clean:
	rm -rf $(WORK_DIR) SimpleEdgeAiSoC_patched.sv

.PHONY: all compile sim wave clean

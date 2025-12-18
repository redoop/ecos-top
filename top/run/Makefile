DESIGN := soc_tb

ip_sel :=
prog := hello-mem
wave :=

TEST_MARCO := $(addprefix +, $(ip_sel), $(prog) $(wave))

SIM_TOOL  := vcs
WAVE_TOOL := verdi
WAVE_FILE := ${DESIGN}.fsdb

COMP_LOG      := -l compile.log
SIM_LOG       := -l sim.log

## filelist
RTL_FLIST := -f ../filelist/asic_top.f \
			 -f ../filelist/ip.f \
			 -f ../filelist/lib.f \
			 -f ../filelist/soc.f

NETLIST_FLIST := -f ../filelist/asic_netlist.f \
				 -f ../filelist/lib.f \
				 -f ../filelist/soc.f

SIM_INC := +incdir+../top \
		   +incdir+../utils \
		   +incdir+../../project_2017/source \
		   +incdir+../tb \
		   +incdir+../tb/include \

TB_FLIST := -f ../filelist/asic_tblist.f \
			-top soc_tb \

## vcs option
SIM_OPTIONS := -full64  +v2k -sverilog -timescale=1ns/10ps \
			   ${EXTRA} \
			   -kdb \
			   -debug_acc+all \
			   +error+500 \
			   +vcs+flush+all \
			   +lint=TFIPC-L,noTFIPC-L \
			   +define+no_warning \
			   +define+S50 \
			   +define+SVA_OFF \
			   +define+VCD_DUMP \
			   -work DEFAULT \
			   +define+RANDOMIZE_REG_INIT \
			   +define+PDK_BEHAV \
			   +vcs+initreg+random \
			   ${SIM_INC} 
#               -lSDL2

TIME_OPTION := +notimingcheck \
			   +nospecify \

comp:
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ${RTL_FLIST} ${TB_FLIST} ${COMP_LOG}"

comp_netlist:
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ${NETLIST_FLIST} ${TB_FLIST} ${COMP_LOG}"

sim: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} $(TEST_MARCO)"

sim_vcd: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} $(TEST_MARCO) +dump_all"

sim_ip1: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} +ip_sel01, +test-ip1"

sim_ip1_vcd: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} +ip_sel01, +test-ip1 +dump_all"

sim_uart: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} +ip_sel01, +test-uart"

sim_uart_vcd: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} +ip_sel01, +test-uart +dump_all"

sim_uart_data: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} +ip_sel01, +uart-data"

sim_uart_data_vcd: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} +ip_sel01, +uart-data +dump_all"

sim_uart_program: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} +ip_sel01, +uart-program"

sim_uart_program_vcd: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} +ip_sel01, +uart-program +dump_all"

sim_lcd_matrix: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} +ip_sel01, +uart-program"

sim_lcd_matrix_vcd: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} +ip_sel01, +uart-program +dump_all"

sim_gpio_test: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} +ip_sel01, +uart-program"

sim_gpio_test_vcd: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} +ip_sel01, +uart-program +dump_all"

sim_complete_test: 
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} complete_matrix_test.sv ${COMP_LOG} && ./simv ${SIM_LOG}"

sim_uart_matrix: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} +ip_sel01, +uart-matrix"

sim_uart_compact: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} +ip_sel01, +uart-compact"

sim_bootloader: 
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/bootloader_tb.sv ../project_2017/source/SimpleEdgeAiSoC.sv ${COMP_LOG} -top bootloader_tb && ./simv ${SIM_LOG}"

sim_bootloader_vcd: 
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/bootloader_tb.sv ../project_2017/source/SimpleEdgeAiSoC.sv ${COMP_LOG} -top bootloader_tb && ./simv ${SIM_LOG} +dump_all"

sim_uart_test: 
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/uart_test_tb.sv ../project_2017/source/SimpleEdgeAiSoC.sv ${COMP_LOG} -top uart_test_tb && ./simv ${SIM_LOG}"

sim_uart_test_vcd: 
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/uart_test_tb.sv ../project_2017/source/SimpleEdgeAiSoC.sv ${COMP_LOG} -top uart_test_tb && ./simv ${SIM_LOG} +dump_all"

sim_gpio_test: 
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/gpio_test_tb.sv ../project_2017/source/SimpleEdgeAiSoC.sv ${COMP_LOG} -top gpio_test_tb && ./simv ${SIM_LOG}"

sim_gpio_test_vcd: 
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/gpio_test_tb.sv ../project_2017/source/SimpleEdgeAiSoC.sv ${COMP_LOG} -top gpio_test_tb && ./simv ${SIM_LOG} +dump_all"

sim_uart_to_gpio: 
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/uart_to_gpio_tb.sv ../project_2017/source/SimpleEdgeAiSoC.sv ${COMP_LOG} -top uart_to_gpio_tb && ./simv ${SIM_LOG}"

sim_uart_to_gpio_vcd: 
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/uart_to_gpio_tb.sv ../project_2017/source/SimpleEdgeAiSoC.sv ${COMP_LOG} -top uart_to_gpio_tb && ./simv ${SIM_LOG} +dump_all"

sim_uart_loopback: 
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/uart_loopback_tb.sv ../project_2017/source/SimpleEdgeAiSoC.sv ${COMP_LOG} -top uart_loopback_tb && ./simv ${SIM_LOG}"

sim_uart_loopback_vcd: 
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/uart_loopback_tb.sv ../project_2017/source/SimpleEdgeAiSoC.sv ${COMP_LOG} -top uart_loopback_tb && ./simv ${SIM_LOG} +dump_all"

sim_uart_loopback_rom: 
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/uart_loopback_tb.sv ../project_2017/source/SimpleEdgeAiSoC_Bootloader.sv ${COMP_LOG} -top uart_loopback_tb && ./simv ${SIM_LOG}"

sim_uart_with_bootloader: 
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/uart_with_bootloader_tb.sv ../project_2017/source/SimpleEdgeAiSoC.sv ${COMP_LOG} -top uart_with_bootloader_tb && ./simv ${SIM_LOG}"

sim_matrix_bootloader: 
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/matrix_bootloader_tb.sv ../project_2017/source/SimpleEdgeAiSoC.sv ${COMP_LOG} -top matrix_bootloader_tb && ./simv ${SIM_LOG}"

sim_asic_matrix: 
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/asic_matrix_test_tb.sv ${RTL_FLIST} ${COMP_LOG} -top asic_matrix_test_tb && ./simv ${SIM_LOG}"

sim_uart_matrix_netlist: comp_netlist
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} +ip_sel01, +uart-matrix"

sim_uart_matrix_netlist_vcd: comp_netlist
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} +ip_sel01, +uart-matrix +dump_all"

wave:
	${WAVE_TOOL} -ssf ${WAVE_FILE} -nologo

.PHONY : clean help

help:
	@echo "Available targets:"
	@echo "  comp                  - Compile design (RTL)"
	@echo "  comp_netlist          - Compile design (Netlist)"
	@echo "  sim                   - Run simulation (default: hello-mem test)"
	@echo "  sim_vcd               - Run simulation with VCD dump"
	@echo "  sim_ip1               - Test IP1 interfaces (UART/GPIO)"
	@echo "  sim_ip1_vcd           - Test IP1 with VCD dump"
	@echo "  sim_uart              - Test IP1 UART interface"
	@echo "  sim_uart_vcd          - Test UART with VCD dump"
	@echo "  sim_uart_data         - Test UART data transfer"
	@echo "  sim_uart_data_vcd     - Test UART data with VCD dump"
	@echo "  sim_uart_program      - Test UART program loading"
	@echo "  sim_uart_program_vcd  - Test UART program with VCD dump"
	@echo "  sim_lcd_matrix        - Test matrix calculation with LCD display"
	@echo "  sim_lcd_matrix_vcd    - Test matrix+LCD with VCD dump"
	@echo "  sim_gpio_test         - Test complete system with GPIO output"
	@echo "  sim_gpio_test_vcd     - Test GPIO+matrix+LCD with VCD dump"
	@echo "  sim_uart_matrix       - Test UART matrix calculation (RTL)"
	@echo "  sim_uart_matrix_vcd   - Test UART matrix with VCD dump (RTL)"
	@echo "  sim_uart_matrix_netlist - Test UART matrix calculation (Netlist)"
	@echo "  sim_uart_matrix_netlist_vcd - Test UART matrix with VCD dump (Netlist)"
	@echo "  wave                  - Open waveform viewer"
	@echo "  clean                 - Clean generated files"
	@echo ""
	@echo "Usage examples:"
	@echo "  make sim prog=hello-flash"
	@echo "  make sim_vcd prog=memtest-mem"
	@echo "  make sim_uart_matrix        # RTL simulation"
	@echo "  make sim_uart_matrix_netlist # Netlist simulation"

clean :
	rm -fr csrc *simv.daidir* *simv* ucli.key vcdplus.vpd DVEfiles INCA_libs *.fsdb* *.vcd *.log novas.*

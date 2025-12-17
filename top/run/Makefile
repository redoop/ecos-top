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
			   +lint=TFIPC-L \
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

sim: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} $(TEST_MARCO)"

sim_vcd: comp
	bash -c "source ../../.bashrc && ./simv ${SIM_LOG} $(TEST_MARCO) +dump_all"

wave:
	${WAVE_TOOL} -ssf ${WAVE_FILE} -nologo

.PHONY : clean help

help:
	@echo "Available targets:"
	@echo "  comp     - Compile design"
	@echo "  sim      - Run simulation (default: hello-mem test)"
	@echo "  sim_vcd  - Run simulation with VCD dump"
	@echo "  wave     - Open waveform viewer"
	@echo "  clean    - Clean generated files"
	@echo ""
	@echo "Usage examples:"
	@echo "  make sim prog=hello-flash"
	@echo "  make sim_vcd prog=memtest-mem"

clean :
	rm -fr csrc *simv.daidir* *simv* ucli.key vcdplus.vpd DVEfiles INCA_libs *.fsdb* *.vcd *.log novas.*

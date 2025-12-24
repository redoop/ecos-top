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
			 -f ../filelist/lib.f 

NETLIST_FLIST := -f ../filelist/lib.f \
				 -f ../filelist/soc.f

NETLIST_MERGE_FLIST := -f ../filelist/lib.f \
				       -f ../filelist/asic_top.f \
				       -f ../filelist/merge.f

SIM_INC := +incdir+../top \
		   +incdir+../utils \
		   +incdir+../../project_2017/source \
		   +incdir+../tb \
		   +incdir+../tb/include \

TB_FLIST := -f ../filelist/asic_tblist.f 
## \
##			-top soc_tb \

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


SIM_EXEC := simv
comp:
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ${RTL_FLIST} ${TB_FLIST} ${COMP_LOG} -o ${SIM_EXEC}"

1_sim_asic_matrix:
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/1_asic_matrix_test_tb.sv ${RTL_FLIST} ${COMP_LOG} -top asic_matrix_test_tb -o ${SIM_EXEC} && ./${SIM_EXEC} ${SIM_LOG} +ip_sel01, +uart-matrix +dump_all"

2_sim_asic_matrix:
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/2_asic_matrix_test_tb.sv ${NETLIST_FLIST} ${COMP_LOG} -top asic_matrix_test_tb -o ${SIM_EXEC} && ./${SIM_EXEC} ${SIM_LOG} +ip_sel01, +uart-matrix +dump_all"

3_sim_asic_matrix:
	bash -c "source ../../.bashrc && ${SIM_TOOL} ${SIM_OPTIONS} ${TIME_OPTION} ../tb/3_asic_matrix_test_tb.sv ${NETLIST_MERGE_FLIST} ${COMP_LOG} -top asic_matrix_test_tb -o ${SIM_EXEC} && ./${SIM_EXEC} ${SIM_LOG} +ip_sel01, +uart-matrix +dump_all"

wave:
	${WAVE_TOOL} -ssf ${WAVE_FILE} -nologo

.PHONY : clean help

help:
	@echo "Available targets:"
	@echo "  comp                  - Compile design (RTL)"
	@echo "  clean                 - Clean generated files"
	@echo ""
	@echo "Usage examples:"
	@echo "  make clean comp"

clean :
	rm -fr csrc *simv.daidir* *simv* ucli.key vcdplus.vpd DVEfiles INCA_libs *.fsdb* *.vcd *.log novas.*

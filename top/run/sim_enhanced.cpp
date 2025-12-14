#include "Vsoc_tb_enhanced.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vsoc_tb_enhanced* top = new Vsoc_tb_enhanced;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("wave_enhanced.vcd");
    
    vluint64_t sim_time = 0;
    const vluint64_t sim_time_ps = 1000;
    
    while (!Verilated::gotFinish() && sim_time < 200000) {
        top->eval();
        tfp->dump(sim_time * sim_time_ps);
        sim_time++;
        Verilated::timeInc(sim_time_ps);
    }
    
    tfp->close();
    delete top;
    printf("Enhanced simulation completed at time %llu ps\n", sim_time * sim_time_ps);
    return 0;
}

#include "Vsoc_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vsoc_tb* top = new Vsoc_tb;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("wave.vcd");
    
    vluint64_t sim_time = 0;
    const vluint64_t sim_time_ps = 1000; // 1ps per time unit
    
    while (!Verilated::gotFinish() && sim_time < 200000000) {
        top->eval();
        tfp->dump(sim_time * sim_time_ps);
        sim_time++;
        Verilated::timeInc(sim_time_ps);
    }
    
    tfp->close();
    delete top;
    printf("Simulation completed at time %llu ps\n", sim_time * sim_time_ps);
    return 0;
}

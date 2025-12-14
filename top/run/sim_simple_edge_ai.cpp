#include "Vsimple_edge_ai_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vsimple_edge_ai_tb* top = new Vsimple_edge_ai_tb;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("wave_simple_edge_ai.vcd");
    
    vluint64_t sim_time = 0;
    
    while (!Verilated::gotFinish() && sim_time < 100000) {
        top->eval();
        tfp->dump(sim_time);
        sim_time++;
        Verilated::timeInc(1);
    }
    
    tfp->close();
    delete top;
    printf("SimpleEdgeAiSoC simulation completed\n");
    return 0;
}

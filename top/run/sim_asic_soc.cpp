#include "Vasic_soc_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vasic_soc_tb* top = new Vasic_soc_tb;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // 最大跟踪深度
    tfp->open("wave_asic_soc_combined.vcd");
    
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
    printf("ASIC + SoC combined simulation completed at time %llu ps\n", sim_time * sim_time_ps);
    return 0;
}

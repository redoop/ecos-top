// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_tb.h for the primary calling header

#ifndef VERILATED_VSOC_TB___024ROOT_H_
#define VERILATED_VSOC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsoc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsoc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ soc_tb__DOT__clk;
    CData/*0:0*/ soc_tb__DOT__rst_n;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vsoc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsoc_tb___024root(Vsoc_tb__Syms* symsp, const char* v__name);
    ~Vsoc_tb___024root();
    VL_UNCOPYABLE(Vsoc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

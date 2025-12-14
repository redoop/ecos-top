// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_tb_enhanced.h for the primary calling header

#ifndef VERILATED_VSOC_TB_ENHANCED___024ROOT_H_
#define VERILATED_VSOC_TB_ENHANCED___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsoc_tb_enhanced__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsoc_tb_enhanced___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ soc_tb_enhanced__DOT__old_ip_spi_flash_clk_pad;
    CData/*1:0*/ soc_tb_enhanced__DOT__old_ip_spi_flash_cs_pad;
    CData/*0:0*/ soc_tb_enhanced__DOT__old_ip_uart_rx_pad;
    CData/*0:0*/ soc_tb_enhanced__DOT__old_ip_uart_tx_pad;
    CData/*0:0*/ soc_tb_enhanced__DOT__r_osc_clk_25m;
    CData/*0:0*/ soc_tb_enhanced__DOT__r_ext_rst_n;
    CData/*2:0*/ soc_tb_enhanced__DOT__r_ip_sel;
    CData/*7:0*/ soc_tb_enhanced__DOT__state_machine;
    CData/*0:0*/ soc_tb_enhanced__DOT__enable_signal;
    CData/*0:0*/ soc_tb_enhanced__DOT__ready_signal;
    CData/*0:0*/ soc_tb_enhanced__DOT__valid_signal;
    CData/*3:0*/ soc_tb_enhanced__DOT__control_flags;
    CData/*7:0*/ soc_tb_enhanced__DOT__status_reg;
    CData/*0:0*/ soc_tb_enhanced__DOT__clock_div2;
    CData/*0:0*/ soc_tb_enhanced__DOT__clock_div4;
    CData/*0:0*/ soc_tb_enhanced__DOT__clock_div8;
    CData/*0:0*/ __Vtrigprevexpr___TOP__soc_tb_enhanced__DOT__r_ext_rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__soc_tb_enhanced__DOT__r_osc_clk_25m__0;
    SData/*15:0*/ soc_tb_enhanced__DOT__data_bus;
    IData/*31:0*/ soc_tb_enhanced__DOT__test_counter;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h25b43d74__0;

    // INTERNAL VARIABLES
    Vsoc_tb_enhanced__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsoc_tb_enhanced___024root(Vsoc_tb_enhanced__Syms* symsp, const char* v__name);
    ~Vsoc_tb_enhanced___024root();
    VL_UNCOPYABLE(Vsoc_tb_enhanced___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

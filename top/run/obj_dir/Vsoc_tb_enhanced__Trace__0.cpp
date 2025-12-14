// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_tb_enhanced__Syms.h"


void Vsoc_tb_enhanced___024root__trace_chg_0_sub_0(Vsoc_tb_enhanced___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsoc_tb_enhanced___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root__trace_chg_0\n"); );
    // Body
    Vsoc_tb_enhanced___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_tb_enhanced___024root*>(voidSelf);
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vsoc_tb_enhanced___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsoc_tb_enhanced___024root__trace_chg_0_sub_0(Vsoc_tb_enhanced___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root__trace_chg_0_sub_0\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.soc_tb_enhanced__DOT__test_counter),32);
        bufp->chgCData(oldp+1,(vlSelfRef.soc_tb_enhanced__DOT__state_machine),8);
        bufp->chgSData(oldp+2,(vlSelfRef.soc_tb_enhanced__DOT__data_bus),16);
        bufp->chgBit(oldp+3,(vlSelfRef.soc_tb_enhanced__DOT__enable_signal));
        bufp->chgBit(oldp+4,(vlSelfRef.soc_tb_enhanced__DOT__ready_signal));
        bufp->chgBit(oldp+5,(vlSelfRef.soc_tb_enhanced__DOT__valid_signal));
        bufp->chgCData(oldp+6,(vlSelfRef.soc_tb_enhanced__DOT__control_flags),4);
        bufp->chgCData(oldp+7,(vlSelfRef.soc_tb_enhanced__DOT__status_reg),8);
        bufp->chgBit(oldp+8,(vlSelfRef.soc_tb_enhanced__DOT__clock_div2));
        bufp->chgBit(oldp+9,(vlSelfRef.soc_tb_enhanced__DOT__clock_div4));
        bufp->chgBit(oldp+10,(vlSelfRef.soc_tb_enhanced__DOT__clock_div8));
    }
    bufp->chgBit(oldp+11,(vlSelfRef.soc_tb_enhanced__DOT__r_ext_rst_n));
    bufp->chgBit(oldp+12,(vlSelfRef.soc_tb_enhanced__DOT__r_osc_clk_25m));
    bufp->chgCData(oldp+13,(vlSelfRef.soc_tb_enhanced__DOT__r_ip_sel),3);
}

void Vsoc_tb_enhanced___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root__trace_cleanup\n"); );
    // Body
    Vsoc_tb_enhanced___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_tb_enhanced___024root*>(voidSelf);
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

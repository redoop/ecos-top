// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_tb_enhanced.h for the primary calling header

#include "Vsoc_tb_enhanced__pch.h"

VL_ATTR_COLD void Vsoc_tb_enhanced___024root___eval_initial__TOP(Vsoc_tb_enhanced___024root* vlSelf);
VlCoroutine Vsoc_tb_enhanced___024root___eval_initial__TOP__Vtiming__0(Vsoc_tb_enhanced___024root* vlSelf);
VlCoroutine Vsoc_tb_enhanced___024root___eval_initial__TOP__Vtiming__1(Vsoc_tb_enhanced___024root* vlSelf);

void Vsoc_tb_enhanced___024root___eval_initial(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___eval_initial\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsoc_tb_enhanced___024root___eval_initial__TOP(vlSelf);
    Vsoc_tb_enhanced___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsoc_tb_enhanced___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vsoc_tb_enhanced___024root___eval_initial__TOP__Vtiming__0(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_tb_enhanced__DOT__r_osc_clk_25m = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                             nullptr, 
                                             "soc_tb_enhanced.sv", 
                                             200);
        vlSelfRef.soc_tb_enhanced__DOT__r_osc_clk_25m 
            = (1U & (~ (IData)(vlSelfRef.soc_tb_enhanced__DOT__r_osc_clk_25m)));
    }
}

VlCoroutine Vsoc_tb_enhanced___024root___eval_initial__TOP__Vtiming__1(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_soc_tb_enhanced__DOT__sim_reset__0__soc_tb_enhanced__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_soc_tb_enhanced__DOT__sim_reset__0__soc_tb_enhanced__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.soc_tb_enhanced__DOT__r_ip_sel = 1U;
    vlSelfRef.soc_tb_enhanced__DOT__r_ext_rst_n = 0U;
    __Vtask_soc_tb_enhanced__DOT__sim_reset__0__soc_tb_enhanced__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, __Vtask_soc_tb_enhanced__DOT__sim_reset__0__soc_tb_enhanced__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h25b43d74__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge soc_tb_enhanced.r_osc_clk_25m)", 
                                                             "soc_tb_enhanced.sv", 
                                                             193);
        __Vtask_soc_tb_enhanced__DOT__sim_reset__0__soc_tb_enhanced__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_soc_tb_enhanced__DOT__sim_reset__0__soc_tb_enhanced__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "soc_tb_enhanced.sv", 
                                         194);
    vlSelfRef.soc_tb_enhanced__DOT__r_ext_rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000001dcd6500ULL, 
                                         nullptr, "soc_tb_enhanced.sv", 
                                         207);
    VL_FINISH_MT("soc_tb_enhanced.sv", 207, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_tb_enhanced___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vsoc_tb_enhanced___024root___eval_triggers__act(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___eval_triggers__act\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.soc_tb_enhanced__DOT__r_osc_clk_25m) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_tb_enhanced__DOT__r_osc_clk_25m__0))) 
                                                         << 1U) 
                                                        | ((~ (IData)(vlSelfRef.soc_tb_enhanced__DOT__r_ext_rst_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_tb_enhanced__DOT__r_ext_rst_n__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__soc_tb_enhanced__DOT__r_ext_rst_n__0 
        = vlSelfRef.soc_tb_enhanced__DOT__r_ext_rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_tb_enhanced__DOT__r_osc_clk_25m__0 
        = vlSelfRef.soc_tb_enhanced__DOT__r_osc_clk_25m;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsoc_tb_enhanced___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vsoc_tb_enhanced___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vsoc_tb_enhanced___024root___nba_sequent__TOP__0(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___nba_sequent__TOP__0\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__soc_tb_enhanced__DOT__clock_div2;
    __Vdly__soc_tb_enhanced__DOT__clock_div2 = 0;
    CData/*0:0*/ __Vdly__soc_tb_enhanced__DOT__clock_div4;
    __Vdly__soc_tb_enhanced__DOT__clock_div4 = 0;
    IData/*31:0*/ __Vdly__soc_tb_enhanced__DOT__test_counter;
    __Vdly__soc_tb_enhanced__DOT__test_counter = 0;
    CData/*7:0*/ __Vdly__soc_tb_enhanced__DOT__state_machine;
    __Vdly__soc_tb_enhanced__DOT__state_machine = 0;
    CData/*3:0*/ __Vdly__soc_tb_enhanced__DOT__control_flags;
    __Vdly__soc_tb_enhanced__DOT__control_flags = 0;
    // Body
    __Vdly__soc_tb_enhanced__DOT__clock_div2 = vlSelfRef.soc_tb_enhanced__DOT__clock_div2;
    __Vdly__soc_tb_enhanced__DOT__clock_div4 = vlSelfRef.soc_tb_enhanced__DOT__clock_div4;
    __Vdly__soc_tb_enhanced__DOT__test_counter = vlSelfRef.soc_tb_enhanced__DOT__test_counter;
    __Vdly__soc_tb_enhanced__DOT__state_machine = vlSelfRef.soc_tb_enhanced__DOT__state_machine;
    __Vdly__soc_tb_enhanced__DOT__control_flags = vlSelfRef.soc_tb_enhanced__DOT__control_flags;
    if (vlSelfRef.soc_tb_enhanced__DOT__r_ext_rst_n) {
        __Vdly__soc_tb_enhanced__DOT__clock_div2 = 
            (1U & (~ (IData)(vlSelfRef.soc_tb_enhanced__DOT__clock_div2)));
        if (vlSelfRef.soc_tb_enhanced__DOT__clock_div2) {
            __Vdly__soc_tb_enhanced__DOT__clock_div4 
                = (1U & (~ (IData)(vlSelfRef.soc_tb_enhanced__DOT__clock_div4)));
        }
        if (((IData)(vlSelfRef.soc_tb_enhanced__DOT__clock_div2) 
             & (IData)(vlSelfRef.soc_tb_enhanced__DOT__clock_div4))) {
            vlSelfRef.soc_tb_enhanced__DOT__clock_div8 
                = (1U & (~ (IData)(vlSelfRef.soc_tb_enhanced__DOT__clock_div8)));
        }
        __Vdly__soc_tb_enhanced__DOT__test_counter 
            = ((IData)(1U) + vlSelfRef.soc_tb_enhanced__DOT__test_counter);
        if ((0U == (IData)(vlSelfRef.soc_tb_enhanced__DOT__state_machine))) {
            if ((0xffU == (0x000000ffU & vlSelfRef.soc_tb_enhanced__DOT__test_counter))) {
                __Vdly__soc_tb_enhanced__DOT__state_machine = 1U;
                vlSelfRef.soc_tb_enhanced__DOT__enable_signal = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.soc_tb_enhanced__DOT__state_machine))) {
            vlSelfRef.soc_tb_enhanced__DOT__data_bus 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.soc_tb_enhanced__DOT__data_bus)));
            vlSelfRef.soc_tb_enhanced__DOT__ready_signal 
                = (1U & vlSelfRef.soc_tb_enhanced__DOT__test_counter);
            vlSelfRef.soc_tb_enhanced__DOT__valid_signal 
                = (1U & (vlSelfRef.soc_tb_enhanced__DOT__test_counter 
                         >> 1U));
            if ((0xffffU == (0x0000ffffU & vlSelfRef.soc_tb_enhanced__DOT__test_counter))) {
                __Vdly__soc_tb_enhanced__DOT__state_machine = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.soc_tb_enhanced__DOT__state_machine))) {
            __Vdly__soc_tb_enhanced__DOT__control_flags 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.soc_tb_enhanced__DOT__control_flags)));
            vlSelfRef.soc_tb_enhanced__DOT__status_reg 
                = ((0x000000feU & ((IData)(vlSelfRef.soc_tb_enhanced__DOT__status_reg) 
                                   << 1U)) | (1U & vlSelfRef.soc_tb_enhanced__DOT__test_counter));
            if ((0x0fU == (IData)(vlSelfRef.soc_tb_enhanced__DOT__control_flags))) {
                __Vdly__soc_tb_enhanced__DOT__state_machine = 0U;
            }
        } else {
            __Vdly__soc_tb_enhanced__DOT__state_machine = 0U;
        }
    } else {
        __Vdly__soc_tb_enhanced__DOT__clock_div2 = 0U;
        __Vdly__soc_tb_enhanced__DOT__clock_div4 = 0U;
        vlSelfRef.soc_tb_enhanced__DOT__clock_div8 = 0U;
        vlSelfRef.soc_tb_enhanced__DOT__data_bus = 0U;
        vlSelfRef.soc_tb_enhanced__DOT__status_reg = 0U;
        __Vdly__soc_tb_enhanced__DOT__test_counter = 0U;
        __Vdly__soc_tb_enhanced__DOT__state_machine = 0U;
        vlSelfRef.soc_tb_enhanced__DOT__enable_signal = 0U;
        vlSelfRef.soc_tb_enhanced__DOT__ready_signal = 0U;
        vlSelfRef.soc_tb_enhanced__DOT__valid_signal = 0U;
        __Vdly__soc_tb_enhanced__DOT__control_flags = 0U;
    }
    vlSelfRef.soc_tb_enhanced__DOT__clock_div2 = __Vdly__soc_tb_enhanced__DOT__clock_div2;
    vlSelfRef.soc_tb_enhanced__DOT__clock_div4 = __Vdly__soc_tb_enhanced__DOT__clock_div4;
    vlSelfRef.soc_tb_enhanced__DOT__test_counter = __Vdly__soc_tb_enhanced__DOT__test_counter;
    vlSelfRef.soc_tb_enhanced__DOT__state_machine = __Vdly__soc_tb_enhanced__DOT__state_machine;
    vlSelfRef.soc_tb_enhanced__DOT__control_flags = __Vdly__soc_tb_enhanced__DOT__control_flags;
}

void Vsoc_tb_enhanced___024root___eval_nba(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___eval_nba\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_tb_enhanced___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vsoc_tb_enhanced___024root___timing_commit(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___timing_commit\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h25b43d74__0.commit(
                                                   "@(posedge soc_tb_enhanced.r_osc_clk_25m)");
    }
}

void Vsoc_tb_enhanced___024root___timing_resume(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___timing_resume\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h25b43d74__0.resume(
                                                   "@(posedge soc_tb_enhanced.r_osc_clk_25m)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsoc_tb_enhanced___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsoc_tb_enhanced___024root___eval_phase__act(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___eval_phase__act\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vsoc_tb_enhanced___024root___eval_triggers__act(vlSelf);
    Vsoc_tb_enhanced___024root___timing_commit(vlSelf);
    Vsoc_tb_enhanced___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vsoc_tb_enhanced___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vsoc_tb_enhanced___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vsoc_tb_enhanced___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsoc_tb_enhanced___024root___eval_phase__nba(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___eval_phase__nba\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsoc_tb_enhanced___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vsoc_tb_enhanced___024root___eval_nba(vlSelf);
        Vsoc_tb_enhanced___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vsoc_tb_enhanced___024root___eval(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___eval\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsoc_tb_enhanced___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("soc_tb_enhanced.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsoc_tb_enhanced___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("soc_tb_enhanced.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vsoc_tb_enhanced___024root___eval_phase__act(vlSelf));
    } while (Vsoc_tb_enhanced___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vsoc_tb_enhanced___024root___eval_debug_assertions(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___eval_debug_assertions\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

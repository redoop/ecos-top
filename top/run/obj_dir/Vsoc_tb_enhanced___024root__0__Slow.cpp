// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_tb_enhanced.h for the primary calling header

#include "Vsoc_tb_enhanced__pch.h"

VL_ATTR_COLD void Vsoc_tb_enhanced___024root___eval_static(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___eval_static\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__soc_tb_enhanced__DOT__r_ext_rst_n__0 
        = vlSelfRef.soc_tb_enhanced__DOT__r_ext_rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_tb_enhanced__DOT__r_osc_clk_25m__0 
        = vlSelfRef.soc_tb_enhanced__DOT__r_osc_clk_25m;
}

VL_ATTR_COLD void Vsoc_tb_enhanced___024root___eval_initial__TOP(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___eval_initial__TOP\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("wave_enhanced.vcd"s);
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("Enhanced SoC testbench started at time %0t\nN25Qxxx: Simple flash model initialized\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
}

VL_ATTR_COLD void Vsoc_tb_enhanced___024root___eval_final(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___eval_final\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsoc_tb_enhanced___024root___eval_settle(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___eval_settle\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vsoc_tb_enhanced___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_tb_enhanced___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsoc_tb_enhanced___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(negedge soc_tb_enhanced.r_ext_rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge soc_tb_enhanced.r_osc_clk_25m)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsoc_tb_enhanced___024root___ctor_var_reset(Vsoc_tb_enhanced___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root___ctor_var_reset\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->soc_tb_enhanced__DOT__old_ip_spi_flash_clk_pad = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2037207119245496367ull);
    vlSelf->soc_tb_enhanced__DOT__old_ip_spi_flash_cs_pad = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2440690207793740722ull);
    vlSelf->soc_tb_enhanced__DOT__old_ip_uart_rx_pad = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12802543411530720754ull);
    vlSelf->soc_tb_enhanced__DOT__old_ip_uart_tx_pad = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13085021532314858434ull);
    vlSelf->soc_tb_enhanced__DOT__r_osc_clk_25m = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12512521350203480967ull);
    vlSelf->soc_tb_enhanced__DOT__r_ext_rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13215848769908134213ull);
    vlSelf->soc_tb_enhanced__DOT__r_ip_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 260096513529131297ull);
    vlSelf->soc_tb_enhanced__DOT__test_counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9682230585873822591ull);
    vlSelf->soc_tb_enhanced__DOT__state_machine = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6217486024054156627ull);
    vlSelf->soc_tb_enhanced__DOT__data_bus = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17327870763345718809ull);
    vlSelf->soc_tb_enhanced__DOT__enable_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6961961993506413177ull);
    vlSelf->soc_tb_enhanced__DOT__ready_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2844626022954178637ull);
    vlSelf->soc_tb_enhanced__DOT__valid_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17659676885068307238ull);
    vlSelf->soc_tb_enhanced__DOT__control_flags = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6101294444788680812ull);
    vlSelf->soc_tb_enhanced__DOT__status_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12040646230531696928ull);
    vlSelf->soc_tb_enhanced__DOT__clock_div2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3535392293545191571ull);
    vlSelf->soc_tb_enhanced__DOT__clock_div4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1351861717058001577ull);
    vlSelf->soc_tb_enhanced__DOT__clock_div8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3344671481704737287ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__soc_tb_enhanced__DOT__r_ext_rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18421257894318253563ull);
    vlSelf->__Vtrigprevexpr___TOP__soc_tb_enhanced__DOT__r_osc_clk_25m__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17021835538175602315ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

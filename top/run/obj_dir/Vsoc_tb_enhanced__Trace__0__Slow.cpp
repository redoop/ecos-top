// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_tb_enhanced__Syms.h"


VL_ATTR_COLD void Vsoc_tb_enhanced___024root__trace_init_sub__TOP__0(Vsoc_tb_enhanced___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root__trace_init_sub__TOP__0\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("soc_tb_enhanced", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+15,0,"OSC_CLK_25M_PEROID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBit(c+12,0,"ext_rst_n_i_pad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"osc_clk_25m_i_pad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"old_ip_spi_flash_clk_pad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"old_ip_spi_flash_cs_pad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+19,0,"old_ip_spi_flash_mosi_pad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"old_ip_spi_flash_miso_pad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"old_ip_uart_rx_pad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"old_ip_uart_tx_pad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"r_osc_clk_25m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"r_ext_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"r_ip_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1,0,"test_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"state_machine",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"data_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+4,0,"enable_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"ready_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"valid_signal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"control_flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"status_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+9,0,"clock_div2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"clock_div4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"clock_div8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_old_ip_spi_N25Qxxx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"C_",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"HOLD_DQ3",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"DQ0",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"DQ1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"Vcc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"Vpp_W_DQ2",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsoc_tb_enhanced___024root__trace_init_top(Vsoc_tb_enhanced___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root__trace_init_top\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsoc_tb_enhanced___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsoc_tb_enhanced___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsoc_tb_enhanced___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsoc_tb_enhanced___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsoc_tb_enhanced___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsoc_tb_enhanced___024root__trace_register(Vsoc_tb_enhanced___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root__trace_register\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsoc_tb_enhanced___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vsoc_tb_enhanced___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vsoc_tb_enhanced___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vsoc_tb_enhanced___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsoc_tb_enhanced___024root__trace_const_0_sub_0(Vsoc_tb_enhanced___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsoc_tb_enhanced___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root__trace_const_0\n"); );
    // Body
    Vsoc_tb_enhanced___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_tb_enhanced___024root*>(voidSelf);
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsoc_tb_enhanced___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsoc_tb_enhanced___024root__trace_const_0_sub_0(Vsoc_tb_enhanced___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root__trace_const_0_sub_0\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullDouble(oldp+15,(40.0));
    bufp->fullBit(oldp+17,(vlSelfRef.soc_tb_enhanced__DOT__old_ip_spi_flash_clk_pad));
    bufp->fullCData(oldp+18,(vlSelfRef.soc_tb_enhanced__DOT__old_ip_spi_flash_cs_pad),2);
    bufp->fullBit(oldp+19,(0U));
    bufp->fullBit(oldp+20,(vlSelfRef.soc_tb_enhanced__DOT__old_ip_uart_rx_pad));
    bufp->fullBit(oldp+21,(vlSelfRef.soc_tb_enhanced__DOT__old_ip_uart_tx_pad));
    bufp->fullBit(oldp+22,((1U & (IData)(vlSelfRef.soc_tb_enhanced__DOT__old_ip_spi_flash_cs_pad))));
}

VL_ATTR_COLD void Vsoc_tb_enhanced___024root__trace_full_0_sub_0(Vsoc_tb_enhanced___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsoc_tb_enhanced___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root__trace_full_0\n"); );
    // Body
    Vsoc_tb_enhanced___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_tb_enhanced___024root*>(voidSelf);
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsoc_tb_enhanced___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsoc_tb_enhanced___024root__trace_full_0_sub_0(Vsoc_tb_enhanced___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb_enhanced___024root__trace_full_0_sub_0\n"); );
    Vsoc_tb_enhanced__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSelfRef.soc_tb_enhanced__DOT__test_counter),32);
    bufp->fullCData(oldp+2,(vlSelfRef.soc_tb_enhanced__DOT__state_machine),8);
    bufp->fullSData(oldp+3,(vlSelfRef.soc_tb_enhanced__DOT__data_bus),16);
    bufp->fullBit(oldp+4,(vlSelfRef.soc_tb_enhanced__DOT__enable_signal));
    bufp->fullBit(oldp+5,(vlSelfRef.soc_tb_enhanced__DOT__ready_signal));
    bufp->fullBit(oldp+6,(vlSelfRef.soc_tb_enhanced__DOT__valid_signal));
    bufp->fullCData(oldp+7,(vlSelfRef.soc_tb_enhanced__DOT__control_flags),4);
    bufp->fullCData(oldp+8,(vlSelfRef.soc_tb_enhanced__DOT__status_reg),8);
    bufp->fullBit(oldp+9,(vlSelfRef.soc_tb_enhanced__DOT__clock_div2));
    bufp->fullBit(oldp+10,(vlSelfRef.soc_tb_enhanced__DOT__clock_div4));
    bufp->fullBit(oldp+11,(vlSelfRef.soc_tb_enhanced__DOT__clock_div8));
    bufp->fullBit(oldp+12,(vlSelfRef.soc_tb_enhanced__DOT__r_ext_rst_n));
    bufp->fullBit(oldp+13,(vlSelfRef.soc_tb_enhanced__DOT__r_osc_clk_25m));
    bufp->fullCData(oldp+14,(vlSelfRef.soc_tb_enhanced__DOT__r_ip_sel),3);
}

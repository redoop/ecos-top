// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_soc_tb.h for the primary calling header

#include "Vasic_soc_tb__pch.h"

VL_ATTR_COLD void Vasic_soc_tb___024root___eval_initial__TOP(Vasic_soc_tb___024root* vlSelf);
VlCoroutine Vasic_soc_tb___024root___eval_initial__TOP__Vtiming__0(Vasic_soc_tb___024root* vlSelf);
VlCoroutine Vasic_soc_tb___024root___eval_initial__TOP__Vtiming__1(Vasic_soc_tb___024root* vlSelf);

void Vasic_soc_tb___024root___eval_initial(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval_initial\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vasic_soc_tb___024root___eval_initial__TOP(vlSelf);
    Vasic_soc_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vasic_soc_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vasic_soc_tb___024root___eval_initial__TOP__Vtiming__0(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.asic_soc_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                             nullptr, 
                                             "asic_soc_tb.sv", 
                                             96);
        vlSelfRef.asic_soc_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__clk)));
    }
}

VlCoroutine Vasic_soc_tb___024root___eval_initial__TOP__Vtiming__1(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ asic_soc_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    asic_soc_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ asic_soc_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    asic_soc_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    vlSelfRef.asic_soc_tb__DOT__ip_sel = 1U;
    vlSelfRef.asic_soc_tb__DOT__rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "asic_soc_tb.sv", 
                                         104);
    vlSelfRef.asic_soc_tb__DOT__rst_n = 1U;
    asic_soc_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x00000064U;
    while (VL_LTS_III(32, 0U, asic_soc_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hb283cd2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge asic_soc_tb.clk)", 
                                                             "asic_soc_tb.sv", 
                                                             107);
        asic_soc_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (asic_soc_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    asic_soc_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x000003e8U;
    while (VL_LTS_III(32, 0U, asic_soc_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_hb283cd2a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge asic_soc_tb.clk)", 
                                                             "asic_soc_tb.sv", 
                                                             111);
        asic_soc_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (asic_soc_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x0000000002faf080ULL, 
                                         nullptr, "asic_soc_tb.sv", 
                                         114);
    VL_FINISH_MT("asic_soc_tb.sv", 114, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_soc_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vasic_soc_tb___024root___eval_triggers__act(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval_triggers__act\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.asic_soc_tb__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__asic_soc_tb__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.asic_soc_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__asic_soc_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__asic_soc_tb__DOT__clk__0 
        = vlSelfRef.asic_soc_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__asic_soc_tb__DOT__rst_n__0 
        = vlSelfRef.asic_soc_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vasic_soc_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vasic_soc_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___trigger_anySet__act\n"); );
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

void Vasic_soc_tb___024root___act_comb__TOP__0(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___act_comb__TOP__0\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact)
            ? ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12)
                ? ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11)
                    ? (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12) 
                        & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11))
                        ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory
                       [(0x0000003fU & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                        >> 2U))] : 0U)
                    : ((0U == (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                        ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl
                        : ((4U == (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                            ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status
                            : ((0x001cU == (0x00000fffU 
                                            & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize
                                : ((0x0028U == (0x00000fffU 
                                                & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                    ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles
                                    : 0U))))) : 0U)
            : ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet)
                ? ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13)
                    ? ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14)
                        ? (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14))
                            ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory
                           [(0x000000ffU & ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                             - (IData)(0x0100U)) 
                                            >> 2U))]
                            : 0U) : ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12)
                                      ? ((0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))
                                          ? 0U : ((1U 
                                                   == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))
                                                   ? 1U
                                                   : 
                                                  (- (IData)(
                                                             (2U 
                                                              == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))))))
                                      : ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11)
                                          ? (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                                              & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))
                                              ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory
                                             [(0x000000ffU 
                                               & ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                                   - (IData)(0x0100U)) 
                                                  >> 2U))]
                                              : 0U)
                                          : ((0U == 
                                              (0x00000fffU 
                                               & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                              ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl
                                              : ((4U 
                                                  == 
                                                  (0x00000fffU 
                                                   & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                  ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status
                                                  : 
                                                 ((0x001cU 
                                                   == 
                                                   (0x00000fffU 
                                                    & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                   ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize
                                                   : 
                                                  ((0x0020U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                    ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__config_0
                                                    : 
                                                   ((0x0028U 
                                                     == 
                                                     (0x00000fffU 
                                                      & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                     ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles
                                                     : 
                                                    ((0x002cU 
                                                      == 
                                                      (0x00000fffU 
                                                       & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                      ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped
                                                      : 
                                                     ((0x0030U 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                       ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__errorCode
                                                       : 0U))))))))))
                    : 0U) : ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart)
                              ? ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_11)
                                  ? ((0U == (0x000000ffU 
                                             & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                      ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory
                                     [vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value]
                                      : ((4U == (0x000000ffU 
                                                 & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                          ? ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full) 
                                                 << 2U)) 
                                             | ((2U 
                                                 & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty)) 
                                                    << 1U)) 
                                                | (0U 
                                                   != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState))))
                                          : ((8U == 
                                              (0x000000ffU 
                                               & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                              ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control
                                              : ((0x0cU 
                                                  == 
                                                  (0x000000ffU 
                                                   & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                  ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv
                                                  : 0U))))
                                  : 0U) : ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd)
                                            ? (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT___GEN) 
                                                & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                                   & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd)))
                                                ? (
                                                   (8U 
                                                    == 
                                                    (0x000000ffU 
                                                     & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                    ? 
                                                   (2U 
                                                    | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy))
                                                    : 
                                                   ((0x0cU 
                                                     == 
                                                     (0x000000ffU 
                                                      & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                     ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control
                                                     : 0U))
                                                : 0U)
                                            : ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio)
                                                ? (
                                                   (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                                     & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio)) 
                                                    & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_gpio_valid))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.asic_soc_tb__DOT__ip_sel))
                                                     ? 
                                                    (1U 
                                                     | (0x0000fffeU 
                                                        & ((IData)(vlSelfRef.asic_soc_tb__DOT__data_bus) 
                                                           << 1U)))
                                                     : 0U)
                                                    : 0U)
                                                : ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash)
                                                    ? 
                                                   ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                                      & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash)) 
                                                     & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_flash_valid))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (0x000000ffU 
                                                       & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                      ? (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg)
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                       ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg
                                                       : 
                                                      ((8U 
                                                        == 
                                                        (0x000000ffU 
                                                         & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                        ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg
                                                        : 
                                                       ((0x0cU 
                                                         == 
                                                         (0x000000ffU 
                                                          & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                         ? 
                                                        (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg) 
                                                          << 2U) 
                                                         | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg) 
                                                            << 1U))
                                                         : 0U))))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram)
                                                     ? 
                                                    (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                                      & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram))
                                                      ? 
                                                     ((0x14U 
                                                       == 
                                                       (0x0000001fU 
                                                        & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                       ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x0000001fU 
                                                         & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                        ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg
                                                        : 
                                                       ((0x0cU 
                                                         == 
                                                         (0x0000001fU 
                                                          & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                         ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg
                                                         : 
                                                        ((8U 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                          ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x0000001fU 
                                                            & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                           ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg
                                                           : 
                                                          ((0U 
                                                            == 
                                                            (0x0000001fU 
                                                             & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                            ? (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg)
                                                            : 0U))))))
                                                      : 0U)
                                                     : 0U)))))));
    if ((0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)
                ? (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
                   >> 0x10U) : (0x0000ffffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata));
    } else if ((2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)
                ? ((1U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)
                    ? (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
                       >> 0x18U) : (0x000000ffU & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
                                                   >> 0x10U)))
                : ((1U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)
                    ? (0x000000ffU & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
                                      >> 8U)) : (0x000000ffU 
                                                 & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata)));
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer)
            ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata
            : vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q);
}

void Vasic_soc_tb___024root___eval_act(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval_act\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
        Vasic_soc_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vasic_soc_tb___024root___nba_sequent__TOP__0(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___nba_sequent__TOP__0\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__clock_div2;
    __Vdly__asic_soc_tb__DOT__clock_div2 = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__clock_div4;
    __Vdly__asic_soc_tb__DOT__clock_div4 = 0;
    IData/*31:0*/ __Vdly__asic_soc_tb__DOT__test_counter;
    __Vdly__asic_soc_tb__DOT__test_counter = 0;
    CData/*7:0*/ __Vdly__asic_soc_tb__DOT__state_machine;
    __Vdly__asic_soc_tb__DOT__state_machine = 0;
    CData/*3:0*/ __Vdly__asic_soc_tb__DOT__control_flags;
    __Vdly__asic_soc_tb__DOT__control_flags = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__clk_div2;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__clk_div2 = 0;
    // Body
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__clk_div2 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__clk_div2;
    __Vdly__asic_soc_tb__DOT__clock_div2 = vlSelfRef.asic_soc_tb__DOT__clock_div2;
    __Vdly__asic_soc_tb__DOT__clock_div4 = vlSelfRef.asic_soc_tb__DOT__clock_div4;
    vlSelfRef.__Vdly__asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m;
    __Vdly__asic_soc_tb__DOT__test_counter = vlSelfRef.asic_soc_tb__DOT__test_counter;
    __Vdly__asic_soc_tb__DOT__state_machine = vlSelfRef.asic_soc_tb__DOT__state_machine;
    __Vdly__asic_soc_tb__DOT__control_flags = vlSelfRef.asic_soc_tb__DOT__control_flags;
    if (vlSelfRef.asic_soc_tb__DOT__rst_n) {
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__clk_div2 
            = (1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__clk_div2)));
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__clk_div2) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__clk_div4 
                = (1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__clk_div4)));
        }
        __Vdly__asic_soc_tb__DOT__clock_div2 = (1U 
                                                & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__clock_div2)));
        if (vlSelfRef.asic_soc_tb__DOT__clock_div2) {
            __Vdly__asic_soc_tb__DOT__clock_div4 = 
                (1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__clock_div4)));
        }
        if (((IData)(vlSelfRef.asic_soc_tb__DOT__clock_div2) 
             & (IData)(vlSelfRef.asic_soc_tb__DOT__clock_div4))) {
            vlSelfRef.asic_soc_tb__DOT__clock_div8 
                = (1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__clock_div8)));
        }
        vlSelfRef.__Vdly__asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m 
            = (1U | (6U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
                           << 1U)));
        __Vdly__asic_soc_tb__DOT__test_counter = ((IData)(1U) 
                                                  + vlSelfRef.asic_soc_tb__DOT__test_counter);
        if ((0U == (IData)(vlSelfRef.asic_soc_tb__DOT__state_machine))) {
            if ((0xffU == (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__test_counter))) {
                __Vdly__asic_soc_tb__DOT__state_machine = 1U;
                vlSelfRef.asic_soc_tb__DOT__enable_signal = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.asic_soc_tb__DOT__state_machine))) {
            vlSelfRef.asic_soc_tb__DOT__data_bus = 
                (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.asic_soc_tb__DOT__data_bus)));
            vlSelfRef.asic_soc_tb__DOT__ready_signal 
                = (1U & vlSelfRef.asic_soc_tb__DOT__test_counter);
            vlSelfRef.asic_soc_tb__DOT__valid_signal 
                = (1U & (vlSelfRef.asic_soc_tb__DOT__test_counter 
                         >> 1U));
            if ((0xffffU == (0x0000ffffU & vlSelfRef.asic_soc_tb__DOT__test_counter))) {
                __Vdly__asic_soc_tb__DOT__state_machine = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.asic_soc_tb__DOT__state_machine))) {
            __Vdly__asic_soc_tb__DOT__control_flags 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.asic_soc_tb__DOT__control_flags)));
            vlSelfRef.asic_soc_tb__DOT__status_reg 
                = ((0x000000feU & ((IData)(vlSelfRef.asic_soc_tb__DOT__status_reg) 
                                   << 1U)) | (1U & vlSelfRef.asic_soc_tb__DOT__test_counter));
            if ((0x0fU == (IData)(vlSelfRef.asic_soc_tb__DOT__control_flags))) {
                __Vdly__asic_soc_tb__DOT__state_machine = 0U;
            }
        } else {
            __Vdly__asic_soc_tb__DOT__state_machine = 0U;
        }
    } else {
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__clk_div2 = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__clk_div4 = 0U;
        __Vdly__asic_soc_tb__DOT__clock_div2 = 0U;
        __Vdly__asic_soc_tb__DOT__clock_div4 = 0U;
        vlSelfRef.asic_soc_tb__DOT__clock_div8 = 0U;
        vlSelfRef.__Vdly__asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m = 0U;
        vlSelfRef.asic_soc_tb__DOT__data_bus = 0U;
        vlSelfRef.asic_soc_tb__DOT__status_reg = 0U;
        __Vdly__asic_soc_tb__DOT__test_counter = 0U;
        __Vdly__asic_soc_tb__DOT__state_machine = 0U;
        vlSelfRef.asic_soc_tb__DOT__enable_signal = 0U;
        vlSelfRef.asic_soc_tb__DOT__ready_signal = 0U;
        vlSelfRef.asic_soc_tb__DOT__valid_signal = 0U;
        __Vdly__asic_soc_tb__DOT__control_flags = 0U;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__clk_div2 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__clk_div2;
    vlSelfRef.asic_soc_tb__DOT__clock_div2 = __Vdly__asic_soc_tb__DOT__clock_div2;
    vlSelfRef.asic_soc_tb__DOT__clock_div4 = __Vdly__asic_soc_tb__DOT__clock_div4;
    vlSelfRef.asic_soc_tb__DOT__test_counter = __Vdly__asic_soc_tb__DOT__test_counter;
    vlSelfRef.asic_soc_tb__DOT__state_machine = __Vdly__asic_soc_tb__DOT__state_machine;
    vlSelfRef.asic_soc_tb__DOT__control_flags = __Vdly__asic_soc_tb__DOT__control_flags;
}

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vasic_soc_tb__ConstPool__TABLE_h57ed7a03_0;

void Vasic_soc_tb___024root___nba_sequent__TOP__1(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___nba_sequent__TOP__1\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state = 0;
    CData/*4:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh = 0;
    IData/*31:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out = 0;
    QData/*63:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = 0;
    CData/*1:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb = 0;
    IData/*31:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc = 0;
    QData/*63:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch = 0;
    CData/*7:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0;
    IData/*31:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 = 0;
    IData/*31:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles = 0;
    CData/*3:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i = 0;
    CData/*3:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j = 0;
    CData/*3:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k = 0;
    CData/*1:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state = 0;
    IData/*31:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl = 0;
    IData/*31:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles = 0;
    IData/*31:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped = 0;
    CData/*7:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i = 0;
    CData/*7:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j = 0;
    CData/*7:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k = 0;
    CData/*2:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter = 0;
    CData/*1:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState = 0;
    CData/*3:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter = 0;
    CData/*7:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg = 0;
    CData/*3:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter = 0;
    CData/*7:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg = 0;
    CData/*3:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value = 0;
    CData/*3:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value = 0;
    CData/*7:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state = 0;
    CData/*2:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter = 0;
    IData/*31:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg = 0;
    IData/*31:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg = 0;
    CData/*2:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state = 0;
    CData/*7:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg = 0;
    IData/*23:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg = 0;
    IData/*31:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg = 0;
    IData/*31:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg = 0;
    IData/*31:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn = 0;
    CData/*5:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt = 0;
    IData/*31:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg = 0;
    CData/*0:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg = 0;
    IData/*31:0*/ __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut = 0;
    IData/*31:0*/ __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0;
    __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0;
    __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0 = 0;
    IData/*31:0*/ __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0;
    __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0;
    __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0;
    __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0;
    __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0;
    __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0;
    __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0;
    __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0;
    __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0 = 0;
    CData/*1:0*/ __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0;
    __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0;
    __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0;
    __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0;
    __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0 = 0;
    // Body
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0 = 0U;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0 = 0U;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0 = 0U;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0 = 0U;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0 = 0U;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0 = 0U;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped;
    __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0 = 0U;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg;
    if (((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5)) 
         & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en))) {
        __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__W0_data;
        __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0 
            = (0x0000003fU & ((0x00000038U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i) 
                                              << 3U)) 
                              + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j)));
        __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0 
            = ((1U & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0)) 
                      | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6)))
                ? 0U : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg));
        __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value;
        __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
           >> 2U) & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_rd)))) {
        __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_wrdata;
        __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_rd;
        __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0 = 1U;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__io_enq_valid)
                ? (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)
                : 0U);
        __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value;
        __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_10) 
         & ((0U != (0x0000000fU & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                   >> 8U))) & (0x0200U 
                                               > (0x00000fffU 
                                                  & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))))) {
        __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0 
            = (0x0000003fU & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                              >> 2U));
        __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_10) 
         & ((0x02ffU < (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
            & (0x0400U > (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))))) {
        __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0 
            = (0x0000003fU & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                              >> 2U));
        __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9) 
         & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))) {
        __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0 
            = (0x000000ffU & ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                               - (IData)(0x0100U)) 
                              >> 2U));
        __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9) 
         & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12))) {
        __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0 
            = ((0U == vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)
                ? 0U : ((1U & ((~ ((0xffffffffU == vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata) 
                                   | VL_GTS_III(32, 1U, vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata))) 
                               | (1U == vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)))
                         ? 1U : 2U));
        __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0 
            = (0x000000ffU & (((IData)(0x0100U) + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
                              >> 2U));
        __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0 = 1U;
    }
    if (((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5)) 
         & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_en))) {
        __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0 
            = ((1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data))
                ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T
                : ((2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data))
                    ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T_3
                    : vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator));
        __VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0 
            = (0x000000ffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i), 4U) 
                              + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j)));
        __VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__trace_valid = 0U;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_wait_2 = 0U;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__trace_data = 0ULL;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_wait = 0U;
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__launch_next_insn) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_addr 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_pc;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val_valid = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_ascii_instr 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_imm 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs1 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs2 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rd 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_opcode 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word_q 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0_q 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_next = 1U;
    } else {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_ascii_instr 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_imm 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs1 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs2 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rd 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_opcode 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word_q 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0_q 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_next = 0U;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger_q 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_irq_pending = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
                  >> 2U)))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__eoi = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_valid = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_mask = 0xffffffffU;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_timeout = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_trace = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_irq_pending = 0U;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_pending 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_irq_pending;
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger_q) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_ascii_instr 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_opcode 
            = ((3U == (3U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode))
                ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode
                : (0x0000ffffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rd 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rd;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs1 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs2 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_imm 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
                   >> 2U)) | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__ip1_io_trap)))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_valid_insn = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__prefetched_high_word = 0U;
    } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__launch_next_insn) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_valid_insn = 1U;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__prefetched_high_word = 0U;
    }
    if ((4U & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudCounter 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick)
                ? 0U : ((IData)(1U) + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudCounter));
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en) {
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value)));
        }
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en) {
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value)));
        }
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_16 
            = ((((((3U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState)) 
                   & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick))
                   ? 0U : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState)) 
                 << 6U) | ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick) 
                             & (7U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter)))
                             ? 3U : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState)) 
                           << 4U)) | ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick)
                                         ? 2U : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState)) 
                                       << 2U) | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_1)
                                                  ? 1U
                                                  : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_12 
            = (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_13 
            = (2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState));
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState 
            = (3U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_16) 
                     >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState), 1U))));
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_0) {
            if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_1) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter = 0U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg 
                    = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory
                    [vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value];
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_12) 
                             | (~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_13) 
                                   & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick))))))) {
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter)));
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg 
                = (0x0000007fU & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg) 
                                  >> 1U));
        }
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txReg 
            = (1U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_0) 
                     | ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_12)) 
                        & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_13)
                            ? (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg)
                            : ((3U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState)) 
                               | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txReg))))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_15 
            = (1U & ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
                      >> 1U) & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_14 
            = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter 
               == (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv 
                   >> 1U));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT__rxHalfBaudTick 
            = ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick)) 
               & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_14));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_17 
            = (((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_5)
                   ? 0U : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState)) 
                 << 6U) | ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick) 
                             & (7U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter)))
                             ? 3U : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState)) 
                           << 4U)) | ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT__rxHalfBaudTick)
                                         ? (2U & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync)) 
                                                  << 1U))
                                         : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState)) 
                                       << 2U) | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_15)
                                                  ? 1U
                                                  : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState 
            = (3U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_17) 
                     >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState), 1U))));
        if ((1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_2)))) {
            if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_3) {
                if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT__rxHalfBaudTick) 
                     & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync)))) {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter = 0U;
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg = 0U;
                }
            } else if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_4) 
                        & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick))) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter)));
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg 
                    = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync) 
                        << 7U) | (0x0000007fU & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg) 
                                                 >> 1U)));
            }
        }
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter 
            = ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_2) 
                 & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_15)) 
                | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick))
                ? 0U : ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_14)
                         ? ((IData)(1U) + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter)
                         : ((IData)(1U) + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__unnamedblk1__DOT__do_deq 
            = (((0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState)) 
                & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_1)) 
               & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty)));
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__unnamedblk1__DOT__do_deq) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value)));
        }
        if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en;
        }
        if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_gpio_valid) 
             & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
                & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio)))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__gpio__DOT__gpioOut 
                = (0x0000ffffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata);
        }
        if ((1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__last_mem_valid)))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_firstword_reg = 0U;
        }
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_11) 
                & (0U == (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
               & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty)));
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__unnamedblk1__DOT__do_deq) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value)));
        }
        if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en;
        }
        if ((1U & (~ ((((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9)) 
                        | (0U == (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                       | (0x001cU == (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                      | (0x0020U != (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__config_0 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_1 
            = ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state)) 
               & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_5 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT___GEN) 
               & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_lcd_wen));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_2 
            = ((0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter)) 
               & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiClkReg));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_3 
            = (0U == (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_4 
            = (4U == (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_6 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_3) 
               | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_4));
        if ((1U & (~ (((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_5)) 
                       | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_6)) 
                      | (0x0cU != (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter 
            = ((0U != (0x0000003fU & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter) 
                                      >> 2U))) ? 0U
                : (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiClkReg 
            = ((0U != (0x0000003fU & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter) 
                                      >> 2U))) ^ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiClkReg));
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_7 
                = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state) 
                    & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_2)) 
                   & (7U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter)));
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state 
                = ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_7)) 
                   & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state));
            if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state) 
                 & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_2))) {
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiShiftReg 
                    = (0x000000feU & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiShiftReg) 
                                      << 1U));
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter)));
            }
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCS 
                = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_7) 
                   | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCS));
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy 
                = (1U & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_2)) 
                         | (~ (7U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter)))));
        } else {
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state 
                = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid) 
                   | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state));
            if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid) {
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiShiftReg 
                    = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txData;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter = 0U;
            }
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCS 
                = (1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid)));
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy 
                = (1U & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid));
        }
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_1) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiDC 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txIsData;
        }
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_5) {
            if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_3) {
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txData 
                    = (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata);
            } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_4) {
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txData 
                    = (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata);
            }
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txIsData 
                = ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_3)) 
                   & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_4) 
                      | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txIsData)));
        }
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid 
            = ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT___GEN) 
                 & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_lcd_wen)) 
                & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_6)) 
               | ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_1)) 
                  & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_14 
            = (4U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_23 
            = (0U == (0x0000001fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_24 
            = (4U == (0x0000001fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_25 
            = (8U == (0x0000001fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_26 
            = (0x0cU == (0x0000001fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN 
            = (0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_0 
            = (0x35U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_1 
            = (0xf5U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_2 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_0) 
               | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_1));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_3 
            = (1U & ((~ vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg) 
                     | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_2)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_4 
            = (0xebU == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_5 
            = (0x38U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_6 
            = (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClk) 
               & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_8 
            = (7U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_9 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7) 
               & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_8));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_10 
            = (2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_11 
            = (0x17U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_12 
            = (0x0bU == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_13 
            = (3U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_15 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_4) 
               | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_5));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_16 
            = ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN) 
                 | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_6)) 
                | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_10)) 
               | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_13));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_17 
            = ((3U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg)) 
               | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_12));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_18 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_14) 
               & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_19 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_15)
                ? (0x1bU < (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt))
                : (0x1fU == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_20 
            = (5U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_21 
            = ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_6) 
                 | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_10)) 
                | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_13)) 
               | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_14));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_22 
            = (1U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_21) 
                     | (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_20))));
        if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen) 
             & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_23))) {
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg 
                = (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata);
        }
        if ((1U & (~ (((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen)) 
                       | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_23)) 
                      | (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_24)))))) {
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg 
                = (0x00ffffffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata);
        }
        if ((1U & ((((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen)) 
                     | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_23)) 
                    | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_24)) 
                   | (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_25))))) {
            if ((1U & (~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_16) 
                          | (~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_18) 
                                & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_19))))))) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg 
                    = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut;
            }
        } else {
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        if ((1U & (((((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen)) 
                      | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_23)) 
                     | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_24)) 
                    | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_25)) 
                   | (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_26))))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28 
                = (3U & (2U | vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg));
            if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_22) {
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29 
                    = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30 
                    = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg;
            } else {
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29 = 0U;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30 
                    = ((0xfffffffcU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg) 
                       | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28));
            }
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[0U] 
                = ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg 
                    & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_2))
                    ? 0U : vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg);
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[1U] 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[2U] 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[3U] 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[4U] 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[5U] 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[6U] 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[7U] 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29;
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg 
                = (((0U == (0x0000001fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U)))
                     ? 0U : (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                             (((IData)(0x0000001fU) 
                               + (0x000000ffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U))) 
                              >> 5U)] << ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U))))) 
                   | (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                      (7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U) 
                             >> 5U))] >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U))));
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[0U] 
                = ((1U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg)
                    ? ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_0)
                        ? ((0xfffffffcU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg) 
                           | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28))
                        : ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_1)
                            ? ((0xfffffffcU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg) 
                               | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28))
                            : vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg))
                    : vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg);
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[1U] 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[2U] 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[3U] 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[4U] 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[5U] 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[6U] 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[7U] 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30;
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg 
                = (((0U == (0x0000001fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U)))
                     ? 0U : (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                             (((IData)(0x0000001fU) 
                               + (0x000000ffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U))) 
                              >> 5U)] << ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U))))) 
                   | (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                      (7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U) 
                             >> 5U))] >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U))));
        } else {
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg 
                = (1U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg);
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        if ((1U & ((((((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen)) 
                       | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_23)) 
                      | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_24)) 
                     | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_25)) 
                    | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_26)) 
                   | (0x14U != (0x0000001fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))))) {
            if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN) 
                 & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg)) {
                if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_0) {
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg 
                        = (1U | (0xfffffffeU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg));
                } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_1) {
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg = 0U;
                }
            }
        } else {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_27 
            = ((0x00fc0000U & (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state) 
                                << 0x00000015U) | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state) 
                                                   << 0x00000012U))) 
               | ((((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7) 
                      & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_19))
                      ? 5U : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state)) 
                    << 0x0000000cU) | (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_9)
                                         ? 4U : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state)) 
                                       << 9U)) | ((
                                                   (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7) 
                                                     & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_11))
                                                     ? 
                                                    ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_12)
                                                      ? 3U
                                                      : 4U)
                                                     : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state)) 
                                                   << 6U) 
                                                  | ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_9)
                                                        ? 2U
                                                        : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state)) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_3)
                                                         ? (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state)
                                                         : 1U)))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state 
            = ((0x17U >= (0x0000001fU & ((IData)(3U) 
                                         * (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state))))
                ? (7U & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_27 
                         >> (0x0000001fU & ((IData)(3U) 
                                            * (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state)))))
                : 0U);
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn) 
               ^ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClk 
            = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn) 
                & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv))) 
               ^ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClk));
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33 
                = ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg 
                    & (~ (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_0) 
                           | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_1)) 
                          | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_4)))) 
                   & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_5));
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn 
                = (1U & ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg 
                          & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_0))) 
                         & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_1))));
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt = 0U;
            if ((1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_3)))) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                    = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg) 
                       << 0x00000018U);
            }
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg 
                = (1U & (((~ vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg) 
                          | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_0)) 
                         | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_1)));
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OeReg 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OeReg 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33;
        } else {
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn 
                = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_22) 
                   & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn));
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg 
                = ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_21)) 
                   & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_20) 
                      | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg)));
            if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_6) {
                if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7) {
                    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_8) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt = 0U;
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                            = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg 
                               << 8U);
                    } else {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt 
                            = (0x0000003fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt)));
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                            = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                               << 1U);
                    }
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg 
                        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                           >> 0x1fU);
                }
            } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_10) {
                if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7) {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt 
                        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_11)
                            ? 0U : (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt))));
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                        = ((1U & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_11)) 
                                  | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_12)))
                            ? (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                               << 1U) : vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg);
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg 
                        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                           >> 0x1fU);
                }
            } else {
                if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_13) {
                    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt 
                            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_8)
                                ? 0U : (0x0000003fU 
                                        & ((IData)(1U) 
                                           + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt))));
                    }
                } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_18) {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt 
                        = (0x0000003fU & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_15)
                                           ? ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_4)
                                               ? ((IData)(4U) 
                                                  + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt))
                                               : ((IData)(4U) 
                                                  + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt)))
                                           : ((IData)(1U) 
                                              + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt))));
                }
                if ((1U & (~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_13) 
                              | (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_18)))))) {
                    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_15) {
                        if ((1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_4)))) {
                            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                                = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                                   << 4U);
                            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg 
                                = (1U & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                                         >> 0x1dU));
                        }
                    } else if ((1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_17)))) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                            = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                               << 1U);
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg 
                            = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                               >> 0x1fU);
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_16) 
                      | (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_18)))))) {
            if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_15) {
                if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_4) {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut 
                        = ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut 
                            << 4U) | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg));
                }
            } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_17) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut 
                    = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut 
                       << 1U);
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_16) 
                       | (~ (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_14) 
                              & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7)) 
                             & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_15)))) 
                      | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_4))))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OutReg 
                = (1U & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                         >> 0x1eU));
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OutReg 
                = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                   >> 0x1fU);
        }
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_15[0U] = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_15[1U] = 1U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_15[2U] = 2U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_15[3U] 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_13 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j) 
               < (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize 
                  - (IData)(1U)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_14 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i) 
               < (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize 
                  - (IData)(1U)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status 
            = (((0U == (0x0000001fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state), 5U)))
                 ? 0U : (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_15[
                         (((IData)(0x0000001fU) + (0x0000007fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state), 5U))) 
                          >> 5U)] << ((IData)(0x00000020U) 
                                      - (0x0000001fU 
                                         & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state), 5U))))) 
               | (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_15[
                  (3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state), 5U) 
                         >> 5U))] >> (0x0000001fU & 
                                      VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state), 5U))));
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN) {
            if ((1U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl)) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles = 0U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i = 0U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j = 0U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k = 0U;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__accumulator = 0U;
            }
        } else {
            if ((1U & (~ ((((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_0)) 
                            | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5)) 
                           | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_13)) 
                          | (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_14)))))) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i)));
            }
            if ((1U & (~ ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_0)) 
                          | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5))))) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j 
                    = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_13)
                        ? (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j)))
                        : 0U);
            }
            if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_0) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles 
                    = ((IData)(1U) + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles);
                if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5) {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k)));
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__accumulator 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__W0_data;
                } else {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k = 0U;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__accumulator = 0U;
                }
            }
        }
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_16 
            = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state) 
                << 6U) | ((((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5) 
                              | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_13)) 
                             | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_14))
                             ? (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)
                             : 2U) << 2U) | ((1U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl)
                                              ? 1U : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state))));
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state 
            = (3U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_16) 
                     >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state), 1U))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_4 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg) 
               & (0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiCounter)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_12 
            = (5U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_19 
            = (0x1fU == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiPosEdge 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg) 
               & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkLast)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge 
            = ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg)) 
               & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkLast));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_5 
            = (0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_6 
            = (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_7 
            = (7U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_8 
            = (0x0bU == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_9 
            = ((3U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg)) 
               | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_8));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_10 
            = (2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_11 
            = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_9) 
                | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_10)) 
               | (0x20U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_13 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge) 
               & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_7));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_14 
            = (2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_15 
            = (0x17U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_16 
            = (3U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_17 
            = (4U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_18 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_9) 
               | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_12));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_20 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiPosEdge) 
               & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_19));
        if ((1U & ((((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT___GEN)) 
                     | (0U == (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                    | (4U == (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                   | (8U != (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))))) {
            if ((1U & (~ (((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_5) 
                             | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_6)) 
                            | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_14)) 
                           | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_16)) 
                          | (~ (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_17) 
                                 & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_18)) 
                                & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_20))))))) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg 
                    = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                       << 1U);
            }
        } else {
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_5) {
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg 
                = ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq)) 
                   & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg));
            if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg = 1U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                    = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg) 
                       << 0x00000018U);
            } else {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg = 0U;
            }
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg 
                = (1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq)));
        } else {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_23 
                = (5U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state));
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_24 
                = ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_6) 
                     | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_14)) 
                    | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_16)) 
                   | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_17));
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_25 
                = ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_24)) 
                   & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_23));
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg 
                = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_24) 
                    | (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_23))) 
                   & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg));
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg 
                = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_25) 
                   | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg));
            if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_6) {
                if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge) {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                        = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_7) 
                            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_11))
                            ? (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg 
                               << 8U) : (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                                         << 1U));
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__mosiReg 
                        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                           >> 0x1fU);
                }
            } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_14) {
                if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge) {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                        = ((1U & (((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_15)) 
                                   | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_8)) 
                                  | (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_10))))
                            ? (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                               << 1U) : vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg);
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__mosiReg 
                        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                           >> 0x1fU);
                }
            } else {
                if ((1U & (~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_17)))))) {
                    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_18) {
                        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiPosEdge) {
                            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                                = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                                   << 1U);
                        }
                    } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                            = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                               << 1U);
                    }
                }
                if ((1U & (~ ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_16) 
                                | (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_17))) 
                               | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_18)) 
                              | (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge)))))) {
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__mosiReg 
                        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                           >> 0x1fU);
                }
            }
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg 
                = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_25) 
                   | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg));
        }
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiCounter 
            = ((1U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_4) 
                      | (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg))))
                ? 0U : (0x000000ffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiCounter))));
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg 
            = (1U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_4)
                      ? (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg))
                      : ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg) 
                         & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_21 
            = ((0x00fc0000U & (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state) 
                                << 0x00000015U) | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state) 
                                                   << 0x00000012U))) 
               | ((((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_18)
                       ? (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_20)
                       : ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge) 
                          & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_19)))
                      ? 5U : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state)) 
                    << 0x0000000cU) | (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_13)
                                         ? 4U : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state)) 
                                       << 9U)) | ((
                                                   (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge) 
                                                     & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_15))
                                                     ? 
                                                    ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_8)
                                                      ? 3U
                                                      : 4U)
                                                     : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state)) 
                                                   << 6U) 
                                                  | ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_13)
                                                        ? 
                                                       ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_11)
                                                         ? 2U
                                                         : 
                                                        (4U 
                                                         | (1U 
                                                            & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_12)))))
                                                        : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state)) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq)
                                                         ? 1U
                                                         : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state))))));
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state 
            = ((0x17U >= (0x0000001fU & ((IData)(3U) 
                                         * (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state))))
                ? (7U & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_21 
                         >> (0x0000001fU & ((IData)(3U) 
                                            * (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state)))))
                : 0U);
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_22 
            = (((QData)((IData)(((0xffffff00U & (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter) 
                                                  << 0x00000018U) 
                                                 | (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter) 
                                                     << 0x00000010U) 
                                                    | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter) 
                                                       << 8U)))) 
                                 | (0x000000ffU & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiPosEdge)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter))
                                                     : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter))
                                                    : 
                                                   ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter))
                                                     : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter))))))) 
                << 0x00000020U) | (QData)((IData)((
                                                   (((0x0000ff00U 
                                                      & (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge)
                                                           ? 
                                                          ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_7)
                                                            ? 0U
                                                            : 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter)))
                                                           : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge)
                                                            ? 
                                                           ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_15)
                                                             ? 0U
                                                             : 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter)))
                                                            : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter)))) 
                                                    << 0x00000010U) 
                                                   | ((0x0000ff00U 
                                                       & (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge)
                                                            ? 
                                                           (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_7) 
                                                             & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_11) 
                                                                | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_12)))
                                                             ? 0U
                                                             : 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter)))
                                                            : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter)) 
                                                          << 8U)) 
                                                      | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq)
                                                          ? 0U
                                                          : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter)))))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter 
            = (0x000000ffU & (IData)((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_22 
                                      >> (0x0000003fU 
                                          & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state), 3U)))));
    } else {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudCounter = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txReg = 1U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__gpio__DOT__gpioOut = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_firstword_reg = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__config_0 = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiShiftReg = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txIsData = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiClkReg = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiDC = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCS = 1U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txData = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClk = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg = 1U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OutReg = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OeReg = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OutReg = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OeReg = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__accumulator = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiCounter = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg = 1U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__mosiReg = 0U;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkLast 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg;
    if (__VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory[__VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0] 
            = __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0;
    }
    if (__VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[__VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg;
    if (__VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[__VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0] 
            = __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0;
    }
    if (__VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[__VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value;
    if (__VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory[__VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0] 
            = __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0;
    }
    if (__VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory[__VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0] 
            = __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0;
    }
    if (__VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory[__VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0] 
            = __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0;
    }
    if (__VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory[__VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0] 
            = __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg;
    if (__VdlySet__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory[__VdlyDim0__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0] 
            = __VdlyVal__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_2 
        = (0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_3 
        = (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_4 
        = (2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6 
        = ((0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState)) 
           | ((1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState)) 
              | (2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState))));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync_REG;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_0 
        = (0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__last_mem_valid 
        = ((1U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
                  >> 2U)) && ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
                              & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_ready))));
    if ((1U & ((~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
                   >> 2U)) | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__ip1_io_trap)))) {
        if ((1U & (~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
                      >> 2U)))) {
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state = 0U;
        }
        if ((1U & ((~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
                       >> 2U)) | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_ready)))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid = 0U;
        }
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_read) 
             | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb 
                = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb) 
                   & (- (IData)((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) {
            if ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch) 
                  | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst)) 
                 | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata))) {
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid = 1U;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_instr 
                    = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch) 
                       | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst));
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb = 0U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state = 1U;
            }
            if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata) {
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid = 1U;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_instr = 0U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) {
            if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer) {
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid = 0U;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_secondword = 0U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state 
                    = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
                        | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata))
                        ? 0U : 3U);
            }
        } else if ((2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) {
            if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer) {
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid = 0U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) {
            if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state = 0U;
            }
        }
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value));
    if ((4U & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m))) {
        if ((1U & (~ (((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_8)) 
                       | (0U == (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                      | (8U != (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        if ((1U & (~ ((((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_8)) 
                        | (0U == (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                       | (8U == (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                      | (0x0cU != (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_15 
            = ((2U > vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize) 
               | (8U < vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_16 
            = (1U & ((~ vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl) 
                     | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_15)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_17 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__isLastElement 
            = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i) 
                == (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize 
                    - (IData)(1U))) & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_17 
                                       == (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize 
                                           - (IData)(1U))));
        if ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid) 
              & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_wen)) 
             & (0U == (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))) {
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        } else if ((1U & (~ ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN) 
                               | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0)) 
                              | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_6)) 
                             | (~ (3U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state))))))) {
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl = 0U;
        }
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_18[0U] 
            = ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl 
                & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_15))
                ? 3U : 0U);
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_18[1U] 
            = (IData)((1ULL | ((QData)((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status)) 
                               << 0x00000020U)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_18[2U] 
            = (IData)(((1ULL | ((QData)((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status)) 
                                << 0x00000020U)) >> 0x00000020U));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_18[3U] 
            = ((1U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_6) 
                      | (~ (3U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)))))
                ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status
                : 2U);
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status 
            = (((0U == (0x0000001fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state), 5U)))
                 ? 0U : (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_18[
                         (((IData)(0x0000001fU) + (0x0000007fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state), 5U))) 
                          >> 5U)] << ((IData)(0x00000020U) 
                                      - (0x0000001fU 
                                         & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state), 5U))))) 
               | (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_18[
                  (3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state), 5U) 
                         >> 5U))] >> (0x0000001fU & 
                                      VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state), 5U))));
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN) {
            if ((1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_16)))) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles = 0U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped = 0U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i = 0U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j = 0U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k = 0U;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator = 0U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter = 0U;
            }
        } else {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_20 
                = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_17 
                   < (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize 
                      - (IData)(1U)));
            if ((1U & (~ (((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0)) 
                           | (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data))) 
                          | (2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data)))))) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped 
                    = ((IData)(1U) + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped);
            }
            if ((1U & (~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0) 
                          | (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_6)))))) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter)));
            }
            if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles 
                    = ((IData)(1U) + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles);
                if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5) {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k)));
                    if ((1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data))) {
                        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator 
                            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T;
                    } else if ((2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data))) {
                        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator 
                            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T_3;
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__isLastElement)))) {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k = 0U;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator = 0U;
                }
            }
            if ((1U & (~ ((((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0)) 
                            | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5)) 
                           | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__isLastElement)) 
                          | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_20))))) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i)));
            }
            if ((1U & (~ (((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0)) 
                           | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5)) 
                          | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__isLastElement))))) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j 
                    = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_20)
                        ? (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j)))
                        : 0U);
            }
        }
        if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN) 
             & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl)) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__errorCode 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_15;
        }
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_19 
            = ((((2U < (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter))
                  ? 3U : (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
                << 4U) | ((((1U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5) 
                                   | (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__isLastElement))))
                             ? (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)
                             : 2U) << 2U) | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_16)
                                              ? (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)
                                              : 1U)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state 
            = (3U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_19) 
                     >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state), 1U))));
    } else {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv = 0x00000364U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__errorCode = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter = 0U;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full)) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full)) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match));
    if ((4U & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m))) {
        if ((1U & (~ (((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_10)) 
                       | (0U == (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                      | (0x001cU != (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        if ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_valid) 
              & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_wen)) 
             & (0U == (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        } else if ((1U & (~ (((0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)) 
                              | (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state))) 
                             | (2U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)))))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl = 0U;
        }
    } else {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize = 8U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl = 0U;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync_REG = 1U;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick 
        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudCounter 
           >= (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv 
               - (IData)(1U)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick 
        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter 
           >= (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv 
               - (IData)(1U)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN 
        = (0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0 
        = (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_6 
        = (2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_en 
        = ((0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
           & (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_opcode;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs1;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k) 
           < (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize 
              - (IData)(1U)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN 
        = (0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_0 
        = (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en 
        = ((0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)) 
           & (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_1 
        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
           & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty)) 
              & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_5 
        = ((3U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState)) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick));
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_en) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory
            [(0x000000ffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k), 4U) 
                             + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j)))];
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory
            [(0x000000ffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i), 4U) 
                             + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k)))];
    } else {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data = 0U;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__W0_data 
        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__accumulator 
           + (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en)
                ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory
               [(0x0000003fU & ((0x00000038U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i) 
                                                << 3U)) 
                                + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k)))]
                : 0U) * ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en)
                          ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory
                         [(0x0000003fU & ((0x00000038U 
                                           & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k) 
                                              << 3U)) 
                                          + (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j)))]
                          : 0U)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_5) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T 
        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data 
           + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator);
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T_3 
        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator 
           - vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data);
    if ((4U & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m))) {
        if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT___GEN) 
             & (0U == (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg 
                = (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata);
        }
        if ((1U & (~ (((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT___GEN)) 
                       | (0U == (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                      | (4U != (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg 
                = (0x00ffffffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata);
        }
        if ((1U & (~ (((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9)) 
                       | (0U == (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                      | (0x001cU != (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize 
                = (((0U != (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata 
                            >> 1U)) & (9U > vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata))
                    ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata
                    : 8U);
        }
    } else {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize = 8U;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k) 
           < (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize 
              - (IData)(1U)));
    if ((1U & (~ ((~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
                      >> 2U)) | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__ip1_io_trap))))) {
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata;
        }
        if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_read) 
             | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch) 
                    | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst))
                    ? (0xfffffffcU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_pc)
                    : (0xfffffffcU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1));
        }
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
           & (0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren 
        = ((~ (0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb))) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match) 
               & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full))) 
           & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6)) 
              & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11 
        = ((0x04ffU < (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
           & (0x0600U > (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14 
        = ((0x04ffU < (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
           & (0x0900U > (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11 
        = ((0U != (0x0000000fU & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                  >> 8U))) & (0x0300U 
                                              > (0x00000fffU 
                                                 & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram 
        = ((0U != (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                   >> 0x0000001aU)) & (0x04800000U 
                                       > vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio 
        = ((0x2001ffffU < vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
           & (0x20030000U > vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12 
        = ((0x02ffU < (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
           & (0x0500U > (0x00000fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash 
        = ((0x2fffffffU < vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
           & (0x31000000U > vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd 
        = ((0x2000ffffU < vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
           & (0x20020000U > vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact 
        = ((0U != (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                   >> 0x0000001cU)) & (0x10001000U 
                                       > vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart 
        = ((0U != (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                   >> 0x0000001dU)) & (0x20010000U 
                                       > vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet 
        = ((0x10000fffU < vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
           & (0x10002000U > vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__ip1_io_trap = 0U;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh = 0U;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out = 0U;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rinst = 0U;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rdata = 0U;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_wdata = 0U;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger_q 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger;
    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger = 0U;
    if ((4U & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m))) {
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle 
            = (1ULL + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle);
        if (((((((((0x80U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) 
                | (8U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) 
               | (4U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) 
              | (2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) 
             | (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) {
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__ip1_io_trap = 1U;
            } else if ((0x40U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__do_waitirq))));
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = 0U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu = 0U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh = 0U;
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb = 0U;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_rd 
                    = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rd;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_compr 
                    = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__compressed_instr;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc 
                    = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc;
                if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch) {
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc 
                        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_stalu)
                                               ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_q
                                               : vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out))
                            : vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc);
                }
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc 
                    = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc 
                    = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store = 0U;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_stalu = 0U;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch = 0U;
                if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger) {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr 
                        = (1ULL + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr);
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_delay 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_active;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc 
                        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc 
                           + ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__compressed_instr)
                               ? 2U : 4U));
                    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = 1U;
                        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc 
                            = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc 
                               + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j);
                        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch = 1U;
                    } else {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = 0U;
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_retirq))));
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 = 0U;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 = 0U;
                if ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_trap) 
                      | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                     | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal))) {
                    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_trap) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x80U;
                    } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle) {
                            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                                = (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle);
                        } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh) {
                            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                                = (IData)((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle 
                                           >> 0x20U));
                        } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr) {
                            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                                = (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr);
                        } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh) {
                            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                                = (IData)((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr 
                                           >> 0x20U));
                        }
                        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store = 1U;
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x40U;
                    } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui)
                                ? 0U : vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc);
                        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm;
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst 
                            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch;
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 8U;
                    } else {
                        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store = 1U;
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__timer;
                        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val 
                            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x40U;
                        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__timer 
                            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    }
                } else if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_trap)))) {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 1U;
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slli_srli_srai) {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2;
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 4U;
                } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid = 1U;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm;
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch;
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 8U;
                } else {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh 
                        = (0x0000001fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2);
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val_valid = 1U;
                    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 2U;
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = 1U;
                    } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sll_srl_sra) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 4U;
                    } else {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst 
                            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch;
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh 
                    = (0x0000001fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2);
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                    = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val 
                    = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2;
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val_valid = 1U;
                if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw) {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 2U;
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sll_srl_sra) {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 4U;
                } else {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch;
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) {
                __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                    = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc 
                       + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm);
                if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_rd = 0U;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0;
                    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0) {
                        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rinst = 1U;
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store = 1U;
                    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_stalu = 1U;
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) {
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh))) {
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1;
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst 
                        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch;
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh))) {
                    if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slli) 
                         | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll))) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srli) 
                                | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl))) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai) 
                                | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra))) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1, 4U);
                    }
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh 
                        = (0x0000001fU & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh) 
                                          - (IData)(4U)));
                } else {
                    if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slli) 
                         | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll))) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srli) 
                                | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl))) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai) 
                                | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra))) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1, 1U);
                    }
                    __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh 
                        = (0x0000001fU & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh) 
                                          - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata)))) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                               + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm);
                        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_wdata = 1U;
                        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sb) {
                            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = 2U;
                        } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sh) {
                            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sw) {
                            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done))) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x40U;
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger = 1U;
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done))) {
                        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu) {
                            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word;
                        } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh) {
                            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0x0000ffffU 
                                                 & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word));
                        } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb) {
                            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0x000000ffU 
                                                 & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word));
                        }
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger = 1U;
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger = 1U;
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata)))) {
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                               + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm);
                        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lb) 
                             | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lbu))) {
                            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lh) 
                                    | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lhu))) {
                            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lw) {
                            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = 0U;
                        }
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu 
                            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lbu_lhu_lw;
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh 
                            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lh;
                        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb 
                            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lb;
                    }
                }
            }
        }
    } else {
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle = 0ULL;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr = 0ULL;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__timer = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_stalu = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_delay = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x40U;
    }
    if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_insn = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x0000007fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)) 
                & (~ (0U != (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                             >> 0x15U)))) & (~ (0U 
                                                != 
                                                (0x00001fffU 
                                                 & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                    >> 7U)))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_getq = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_setq = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_maskirq = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_timer = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_fence 
            = ((0x0fU == (0x0000007fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)) 
               & (~ (0U != (7U & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                  >> 0x0cU)))));
    }
    if ((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
          >> 2U) & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata) 
                    | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize)) 
             & (0U != (3U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)))) {
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x80U;
        }
        if (((1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize)) 
             & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)) {
            __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x80U;
        }
    }
    if (((((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
           >> 2U) & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst)) 
         & (0U != (3U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc)))) {
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x80U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
                   >> 2U)) | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done)))) {
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch = 0U;
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata = 0U;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rinst) {
        __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = 1U;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rdata) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata = 1U;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_wdata) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata = 1U;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc = 0U;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_gpio_valid 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_flash_valid 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_lcd_wen 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT___GEN 
        = ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy)) 
           & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
              & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_wen 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_valid 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_uart_valid 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_wen 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_ready 
        = (1U & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact) 
                 | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet) 
                    | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart) 
                       | ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd)) 
                          | (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy)))))));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr;
    if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_waitirq = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1 
            = (0x0000001fU & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
                              >> 0x0fU));
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1))
            ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs
           [vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1]
            : 0U);
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT___GEN 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_flash_valid) 
           & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
              & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_10 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_valid) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_wen));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12 
        = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact)) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_valid));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_8 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_uart_valid) 
           & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
              & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_11 
        = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart)) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_uart_valid));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_wen));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13 
        = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet)) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__do_waitirq = 0U;
    __Vtableidx1 = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_state[0U] 
        = Vasic_soc_tb__ConstPool__TABLE_h57ed7a03_0
        [__Vtableidx1][0U];
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_state[1U] 
        = Vasic_soc_tb__ConstPool__TABLE_h57ed7a03_0
        [__Vtableidx1][1U];
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_state[2U] 
        = Vasic_soc_tb__ConstPool__TABLE_h57ed7a03_0
        [__Vtableidx1][2U];
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_state[3U] 
        = Vasic_soc_tb__ConstPool__TABLE_h57ed7a03_0
        [__Vtableidx1][3U];
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_write = 0U;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_pc 
        = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch) 
            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store))
            ? (0xfffffffeU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out)
            : vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc);
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_q 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out;
    if ((0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb = 0x0fU;
    } else if ((1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata 
            = ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb 
            = ((2U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)
                ? 0x0cU : 3U);
    } else if ((2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata 
            = ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)));
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_eq 
        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
           == vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1, vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_ltu 
        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
           < vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lbu) 
           | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lhu) 
              | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lw)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq 
        = ((~ ((0U == (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
               | ((4U == (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
                  | (8U == (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))))) 
           & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT___GEN) 
              & ((0x0cU == (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
                 & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_8) 
           & (0U == (0x000000ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data 
        = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12))
            ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory
           [(0x000000ffU & (((IData)(0x0100U) + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
                            >> 2U))] : 0U);
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full)) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__io_enq_valid));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) {
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_write = 1U;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_wrdata 
                = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc 
                   + ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch)))) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_write = 1U;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_stalu)
                    ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_q
                    : vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out);
        }
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rd;
    if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__compressed_instr = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rd 
            = (0x0000001fU & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
                              >> 7U));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2 
            = (0x0000001fU & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
                              >> 0x14U));
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2))
            ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs
           [vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2]
            : 0U);
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs2;
    if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle 
            = ((IData)((0xc0002073U == (0xfffff07fU 
                                        & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))) 
               | (IData)((0xc0102073U == (0xfffff07fU 
                                          & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh 
            = ((IData)((0xc8002073U == (0xfffff07fU 
                                        & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))) 
               | (IData)((0xc8102073U == (0xfffff07fU 
                                          & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr 
            = (IData)((0xc0202073U == (0xfffff07fU 
                                       & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh 
            = (IData)((0xc8202073U == (0xfffff07fU 
                                       & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle) 
           | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr) 
                 | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh))));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui) 
           | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc) 
              | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui) 
           | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc) 
              | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal) 
                 | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr) 
                    | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_addi) 
                       | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_add) 
                          | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub)))))));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slti_blt_slt 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti) 
           | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_blt) 
              | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu) 
           | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bltu) 
              | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_compare 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
           | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti) 
              | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt) 
                 | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu) 
                    | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu)))));
    if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_beq 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bne 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00001000U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_blt 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00004000U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bge 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00005000U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bltu 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00006000U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bgeu 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00007000U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lb 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lh 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00001000U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lw 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00002000U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lbu 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00004000U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lhu 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00005000U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sb 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw) 
               & (0U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sh 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw) 
               & (0x00001000U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sw 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw) 
               & (0x00002000U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_addi 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0x00002000U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0x00003000U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xori 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0x00004000U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ori 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0x00006000U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_andi 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0x00007000U == (0x00007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slli 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0x00001000U == (0xfe007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srli 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0x00005000U == (0xfe007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slli_srli_srai 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr) 
               | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                   >> 0x0cU))) | ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                       >> 0x0cU))) 
                                                  | ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                          >> 0x0cU))) 
                                                     | ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                             >> 0x0cU))) 
                                                        | ((6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                                >> 0x0cU))) 
                                                           | (7U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                                  >> 0x0cU))))))))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_compare = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal)
                ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j
                : (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui) 
                    | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc))
                    ? VL_SHIFTL_III(32,32,32, (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                               >> 0x0cU), 0x0000000cU)
                    : (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr) 
                        | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                >> 0x14U))
                        : ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((((2U 
                                                & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                   >> 0x0000001eU)) 
                                               | (1U 
                                                  & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                     >> 7U))) 
                                              << 0x0000000bU) 
                                             | ((0x000007e0U 
                                                 & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                    >> 0x00000014U)) 
                                                | (0x0000001eU 
                                                   & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                      >> 7U)))))
                            : ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0x00000fe0U 
                                                  & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_add 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0U == (0xfe007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x40000000U == (0xfe007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x00001000U == (0xfe007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x00002000U == (0xfe007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x00003000U == (0xfe007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xor 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x00004000U == (0xfe007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x00005000U == (0xfe007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_or 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x00006000U == (0xfe007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_and 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x00007000U == (0xfe007000U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sll_srl_sra 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))))));
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata;
    }
    if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_retirq = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm 
            = (0x13U == (0x0000007fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x0000007fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw 
            = (0x23U == (0x0000007fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j 
            = ((0x000fffffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x001ffffeU 
                                               & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
                                                  >> 0x0000000bU)))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j) 
               | (0x000007feU & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
                                                   >> 0x0000000bU))) 
                                 >> 9U)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j) 
               | (0x00000800U & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
                                                   >> 0x0000000bU))) 
                                 << 2U)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j) 
               | (0x000ff000U & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
                                                   >> 0x0000000bU))) 
                                 << 0x0000000bU)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x001ffffeU 
                                            & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
                                               >> 0x0000000bU)))));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x0000007fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc 
            = (0x17U == (0x0000007fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui 
            = (0x37U == (0x0000007fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal 
            = (0x6fU == (0x0000007fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr 
            = (IData)((0x00000067U == (0x0000707fU 
                                       & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg 
            = (0x33U == (0x0000007fU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle));
    }
    if ((1U & (~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
                  >> 2U)))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_state = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_fence = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_active = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_compare = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_beq = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bne = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_blt = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bge = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bltu = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bgeu = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_addi = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xori = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ori = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_andi = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_add = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xor = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_or = 0U;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_and = 0U;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_imm;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state)) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 = 0U;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out = 0U;
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_beq) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_eq;
    } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bne) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_eq)));
    } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bge) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_lts)));
    } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bgeu) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_ltu)));
    } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slti_blt_slt) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_lts;
    } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_ltu;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out 
            = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub)
                ? (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                   - vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2)
                : (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                   + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2));
    } else if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_compare) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xori) 
                | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xor))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out 
            = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
               ^ vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ori) 
                | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_or))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out 
            = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
               | vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_andi) 
                | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_and))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out 
            = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
               & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui) 
                    | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc) 
                       | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal) 
                          | (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr) 
                              | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_beq) 
                                 | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bne) 
                                    | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_blt) 
                                       | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bge) 
                                          | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bltu) 
                                             | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bgeu) 
                                                | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lb) 
                                                   | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lh) 
                                                      | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lw) 
                                                         | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lbu) 
                                                            | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lhu) 
                                                               | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sb) 
                                                                  | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sh) 
                                                                     | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sw) 
                                                                        | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_addi) 
                                                                           | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti) 
                                                                              | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt) 
                                                                                | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu))))))))))))))))))))))))))))) 
                             | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xor) 
                                | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl) 
                                   | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra) 
                                      | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_or) 
                                         | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_and) 
                                            | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle) 
                                               | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh) 
                                                  | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr) 
                                                     | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh) 
                                                        | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_fence) 
                                                           | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_getq) 
                                                              | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_setq) 
                                                                 | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_retirq) 
                                                                    | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_maskirq) 
                                                                       | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_timer) 
                                                                          | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_waitirq))))))))))))))))))))));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000006c7569ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000006175697063ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000006a616cULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x000000006a616c72ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_beq) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000626571ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bne) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000626e65ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_blt) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000626c74ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bge) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000626765ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bltu) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000626c7475ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bgeu) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000062676575ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lb) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000006c62ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lh) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000006c68ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lw) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000006c77ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lbu) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000006c6275ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lhu) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000006c6875ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sb) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000007362ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sh) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000007368ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sw) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000007377ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_addi) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000061646469ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000736c7469ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x000000736c746975ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xori) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000786f7269ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ori) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000006f7269ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_andi) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000616e6469ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slli) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000736c6c69ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srli) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000073726c69ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000073726169ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_add) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000616464ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000737562ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000736c6cULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000736c74ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000736c7475ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xor) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000786f72ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x000000000073726cULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000737261ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_or) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000006f72ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_and) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000616e64ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0072646379636c65ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x007264696e737472ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_fence) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000066656e6365ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_getq) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000067657471ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_setq) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000073657471ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_retirq) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000726574697271ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_maskirq) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x006d61736b697271ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_waitirq) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0077616974697271ULL;
    }
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_timer) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000074696d6572ULL;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_ready) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_ascii_instr;
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_next) {
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_opcode;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs1;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rd;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs2;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_imm;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode))
                    ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode));
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rd;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst 
        = __Vdly__asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT____VdfgRegularize_h233421b0_0_0 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
           | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata)));
}

void Vasic_soc_tb___024root___nba_sequent__TOP__2(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___nba_sequent__TOP__2\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m 
        = vlSelfRef.__Vdly__asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m;
}

void Vasic_soc_tb___024root___nba_comb__TOP__1(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___nba_comb__TOP__1\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write 
        = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
            >> 2U) & ((~ (0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) 
                      & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__prefetched_high_word)))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_state))) 
               | (~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
                     >> 2U))))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_read 
        = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
            >> 2U) & ((~ (0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) 
                      & ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
                         | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch) 
                            | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata)))));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done 
        = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
            >> 2U) & (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer) 
                       & ((0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state)) 
                          & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT____VdfgRegularize_h233421b0_0_0))) 
                      | ((3U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state)) 
                         & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst))));
}

void Vasic_soc_tb___024root___eval_nba(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval_nba\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vasic_soc_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vasic_soc_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vasic_soc_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vasic_soc_tb___024root___act_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vasic_soc_tb___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

void Vasic_soc_tb___024root___timing_commit(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___timing_commit\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hb283cd2a__0.commit(
                                                   "@(posedge asic_soc_tb.clk)");
    }
}

void Vasic_soc_tb___024root___timing_resume(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___timing_resume\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb283cd2a__0.resume(
                                                   "@(posedge asic_soc_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vasic_soc_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vasic_soc_tb___024root___eval_phase__act(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval_phase__act\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vasic_soc_tb___024root___eval_triggers__act(vlSelf);
    Vasic_soc_tb___024root___timing_commit(vlSelf);
    Vasic_soc_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vasic_soc_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vasic_soc_tb___024root___timing_resume(vlSelf);
        Vasic_soc_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vasic_soc_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vasic_soc_tb___024root___eval_phase__nba(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval_phase__nba\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vasic_soc_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vasic_soc_tb___024root___eval_nba(vlSelf);
        Vasic_soc_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vasic_soc_tb___024root___eval(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vasic_soc_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("asic_soc_tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vasic_soc_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("asic_soc_tb.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vasic_soc_tb___024root___eval_phase__act(vlSelf));
    } while (Vasic_soc_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vasic_soc_tb___024root___eval_debug_assertions(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval_debug_assertions\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

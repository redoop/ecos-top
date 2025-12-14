// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_edge_ai_tb_fixed.h for the primary calling header

#include "Vsimple_edge_ai_tb_fixed__pch.h"

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root___eval_initial__TOP(Vsimple_edge_ai_tb_fixed___024root* vlSelf);
VlCoroutine Vsimple_edge_ai_tb_fixed___024root___eval_initial__TOP__Vtiming__0(Vsimple_edge_ai_tb_fixed___024root* vlSelf);
VlCoroutine Vsimple_edge_ai_tb_fixed___024root___eval_initial__TOP__Vtiming__1(Vsimple_edge_ai_tb_fixed___024root* vlSelf);

void Vsimple_edge_ai_tb_fixed___024root___eval_initial(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval_initial\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsimple_edge_ai_tb_fixed___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vsimple_edge_ai_tb_fixed___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsimple_edge_ai_tb_fixed___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vsimple_edge_ai_tb_fixed___024root___eval_initial__TOP__Vtiming__0(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "simple_edge_ai_tb_fixed.sv", 
                                             67);
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__clk)));
    }
}

VlCoroutine Vsimple_edge_ai_tb_fixed___024root___eval_initial__TOP__Vtiming__1(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ simple_edge_ai_tb_fixed__DOT__unnamedblk1_1__DOT____Vrepeat0;
    simple_edge_ai_tb_fixed__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n = 0U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__uart_rx = 1U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__gpio_in = 0U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__flash_spi_miso = 0U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__psram_spi_miso = 0U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__psram_spi_sio2_in = 0U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__psram_spi_sio3_in = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "simple_edge_ai_tb_fixed.sv", 
                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000f4240ULL, 
                                         nullptr, "simple_edge_ai_tb_fixed.sv", 
                                         83);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    simple_edge_ai_tb_fixed__DOT__unnamedblk1_1__DOT____Vrepeat0 = 8U;
    while (VL_LTS_III(32, 0U, simple_edge_ai_tb_fixed__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__uart_rx = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                             nullptr, 
                                             "simple_edge_ai_tb_fixed.sv", 
                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__uart_rx = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                             nullptr, 
                                             "simple_edge_ai_tb_fixed.sv", 
                                             86);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        simple_edge_ai_tb_fixed__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (simple_edge_ai_tb_fixed__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000001e8480ULL, 
                                         nullptr, "simple_edge_ai_tb_fixed.sv", 
                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__gpio_in = 0xaaaaU;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000f4240ULL, 
                                         nullptr, "simple_edge_ai_tb_fixed.sv", 
                                         92);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__gpio_in = 0x5555U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000989680ULL, 
                                         nullptr, "simple_edge_ai_tb_fixed.sv", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("simple_edge_ai_tb_fixed.sv", 95, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vsimple_edge_ai_tb_fixed___024root___eval_triggers__act(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval_triggers__act\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__simple_edge_ai_tb_fixed__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__simple_edge_ai_tb_fixed__DOT__clk__0 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple_edge_ai_tb_fixed___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vsimple_edge_ai_tb_fixed___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___trigger_anySet__act\n"); );
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

void Vsimple_edge_ai_tb_fixed___024root___act_sequent__TOP__0(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___act_sequent__TOP__0\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) 
           & ((~ (0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) 
              & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__prefetched_high_word)))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n))))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) 
           & (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer) 
               & ((0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state)) 
                  & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT____VdfgRegularize_h233421b0_0_0))) 
              | ((3U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state)) 
                 & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst))));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_read 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) 
           & ((~ (0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) 
              & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
                 | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch) 
                    | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata)))));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact)
            ? ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12)
                ? ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11)
                    ? (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12) 
                        & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11))
                        ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory
                       [(0x0000003fU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                        >> 2U))] : 0U)
                    : ((0U == (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                        ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl
                        : ((4U == (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                            ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status
                            : ((0x001cU == (0x00000fffU 
                                            & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize
                                : ((0x0028U == (0x00000fffU 
                                                & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                    ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles
                                    : 0U))))) : 0U)
            : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet)
                ? ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13)
                    ? ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14)
                        ? (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14))
                            ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory
                           [(0x000000ffU & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                             - (IData)(0x0100U)) 
                                            >> 2U))]
                            : 0U) : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12)
                                      ? ((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))
                                          ? 0U : ((1U 
                                                   == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))
                                                   ? 1U
                                                   : 
                                                  (- (IData)(
                                                             (2U 
                                                              == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))))))
                                      : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11)
                                          ? (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                                              & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))
                                              ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory
                                             [(0x000000ffU 
                                               & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                                   - (IData)(0x0100U)) 
                                                  >> 2U))]
                                              : 0U)
                                          : ((0U == 
                                              (0x00000fffU 
                                               & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                              ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl
                                              : ((4U 
                                                  == 
                                                  (0x00000fffU 
                                                   & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                  ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status
                                                  : 
                                                 ((0x001cU 
                                                   == 
                                                   (0x00000fffU 
                                                    & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                   ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize
                                                   : 
                                                  ((0x0020U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                    ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__config_0
                                                    : 
                                                   ((0x0028U 
                                                     == 
                                                     (0x00000fffU 
                                                      & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                     ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles
                                                     : 
                                                    ((0x002cU 
                                                      == 
                                                      (0x00000fffU 
                                                       & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                      ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped
                                                      : 
                                                     ((0x0030U 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                       ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__errorCode
                                                       : 0U))))))))))
                    : 0U) : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart)
                              ? ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_11)
                                  ? ((0U == (0x000000ffU 
                                             & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                      ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory
                                     [vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value]
                                      : ((4U == (0x000000ffU 
                                                 & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                          ? ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full) 
                                                 << 2U)) 
                                             | ((2U 
                                                 & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty)) 
                                                    << 1U)) 
                                                | (0U 
                                                   != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState))))
                                          : ((8U == 
                                              (0x000000ffU 
                                               & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                              ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control
                                              : ((0x0cU 
                                                  == 
                                                  (0x000000ffU 
                                                   & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                  ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv
                                                  : 0U))))
                                  : 0U) : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd)
                                            ? (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT___GEN) 
                                                & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                                   & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd)))
                                                ? (
                                                   (8U 
                                                    == 
                                                    (0x000000ffU 
                                                     & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                    ? 
                                                   (2U 
                                                    | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy))
                                                    : 
                                                   ((0x0cU 
                                                     == 
                                                     (0x000000ffU 
                                                      & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                     ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control
                                                     : 0U))
                                                : 0U)
                                            : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio)
                                                ? (
                                                   (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                                     & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio)) 
                                                    & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_gpio_valid))
                                                    ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__gpio_in)
                                                    : 0U)
                                                : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash)
                                                    ? 
                                                   ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                                      & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash)) 
                                                     & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_flash_valid))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (0x000000ffU 
                                                       & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                      ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg)
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                       ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg
                                                       : 
                                                      ((8U 
                                                        == 
                                                        (0x000000ffU 
                                                         & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                        ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg
                                                        : 
                                                       ((0x0cU 
                                                         == 
                                                         (0x000000ffU 
                                                          & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                         ? 
                                                        (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg) 
                                                          << 2U) 
                                                         | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg) 
                                                            << 1U))
                                                         : 0U))))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram)
                                                     ? 
                                                    (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                                      & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram))
                                                      ? 
                                                     ((0x14U 
                                                       == 
                                                       (0x0000001fU 
                                                        & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                       ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x0000001fU 
                                                         & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                        ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg
                                                        : 
                                                       ((0x0cU 
                                                         == 
                                                         (0x0000001fU 
                                                          & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                         ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg
                                                         : 
                                                        ((8U 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                          ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x0000001fU 
                                                            & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                           ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg
                                                           : 
                                                          ((0U 
                                                            == 
                                                            (0x0000001fU 
                                                             & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                            ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg)
                                                            : 0U))))))
                                                      : 0U)
                                                     : 0U)))))));
    if ((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)
                ? (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
                   >> 0x10U) : (0x0000ffffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata));
    } else if ((2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)
                ? ((1U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)
                    ? (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
                       >> 0x18U) : (0x000000ffU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
                                                   >> 0x10U)))
                : ((1U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)
                    ? (0x000000ffU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
                                      >> 8U)) : (0x000000ffU 
                                                 & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata)));
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer)
            ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata
            : vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q);
}

void Vsimple_edge_ai_tb_fixed___024root___eval_act(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval_act\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vsimple_edge_ai_tb_fixed___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vsimple_edge_ai_tb_fixed__ConstPool__TABLE_h57ed7a03_0;

void Vsimple_edge_ai_tb_fixed___024root___nba_sequent__TOP__0(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___nba_sequent__TOP__0\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state = 0;
    CData/*4:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh = 0;
    IData/*31:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out = 0;
    QData/*63:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle = 0;
    CData/*0:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger = 0;
    CData/*0:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = 0;
    CData/*1:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = 0;
    CData/*0:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu = 0;
    CData/*0:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh = 0;
    CData/*0:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb = 0;
    IData/*31:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc = 0;
    QData/*63:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr = 0;
    CData/*0:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch = 0;
    CData/*7:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0;
    IData/*31:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 = 0;
    IData/*31:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles = 0;
    CData/*3:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i = 0;
    CData/*3:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j = 0;
    CData/*3:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k = 0;
    CData/*1:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state = 0;
    IData/*31:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl = 0;
    IData/*31:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles = 0;
    IData/*31:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped = 0;
    CData/*7:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i = 0;
    CData/*7:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j = 0;
    CData/*7:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k = 0;
    CData/*2:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter = 0;
    CData/*1:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState = 0;
    CData/*3:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter = 0;
    CData/*7:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg = 0;
    CData/*3:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter = 0;
    CData/*7:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg = 0;
    CData/*3:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value = 0;
    CData/*3:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value = 0;
    CData/*7:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter = 0;
    CData/*0:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state = 0;
    CData/*2:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter = 0;
    IData/*31:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg = 0;
    CData/*0:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg = 0;
    CData/*0:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg = 0;
    IData/*31:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg = 0;
    CData/*0:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg = 0;
    CData/*0:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg = 0;
    CData/*2:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state = 0;
    CData/*7:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg = 0;
    IData/*23:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg = 0;
    IData/*31:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg = 0;
    IData/*31:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg = 0;
    IData/*31:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg = 0;
    CData/*0:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv = 0;
    CData/*0:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn = 0;
    CData/*5:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt = 0;
    IData/*31:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg = 0;
    CData/*0:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg = 0;
    CData/*0:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg = 0;
    IData/*31:0*/ __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut = 0;
    IData/*31:0*/ __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0;
    __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0;
    __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0 = 0;
    CData/*0:0*/ __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0 = 0;
    IData/*31:0*/ __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0;
    __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0;
    __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0;
    __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0;
    __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0;
    __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0 = 0;
    CData/*5:0*/ __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0;
    __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0;
    __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0;
    __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0 = 0;
    CData/*1:0*/ __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0;
    __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0;
    __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0;
    __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0;
    __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0;
    __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*3:0*/ __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0;
    __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0 = 0;
    // Body
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0 = 0U;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0 = 0U;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0 = 0U;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0 = 0U;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0 = 0U;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0 = 0U;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0 = 0U;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped;
    __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0 = 0U;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg;
    if (((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5)) 
         & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en))) {
        __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__W0_data;
        __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0 
            = (0x0000003fU & ((0x00000038U & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i) 
                                              << 3U)) 
                              + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j)));
        __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0 
            = ((1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0)) 
                      | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6)))
                ? 0U : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg));
        __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value;
        __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) 
          & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_rd)))) {
        __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_wrdata;
        __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_rd;
        __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0 = 1U;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en) {
        __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__io_enq_valid)
                ? (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)
                : 0U);
        __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value;
        __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_10) 
         & ((0U != (0x0000000fU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                   >> 8U))) & (0x0200U 
                                               > (0x00000fffU 
                                                  & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))))) {
        __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0 
            = (0x0000003fU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                              >> 2U));
        __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_10) 
         & ((0x02ffU < (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
            & (0x0400U > (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))))) {
        __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0 
            = (0x0000003fU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                              >> 2U));
        __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9) 
         & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))) {
        __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0 
            = (0x000000ffU & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                               - (IData)(0x0100U)) 
                              >> 2U));
        __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9) 
         & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12))) {
        __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0 
            = ((0U == vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)
                ? 0U : ((1U & ((~ ((0xffffffffU == vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata) 
                                   | VL_GTS_III(32, 1U, vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata))) 
                               | (1U == vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)))
                         ? 1U : 2U));
        __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0 
            = (0x000000ffU & (((IData)(0x0100U) + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
                              >> 2U));
        __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0 = 1U;
    }
    if (((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5)) 
         & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_en))) {
        __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0 
            = ((1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data))
                ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T
                : ((2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data))
                    ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T_3
                    : vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator));
        __VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0 
            = (0x000000ffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i), 4U) 
                              + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j)));
        __VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0 = 1U;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__trace_valid = 0U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_wait_2 = 0U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__trace_data = 0ULL;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_wait = 0U;
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__launch_next_insn) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_addr 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_pc;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val_valid = 0U;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_ascii_instr 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_imm 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs1 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs2 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rd 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_opcode 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word_q 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0_q 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_irq_pending = 0U;
    if ((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n)))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__eoi = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_valid = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_mask = 0xffffffffU;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_timeout = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_trace = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_irq_pending = 0U;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_pending 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_irq_pending;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_next 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__launch_next_insn;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger_q 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger;
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger_q) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_ascii_instr 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_opcode 
            = ((3U == (3U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode))
                ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode
                : (0x0000ffffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rd 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rd;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs1 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs2 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_imm 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm;
    }
    if ((1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n)) 
               | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__trap)))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_valid_insn = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__prefetched_high_word = 0U;
    } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__launch_next_insn) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_valid_insn = 1U;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__prefetched_high_word = 0U;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudCounter 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick)
                ? 0U : ((IData)(1U) + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudCounter));
        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en) {
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value)));
        }
        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en) {
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value)));
        }
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_16 
            = ((((((3U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState)) 
                   & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick))
                   ? 0U : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState)) 
                 << 6U) | ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick) 
                             & (7U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter)))
                             ? 3U : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState)) 
                           << 4U)) | ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick)
                                         ? 2U : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState)) 
                                       << 2U) | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_1)
                                                  ? 1U
                                                  : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_12 
            = (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_13 
            = (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState));
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState 
            = (3U & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_16) 
                     >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState), 1U))));
        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_0) {
            if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_1) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter = 0U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg 
                    = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory
                    [vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value];
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_12) 
                             | (~ ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_13) 
                                   & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick))))))) {
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter)));
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg 
                = (0x0000007fU & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg) 
                                  >> 1U));
        }
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txReg 
            = (1U & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_0) 
                     | ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_12)) 
                        & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_13)
                            ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg)
                            : ((3U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState)) 
                               | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txReg))))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_15 
            = (1U & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
                      >> 1U) & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_14 
            = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter 
               == (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv 
                   >> 1U));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT__rxHalfBaudTick 
            = ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick)) 
               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_14));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_17 
            = (((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_5)
                   ? 0U : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState)) 
                 << 6U) | ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick) 
                             & (7U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter)))
                             ? 3U : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState)) 
                           << 4U)) | ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT__rxHalfBaudTick)
                                         ? (2U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync)) 
                                                  << 1U))
                                         : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState)) 
                                       << 2U) | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_15)
                                                  ? 1U
                                                  : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState 
            = (3U & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_17) 
                     >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState), 1U))));
        if ((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_2)))) {
            if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_3) {
                if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT__rxHalfBaudTick) 
                     & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync)))) {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter = 0U;
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg = 0U;
                }
            } else if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_4) 
                        & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick))) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter)));
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg 
                    = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync) 
                        << 7U) | (0x0000007fU & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg) 
                                                 >> 1U)));
            }
        }
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter 
            = ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_2) 
                 & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_15)) 
                | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick))
                ? 0U : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_14)
                         ? ((IData)(1U) + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter)
                         : ((IData)(1U) + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__unnamedblk1__DOT__do_deq 
            = (((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState)) 
                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_1)) 
               & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty)));
        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__unnamedblk1__DOT__do_deq) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value)));
        }
        if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en;
        }
        if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_gpio_valid) 
             & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio)))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__gpio__DOT__gpioOut 
                = (0x0000ffffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata);
        }
        if ((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__last_mem_valid)))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_firstword_reg = 0U;
        }
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__unnamedblk1__DOT__do_deq 
            = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_11) 
                & (0U == (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
               & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty)));
        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__unnamedblk1__DOT__do_deq) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value)));
        }
        if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en) 
             != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__unnamedblk1__DOT__do_deq))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en;
        }
        if ((1U & (~ ((((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9)) 
                        | (0U == (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                       | (0x001cU == (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                      | (0x0020U != (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__config_0 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_1 
            = ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state)) 
               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_5 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT___GEN) 
               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_lcd_wen));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_2 
            = ((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter)) 
               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiClkReg));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_3 
            = (0U == (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_4 
            = (4U == (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_6 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_3) 
               | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_4));
        if ((1U & (~ (((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_5)) 
                       | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_6)) 
                      | (0x0cU != (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter 
            = ((0U != (0x0000003fU & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter) 
                                      >> 2U))) ? 0U
                : (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiClkReg 
            = ((0U != (0x0000003fU & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter) 
                                      >> 2U))) ^ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiClkReg));
        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_7 
                = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state) 
                    & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_2)) 
                   & (7U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter)));
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state 
                = ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_7)) 
                   & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state));
            if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state) 
                 & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_2))) {
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiShiftReg 
                    = (0x000000feU & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiShiftReg) 
                                      << 1U));
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter)));
            }
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCS 
                = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_7) 
                   | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCS));
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy 
                = (1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_2)) 
                         | (~ (7U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter)))));
        } else {
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state 
                = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid) 
                   | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state));
            if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid) {
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiShiftReg 
                    = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txData;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter = 0U;
            }
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCS 
                = (1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid)));
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy 
                = (1U & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid));
        }
        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_1) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiDC 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txIsData;
        }
        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_5) {
            if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_3) {
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txData 
                    = (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata);
            } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_4) {
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txData 
                    = (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata);
            }
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txIsData 
                = ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_3)) 
                   & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_4) 
                      | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txIsData)));
        }
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid 
            = ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT___GEN) 
                 & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_lcd_wen)) 
                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_6)) 
               | ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_1)) 
                  & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_14 
            = (4U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_23 
            = (0U == (0x0000001fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_24 
            = (4U == (0x0000001fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_25 
            = (8U == (0x0000001fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_26 
            = (0x0cU == (0x0000001fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN 
            = (0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_0 
            = (0x35U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_1 
            = (0xf5U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_2 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_0) 
               | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_1));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_3 
            = (1U & ((~ vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg) 
                     | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_2)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_4 
            = (0xebU == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_5 
            = (0x38U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_6 
            = (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClk) 
               & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_8 
            = (7U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_9 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7) 
               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_8));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_10 
            = (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_11 
            = (0x17U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_12 
            = (0x0bU == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_13 
            = (3U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_15 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_4) 
               | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_5));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_16 
            = ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN) 
                 | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_6)) 
                | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_10)) 
               | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_13));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_17 
            = ((3U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg)) 
               | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_12));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_18 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_14) 
               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_19 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_15)
                ? (0x1bU < (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt))
                : (0x1fU == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_20 
            = (5U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_21 
            = ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_6) 
                 | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_10)) 
                | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_13)) 
               | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_14));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_22 
            = (1U & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_21) 
                     | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_20))));
        if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen) 
             & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_23))) {
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg 
                = (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata);
        }
        if ((1U & (~ (((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen)) 
                       | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_23)) 
                      | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_24)))))) {
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg 
                = (0x00ffffffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata);
        }
        if ((1U & ((((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen)) 
                     | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_23)) 
                    | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_24)) 
                   | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_25))))) {
            if ((1U & (~ ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_16) 
                          | (~ ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_18) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_19))))))) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg 
                    = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut;
            }
        } else {
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        if ((1U & (((((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen)) 
                      | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_23)) 
                     | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_24)) 
                    | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_25)) 
                   | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_26))))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28 
                = (3U & (2U | vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg));
            if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_22) {
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29 
                    = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30 
                    = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg;
            } else {
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29 = 0U;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30 
                    = ((0xfffffffcU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg) 
                       | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28));
            }
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[0U] 
                = ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg 
                    & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_2))
                    ? 0U : vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg);
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[1U] 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[2U] 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[3U] 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[4U] 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[5U] 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[6U] 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[7U] 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29;
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg 
                = (((0U == (0x0000001fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U)))
                     ? 0U : (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                             (((IData)(0x0000001fU) 
                               + (0x000000ffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U))) 
                              >> 5U)] << ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U))))) 
                   | (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31[
                      (7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U) 
                             >> 5U))] >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U))));
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[0U] 
                = ((1U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg)
                    ? ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_0)
                        ? ((0xfffffffcU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg) 
                           | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28))
                        : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_1)
                            ? ((0xfffffffcU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg) 
                               | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28))
                            : vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg))
                    : vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg);
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[1U] 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[2U] 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[3U] 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[4U] 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[5U] 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[6U] 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[7U] 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30;
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg 
                = (((0U == (0x0000001fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U)))
                     ? 0U : (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                             (((IData)(0x0000001fU) 
                               + (0x000000ffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U))) 
                              >> 5U)] << ((IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U))))) 
                   | (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32[
                      (7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U) 
                             >> 5U))] >> (0x0000001fU 
                                          & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state), 5U))));
        } else {
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg 
                = (1U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg);
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        if ((1U & ((((((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen)) 
                       | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_23)) 
                      | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_24)) 
                     | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_25)) 
                    | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_26)) 
                   | (0x14U != (0x0000001fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))))) {
            if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN) 
                 & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg)) {
                if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_0) {
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg 
                        = (1U | (0xfffffffeU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg));
                } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_1) {
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg = 0U;
                }
            }
        } else {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_27 
            = ((0x00fc0000U & (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state) 
                                << 0x00000015U) | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state) 
                                                   << 0x00000012U))) 
               | ((((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7) 
                      & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_19))
                      ? 5U : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state)) 
                    << 0x0000000cU) | (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_9)
                                         ? 4U : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state)) 
                                       << 9U)) | ((
                                                   (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7) 
                                                     & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_11))
                                                     ? 
                                                    ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_12)
                                                      ? 3U
                                                      : 4U)
                                                     : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state)) 
                                                   << 6U) 
                                                  | ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_9)
                                                        ? 2U
                                                        : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state)) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_3)
                                                         ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state)
                                                         : 1U)))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state 
            = ((0x17U >= (0x0000001fU & ((IData)(3U) 
                                         * (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state))))
                ? (7U & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_27 
                         >> (0x0000001fU & ((IData)(3U) 
                                            * (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state)))))
                : 0U);
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn) 
               ^ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClk 
            = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn) 
                & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv))) 
               ^ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClk));
        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33 
                = ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg 
                    & (~ (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_0) 
                           | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_1)) 
                          | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_4)))) 
                   & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_5));
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn 
                = (1U & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg 
                          & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_0))) 
                         & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_1))));
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt = 0U;
            if ((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_3)))) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                    = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg) 
                       << 0x00000018U);
            }
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg 
                = (1U & (((~ vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg) 
                          | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_0)) 
                         | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_1)));
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OeReg 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OeReg 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33;
        } else {
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn 
                = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_22) 
                   & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn));
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg 
                = ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_21)) 
                   & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_20) 
                      | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg)));
            if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_6) {
                if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7) {
                    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_8) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt = 0U;
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                            = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg 
                               << 8U);
                    } else {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt 
                            = (0x0000003fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt)));
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                            = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                               << 1U);
                    }
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg 
                        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                           >> 0x1fU);
                }
            } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_10) {
                if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7) {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt 
                        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_11)
                            ? 0U : (0x0000003fU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt))));
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                        = ((1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_11)) 
                                  | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_12)))
                            ? (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                               << 1U) : vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg);
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg 
                        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                           >> 0x1fU);
                }
            } else {
                if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_13) {
                    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt 
                            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_8)
                                ? 0U : (0x0000003fU 
                                        & ((IData)(1U) 
                                           + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt))));
                    }
                } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_18) {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt 
                        = (0x0000003fU & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_15)
                                           ? ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_4)
                                               ? ((IData)(4U) 
                                                  + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt))
                                               : ((IData)(4U) 
                                                  + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt)))
                                           : ((IData)(1U) 
                                              + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt))));
                }
                if ((1U & (~ ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_13) 
                              | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_18)))))) {
                    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_15) {
                        if ((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_4)))) {
                            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                                = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                                   << 4U);
                            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg 
                                = (1U & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                                         >> 0x1dU));
                        }
                    } else if ((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_17)))) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                            = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                               << 1U);
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg 
                            = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                               >> 0x1fU);
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_16) 
                      | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_18)))))) {
            if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_15) {
                if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_4) {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut 
                        = ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut 
                            << 4U) | ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__psram_spi_sio3_in) 
                                        << 3U) | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__psram_spi_sio2_in) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__psram_spi_miso) 
                                          << 1U) | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg))));
                }
            } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_17) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut 
                    = ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut 
                        << 1U) | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__psram_spi_miso));
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_16) 
                       | (~ (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_14) 
                              & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7)) 
                             & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_15)))) 
                      | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_4))))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OutReg 
                = (1U & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                         >> 0x1eU));
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OutReg 
                = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
                   >> 0x1fU);
        }
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_15[0U] = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_15[1U] = 1U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_15[2U] = 2U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_15[3U] 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_13 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j) 
               < (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize 
                  - (IData)(1U)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_14 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i) 
               < (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize 
                  - (IData)(1U)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status 
            = (((0U == (0x0000001fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state), 5U)))
                 ? 0U : (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_15[
                         (((IData)(0x0000001fU) + (0x0000007fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state), 5U))) 
                          >> 5U)] << ((IData)(0x00000020U) 
                                      - (0x0000001fU 
                                         & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state), 5U))))) 
               | (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_15[
                  (3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state), 5U) 
                         >> 5U))] >> (0x0000001fU & 
                                      VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state), 5U))));
        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN) {
            if ((1U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl)) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles = 0U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i = 0U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j = 0U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k = 0U;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__accumulator = 0U;
            }
        } else {
            if ((1U & (~ ((((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_0)) 
                            | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5)) 
                           | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_13)) 
                          | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_14)))))) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i)));
            }
            if ((1U & (~ ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_0)) 
                          | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5))))) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j 
                    = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_13)
                        ? (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j)))
                        : 0U);
            }
            if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_0) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles 
                    = ((IData)(1U) + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles);
                if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5) {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k)));
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__accumulator 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__W0_data;
                } else {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k = 0U;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__accumulator = 0U;
                }
            }
        }
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_16 
            = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state) 
                << 6U) | ((((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5) 
                              | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_13)) 
                             | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_14))
                             ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)
                             : 2U) << 2U) | ((1U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl)
                                              ? 1U : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state))));
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state 
            = (3U & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_16) 
                     >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state), 1U))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_4 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg) 
               & (0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiCounter)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_12 
            = (5U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_19 
            = (0x1fU == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiPosEdge 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg) 
               & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkLast)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge 
            = ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg)) 
               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkLast));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_5 
            = (0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_6 
            = (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_7 
            = (7U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_8 
            = (0x0bU == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_9 
            = ((3U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg)) 
               | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_8));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_10 
            = (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_11 
            = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_9) 
                | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_10)) 
               | (0x20U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_13 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge) 
               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_7));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_14 
            = (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_15 
            = (0x17U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_16 
            = (3U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_17 
            = (4U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_18 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_9) 
               | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_12));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_20 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiPosEdge) 
               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_19));
        if ((1U & ((((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT___GEN)) 
                     | (0U == (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                    | (4U == (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                   | (8U != (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))))) {
            if ((1U & (~ (((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_5) 
                             | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_6)) 
                            | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_14)) 
                           | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_16)) 
                          | (~ (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_17) 
                                 & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_18)) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_20))))))) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg 
                    = ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                        << 1U) | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__flash_spi_miso));
            }
        } else {
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_5) {
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg 
                = ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq)) 
                   & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg));
            if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg = 1U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                    = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg) 
                       << 0x00000018U);
            } else {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg = 0U;
            }
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg 
                = (1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq)));
        } else {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_23 
                = (5U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state));
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_24 
                = ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_6) 
                     | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_14)) 
                    | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_16)) 
                   | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_17));
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_25 
                = ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_24)) 
                   & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_23));
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg 
                = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_24) 
                    | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_23))) 
                   & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg));
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg 
                = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_25) 
                   | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg));
            if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_6) {
                if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge) {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                        = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_7) 
                            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_11))
                            ? (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg 
                               << 8U) : (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                                         << 1U));
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__mosiReg 
                        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                           >> 0x1fU);
                }
            } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_14) {
                if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge) {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                        = ((1U & (((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_15)) 
                                   | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_8)) 
                                  | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_10))))
                            ? (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                               << 1U) : vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg);
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__mosiReg 
                        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                           >> 0x1fU);
                }
            } else {
                if ((1U & (~ ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_16) 
                              | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_17)))))) {
                    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_18) {
                        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiPosEdge) {
                            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                                = ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                                    << 1U) | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__flash_spi_miso));
                        }
                    } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                            = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                               << 1U);
                    }
                }
                if ((1U & (~ ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_16) 
                                | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_17))) 
                               | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_18)) 
                              | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge)))))) {
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__mosiReg 
                        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
                           >> 0x1fU);
                }
            }
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg 
                = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_25) 
                   | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg));
        }
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiCounter 
            = ((1U & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_4) 
                      | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg))))
                ? 0U : (0x000000ffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiCounter))));
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg 
            = (1U & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_4)
                      ? (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg))
                      : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg) 
                         & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_21 
            = ((0x00fc0000U & (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state) 
                                << 0x00000015U) | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state) 
                                                   << 0x00000012U))) 
               | ((((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_18)
                       ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_20)
                       : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge) 
                          & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_19)))
                      ? 5U : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state)) 
                    << 0x0000000cU) | (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_13)
                                         ? 4U : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state)) 
                                       << 9U)) | ((
                                                   (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge) 
                                                     & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_15))
                                                     ? 
                                                    ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_8)
                                                      ? 3U
                                                      : 4U)
                                                     : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state)) 
                                                   << 6U) 
                                                  | ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_13)
                                                        ? 
                                                       ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_11)
                                                         ? 2U
                                                         : 
                                                        (4U 
                                                         | (1U 
                                                            & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_12)))))
                                                        : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state)) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq)
                                                         ? 1U
                                                         : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state))))));
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state 
            = ((0x17U >= (0x0000001fU & ((IData)(3U) 
                                         * (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state))))
                ? (7U & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_21 
                         >> (0x0000001fU & ((IData)(3U) 
                                            * (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state)))))
                : 0U);
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_22 
            = (((QData)((IData)(((0xffffff00U & (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter) 
                                                  << 0x00000018U) 
                                                 | (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter) 
                                                     << 0x00000010U) 
                                                    | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter) 
                                                       << 8U)))) 
                                 | (0x000000ffU & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiPosEdge)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter))
                                                     : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter))
                                                    : 
                                                   ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter))
                                                     : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter))))))) 
                << 0x00000020U) | (QData)((IData)((
                                                   (((0x0000ff00U 
                                                      & (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge)
                                                           ? 
                                                          ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_7)
                                                            ? 0U
                                                            : 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter)))
                                                           : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter)) 
                                                         << 8U)) 
                                                     | (0x000000ffU 
                                                        & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge)
                                                            ? 
                                                           ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_15)
                                                             ? 0U
                                                             : 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter)))
                                                            : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter)))) 
                                                    << 0x00000010U) 
                                                   | ((0x0000ff00U 
                                                       & (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge)
                                                            ? 
                                                           (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_7) 
                                                             & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_11) 
                                                                | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_12)))
                                                             ? 0U
                                                             : 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter)))
                                                            : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter)) 
                                                          << 8U)) 
                                                      | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq)
                                                          ? 0U
                                                          : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter)))))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter 
            = (0x000000ffU & (IData)((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_22 
                                      >> (0x0000003fU 
                                          & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state), 3U)))));
    } else {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudCounter = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txReg = 1U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__gpio__DOT__gpioOut = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_firstword_reg = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__config_0 = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiShiftReg = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txIsData = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiClkReg = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiDC = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCS = 1U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txData = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClk = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg = 1U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OutReg = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OeReg = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OutReg = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OeReg = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__accumulator = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiCounter = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg = 1U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__mosiReg = 0U;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkLast 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg;
    if (__VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory[__VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0] 
            = __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory__v0;
    }
    if (__VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[__VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg;
    if (__VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[__VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0] 
            = __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs__v0;
    }
    if (__VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[__VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0] 
            = __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory__v0;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value;
    if (__VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory[__VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0] 
            = __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory__v0;
    }
    if (__VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory[__VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0] 
            = __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory__v0;
    }
    if (__VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory[__VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0] 
            = __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory__v0;
    }
    if (__VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory[__VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0] 
            = __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory__v0;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg;
    if (__VdlySet__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory[__VdlyDim0__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0] 
            = __VdlyVal__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory__v0;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_2 
        = (0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_3 
        = (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_4 
        = (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6 
        = ((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState)) 
           | ((1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState)) 
              | (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState))));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync_REG;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_0 
        = (0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__last_mem_valid 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) 
           && ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
               & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_ready))));
    if ((1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n)) 
               | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__trap)))) {
        if ((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n)))) {
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n)) 
                   | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_ready)))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid = 0U;
        }
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_read) 
             | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb 
                = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb) 
                   & (- (IData)((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) {
            if ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch) 
                  | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst)) 
                 | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata))) {
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid = 1U;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_instr 
                    = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch) 
                       | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst));
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb = 0U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state = 1U;
            }
            if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata) {
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid = 1U;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_instr = 0U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) {
            if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer) {
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid = 0U;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_secondword = 0U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state 
                    = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
                        | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata))
                        ? 0U : 3U);
            }
        } else if ((2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) {
            if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer) {
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid = 0U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) {
            if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state = 0U;
            }
        }
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value));
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) {
        if ((1U & (~ (((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_8)) 
                       | (0U == (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                      | (8U != (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        if ((1U & (~ ((((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_8)) 
                        | (0U == (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                       | (8U == (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                      | (0x0cU != (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_15 
            = ((2U > vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize) 
               | (8U < vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_16 
            = (1U & ((~ vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl) 
                     | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_15)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_17 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__isLastElement 
            = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i) 
                == (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize 
                    - (IData)(1U))) & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_17 
                                       == (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize 
                                           - (IData)(1U))));
        if ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid) 
              & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_wen)) 
             & (0U == (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))) {
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        } else if ((1U & (~ ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN) 
                               | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0)) 
                              | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_6)) 
                             | (~ (3U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state))))))) {
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl = 0U;
        }
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_18[0U] 
            = ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl 
                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_15))
                ? 3U : 0U);
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_18[1U] 
            = (IData)((1ULL | ((QData)((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status)) 
                               << 0x00000020U)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_18[2U] 
            = (IData)(((1ULL | ((QData)((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status)) 
                                << 0x00000020U)) >> 0x00000020U));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_18[3U] 
            = ((1U & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_6) 
                      | (~ (3U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)))))
                ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status
                : 2U);
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status 
            = (((0U == (0x0000001fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state), 5U)))
                 ? 0U : (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_18[
                         (((IData)(0x0000001fU) + (0x0000007fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state), 5U))) 
                          >> 5U)] << ((IData)(0x00000020U) 
                                      - (0x0000001fU 
                                         & VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state), 5U))))) 
               | (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_18[
                  (3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state), 5U) 
                         >> 5U))] >> (0x0000001fU & 
                                      VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state), 5U))));
        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN) {
            if ((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_16)))) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles = 0U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped = 0U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i = 0U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j = 0U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k = 0U;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator = 0U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter = 0U;
            }
        } else {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_20 
                = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_17 
                   < (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize 
                      - (IData)(1U)));
            if ((1U & (~ (((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0)) 
                           | (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data))) 
                          | (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data)))))) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped 
                    = ((IData)(1U) + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped);
            }
            if ((1U & (~ ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0) 
                          | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_6)))))) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter)));
            }
            if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles 
                    = ((IData)(1U) + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles);
                if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5) {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k)));
                    if ((1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data))) {
                        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator 
                            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T;
                    } else if ((2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data))) {
                        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator 
                            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T_3;
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__isLastElement)))) {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k = 0U;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator = 0U;
                }
            }
            if ((1U & (~ ((((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0)) 
                            | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5)) 
                           | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__isLastElement)) 
                          | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_20))))) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i)));
            }
            if ((1U & (~ (((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0)) 
                           | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5)) 
                          | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__isLastElement))))) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j 
                    = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_20)
                        ? (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j)))
                        : 0U);
            }
        }
        if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN) 
             & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl)) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__errorCode 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_15;
        }
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_19 
            = ((((2U < (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter))
                  ? 3U : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
                << 4U) | ((((1U & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5) 
                                   | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__isLastElement))))
                             ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)
                             : 2U) << 2U) | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_16)
                                              ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)
                                              : 1U)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state 
            = (3U & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_19) 
                     >> (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state), 1U))));
    } else {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv = 0x00000364U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__errorCode = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter = 0U;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full)) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full)) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match));
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) {
        if ((1U & (~ (((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_10)) 
                       | (0U == (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                      | (0x001cU != (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        }
        if ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_valid) 
              & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_wen)) 
             & (0U == (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata;
        } else if ((1U & (~ (((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)) 
                              | (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state))) 
                             | (2U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)))))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl = 0U;
        }
    } else {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize = 8U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl = 0U;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync_REG 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__uart_rx;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick 
        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudCounter 
           >= (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv 
               - (IData)(1U)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick 
        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter 
           >= (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv 
               - (IData)(1U)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN 
        = (0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0 
        = (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_6 
        = (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_en 
        = ((0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
           & (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_opcode;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs1;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k) 
           < (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize 
              - (IData)(1U)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN 
        = (0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_0 
        = (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en 
        = ((0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)) 
           & (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_1 
        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
           & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty)) 
              & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_5 
        = ((3U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState)) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick));
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_en) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory
            [(0x000000ffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k), 4U) 
                             + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j)))];
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory
            [(0x000000ffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i), 4U) 
                             + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k)))];
    } else {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data = 0U;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__W0_data 
        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__accumulator 
           + (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en)
                ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory
               [(0x0000003fU & ((0x00000038U & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i) 
                                                << 3U)) 
                                + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k)))]
                : 0U) * ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en)
                          ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory
                         [(0x0000003fU & ((0x00000038U 
                                           & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k) 
                                              << 3U)) 
                                          + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j)))]
                          : 0U)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_5) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T 
        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data 
           + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator);
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T_3 
        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator 
           - vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data);
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) {
        if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT___GEN) 
             & (0U == (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg 
                = (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata);
        }
        if ((1U & (~ (((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT___GEN)) 
                       | (0U == (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                      | (4U != (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg 
                = (0x00ffffffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata);
        }
        if ((1U & (~ (((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9)) 
                       | (0U == (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))) 
                      | (0x001cU != (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize 
                = (((0U != (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata 
                            >> 1U)) & (9U > vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata))
                    ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata
                    : 8U);
        }
    } else {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize = 8U;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k) 
           < (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize 
              - (IData)(1U)));
    if ((1U & (~ ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n)) 
                  | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__trap))))) {
        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata;
        }
        if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_read) 
             | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch) 
                    | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst))
                    ? (0xfffffffcU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_pc)
                    : (0xfffffffcU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1));
        }
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
           & (0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren 
        = ((~ (0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb))) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match) 
               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full))) 
           & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6)) 
              & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11 
        = ((0x04ffU < (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
           & (0x0600U > (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14 
        = ((0x04ffU < (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
           & (0x0900U > (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11 
        = ((0U != (0x0000000fU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                  >> 8U))) & (0x0300U 
                                              > (0x00000fffU 
                                                 & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram 
        = ((0U != (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                   >> 0x0000001aU)) & (0x04800000U 
                                       > vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio 
        = ((0x2001ffffU < vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
           & (0x20030000U > vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12 
        = ((0x02ffU < (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
           & (0x0500U > (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash 
        = ((0x2fffffffU < vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
           & (0x31000000U > vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd 
        = ((0x2000ffffU < vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
           & (0x20020000U > vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact 
        = ((0U != (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                   >> 0x0000001cU)) & (0x10001000U 
                                       > vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart 
        = ((0U != (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                   >> 0x0000001dU)) & (0x20010000U 
                                       > vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet 
        = ((0x10000fffU < vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
           & (0x10002000U > vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__trap = 0U;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh = 0U;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out = 0U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rinst = 0U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rdata = 0U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_wdata = 0U;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger_q 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger;
    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger = 0U;
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) {
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle 
            = (1ULL + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle);
        if (((((((((0x80U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) 
                | (8U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) 
               | (4U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) 
              | (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) 
             | (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) {
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__trap = 1U;
            } else if ((0x40U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__do_waitirq))));
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = 0U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu = 0U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh = 0U;
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb = 0U;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_rd 
                    = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rd;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_compr 
                    = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__compressed_instr;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc 
                    = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc;
                if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch) {
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc 
                        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_stalu)
                                               ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_q
                                               : vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out))
                            : vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc);
                }
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc 
                    = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc 
                    = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store = 0U;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_stalu = 0U;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch = 0U;
                if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger) {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr 
                        = (1ULL + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr);
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_delay 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_active;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc 
                        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc 
                           + ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__compressed_instr)
                               ? 2U : 4U));
                    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = 1U;
                        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc 
                            = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc 
                               + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j);
                        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch = 1U;
                    } else {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = 0U;
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_retirq))));
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 = 0U;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 = 0U;
                if ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_trap) 
                      | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                     | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal))) {
                    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_trap) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x80U;
                    } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle) {
                            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                                = (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle);
                        } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh) {
                            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                                = (IData)((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle 
                                           >> 0x20U));
                        } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr) {
                            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                                = (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr);
                        } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh) {
                            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                                = (IData)((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr 
                                           >> 0x20U));
                        }
                        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store = 1U;
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x40U;
                    } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui)
                                ? 0U : vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc);
                        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm;
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst 
                            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch;
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 8U;
                    } else {
                        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store = 1U;
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__timer;
                        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val 
                            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x40U;
                        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__timer 
                            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    }
                } else if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_trap)))) {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 1U;
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slli_srli_srai) {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2;
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 4U;
                } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid = 1U;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm;
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch;
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 8U;
                } else {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh 
                        = (0x0000001fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2);
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val_valid = 1U;
                    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 2U;
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = 1U;
                    } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sll_srl_sra) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 4U;
                    } else {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst 
                            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch;
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh 
                    = (0x0000001fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2);
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                    = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val 
                    = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2;
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val_valid = 1U;
                if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw) {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 2U;
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sll_srl_sra) {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 4U;
                } else {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch;
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) {
                __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                    = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc 
                       + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm);
                if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_rd = 0U;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0;
                    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0) {
                        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rinst = 1U;
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store = 1U;
                    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_stalu = 1U;
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) {
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh))) {
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1;
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst 
                        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch;
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh))) {
                    if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slli) 
                         | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll))) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srli) 
                                | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl))) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai) 
                                | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra))) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1, 4U);
                    }
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh 
                        = (0x0000001fU & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh) 
                                          - (IData)(4U)));
                } else {
                    if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slli) 
                         | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll))) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srli) 
                                | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl))) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai) 
                                | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra))) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1, 1U);
                    }
                    __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh 
                        = (0x0000001fU & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh) 
                                          - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata)))) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                               + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm);
                        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_wdata = 1U;
                        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sb) {
                            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = 2U;
                        } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sh) {
                            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sw) {
                            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done))) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x40U;
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger = 1U;
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done))) {
                        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu) {
                            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word;
                        } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh) {
                            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0x0000ffffU 
                                                 & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word));
                        } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb) {
                            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0x000000ffU 
                                                 & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word));
                        }
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger = 1U;
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger = 1U;
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata)))) {
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                            = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                               + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm);
                        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lb) 
                             | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lbu))) {
                            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lh) 
                                    | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lhu))) {
                            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lw) {
                            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = 0U;
                        }
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu 
                            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lbu_lhu_lw;
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh 
                            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lh;
                        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb 
                            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lb;
                    }
                }
            }
        }
    } else {
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle = 0ULL;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr = 0ULL;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__timer = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_stalu = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_delay = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x40U;
    }
    if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_insn = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x0000007fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)) 
                & (~ (0U != (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                             >> 0x15U)))) & (~ (0U 
                                                != 
                                                (0x00001fffU 
                                                 & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                    >> 7U)))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_getq = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_setq = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_maskirq = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_timer = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_fence 
            = ((0x0fU == (0x0000007fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)) 
               & (~ (0U != (7U & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                  >> 0x0cU)))));
    }
    if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) 
         & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata) 
            | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize)) 
             & (0U != (3U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)))) {
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x80U;
        }
        if (((1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize)) 
             & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)) {
            __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x80U;
        }
    }
    if ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) 
          & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst)) 
         & (0U != (3U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc)))) {
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = 0x80U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n)) 
               | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done)))) {
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch = 0U;
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata = 0U;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rinst) {
        __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = 1U;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rdata) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata = 1U;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_wdata) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata = 1U;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc = 0U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_gpio_valid 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_flash_valid 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_lcd_wen 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT___GEN 
        = ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy)) 
           & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
              & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_wen 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_valid 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_uart_valid 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_wen 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_ready 
        = (1U & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact) 
                 | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet) 
                    | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart) 
                       | ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd)) 
                          | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy)))))));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr;
    if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_waitirq = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1 
            = (0x0000001fU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
                              >> 0x0fU));
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1))
            ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs
           [vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1]
            : 0U);
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT___GEN 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_flash_valid) 
           & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
              & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_10 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_valid) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_wen));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12 
        = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact)) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_valid));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_8 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_uart_valid) 
           & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
              & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_11 
        = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart)) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_uart_valid));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_wen));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13 
        = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet)) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__do_waitirq = 0U;
    __Vtableidx1 = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_state[0U] 
        = Vsimple_edge_ai_tb_fixed__ConstPool__TABLE_h57ed7a03_0
        [__Vtableidx1][0U];
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_state[1U] 
        = Vsimple_edge_ai_tb_fixed__ConstPool__TABLE_h57ed7a03_0
        [__Vtableidx1][1U];
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_state[2U] 
        = Vsimple_edge_ai_tb_fixed__ConstPool__TABLE_h57ed7a03_0
        [__Vtableidx1][2U];
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_state[3U] 
        = Vsimple_edge_ai_tb_fixed__ConstPool__TABLE_h57ed7a03_0
        [__Vtableidx1][3U];
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_write = 0U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_pc 
        = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch) 
            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store))
            ? (0xfffffffeU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out)
            : vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc);
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_q 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out;
    if ((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb = 0x0fU;
    } else if ((1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata 
            = ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb 
            = ((2U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)
                ? 0x0cU : 3U);
    } else if ((2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata 
            = ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)));
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_eq 
        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
           == vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1, vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_ltu 
        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
           < vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lbu) 
           | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lhu) 
              | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lw)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq 
        = ((~ ((0U == (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
               | ((4U == (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
                  | (8U == (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))))) 
           & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT___GEN) 
              & ((0x0cU == (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
                 & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__io_enq_valid 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_8) 
           & (0U == (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data 
        = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12))
            ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory
           [(0x000000ffU & (((IData)(0x0100U) + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
                            >> 2U))] : 0U);
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full)) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__io_enq_valid));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state))) {
        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_write = 1U;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_wrdata 
                = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc 
                   + ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch)))) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_write = 1U;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_stalu)
                    ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_q
                    : vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out);
        }
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rd;
    if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__compressed_instr = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rd 
            = (0x0000001fU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
                              >> 7U));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2 
            = (0x0000001fU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
                              >> 0x14U));
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2))
            ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs
           [vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2]
            : 0U);
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs2;
    if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle 
            = ((IData)((0xc0002073U == (0xfffff07fU 
                                        & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))) 
               | (IData)((0xc0102073U == (0xfffff07fU 
                                          & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh 
            = ((IData)((0xc8002073U == (0xfffff07fU 
                                        & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))) 
               | (IData)((0xc8102073U == (0xfffff07fU 
                                          & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr 
            = (IData)((0xc0202073U == (0xfffff07fU 
                                       & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh 
            = (IData)((0xc8202073U == (0xfffff07fU 
                                       & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle) 
           | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr) 
                 | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh))));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui) 
           | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc) 
              | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui) 
           | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc) 
              | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal) 
                 | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr) 
                    | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_addi) 
                       | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_add) 
                          | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub)))))));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slti_blt_slt 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti) 
           | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_blt) 
              | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu) 
           | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bltu) 
              | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_compare 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
           | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti) 
              | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt) 
                 | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu) 
                    | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu)))));
    if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_beq 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bne 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00001000U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_blt 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00004000U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bge 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00005000U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bltu 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00006000U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bgeu 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00007000U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lb 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lh 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00001000U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lw 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00002000U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lbu 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00004000U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lhu 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00005000U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sb 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw) 
               & (0U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sh 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw) 
               & (0x00001000U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sw 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw) 
               & (0x00002000U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_addi 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0x00002000U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0x00003000U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xori 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0x00004000U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ori 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0x00006000U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_andi 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0x00007000U == (0x00007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slli 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0x00001000U == (0xfe007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srli 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0x00005000U == (0xfe007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slli_srli_srai 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr) 
               | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                   >> 0x0cU))) | ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                       >> 0x0cU))) 
                                                  | ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                          >> 0x0cU))) 
                                                     | ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                             >> 0x0cU))) 
                                                        | ((6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                                >> 0x0cU))) 
                                                           | (7U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                                  >> 0x0cU))))))))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_compare = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal)
                ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j
                : (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui) 
                    | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc))
                    ? VL_SHIFTL_III(32,32,32, (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                               >> 0x0cU), 0x0000000cU)
                    : (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr) 
                        | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                >> 0x14U))
                        : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((((2U 
                                                & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                   >> 0x0000001eU)) 
                                               | (1U 
                                                  & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                     >> 7U))) 
                                              << 0x0000000bU) 
                                             | ((0x000007e0U 
                                                 & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                    >> 0x00000014U)) 
                                                | (0x0000001eU 
                                                   & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                      >> 7U)))))
                            : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0x00000fe0U 
                                                  & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_add 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0U == (0xfe007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x40000000U == (0xfe007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x00001000U == (0xfe007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x00002000U == (0xfe007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x00003000U == (0xfe007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xor 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x00004000U == (0xfe007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x00005000U == (0xfe007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_or 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x00006000U == (0xfe007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_and 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & (0x00007000U == (0xfe007000U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sll_srl_sra 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q))))));
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata;
    }
    if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_retirq = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm 
            = (0x13U == (0x0000007fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x0000007fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw 
            = (0x23U == (0x0000007fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j 
            = ((0x000fffffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x001ffffeU 
                                               & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
                                                  >> 0x0000000bU)))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j) 
               | (0x000007feU & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
                                                   >> 0x0000000bU))) 
                                 >> 9U)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j) 
               | (0x00000800U & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
                                                   >> 0x0000000bU))) 
                                 << 2U)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j) 
               | (0x000ff000U & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
                                                   >> 0x0000000bU))) 
                                 << 0x0000000bU)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x001ffffeU 
                                            & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
                                               >> 0x0000000bU)))));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x0000007fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc 
            = (0x17U == (0x0000007fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui 
            = (0x37U == (0x0000007fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal 
            = (0x6fU == (0x0000007fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr 
            = (IData)((0x00000067U == (0x0000707fU 
                                       & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg 
            = (0x33U == (0x0000007fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle));
    }
    if ((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n)))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_state = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_fence = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_active = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_compare = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_beq = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bne = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_blt = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bge = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bltu = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bgeu = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_addi = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xori = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ori = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_andi = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_add = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xor = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_or = 0U;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_and = 0U;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_imm;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state)) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 = 0U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out = 0U;
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_beq) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_eq;
    } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bne) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_eq)));
    } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bge) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_lts)));
    } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bgeu) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_ltu)));
    } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slti_blt_slt) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_lts;
    } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_ltu;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out 
            = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub)
                ? (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                   - vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2)
                : (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                   + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2));
    } else if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_compare) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xori) 
                | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xor))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out 
            = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
               ^ vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ori) 
                | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_or))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out 
            = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
               | vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_andi) 
                | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_and))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out 
            = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
               & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui) 
                    | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc) 
                       | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal) 
                          | (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr) 
                              | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_beq) 
                                 | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bne) 
                                    | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_blt) 
                                       | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bge) 
                                          | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bltu) 
                                             | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bgeu) 
                                                | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lb) 
                                                   | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lh) 
                                                      | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lw) 
                                                         | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lbu) 
                                                            | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lhu) 
                                                               | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sb) 
                                                                  | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sh) 
                                                                     | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sw) 
                                                                        | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_addi) 
                                                                           | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti) 
                                                                              | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt) 
                                                                                | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu))))))))))))))))))))))))))))) 
                             | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xor) 
                                | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl) 
                                   | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra) 
                                      | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_or) 
                                         | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_and) 
                                            | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle) 
                                               | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh) 
                                                  | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr) 
                                                     | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh) 
                                                        | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_fence) 
                                                           | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_getq) 
                                                              | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_setq) 
                                                                 | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_retirq) 
                                                                    | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_maskirq) 
                                                                       | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_timer) 
                                                                          | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_waitirq))))))))))))))))))))));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000006c7569ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000006175697063ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000006a616cULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x000000006a616c72ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_beq) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000626571ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bne) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000626e65ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_blt) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000626c74ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bge) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000626765ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bltu) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000626c7475ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bgeu) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000062676575ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lb) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000006c62ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lh) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000006c68ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lw) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000006c77ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lbu) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000006c6275ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lhu) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000006c6875ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sb) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000007362ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sh) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000007368ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sw) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000007377ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_addi) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000061646469ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000736c7469ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x000000736c746975ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xori) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000786f7269ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ori) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000006f7269ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_andi) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000616e6469ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slli) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000736c6c69ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srli) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000073726c69ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000073726169ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_add) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000616464ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000737562ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000736c6cULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000736c74ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000000736c7475ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xor) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000786f72ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x000000000073726cULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000737261ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_or) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000006f72ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_and) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000000616e64ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0072646379636c65ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x007264696e737472ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_fence) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000066656e6365ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_getq) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000067657471ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_setq) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000000073657471ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_retirq) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0000726574697271ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_maskirq) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x006d61736b697271ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_waitirq) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x0077616974697271ULL;
    }
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_timer) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = 0x00000074696d6572ULL;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_ready) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_ascii_instr;
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_next) {
        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_opcode;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs1;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rd;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs2;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_imm;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode))
                    ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode));
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rd;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst 
        = __Vdly__simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT____VdfgRegularize_h233421b0_0_0 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
           | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata)));
}

void Vsimple_edge_ai_tb_fixed___024root___nba_comb__TOP__0(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___nba_comb__TOP__0\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) 
           & ((~ (0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) 
              & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__prefetched_high_word)))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n))))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact)
            ? ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12)
                ? ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11)
                    ? (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12) 
                        & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11))
                        ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory
                       [(0x0000003fU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                        >> 2U))] : 0U)
                    : ((0U == (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                        ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl
                        : ((4U == (0x00000fffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                            ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status
                            : ((0x001cU == (0x00000fffU 
                                            & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize
                                : ((0x0028U == (0x00000fffU 
                                                & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                    ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles
                                    : 0U))))) : 0U)
            : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet)
                ? ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13)
                    ? ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14)
                        ? (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14))
                            ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory
                           [(0x000000ffU & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                             - (IData)(0x0100U)) 
                                            >> 2U))]
                            : 0U) : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12)
                                      ? ((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))
                                          ? 0U : ((1U 
                                                   == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))
                                                   ? 1U
                                                   : 
                                                  (- (IData)(
                                                             (2U 
                                                              == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))))))
                                      : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11)
                                          ? (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                                              & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))
                                              ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory
                                             [(0x000000ffU 
                                               & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                                   - (IData)(0x0100U)) 
                                                  >> 2U))]
                                              : 0U)
                                          : ((0U == 
                                              (0x00000fffU 
                                               & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                              ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl
                                              : ((4U 
                                                  == 
                                                  (0x00000fffU 
                                                   & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                  ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status
                                                  : 
                                                 ((0x001cU 
                                                   == 
                                                   (0x00000fffU 
                                                    & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                   ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize
                                                   : 
                                                  ((0x0020U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                    ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__config_0
                                                    : 
                                                   ((0x0028U 
                                                     == 
                                                     (0x00000fffU 
                                                      & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                     ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles
                                                     : 
                                                    ((0x002cU 
                                                      == 
                                                      (0x00000fffU 
                                                       & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                      ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped
                                                      : 
                                                     ((0x0030U 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                       ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__errorCode
                                                       : 0U))))))))))
                    : 0U) : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart)
                              ? ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_11)
                                  ? ((0U == (0x000000ffU 
                                             & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                      ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory
                                     [vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value]
                                      : ((4U == (0x000000ffU 
                                                 & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                          ? ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full) 
                                                 << 2U)) 
                                             | ((2U 
                                                 & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty)) 
                                                    << 1U)) 
                                                | (0U 
                                                   != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState))))
                                          : ((8U == 
                                              (0x000000ffU 
                                               & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                              ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control
                                              : ((0x0cU 
                                                  == 
                                                  (0x000000ffU 
                                                   & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                  ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv
                                                  : 0U))))
                                  : 0U) : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd)
                                            ? (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT___GEN) 
                                                & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                                   & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd)))
                                                ? (
                                                   (8U 
                                                    == 
                                                    (0x000000ffU 
                                                     & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                    ? 
                                                   (2U 
                                                    | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy))
                                                    : 
                                                   ((0x0cU 
                                                     == 
                                                     (0x000000ffU 
                                                      & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                     ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control
                                                     : 0U))
                                                : 0U)
                                            : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio)
                                                ? (
                                                   (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                                     & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio)) 
                                                    & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_gpio_valid))
                                                    ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__gpio_in)
                                                    : 0U)
                                                : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash)
                                                    ? 
                                                   ((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                                      & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash)) 
                                                     & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_flash_valid))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (0x000000ffU 
                                                       & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                      ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg)
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0x000000ffU 
                                                        & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                       ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg
                                                       : 
                                                      ((8U 
                                                        == 
                                                        (0x000000ffU 
                                                         & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                        ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg
                                                        : 
                                                       ((0x0cU 
                                                         == 
                                                         (0x000000ffU 
                                                          & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                         ? 
                                                        (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg) 
                                                          << 2U) 
                                                         | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg) 
                                                            << 1U))
                                                         : 0U))))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram)
                                                     ? 
                                                    (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                                      & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram))
                                                      ? 
                                                     ((0x14U 
                                                       == 
                                                       (0x0000001fU 
                                                        & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                       ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x0000001fU 
                                                         & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                        ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg
                                                        : 
                                                       ((0x0cU 
                                                         == 
                                                         (0x0000001fU 
                                                          & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                         ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg
                                                         : 
                                                        ((8U 
                                                          == 
                                                          (0x0000001fU 
                                                           & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                          ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x0000001fU 
                                                            & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                           ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg
                                                           : 
                                                          ((0U 
                                                            == 
                                                            (0x0000001fU 
                                                             & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                            ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg)
                                                            : 0U))))))
                                                      : 0U)
                                                     : 0U)))))));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_read 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) 
           & ((~ (0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) 
              & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
                 | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch) 
                    | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata)))));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) 
           & (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer) 
               & ((0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state)) 
                  & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT____VdfgRegularize_h233421b0_0_0))) 
              | ((3U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state)) 
                 & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst))));
    if ((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)
                ? (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
                   >> 0x10U) : (0x0000ffffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata));
    } else if ((2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)
                ? ((1U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)
                    ? (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
                       >> 0x18U) : (0x000000ffU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
                                                   >> 0x10U)))
                : ((1U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)
                    ? (0x000000ffU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
                                      >> 8U)) : (0x000000ffU 
                                                 & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata)));
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer)
            ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata
            : vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q);
}

void Vsimple_edge_ai_tb_fixed___024root___eval_nba(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval_nba\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsimple_edge_ai_tb_fixed___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsimple_edge_ai_tb_fixed___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

void Vsimple_edge_ai_tb_fixed___024root___timing_resume(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___timing_resume\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsimple_edge_ai_tb_fixed___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsimple_edge_ai_tb_fixed___024root___eval_phase__act(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval_phase__act\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vsimple_edge_ai_tb_fixed___024root___eval_triggers__act(vlSelf);
    Vsimple_edge_ai_tb_fixed___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vsimple_edge_ai_tb_fixed___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vsimple_edge_ai_tb_fixed___024root___timing_resume(vlSelf);
        Vsimple_edge_ai_tb_fixed___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vsimple_edge_ai_tb_fixed___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsimple_edge_ai_tb_fixed___024root___eval_phase__nba(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval_phase__nba\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsimple_edge_ai_tb_fixed___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vsimple_edge_ai_tb_fixed___024root___eval_nba(vlSelf);
        Vsimple_edge_ai_tb_fixed___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vsimple_edge_ai_tb_fixed___024root___eval(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsimple_edge_ai_tb_fixed___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("simple_edge_ai_tb_fixed.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsimple_edge_ai_tb_fixed___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("simple_edge_ai_tb_fixed.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vsimple_edge_ai_tb_fixed___024root___eval_phase__act(vlSelf));
    } while (Vsimple_edge_ai_tb_fixed___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vsimple_edge_ai_tb_fixed___024root___eval_debug_assertions(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval_debug_assertions\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

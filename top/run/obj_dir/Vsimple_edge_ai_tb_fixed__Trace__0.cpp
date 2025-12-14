// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimple_edge_ai_tb_fixed__Syms.h"


void Vsimple_edge_ai_tb_fixed___024root__trace_chg_0_sub_0(Vsimple_edge_ai_tb_fixed___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsimple_edge_ai_tb_fixed___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root__trace_chg_0\n"); );
    // Body
    Vsimple_edge_ai_tb_fixed___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_edge_ai_tb_fixed___024root*>(voidSelf);
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vsimple_edge_ai_tb_fixed___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsimple_edge_ai_tb_fixed___024root__trace_chg_0_sub_0(Vsimple_edge_ai_tb_fixed___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root__trace_chg_0_sub_0\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__uart_rx));
        bufp->chgSData(oldp+2,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__gpio_in),16);
        bufp->chgBit(oldp+3,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__flash_spi_miso));
        bufp->chgBit(oldp+4,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__psram_spi_miso));
        bufp->chgBit(oldp+5,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__psram_spi_sio2_in));
        bufp->chgBit(oldp+6,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__psram_spi_sio3_in));
        bufp->chgBit(oldp+7,((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n)))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgIData(oldp+8,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata),32);
        bufp->chgBit(oldp+9,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_read));
        bufp->chgBit(oldp+10,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write));
        bufp->chgIData(oldp+11,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word),32);
        bufp->chgBit(oldp+12,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word));
        bufp->chgIData(oldp+13,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle),32);
        bufp->chgBit(oldp+14,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+15,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txReg));
        bufp->chgSData(oldp+16,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__gpio__DOT__gpioOut),16);
        bufp->chgBit(oldp+17,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiClkReg));
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiShiftReg) 
                                     >> 7U))));
        bufp->chgBit(oldp+19,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCS));
        bufp->chgBit(oldp+20,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiDC));
        bufp->chgBit(oldp+21,((1U & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control 
                                     >> 1U))));
        bufp->chgBit(oldp+22,((1U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control)));
        bufp->chgBit(oldp+23,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__trap));
        bufp->chgBit(oldp+24,(((~ ((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)) 
                                   | (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)))) 
                               & (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)))));
        bufp->chgBit(oldp+25,(((~ ((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
                                   | ((1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
                                      | (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state))))) 
                               & (3U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)))));
        bufp->chgBit(oldp+26,((1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full)) 
                                     & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
                                        >> 2U)))));
        bufp->chgBit(oldp+27,((1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty)) 
                                     & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
                                        >> 3U)))));
        bufp->chgBit(oldp+28,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg));
        bufp->chgBit(oldp+29,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg));
        bufp->chgBit(oldp+30,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__mosiReg));
        bufp->chgBit(oldp+31,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClk) 
                               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn))));
        bufp->chgBit(oldp+32,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg));
        bufp->chgBit(oldp+33,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg));
        bufp->chgBit(oldp+34,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OutReg));
        bufp->chgBit(oldp+35,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OeReg));
        bufp->chgBit(oldp+36,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OutReg));
        bufp->chgBit(oldp+37,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OeReg));
        bufp->chgIData(oldp+38,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr),32);
        bufp->chgIData(oldp+39,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata),32);
        bufp->chgIData(oldp+40,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13)
                                  ? ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14)
                                      ? (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                                          & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14))
                                          ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory
                                         [(0x000000ffU 
                                           & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                               - (IData)(0x0100U)) 
                                              >> 2U))]
                                          : 0U) : ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12)
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))
                                                      ? 1U
                                                      : 
                                                     (- (IData)(
                                                                (2U 
                                                                 == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data))))))
                                                    : 
                                                   ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11)
                                                     ? 
                                                    (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                                                      & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))
                                                      ? 
                                                     vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory
                                                     [
                                                     (0x000000ffU 
                                                      & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                                          - (IData)(0x0100U)) 
                                                         >> 2U))]
                                                      : 0U)
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x00000fffU 
                                                       & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                      ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl
                                                      : 
                                                     ((4U 
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
                                  : 0U)),32);
        bufp->chgBit(oldp+41,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_wen));
        bufp->chgBit(oldp+42,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet))));
        bufp->chgBit(oldp+43,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid));
        bufp->chgIData(oldp+44,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl),32);
        bufp->chgIData(oldp+45,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status),32);
        bufp->chgIData(oldp+46,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__config_0),32);
        bufp->chgIData(oldp+47,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize),32);
        bufp->chgIData(oldp+48,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles),32);
        bufp->chgIData(oldp+49,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped),32);
        bufp->chgIData(oldp+50,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__errorCode),32);
        bufp->chgCData(oldp+51,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state),2);
        bufp->chgCData(oldp+52,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i),8);
        bufp->chgCData(oldp+53,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j),8);
        bufp->chgCData(oldp+54,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k),8);
        bufp->chgIData(oldp+55,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator),32);
        bufp->chgCData(oldp+56,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter),3);
        bufp->chgCData(oldp+57,((0x000000ffU & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                                 - (IData)(0x0100U)) 
                                                >> 2U))),8);
        bufp->chgBit(oldp+58,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))));
        bufp->chgIData(oldp+59,((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                                  & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))
                                  ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory
                                 [(0x000000ffU & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                                   - (IData)(0x0100U)) 
                                                  >> 2U))]
                                  : 0U)),32);
        bufp->chgCData(oldp+60,((0x000000ffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i), 4U) 
                                                + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k)))),8);
        bufp->chgBit(oldp+61,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_en));
        bufp->chgIData(oldp+62,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data),32);
        bufp->chgBit(oldp+63,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9) 
                               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11))));
        bufp->chgBit(oldp+64,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14))));
        bufp->chgIData(oldp+65,((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                                  & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14))
                                  ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory
                                 [(0x000000ffU & ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                                   - (IData)(0x0100U)) 
                                                  >> 2U))]
                                  : 0U)),32);
        bufp->chgCData(oldp+66,((0x000000ffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i), 4U) 
                                                + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j)))),8);
        bufp->chgBit(oldp+67,(((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5)) 
                               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_en))));
        bufp->chgIData(oldp+68,(((1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data))
                                  ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T
                                  : ((2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data))
                                      ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T_3
                                      : vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator))),32);
        bufp->chgBit(oldp+69,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__isLastElement));
        bufp->chgCData(oldp+70,((0x000000ffU & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k), 4U) 
                                                + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j)))),8);
        bufp->chgCData(oldp+71,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data),2);
        bufp->chgCData(oldp+72,((0x000000ffU & (((IData)(0x0100U) 
                                                 + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
                                                >> 2U))),8);
        bufp->chgBit(oldp+73,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
                               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12))));
        bufp->chgCData(oldp+74,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data),2);
        bufp->chgBit(oldp+75,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9) 
                               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12))));
        bufp->chgCData(oldp+76,(((0U == vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)
                                  ? 0U : ((1U & ((~ 
                                                  ((0xffffffffU 
                                                    == vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata) 
                                                   | VL_GTS_III(32, 1U, vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata))) 
                                                 | (1U 
                                                    == vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)))
                                           ? 1U : 2U))),2);
        bufp->chgIData(oldp+77,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12)
                                  ? ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11)
                                      ? (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12) 
                                          & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11))
                                          ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory
                                         [(0x0000003fU 
                                           & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                              >> 2U))]
                                          : 0U) : (
                                                   (0U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                    ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x00000fffU 
                                                      & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                     ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status
                                                     : 
                                                    ((0x001cU 
                                                      == 
                                                      (0x00000fffU 
                                                       & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                      ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize
                                                      : 
                                                     ((0x0028U 
                                                       == 
                                                       (0x00000fffU 
                                                        & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                       ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles
                                                       : 0U)))))
                                  : 0U)),32);
        bufp->chgBit(oldp+78,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_wen));
        bufp->chgBit(oldp+79,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact))));
        bufp->chgBit(oldp+80,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_valid));
        bufp->chgIData(oldp+81,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl),32);
        bufp->chgIData(oldp+82,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status),32);
        bufp->chgIData(oldp+83,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize),32);
        bufp->chgIData(oldp+84,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles),32);
        bufp->chgCData(oldp+85,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state),2);
        bufp->chgCData(oldp+86,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i),4);
        bufp->chgCData(oldp+87,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j),4);
        bufp->chgCData(oldp+88,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k),4);
        bufp->chgIData(oldp+89,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__accumulator),32);
        bufp->chgCData(oldp+90,((0x0000003fU & ((0x00000038U 
                                                 & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i) 
                                                    << 3U)) 
                                                + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k)))),6);
        bufp->chgBit(oldp+91,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en));
        bufp->chgIData(oldp+92,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en)
                                  ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory
                                 [(0x0000003fU & ((0x00000038U 
                                                   & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i) 
                                                      << 3U)) 
                                                  + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k)))]
                                  : 0U)),32);
        bufp->chgCData(oldp+93,((0x0000003fU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                                >> 2U))),6);
        bufp->chgBit(oldp+94,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_10) 
                               & ((0U != (0x0000000fU 
                                          & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                             >> 8U))) 
                                  & (0x0200U > (0x00000fffU 
                                                & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))))));
        bufp->chgCData(oldp+95,((0x0000003fU & ((0x00000038U 
                                                 & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k) 
                                                    << 3U)) 
                                                + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j)))),6);
        bufp->chgIData(oldp+96,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en)
                                  ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory
                                 [(0x0000003fU & ((0x00000038U 
                                                   & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k) 
                                                      << 3U)) 
                                                  + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j)))]
                                  : 0U)),32);
        bufp->chgBit(oldp+97,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_10) 
                               & ((0x02ffU < (0x00000fffU 
                                              & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)) 
                                  & (0x0400U > (0x00000fffU 
                                                & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))))));
        bufp->chgBit(oldp+98,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12) 
                               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11))));
        bufp->chgIData(oldp+99,((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12) 
                                  & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11))
                                  ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory
                                 [(0x0000003fU & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr 
                                                  >> 2U))]
                                  : 0U)),32);
        bufp->chgCData(oldp+100,((0x0000003fU & ((0x00000038U 
                                                  & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i) 
                                                     << 3U)) 
                                                 + (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j)))),6);
        bufp->chgBit(oldp+101,(((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5)) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en))));
        bufp->chgIData(oldp+102,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__W0_data),32);
        bufp->chgBit(oldp+103,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen));
        bufp->chgBit(oldp+104,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren));
        bufp->chgBit(oldp+105,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid));
        bufp->chgBit(oldp+106,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_ready));
        bufp->chgIData(oldp+107,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_11)
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
                                   : 0U)),32);
        bufp->chgBit(oldp+108,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart))));
        bufp->chgBit(oldp+109,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart))));
        bufp->chgBit(oldp+110,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_uart_valid));
        bufp->chgIData(oldp+111,((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT___GEN) 
                                   & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                      & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd)))
                                   ? ((8U == (0x000000ffU 
                                              & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                       ? (2U | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy))
                                       : ((0x0cU == 
                                           (0x000000ffU 
                                            & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                           ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control
                                           : 0U)) : 0U)),32);
        bufp->chgBit(oldp+112,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_lcd_wen));
        bufp->chgBit(oldp+113,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd))));
        bufp->chgBit(oldp+114,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd))));
        bufp->chgBit(oldp+115,((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy)))));
        bufp->chgBit(oldp+116,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio))));
        bufp->chgBit(oldp+117,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio))));
        bufp->chgBit(oldp+118,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_gpio_valid));
        bufp->chgIData(oldp+119,(((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                    & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash)) 
                                   & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_flash_valid))
                                   ? ((0U == (0x000000ffU 
                                              & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                       ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg)
                                       : ((4U == (0x000000ffU 
                                                  & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                           ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg
                                           : ((8U == 
                                               (0x000000ffU 
                                                & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                               ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg
                                               : ((0x0cU 
                                                   == 
                                                   (0x000000ffU 
                                                    & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                                   ? 
                                                  (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg) 
                                                    << 2U) 
                                                   | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg) 
                                                      << 1U))
                                                   : 0U))))
                                   : 0U)),32);
        bufp->chgBit(oldp+120,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash))));
        bufp->chgBit(oldp+121,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash))));
        bufp->chgBit(oldp+122,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_flash_valid));
        bufp->chgIData(oldp+123,((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                   & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram))
                                   ? ((0x14U == (0x0000001fU 
                                                 & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                       ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg
                                       : ((0x10U == 
                                           (0x0000001fU 
                                            & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                           ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg
                                           : ((0x0cU 
                                               == (0x0000001fU 
                                                   & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr))
                                               ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg
                                               : ((8U 
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
                                   : 0U)),32);
        bufp->chgBit(oldp+124,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen));
        bufp->chgBit(oldp+125,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram))));
        bufp->chgBit(oldp+126,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact));
        bufp->chgBit(oldp+127,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet));
        bufp->chgBit(oldp+128,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart));
        bufp->chgBit(oldp+129,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd));
        bufp->chgBit(oldp+130,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio));
        bufp->chgBit(oldp+131,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash));
        bufp->chgBit(oldp+132,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram));
        bufp->chgCData(oldp+133,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg),8);
        bufp->chgIData(oldp+134,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg),24);
        bufp->chgIData(oldp+135,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg),32);
        bufp->chgBit(oldp+136,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg));
        bufp->chgBit(oldp+137,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg));
        bufp->chgCData(oldp+138,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiCounter),8);
        bufp->chgCData(oldp+139,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state),3);
        bufp->chgCData(oldp+140,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter),8);
        bufp->chgIData(oldp+141,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg),32);
        bufp->chgBit(oldp+142,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkLast));
        bufp->chgBit(oldp+143,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq));
        bufp->chgBit(oldp+144,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiPosEdge));
        bufp->chgBit(oldp+145,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge));
        bufp->chgIData(oldp+146,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control),32);
        bufp->chgCData(oldp+147,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter),8);
        bufp->chgBit(oldp+148,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state));
        bufp->chgCData(oldp+149,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiShiftReg),8);
        bufp->chgCData(oldp+150,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter),3);
        bufp->chgBit(oldp+151,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy));
        bufp->chgCData(oldp+152,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txData),8);
        bufp->chgBit(oldp+153,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid));
        bufp->chgBit(oldp+154,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txIsData));
        bufp->chgCData(oldp+155,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb),4);
        bufp->chgCData(oldp+156,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg),8);
        bufp->chgIData(oldp+157,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg),24);
        bufp->chgIData(oldp+158,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg),32);
        bufp->chgIData(oldp+159,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg),32);
        bufp->chgIData(oldp+160,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg),32);
        bufp->chgIData(oldp+161,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg),32);
        bufp->chgCData(oldp+162,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state),3);
        bufp->chgBit(oldp+163,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv));
        bufp->chgBit(oldp+164,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClk));
        bufp->chgBit(oldp+165,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn));
        bufp->chgCData(oldp+166,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt),6);
        bufp->chgIData(oldp+167,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg),32);
        bufp->chgIData(oldp+168,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut),32);
        bufp->chgBit(oldp+169,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_instr));
        bufp->chgIData(oldp+170,((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch) 
                                   | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst))
                                   ? (0xfffffffcU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_pc)
                                   : (0xfffffffcU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1))),32);
        bufp->chgIData(oldp+171,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata),32);
        bufp->chgCData(oldp+172,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb),4);
        bufp->chgBit(oldp+173,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_valid));
        bufp->chgIData(oldp+174,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_insn),32);
        bufp->chgIData(oldp+175,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1),32);
        bufp->chgIData(oldp+176,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2),32);
        bufp->chgIData(oldp+177,(((((2U & (((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty)) 
                                            << 1U) 
                                           & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
                                              >> 2U))) 
                                    | (1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full)) 
                                             & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
                                                >> 2U)))) 
                                   << 0x00000012U) 
                                  | ((((~ ((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
                                           | ((1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state))))) 
                                       & (3U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state))) 
                                      << 0x00000011U) 
                                     | (((~ ((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)) 
                                             | (1U 
                                                == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)))) 
                                         & (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state))) 
                                        << 0x00000010U)))),32);
        bufp->chgIData(oldp+178,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__eoi),32);
        bufp->chgBit(oldp+179,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__trace_valid));
        bufp->chgQData(oldp+180,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__trace_data),36);
        bufp->chgQData(oldp+182,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle),64);
        bufp->chgQData(oldp+184,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr),64);
        bufp->chgIData(oldp+186,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc),32);
        bufp->chgIData(oldp+187,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc),32);
        bufp->chgIData(oldp+188,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out),32);
        bufp->chgCData(oldp+189,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh),5);
        bufp->chgIData(oldp+190,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode),32);
        bufp->chgIData(oldp+191,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode),32);
        bufp->chgIData(oldp+192,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_addr),32);
        bufp->chgIData(oldp+193,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_pc),32);
        bufp->chgBit(oldp+194,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_delay));
        bufp->chgBit(oldp+195,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_active));
        bufp->chgIData(oldp+196,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_mask),32);
        bufp->chgIData(oldp+197,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_pending),32);
        bufp->chgIData(oldp+198,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__timer),32);
        bufp->chgIData(oldp+199,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[0]),32);
        bufp->chgIData(oldp+200,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[1]),32);
        bufp->chgIData(oldp+201,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[2]),32);
        bufp->chgIData(oldp+202,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[3]),32);
        bufp->chgIData(oldp+203,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[4]),32);
        bufp->chgIData(oldp+204,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[5]),32);
        bufp->chgIData(oldp+205,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[6]),32);
        bufp->chgIData(oldp+206,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[7]),32);
        bufp->chgIData(oldp+207,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[8]),32);
        bufp->chgIData(oldp+208,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[9]),32);
        bufp->chgIData(oldp+209,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[10]),32);
        bufp->chgIData(oldp+210,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[11]),32);
        bufp->chgIData(oldp+211,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[12]),32);
        bufp->chgIData(oldp+212,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[13]),32);
        bufp->chgIData(oldp+213,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[14]),32);
        bufp->chgIData(oldp+214,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[15]),32);
        bufp->chgIData(oldp+215,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[16]),32);
        bufp->chgIData(oldp+216,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[17]),32);
        bufp->chgIData(oldp+217,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[18]),32);
        bufp->chgIData(oldp+218,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[19]),32);
        bufp->chgIData(oldp+219,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[20]),32);
        bufp->chgIData(oldp+220,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[21]),32);
        bufp->chgIData(oldp+221,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[22]),32);
        bufp->chgIData(oldp+222,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[23]),32);
        bufp->chgIData(oldp+223,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[24]),32);
        bufp->chgIData(oldp+224,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[25]),32);
        bufp->chgIData(oldp+225,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[26]),32);
        bufp->chgIData(oldp+226,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[27]),32);
        bufp->chgIData(oldp+227,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[28]),32);
        bufp->chgIData(oldp+228,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[29]),32);
        bufp->chgIData(oldp+229,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[30]),32);
        bufp->chgIData(oldp+230,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[31]),32);
        bufp->chgCData(oldp+231,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state),2);
        bufp->chgCData(oldp+232,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize),2);
        bufp->chgIData(oldp+233,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q),32);
        bufp->chgBit(oldp+234,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch));
        bufp->chgBit(oldp+235,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst));
        bufp->chgBit(oldp+236,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata));
        bufp->chgBit(oldp+237,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata));
        bufp->chgBit(oldp+238,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer));
        bufp->chgBit(oldp+239,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_secondword));
        bufp->chgBit(oldp+240,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_firstword_reg));
        bufp->chgBit(oldp+241,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__last_mem_valid));
        bufp->chgBit(oldp+242,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__prefetched_high_word));
        bufp->chgBit(oldp+243,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch) 
                                | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT____VdfgRegularize_h233421b0_0_0))));
        bufp->chgBit(oldp+244,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui));
        bufp->chgBit(oldp+245,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc));
        bufp->chgBit(oldp+246,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal));
        bufp->chgBit(oldp+247,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr));
        bufp->chgBit(oldp+248,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_beq));
        bufp->chgBit(oldp+249,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bne));
        bufp->chgBit(oldp+250,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_blt));
        bufp->chgBit(oldp+251,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bge));
        bufp->chgBit(oldp+252,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bltu));
        bufp->chgBit(oldp+253,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bgeu));
        bufp->chgBit(oldp+254,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lb));
        bufp->chgBit(oldp+255,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lh));
        bufp->chgBit(oldp+256,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lw));
        bufp->chgBit(oldp+257,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lbu));
        bufp->chgBit(oldp+258,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lhu));
        bufp->chgBit(oldp+259,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sb));
        bufp->chgBit(oldp+260,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sh));
        bufp->chgBit(oldp+261,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sw));
        bufp->chgBit(oldp+262,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_addi));
        bufp->chgBit(oldp+263,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti));
        bufp->chgBit(oldp+264,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu));
        bufp->chgBit(oldp+265,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xori));
        bufp->chgBit(oldp+266,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ori));
        bufp->chgBit(oldp+267,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_andi));
        bufp->chgBit(oldp+268,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slli));
        bufp->chgBit(oldp+269,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srli));
        bufp->chgBit(oldp+270,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai));
        bufp->chgBit(oldp+271,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_add));
        bufp->chgBit(oldp+272,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub));
        bufp->chgBit(oldp+273,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll));
        bufp->chgBit(oldp+274,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt));
        bufp->chgBit(oldp+275,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu));
        bufp->chgBit(oldp+276,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xor));
        bufp->chgBit(oldp+277,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl));
        bufp->chgBit(oldp+278,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra));
        bufp->chgBit(oldp+279,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_or));
        bufp->chgBit(oldp+280,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_and));
        bufp->chgBit(oldp+281,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle));
        bufp->chgBit(oldp+282,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh));
        bufp->chgBit(oldp+283,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr));
        bufp->chgBit(oldp+284,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh));
        bufp->chgBit(oldp+285,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ecall_ebreak));
        bufp->chgBit(oldp+286,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_fence));
        bufp->chgBit(oldp+287,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_getq));
        bufp->chgBit(oldp+288,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_setq));
        bufp->chgBit(oldp+289,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_retirq));
        bufp->chgBit(oldp+290,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_maskirq));
        bufp->chgBit(oldp+291,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_waitirq));
        bufp->chgBit(oldp+292,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_timer));
        bufp->chgBit(oldp+293,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_trap));
        bufp->chgCData(oldp+294,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rd),5);
        bufp->chgCData(oldp+295,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1),5);
        bufp->chgCData(oldp+296,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2),5);
        bufp->chgIData(oldp+297,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm),32);
        bufp->chgIData(oldp+298,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j),32);
        bufp->chgBit(oldp+299,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger));
        bufp->chgBit(oldp+300,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger_q));
        bufp->chgBit(oldp+301,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger));
        bufp->chgBit(oldp+302,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger_q));
        bufp->chgBit(oldp+303,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__compressed_instr));
        bufp->chgBit(oldp+304,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal));
        bufp->chgBit(oldp+305,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu));
        bufp->chgBit(oldp+306,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slli_srli_srai));
        bufp->chgBit(oldp+307,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
        bufp->chgBit(oldp+308,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw));
        bufp->chgBit(oldp+309,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sll_srl_sra));
        bufp->chgBit(oldp+310,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
        bufp->chgBit(oldp+311,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slti_blt_slt));
        bufp->chgBit(oldp+312,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sltiu_bltu_sltu));
        bufp->chgBit(oldp+313,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu));
        bufp->chgBit(oldp+314,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lbu_lhu_lw));
        bufp->chgBit(oldp+315,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm));
        bufp->chgBit(oldp+316,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg));
        bufp->chgBit(oldp+317,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_compare));
        bufp->chgBit(oldp+318,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
        bufp->chgQData(oldp+319,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr),64);
        bufp->chgQData(oldp+321,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr),64);
        bufp->chgIData(oldp+323,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm),32);
        bufp->chgCData(oldp+324,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1),5);
        bufp->chgCData(oldp+325,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2),5);
        bufp->chgCData(oldp+326,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd),5);
        bufp->chgIData(oldp+327,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val),32);
        bufp->chgIData(oldp+328,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val),32);
        bufp->chgBit(oldp+329,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid));
        bufp->chgBit(oldp+330,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val_valid));
        bufp->chgQData(oldp+331,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_ascii_instr),64);
        bufp->chgIData(oldp+333,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_imm),32);
        bufp->chgIData(oldp+334,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_opcode),32);
        bufp->chgCData(oldp+335,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs1),5);
        bufp->chgCData(oldp+336,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs2),5);
        bufp->chgCData(oldp+337,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rd),5);
        bufp->chgBit(oldp+338,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_next));
        bufp->chgBit(oldp+339,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__launch_next_insn));
        bufp->chgBit(oldp+340,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_valid_insn));
        bufp->chgQData(oldp+341,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_ascii_instr),64);
        bufp->chgIData(oldp+343,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_imm),32);
        bufp->chgIData(oldp+344,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_opcode),32);
        bufp->chgCData(oldp+345,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs1),5);
        bufp->chgCData(oldp+346,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs2),5);
        bufp->chgCData(oldp+347,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rd),5);
        bufp->chgCData(oldp+348,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state),8);
        bufp->chgCData(oldp+349,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_state),2);
        bufp->chgWData(oldp+350,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_state),128);
        bufp->chgBit(oldp+354,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rinst));
        bufp->chgBit(oldp+355,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rdata));
        bufp->chgBit(oldp+356,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_wdata));
        bufp->chgBit(oldp+357,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store));
        bufp->chgBit(oldp+358,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_stalu));
        bufp->chgBit(oldp+359,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch));
        bufp->chgBit(oldp+360,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_compr));
        bufp->chgBit(oldp+361,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_trace));
        bufp->chgBit(oldp+362,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu));
        bufp->chgBit(oldp+363,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh));
        bufp->chgBit(oldp+364,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb));
        bufp->chgCData(oldp+365,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_rd),5);
        bufp->chgIData(oldp+366,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc),32);
        bufp->chgBit(oldp+367,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_timeout));
        bufp->chgIData(oldp+368,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_irq_pending),32);
        bufp->chgBit(oldp+369,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__do_waitirq));
        bufp->chgIData(oldp+370,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out),32);
        bufp->chgIData(oldp+371,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_q),32);
        bufp->chgBit(oldp+372,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0));
        bufp->chgBit(oldp+373,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0_q));
        bufp->chgBit(oldp+374,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_wait));
        bufp->chgBit(oldp+375,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_wait_2));
        bufp->chgIData(oldp+376,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub)
                                   ? (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                                      - vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2)
                                   : (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                                      + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2))),32);
        bufp->chgIData(oldp+377,((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                                  << (0x0000001fU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2))),32);
        bufp->chgIData(oldp+378,((IData)((0x00000001ffffffffULL 
                                          & VL_SHIFTRS_QQI(33,33,5, 
                                                           (((QData)((IData)(
                                                                             (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra) 
                                                                               | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai)) 
                                                                              & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
                                                                                >> 0x0000001fU)))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1))), 
                                                           (0x0000001fU 
                                                            & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2))))),32);
        bufp->chgBit(oldp+379,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_eq));
        bufp->chgBit(oldp+380,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_ltu));
        bufp->chgBit(oldp+381,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_lts));
        bufp->chgBit(oldp+382,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word_q));
        bufp->chgBit(oldp+383,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_write));
        bufp->chgIData(oldp+384,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_wrdata),32);
        bufp->chgIData(oldp+385,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1),32);
        bufp->chgIData(oldp+386,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2),32);
        bufp->chgIData(oldp+387,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control),32);
        bufp->chgIData(oldp+388,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv),32);
        bufp->chgIData(oldp+389,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudCounter),32);
        bufp->chgBit(oldp+390,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick));
        bufp->chgCData(oldp+391,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState),2);
        bufp->chgCData(oldp+392,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter),4);
        bufp->chgCData(oldp+393,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg),8);
        bufp->chgCData(oldp+394,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState),2);
        bufp->chgCData(oldp+395,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter),4);
        bufp->chgCData(oldp+396,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg),8);
        bufp->chgBit(oldp+397,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync_REG));
        bufp->chgBit(oldp+398,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync));
        bufp->chgIData(oldp+399,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter),32);
        bufp->chgBit(oldp+400,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick));
        bufp->chgBit(oldp+401,((1U & (~ ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match) 
                                         & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full))))));
        bufp->chgBit(oldp+402,(((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6)) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0))));
        bufp->chgCData(oldp+403,(((1U & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0)) 
                                         | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6)))
                                   ? 0U : (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg))),8);
        bufp->chgBit(oldp+404,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_11) 
                                & (0U == (0x000000ffU 
                                          & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr)))));
        bufp->chgBit(oldp+405,((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty)))));
        bufp->chgCData(oldp+406,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value]),8);
        bufp->chgCData(oldp+407,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value),4);
        bufp->chgCData(oldp+408,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value),4);
        bufp->chgBit(oldp+409,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full));
        bufp->chgBit(oldp+410,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match));
        bufp->chgBit(oldp+411,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty));
        bufp->chgBit(oldp+412,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full))));
        bufp->chgBit(oldp+413,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en));
        bufp->chgCData(oldp+414,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+415,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+416,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+417,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+418,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+419,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+420,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+421,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+422,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+423,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+424,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+425,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+426,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+427,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+428,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+429,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+430,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+431,((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full)))));
        bufp->chgBit(oldp+432,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__io_enq_valid));
        bufp->chgCData(oldp+433,(((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__io_enq_valid)
                                   ? (0x000000ffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata)
                                   : 0U)),8);
        bufp->chgBit(oldp+434,(((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState)) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_1))));
        bufp->chgBit(oldp+435,((1U & (~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty)))));
        bufp->chgCData(oldp+436,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory
                                 [vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value]),8);
        bufp->chgCData(oldp+437,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value),4);
        bufp->chgCData(oldp+438,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value),4);
        bufp->chgBit(oldp+439,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full));
        bufp->chgBit(oldp+440,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match));
        bufp->chgBit(oldp+441,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty));
        bufp->chgBit(oldp+442,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full));
        bufp->chgBit(oldp+443,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en));
        bufp->chgCData(oldp+444,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[0]),8);
        bufp->chgCData(oldp+445,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[1]),8);
        bufp->chgCData(oldp+446,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[2]),8);
        bufp->chgCData(oldp+447,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[3]),8);
        bufp->chgCData(oldp+448,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[4]),8);
        bufp->chgCData(oldp+449,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[5]),8);
        bufp->chgCData(oldp+450,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[6]),8);
        bufp->chgCData(oldp+451,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[7]),8);
        bufp->chgCData(oldp+452,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[8]),8);
        bufp->chgCData(oldp+453,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[9]),8);
        bufp->chgCData(oldp+454,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[10]),8);
        bufp->chgCData(oldp+455,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[11]),8);
        bufp->chgCData(oldp+456,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[12]),8);
        bufp->chgCData(oldp+457,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[13]),8);
        bufp->chgCData(oldp+458,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[14]),8);
        bufp->chgCData(oldp+459,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[15]),8);
        bufp->chgBit(oldp+460,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+461,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT__rxHalfBaudTick));
    }
    bufp->chgBit(oldp+462,(vlSelfRef.simple_edge_ai_tb_fixed__DOT__clk));
    bufp->chgIData(oldp+463,(((((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
                                & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio)) 
                               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_gpio_valid))
                               ? (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__gpio_in)
                               : 0U)),32);
}

void Vsimple_edge_ai_tb_fixed___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root__trace_cleanup\n"); );
    // Body
    Vsimple_edge_ai_tb_fixed___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_edge_ai_tb_fixed___024root*>(voidSelf);
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}

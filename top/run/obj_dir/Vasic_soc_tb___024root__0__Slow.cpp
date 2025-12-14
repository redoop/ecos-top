// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_soc_tb.h for the primary calling header

#include "Vasic_soc_tb__pch.h"

VL_ATTR_COLD void Vasic_soc_tb___024root___eval_static(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval_static\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__asic_soc_tb__DOT__clk__0 
        = vlSelfRef.asic_soc_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__asic_soc_tb__DOT__rst_n__0 
        = vlSelfRef.asic_soc_tb__DOT__rst_n;
}

VL_ATTR_COLD void Vasic_soc_tb___024root___eval_initial__TOP(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval_initial__TOP\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("wave_asic_soc_combined.vcd"s);
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("ASIC + SoC combined testbench started at time %0t\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
}

VL_ATTR_COLD void Vasic_soc_tb___024root___eval_final(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval_final\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_soc_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vasic_soc_tb___024root___eval_phase__stl(Vasic_soc_tb___024root* vlSelf);

VL_ATTR_COLD void Vasic_soc_tb___024root___eval_settle(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval_settle\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vasic_soc_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("asic_soc_tb.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vasic_soc_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vasic_soc_tb___024root___eval_triggers__stl(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval_triggers__stl\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vasic_soc_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vasic_soc_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_soc_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vasic_soc_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vasic_soc_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vasic_soc_tb__ConstPool__TABLE_h57ed7a03_0;

VL_ATTR_COLD void Vasic_soc_tb___024root___stl_sequent__TOP__0(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___stl_sequent__TOP__0\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN 
        = (0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0 
        = (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_6 
        = (2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN 
        = (0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_0 
        = (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_0 
        = (0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_2 
        = (0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_3 
        = (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_4 
        = (2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1))
            ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs
           [vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1]
            : 0U);
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2))
            ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs
           [vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2]
            : 0U);
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k) 
           < (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize 
              - (IData)(1U)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k) 
           < (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize 
              - (IData)(1U)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state)) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_write = 0U;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write 
        = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
            >> 2U) & ((~ (0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) 
                      & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata)));
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
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_pc 
        = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch) 
            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store))
            ? (0xfffffffeU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out)
            : vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc);
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle) 
           | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr) 
                 | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh))));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_imm;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_opcode;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs1;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs2;
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rd;
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
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick 
        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudCounter 
           >= (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv 
               - (IData)(1U)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6 
        = ((0U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState)) 
           | ((1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState)) 
              | (2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState))));
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
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en 
        = ((0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)) 
           & (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT____VdfgRegularize_h233421b0_0_0 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
           | ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick 
        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter 
           >= (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv 
               - (IData)(1U)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_en 
        = ((0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
           & (1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_eq 
        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
           == vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1, vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_ltu 
        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
           < vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
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
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
           & (0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb)));
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
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value));
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
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren 
        = ((~ (0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb))) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet 
        = ((0x10000fffU < vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
           & (0x10002000U > vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
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
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 = 0U;
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
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out = 0U;
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
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr 
        = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_ascii_instr;
    if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_next) {
        if (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_imm;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_opcode;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs1;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs2;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rd;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode))
                    ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode));
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rd;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr 
                = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full)) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full)) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full));
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
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_5) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T 
        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data 
           + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator);
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T_3 
        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator 
           - vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data);
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_1 
        = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
           & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty)) 
              & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick)));
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
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_ready) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9 
        = ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_wen));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13 
        = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet)) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match) 
               & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full))) 
           & ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6)) 
              & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0)));
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
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done 
        = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m) 
            >> 2U) & (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer) 
                       & ((0U != (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state)) 
                          & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT____VdfgRegularize_h233421b0_0_0))) 
                      | ((3U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state)) 
                         & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst))));
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data 
        = (((IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
            & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12))
            ? vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory
           [(0x000000ffU & (((IData)(0x0100U) + vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
                            >> 2U))] : 0U);
    vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full)) 
           & (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__io_enq_valid));
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
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb = 0x0fU;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2;
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word 
            = vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        if ((2U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)) {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb = 0x0cU;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word 
                = (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
                   >> 0x10U);
        } else {
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb = 3U;
            vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word 
                = (0x0000ffffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata);
        }
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata 
            = ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2));
    } else if ((2U == (IData)(vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)));
        vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata 
            = ((vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2))));
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

VL_ATTR_COLD void Vasic_soc_tb___024root____Vm_traceActivitySetAll(Vasic_soc_tb___024root* vlSelf);

VL_ATTR_COLD void Vasic_soc_tb___024root___eval_stl(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval_stl\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vasic_soc_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vasic_soc_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vasic_soc_tb___024root___eval_phase__stl(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___eval_phase__stl\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vasic_soc_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vasic_soc_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vasic_soc_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vasic_soc_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_soc_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vasic_soc_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge asic_soc_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge asic_soc_tb.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vasic_soc_tb___024root____Vm_traceActivitySetAll(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root____Vm_traceActivitySetAll\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vasic_soc_tb___024root___ctor_var_reset(Vasic_soc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_soc_tb___024root___ctor_var_reset\n"); );
    Vasic_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->asic_soc_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14193279225171599917ull);
    vlSelf->asic_soc_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13989632360250556700ull);
    vlSelf->asic_soc_tb__DOT__ip_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14762167455191387746ull);
    vlSelf->asic_soc_tb__DOT__test_counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13003505141998565011ull);
    vlSelf->asic_soc_tb__DOT__state_machine = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14320224803673967244ull);
    vlSelf->asic_soc_tb__DOT__data_bus = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14583697582961771603ull);
    vlSelf->asic_soc_tb__DOT__enable_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8080997451195744876ull);
    vlSelf->asic_soc_tb__DOT__ready_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16934511116024505737ull);
    vlSelf->asic_soc_tb__DOT__valid_signal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14652791650248038660ull);
    vlSelf->asic_soc_tb__DOT__control_flags = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1101898230113118279ull);
    vlSelf->asic_soc_tb__DOT__status_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1559920208916746592ull);
    vlSelf->asic_soc_tb__DOT__clock_div2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13176105532579806200ull);
    vlSelf->asic_soc_tb__DOT__clock_div4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9053432328644209571ull);
    vlSelf->asic_soc_tb__DOT__clock_div8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 794903914278713730ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__rst_50m_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1881698345454146137ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__rst_25m_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1686810691140874536ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__clk_div2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8801832801573073011ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__clk_div4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2477389861739931473ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3586321835355359979ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__ip1_io_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16472624174913485322ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11955658494036057504ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11939111903765469231ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18172909591166585052ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13023027591735422363ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15194343314982842582ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10512957807528330594ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8128458724484976863ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3524263238962147282ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1188260336076185702ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18164054434060892498ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18352938794962936193ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4136489204960180615ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11758260531300074619ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9671096537350936026ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17321862129608665585ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__eoi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10715804699224972043ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__trace_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16027245761114864674ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__trace_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 7376014634591252219ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11838854776397187708ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11848447602083673083ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7675611159100478159ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5205002358333151134ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1374613411381738870ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13291477500025981355ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8686617281154028126ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1107388586787001302ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11826196289620875298ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3943781968636768508ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2520937168533391095ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5634086758830782098ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16381315579644822463ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11867371767701121463ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13022646442628762630ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17178603962388654610ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__timer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9658867347112473593ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14948665595681235825ull);
    }
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11503286981437337727ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12963350598537806079ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16216332366928941620ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3548149842508243898ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18216701909625742444ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7049553718283855766ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8435501835566042569ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13883550805196405146ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 826368811008775635ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7003561096030485849ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_secondword = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4590913104936846074ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_firstword_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12970776764070612787ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__last_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3550303899453446313ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14341027078353240423ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14226370510197208049ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_16bit_buffer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15200430237097194596ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 506666449667513197ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7019379506302533103ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11824221169792035967ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13484313944625247546ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4247914639918294182ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17625141311800955921ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8961009899919246788ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6113692506146172368ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9014412203736162786ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3786554996155467621ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5595169109225180670ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7830266450616250260ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10439159176456722849ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17891481885720807005ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9573626485075885329ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9743670577714585764ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18416756639622649340ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13216431685362270127ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13122561474188562462ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3399818115270663640ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_addi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8823904442609961961ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10060287393497632191ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11145254989367678779ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10263410801663208535ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16544501026761715225ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13745573729579066420ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17264036884990424422ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 126703619180398650ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14112343105428558232ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6082780087717013218ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13822838675519327670ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1824129784568843728ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17196130813060989584ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 848126483226071840ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5392504081936956123ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2590598658555417406ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4993020314597231696ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_or = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2567082775263517028ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_and = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14678379270816195746ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2911189177820445970ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2088256633328893628ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10311840868054192028ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867786595974885179ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ecall_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3432437367856744145ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_fence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12127979231792732716ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_getq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9483415771582778353ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_setq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9029214773716737168ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_retirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209249473558167305ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_maskirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10835595620698473566ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4635874128259997592ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_timer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16958725609090855716ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1426303371902151066ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11933782160988563173ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3186243800669055881ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8871149082545346770ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7461224654351639140ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13246604422585958305ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15207343751517949025ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2398625400604643482ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11110058964043466338ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12190874104512368317ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__compressed_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 364304547464541326ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16197426682917655500ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10327032770037952651ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slli_srli_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7940551445904068251ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13050056508605504477ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17857521757423424243ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sll_srl_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16428623620640633782ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5979209514377144994ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slti_blt_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6690571721727261974ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sltiu_bltu_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8515902687423107786ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12517721525132689752ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lbu_lhu_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7601980030178984983ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13934708012213048097ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9218599609750798510ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_compare = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 152673561045093489ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14002222500075339069ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4416850683769954184ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3066957783472200281ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4662661463763051761ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17135257404263459142ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6648449833622514906ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17252237140697749521ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5257771827327291780ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6706767973582750485ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10218149499426093687ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1315372678865883509ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15070566960956649583ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16197272139447148417ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17697456077203246136ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17115504257564210427ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12864226167998188887ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7314605920911413110ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5105282140796784241ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__launch_next_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13817359347041869642ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_valid_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6166394672710428240ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9943667693190103879ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8345619821451914841ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15324234943992345393ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3650094627332310750ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13518999017658156944ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11400981173205582960ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 670407777963628852ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1000514838718739792ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_state, __VscopeHash, 1882132721732036206ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8077482871023706203ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17972939014288553090ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16059633562063197387ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10936023653358275916ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_stalu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8351160273970165347ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1498833951243290765ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_compr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13027973085416011139ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_trace = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3813027522273601016ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17133913513735760393ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1505983620304459514ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6532288280991848658ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5494795799462805740ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17638217885932257988ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_timeout_counter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12978880919919046085ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_timeout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2060777380978238315ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 108414357612064988ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__do_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6124404684459337697ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11139962583070647317ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5228560308759294380ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6877518766401124207ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6840696611419281211ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3314317002363751608ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_wait_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4018944371965098003ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15893271179349144579ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_ltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17267804155552753202ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_lts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 842833275929088642ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12874903859736975904ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18446143888598466599ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_wrdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9695085032189310176ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 131837984621662591ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14879475827606417013ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT____VdfgRegularize_h233421b0_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9477044951496861568ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15031574857573273724ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5629198683585659138ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17716337476385155250ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3460666918396056118ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8233680434648589738ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12185940687360630253ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12704130537208974585ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13808440760230512935ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_uart_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10178568907247525203ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_lcd_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12040961186785787136ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_gpio_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6558307790870683338ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_flash_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7735256955596753853ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2828662131993924365ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11350349716311279012ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2059086057784649101ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9994517760085269425ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1901143980712102819ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7057258784243223468ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10340353074252678885ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12815634204126189433ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10099242230517700913ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18322563541120818077ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7988599925240799527ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13656730480954944587ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13576606598762109683ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4797968567583484239ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1299420791631993886ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1825180256909527648ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__accumulator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11431969614772141978ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15969697522765702160ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6130894649665748246ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16881449339002818387ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1366625870707886101ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12406665420064172101ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2804951664430963529ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12019985900024906450ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2355958399729031114ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_15, __VscopeHash, 581385797857944360ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_16 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4461660377481637507ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4671626933876929865ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9377012144459690360ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14328916564359558030ull);
    }
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__W0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13413465542814764422ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9515926997690252671ull);
    }
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4859761509947248922ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5678128389828962544ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__config_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8759413665781248509ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17762145015008328729ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14209969088054842779ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5800484875055622290ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__errorCode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5945156202373765313ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14617967406957486863ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6624317508178636755ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2908666421911684205ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16719270459635695263ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8824702076468952845ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14416378575475742838ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12953785606243312246ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7310100480021459933ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11576072428436517654ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6962088094164761078ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6123481726511689208ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7181829855061292220ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17907661354512670292ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12919430069414840938ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9619195631706243701ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17985565716081796946ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7967599684976709478ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7877975664422107295ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3827813536295348510ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12374283324897320025ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__isLastElement = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16753578782159691264ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_18, __VscopeHash, 11134400944903920826ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_19 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14850167877785968021ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12017515094076079846ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4096725819301830144ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4172315803939771876ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2868014068219530201ull);
    }
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7637550172698226072ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9016064151736810442ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1835195557589981322ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10461004058185158178ull);
    }
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17616743352043538306ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18354759291494265757ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudCounter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3507212969503903870ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10203561394725139149ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13248288796102793504ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4501623664993547919ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1489605896129041032ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16484621854790441ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9744028867517617424ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17724122846083965417ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8458732171075744910ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5202601630393529086ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7026418001774320440ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6770278750741530275ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6601268265326138624ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11352719989362213693ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3227415833159027202ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13492630451714000793ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8779575334765857275ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12098304641253213133ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4621697395136018485ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10523181646022010478ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8181225927486973270ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16526696058733688441ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17484112496801243898ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4790980036553240242ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2786757517892348768ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT__rxHalfBaudTick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4423515194322995007ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9997135574950435691ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_16 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17532425344435331252ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_17 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13199284668512972550ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 623836723268219823ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__io_enq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1527556038732248772ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 267850991299237114ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2353472345077454474ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7724235807672418224ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5141433082595458885ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15369915456904245278ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 57090455582092952ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10169662626510793565ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16540377817096438675ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 257701728514754372ull);
    }
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15623637510385312793ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7644804081698054471ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1136770308135025422ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1585993214031344880ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9574645058523177123ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8931705571121422629ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12306550358378619132ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1163418180457260736ull);
    }
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5282713039973054983ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13762486809524110016ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiClkReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13179907345318897339ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10650501746624491529ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiShiftReg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4558443129434588734ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16704049445960272126ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiDC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2477568132206291913ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16327584471926050267ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3691016510798468702ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5136488684821683524ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9363734680879490698ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txIsData = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5210698845333237609ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7776932613879292734ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8602952200516599406ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12772841342503100316ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17644832484528510513ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6532691031376725620ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 340049530637789175ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5514464892724482821ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6392147614413839262ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__gpio__DOT__gpioOut = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8815383548365666891ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2150328570597519657ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 748735448444745424ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11550801430665688112ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9857285713376368184ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7574540854254565496ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiCounter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9268305957860693050ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4002265812557277820ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14607183001542807806ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15413696609626659898ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8463535628464512015ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4649666790785842927ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__mosiReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4757185072875738959ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkLast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13502647948647476891ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6099524852605312121ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7267525773953203703ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6178216366251666569ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiPosEdge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17297866518702118482ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13269442725439445782ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6500051304945780816ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5152305041327472470ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15839650515763748546ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11339370102004361483ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9719156024227726734ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7038818406210999632ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17357126074538687164ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12183816989708183381ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17311983292728870210ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6836068051742065948ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13539600285186783390ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15565096533179689363ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18409410040257847998ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17184178340060205675ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15638331604971042845ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1898331482537746180ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_21 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15724547559656322802ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_22 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18086970971531141309ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5358891703986706828ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12338400160487812166ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17952420549853737571ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13586993689806577299ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16880046189287301609ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 916417624775355615ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17060796244081501252ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13290998850808447850ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15461003784246278723ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2385136087636242374ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10041634284832847837ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12097478228974046969ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1045683757597175528ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6712650550436144984ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18022283646191252024ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13494052171190751914ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5227364849379414417ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2126892395848879832ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OutReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15511099627529019791ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OeReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1035403058650550405ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OutReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14463741053724814530ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OeReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9549528092410574931ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13984123751010889261ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7460468593961704199ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1268983832745607669ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10079547988572607041ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17735755030144113842ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16148667739177679924ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15060212178096218377ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10587704130568103241ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7517513459409248626ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9288848342350993408ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12962077564419101182ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11933658876384016793ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7545431599882244008ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16034621517941710074ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9966988918144117432ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16155115253347346213ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14404419361096803243ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15585321956431230307ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13248837787217835686ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15786254494066445595ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12485707712221216724ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15708069592322133059ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3983990401401631305ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9485505172673668623ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13378533227538606768ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1968488670282398748ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15792810498822802232ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18385987149866335768ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_27 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6262288573979441971ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2264253309920865815ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12392477346938262942ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12769980589574042636ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31, __VscopeHash, 12727662328396992750ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32, __VscopeHash, 9363282618807780492ull);
    vlSelf->asic_soc_tb__DOT__u_asic_top__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5676733845914852669ull);
    vlSelf->__Vdly__asic_soc_tb__DOT__u_asic_top__DOT__rst_sync_100m = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6722352042860920128ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__asic_soc_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8582727543727875093ull);
    vlSelf->__Vtrigprevexpr___TOP__asic_soc_tb__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 413778103830698903ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

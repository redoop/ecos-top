// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_edge_ai_tb_fixed.h for the primary calling header

#include "Vsimple_edge_ai_tb_fixed__pch.h"

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root___eval_static(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval_static\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__simple_edge_ai_tb_fixed__DOT__clk__0 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__clk;
}

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root___eval_initial__TOP(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval_initial__TOP\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("wave_simple_edge_ai.vcd"s);
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("SimpleEdgeAiSoC testbench started\n",0);
}

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root___eval_final(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval_final\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsimple_edge_ai_tb_fixed___024root___eval_phase__stl(Vsimple_edge_ai_tb_fixed___024root* vlSelf);

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root___eval_settle(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval_settle\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsimple_edge_ai_tb_fixed___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("simple_edge_ai_tb_fixed.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vsimple_edge_ai_tb_fixed___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root___eval_triggers__stl(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval_triggers__stl\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple_edge_ai_tb_fixed___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vsimple_edge_ai_tb_fixed___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vsimple_edge_ai_tb_fixed___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vsimple_edge_ai_tb_fixed___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vsimple_edge_ai_tb_fixed__ConstPool__TABLE_h57ed7a03_0;

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root___stl_sequent__TOP__0(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___stl_sequent__TOP__0\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN 
        = (0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0 
        = (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_6 
        = (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN 
        = (0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_0 
        = (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_0 
        = (0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_2 
        = (0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_3 
        = (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_4 
        = (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1))
            ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs
           [vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1]
            : 0U);
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2))
            ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs
           [vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2]
            : 0U);
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k) 
           < (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize 
              - (IData)(1U)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k) 
           < (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize 
              - (IData)(1U)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__launch_next_insn 
        = ((0x40U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state)) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_write = 0U;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) 
           & ((~ (0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) 
              & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata)));
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
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_pc 
        = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch) 
            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store))
            ? (0xfffffffeU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out)
            : vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc);
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle) 
           | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh) 
              | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr) 
                 | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh))));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_imm;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_opcode;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs1;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs2;
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rd;
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
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_read 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) 
           & ((~ (0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state))) 
              & ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
                 | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch) 
                    | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata)))));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick 
        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudCounter 
           >= (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv 
               - (IData)(1U)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6 
        = ((0U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState)) 
           | ((1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState)) 
              | (2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState))));
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
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en 
        = ((0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)) 
           & (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT____VdfgRegularize_h233421b0_0_0 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst) 
           | ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick 
        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter 
           >= (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv 
               - (IData)(1U)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_en 
        = ((0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)) 
           & (1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state)));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_eq 
        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
           == vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1, vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_ltu 
        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 
           < vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2);
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
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid) 
           & (0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb)));
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
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value));
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
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren 
        = ((~ (0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb))) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet 
        = ((0x10000fffU < vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
           & (0x10002000U > vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr));
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
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 = 0U;
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
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out = 0U;
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
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr 
        = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_ascii_instr;
    if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_next) {
        if (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_imm;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_opcode;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs1;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs2;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rd;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode))
                    ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode));
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rd;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr 
                = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full)) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full)) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full));
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
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_5) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T 
        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data 
           + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator);
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T_3 
        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator 
           - vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data);
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_1 
        = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control 
           & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty)) 
              & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick)));
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
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_ready) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_wen));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13 
        = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren) 
            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet)) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en 
        = ((~ ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match) 
               & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full))) 
           & ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6)) 
              & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0)));
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
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done 
        = ((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__rst_n) 
           & (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer) 
               & ((0U != (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state)) 
                  & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT____VdfgRegularize_h233421b0_0_0))) 
              | ((3U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state)) 
                 & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst))));
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data 
        = (((IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13) 
            & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12))
            ? vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory
           [(0x000000ffU & (((IData)(0x0100U) + vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr) 
                            >> 2U))] : 0U);
    vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en 
        = ((~ (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full)) 
           & (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__io_enq_valid));
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
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb = 0x0fU;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2;
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word 
            = vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        if ((2U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)) {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb = 0x0cU;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word 
                = (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata 
                   >> 0x10U);
        } else {
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb = 3U;
            vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word 
                = (0x0000ffffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata);
        }
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata 
            = ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2));
    } else if ((2U == (IData)(vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize))) {
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1)));
        vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata 
            = ((vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2))));
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

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root____Vm_traceActivitySetAll(Vsimple_edge_ai_tb_fixed___024root* vlSelf);

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root___eval_stl(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval_stl\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vsimple_edge_ai_tb_fixed___024root___stl_sequent__TOP__0(vlSelf);
        Vsimple_edge_ai_tb_fixed___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vsimple_edge_ai_tb_fixed___024root___eval_phase__stl(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___eval_phase__stl\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsimple_edge_ai_tb_fixed___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vsimple_edge_ai_tb_fixed___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vsimple_edge_ai_tb_fixed___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vsimple_edge_ai_tb_fixed___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsimple_edge_ai_tb_fixed___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge simple_edge_ai_tb_fixed.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root____Vm_traceActivitySetAll(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root____Vm_traceActivitySetAll\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vsimple_edge_ai_tb_fixed___024root___ctor_var_reset(Vsimple_edge_ai_tb_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_edge_ai_tb_fixed___024root___ctor_var_reset\n"); );
    Vsimple_edge_ai_tb_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->simple_edge_ai_tb_fixed__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10399587050274963513ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6085766536268802523ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__uart_rx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10237898671673019450ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__gpio_in = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9083474540232895795ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3398634865345813936ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__flash_spi_miso = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17106561638730154469ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__psram_spi_miso = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10443155435854010178ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__psram_spi_sio2_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9890079710586184163ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__psram_spi_sio3_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11773875826020761005ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4024894456998316719ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 595994061377524131ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16922697732458347753ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT___riscv_mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14188079461696629864ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9825160800857608745ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9754366729423084914ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12124646771981343912ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11804112492076436081ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4271021676528182952ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 219971472053353588ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3359766688753410828ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11617804281687386551ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 200106660122090251ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12453848922889827436ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4337442112168174090ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__eoi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4141992405048223181ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__trace_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13843242545107138574ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__trace_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 16403292236267812823ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_cycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7319721258268038496ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__count_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12719372434902733517ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6385127756196339983ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11950676781492878520ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 57453317417633379ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5094234163470529661ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17345223103522679408ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__reg_sh = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4649528988755700163ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3227334523601527857ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15951339420748917239ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13490326026027559011ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12775198750956832258ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12850487580627535115ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13971975240777763360ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16614599415252550129ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12161023154577885104ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__timer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16587579353055084589ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4566552505734891955ull);
    }
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9397592105918088064ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14559544327778141707ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_wordsize = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10652216188254207877ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11598803904798047023ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7407518833853337341ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_prefetch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3215136921468893411ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8802309337788940836ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5924956791517815243ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1963285535268766436ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_xfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11677271240671048766ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_secondword = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 954195936060492447ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_la_firstword_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 932976874612793971ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__last_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3971978779385380595ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16508479573449778141ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11863250098630499190ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_16bit_buffer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6693334644254990909ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_rdata_latched_noshuffle = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18429369833625062343ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__mem_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15664304245565809768ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lui = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16873147641114743015ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12829103284834929713ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3527256058083729439ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17538408630551854434ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12006775232096130311ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17946266069235585121ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17957539036367292437ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8726758961814092933ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4317616982620353504ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12553897618347696685ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5631521618368772732ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13293361715055376668ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3162741702092715700ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 326119247786821041ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12335669923946155029ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2989921263762226481ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17785682913045864581ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11933469109645341332ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_addi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11109749536122009065ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slti = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16037613757530280356ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltiu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2040886913970199499ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8670464066240914063ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17023624706904622848ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6206709584321042748ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11297221576375634786ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16223510357943820775ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15494803082563448718ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11640930451224492131ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11043416151381529872ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13175793935374162395ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13075870930878228890ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4597011138333679928ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11919855263482019089ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_srl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12564709703037770137ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13391291019409117258ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_or = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9166820987973959893ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_and = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5701859814227771948ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7834646415990396144ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdcycleh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12859973824821307389ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17274384676949140431ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6146775632014624089ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_ecall_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12687227472446626412ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_fence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17180345637213254494ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_getq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12853773588912455686ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_setq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18225285912962954614ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_retirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1157660187093511415ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_maskirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12498904971734101639ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10621074082150545513ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_timer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10531542005929619212ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__instr_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10660324687457006766ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17904658429168971386ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9376000546239530717ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13731445666390099803ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3751253256619128553ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoded_imm_j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17583064753204212428ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1331895341873474076ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7961784248843599044ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16945322444220078605ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__decoder_pseudo_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7881801149196331659ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__compressed_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9146929622632843965ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15372061069301711397ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lb_lh_lw_lbu_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17310971053964638959ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slli_srli_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10471755501666948052ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1055128883858821336ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sb_sh_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13712533374626106577ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sll_srl_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15182138546048148217ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13567672645000561767ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_slti_blt_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17351850648292946103ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_sltiu_bltu_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3095119919701601996ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16800495568977730646ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_lbu_lhu_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13687320547514145258ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4697952903587941689ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_alu_reg_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5652586007477049688ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_compare = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16556060977055303408ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18293081481518318909ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__new_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4424533858784194717ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12373722528876610349ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15403742125136128496ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9226195864124344749ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12233219852607397163ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1607529078453054797ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 125776076924915942ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2753875326172307567ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs1val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5563887887208416797ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_rs2val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2425306710000756659ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12666337320583269581ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15395855159276275804ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7757168039187454942ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17364214854907343970ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10336216180349400882ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__q_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15825372480474574772ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11327876306749844459ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__launch_next_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8798308897263962888ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_valid_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4197745995128310448ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11868223912562760577ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8060122798791547141ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6834942101427990240ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9425153742076432477ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13987536640819906057ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cached_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14356537842656045855ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpu_state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6460441621147332286ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__irq_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16345556489545125973ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__dbg_ascii_state, __VscopeHash, 17741161825414649505ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6736284377256787872ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7393505502002387933ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__set_mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8771039583333115751ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5137267185899438402ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_stalu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17693308581346058908ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13305530520478177123ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_compr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 86875523565612457ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_trace = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4483037329014575377ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17195382647946723181ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14488586474449296116ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_is_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 716589022795490842ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__latched_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5017811282377803367ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__current_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9654485724600545514ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_timeout_counter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17305761327358174105ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__pcpi_timeout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3015169840457805547ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__next_irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14184723963740654563ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__do_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1844365582556562874ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5320213163558841327ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1656661955711914932ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1300621030533279140ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_out_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16557685552746363938ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9009713164738457532ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_wait_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4547775474712614482ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17367569452981556727ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_ltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2945347615464550995ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__alu_lts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12165123948763372582ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__clear_prefetched_high_word_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4771913716850977784ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8532498679694008776ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_wrdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11478187957578324571ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 308730337794661714ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT__cpuregs_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 945560390873917810ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__riscv__DOT____VdfgRegularize_h233421b0_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7990208291621081884ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11852904771068676887ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11107795982850731513ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9191697369048992038ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__memAdapter__DOT__io_reg_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14256505565077125131ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10266466583323757064ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_compact_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5022485480032781470ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11396743960709426548ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_bitnet_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6582219528829337074ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_uart_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8838892738882829180ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_lcd_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1238987676353998382ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_gpio_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5453786619965377955ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_flash_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1262086038120179630ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__io_psram_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1627812100742606553ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_compact = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14409129702749885688ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_bitnet = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3586895371815098188ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_uart = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10561525126640530964ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_lcd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7388810546969143824ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_gpio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13306388104169213451ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_flash = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10810153219705472689ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__decoder__DOT__sel_psram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6044919051678315092ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__ctrl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14219329802749446523ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1684072440020386650ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixSize = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14730439349105098833ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__perfCycles = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4662900830532160334ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13032416219888001186ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11680288261546444209ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__j = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15202781765812155051ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__k = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 465951349641456704ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__accumulator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13838202359417040007ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7873483082166558896ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17614140314039561448ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4353421823178207699ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4037318742451260792ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5202515448984913177ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1876127484288642210ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10196989147768967618ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 763428134995658066ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_15, __VscopeHash, 17685211160425970318ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__unnamedblk1__DOT___GEN_16 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7758593004659258097ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__R0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 577023577959661038ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixA_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6168677716106029446ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixB_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14925802839660222441ull);
    }
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__W0_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2842416474002364862ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__compactAccel__DOT__matrixC_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10469277563677397280ull);
    }
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__ctrl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4325181668181817551ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__status = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14487990075445349307ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__config_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14664191559512523730ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__matrixSize = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17523813783538543107ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__perfCycles = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10348393529878136601ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__sparsitySkipped = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7400330894033707731ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__errorCode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13649597990908341146ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 956145691730852671ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16008256697308369008ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__j = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7962932428250481359ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__k = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6087555967693990835ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__accumulator = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11959137759453383372ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__finalizeCounter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9913647162381978982ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3744710273655296636ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10261452937489936407ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5483266442018575789ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___newAccum_T_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17885212882583787583ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16671247799958312300ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10159707880355219580ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7231143512069210324ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13405931294554230696ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5458461133416607050ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5627033988262787861ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT___GEN_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6078544462077046927ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8705044575438731339ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6595241048521184568ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2632444170711659482ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__isLastElement = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4933955177093098450ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_18, __VscopeHash, 14083445730715804682ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT___GEN_19 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7746326574774944554ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14346957473390438890ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1830566988298523066ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__R1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11925753770678050178ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__activation_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4244719607086420637ull);
    }
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R0_data = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17486496062716003208ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__R1_data = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3192448544070218616ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__weight_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12420630488836149764ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__bitnetAccel__DOT__result_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6062265677396112573ull);
    }
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__control = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4097083337368769141ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudDiv = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9088824453890549554ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudCounter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16642659749743198915ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__baudTick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17190962922780684472ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txState = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11695725385850105955ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txBitCounter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13619434390415305126ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txShiftReg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11140465715713486034ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5747859435007573577ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15987737089647214679ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13147664463904838136ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxState = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 478327799052025975ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBitCounter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1964971891009982653ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxShiftReg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7785936431383268358ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15600964706794513110ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxSync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 227237031115467051ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudCounter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3925108611847686800ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxBaudTick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18393711163671991633ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13121015040752263516ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11226699143986878359ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2672710655348458519ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5757311553551390168ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7016597289815890300ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8305366058329938720ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1866501085250991831ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8644774743395373745ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1724113798395205321ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8142696994656068028ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT__rxHalfBaudTick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8720968089833999138ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8505868267638502874ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_16 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7210466424924032088ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__unnamedblk1__DOT___GEN_17 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16739794987113690996ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT____VdfgRegularize_h981ce36b_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2342672294489643404ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__io_enq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11117577454250627065ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9520003203713059566ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3466886519306730843ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13332243733841649625ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6794972193972940664ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1460044719418363842ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15118575121769198304ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16327737704700272370ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5313854721512857992ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__txFifo__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9694414689733519092ull);
    }
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3244355578330555280ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12178949406636068937ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__maybe_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2193532645705739125ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ptr_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10306197770060801789ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15458981809746492960ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__unnamedblk1__DOT__do_deq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1670092527797657119ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__W0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12413162075881353231ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__uart__DOT__uart__DOT__rxFifo__DOT__ram_ext__DOT__Memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8201258031481607846ull);
    }
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__control = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11380697515038726585ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCounter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17459724153764019149ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiClkReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5640722087223879172ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18205997269259314847ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiShiftReg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10327142040722890777ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiBitCounter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9061761840084804826ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiDC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14248178184385150532ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__spiCS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11731276633498252961ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3382048447575431532ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4991765684577361368ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10471423514437412366ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__txIsData = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12681053897896857858ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9222043711854585269ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7310498048557079689ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 485427405863446395ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10308563933835535620ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1334739895128114463ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14551956478689962953ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT___GEN_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15161335114751834806ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__lcd__DOT__lcd__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9329967020839033397ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__gpio__DOT__gpioOut = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11010525711618233644ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__cmdReg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6570916167088227473ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__addrReg = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7870422348668482907ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__dataReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6354276436923973043ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__busyReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2238267528227392407ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__doneReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1411312919460175661ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiCounter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16698185131119853680ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9950088727394340521ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8636283651591487421ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__bitCounter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3660757911311470316ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__shiftReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10007310832963682849ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__csReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17055078064926060455ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__mosiReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8568571900881207385ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__spiClkLast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11844846800463939296ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11970897028313269390ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__startReq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 663680668594197479ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9382410768960589828ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiPosEdge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16790311200793231068ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__spiNegEdge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13363150225378372457ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6850428109909071978ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10716916348512644877ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16150606906242935312ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10818666909687727951ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15356323622441898241ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5084667498371865613ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17372802035497594097ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9519049477939652047ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4650898404333862360ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4442960906982521851ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7055059266171765464ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18136619782410148033ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4898122551204627684ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5195045547385393858ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14354570786821897549ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 812792148090400980ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_21 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7177808188993572375ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT___GEN_22 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18039698101370956217ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15982521825125375509ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13070026998299787917ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__flash__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15873985130068703804ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__cmdReg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 610860412727917561ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__addrReg = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17099856176267387899ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6003351296008684681ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__ctrlReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5006120376551830936ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__statusReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3068245066148075028ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__configReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3281995006258650613ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3952581060805923302ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__clkDiv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11960744057902394024ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10472359976998198928ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__spiClkEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 973685030487398391ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__bitCnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10221028423246580506ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__shiftReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5688532232061003318ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__dataOut = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14296728486030992100ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__mosiReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9483931004887265649ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__csReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3512055635767826416ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OutReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14941164540604581358ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio2OeReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8502381574390336470ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OutReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6088941763618278963ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__sio3OeReg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8174646141532250569ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1410849682744517522ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10101969944548945442ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 31639824982503685ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2928983712755382209ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1074530849858163708ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14758844799272622303ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8460869070965625335ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1018394404087064863ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1944385737403786075ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6615421110164556640ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5502674402425361996ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10629176182797008748ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2168831599953706695ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10024327897234284153ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7526929683827336038ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15733819683279478892ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11331867785031658513ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 740620008602685295ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11061119598625125743ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15278317144541214439ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18122136719700988982ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7084058421034867166ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1494556626790505013ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6450337777626601408ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10293948168409252963ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8253927118946480775ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16310717246629387435ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16479051311915909853ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT___GEN_27 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9918631059894324152ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_28 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1170934052108888769ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7954689626626640633ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8065307343401551268ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_31, __VscopeHash, 16191399866220594327ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_32, __VscopeHash, 14076394999245389353ull);
    vlSelf->simple_edge_ai_tb_fixed__DOT__u_SimpleEdgeAiSoC__DOT__psram__DOT__unnamedblk1__DOT__unnamedblk3__DOT___GEN_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1803060150251379666ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__simple_edge_ai_tb_fixed__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11368082178325872409ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

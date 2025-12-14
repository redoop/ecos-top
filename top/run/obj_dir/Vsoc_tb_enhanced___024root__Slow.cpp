// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_tb_enhanced.h for the primary calling header

#include "Vsoc_tb_enhanced__pch.h"

void Vsoc_tb_enhanced___024root___ctor_var_reset(Vsoc_tb_enhanced___024root* vlSelf);

Vsoc_tb_enhanced___024root::Vsoc_tb_enhanced___024root(Vsoc_tb_enhanced__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsoc_tb_enhanced___024root___ctor_var_reset(this);
}

void Vsoc_tb_enhanced___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsoc_tb_enhanced___024root::~Vsoc_tb_enhanced___024root() {
}

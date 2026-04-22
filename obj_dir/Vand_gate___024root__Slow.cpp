// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand_gate.h for the primary calling header

#include "Vand_gate__pch.h"

void Vand_gate___024root___ctor_var_reset(Vand_gate___024root* vlSelf);

Vand_gate___024root::Vand_gate___024root(Vand_gate__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vand_gate___024root___ctor_var_reset(this);
}

void Vand_gate___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vand_gate___024root::~Vand_gate___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

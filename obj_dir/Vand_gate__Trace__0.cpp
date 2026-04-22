// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vand_gate__Syms.h"


void Vand_gate___024root__trace_chg_0_sub_0(Vand_gate___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vand_gate___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root__trace_chg_0\n"); );
    // Body
    Vand_gate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vand_gate___024root*>(voidSelf);
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vand_gate___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vand_gate___024root__trace_chg_0_sub_0(Vand_gate___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root__trace_chg_0_sub_0\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.tb__DOT__a));
    bufp->chgBit(oldp+1,(vlSelfRef.tb__DOT__b));
    bufp->chgBit(oldp+2,(((IData)(vlSelfRef.tb__DOT__a) 
                          & (IData)(vlSelfRef.tb__DOT__b))));
}

void Vand_gate___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vand_gate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vand_gate___024root*>(voidSelf);
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}

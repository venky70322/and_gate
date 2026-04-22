// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vand_gate__Syms.h"


VL_ATTR_COLD void Vand_gate___024root__trace_init_sub__TOP__0(Vand_gate___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root__trace_init_sub__TOP__0\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("tb", VerilatedTracePrefixType::SCOPE_MODULE);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vand_gate___024root__trace_init_top(Vand_gate___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root__trace_init_top\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vand_gate___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vand_gate___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vand_gate___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vand_gate___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vand_gate___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vand_gate___024root__trace_register(Vand_gate___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root__trace_register\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vand_gate___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vand_gate___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vand_gate___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vand_gate___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vand_gate___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root__trace_const_0\n"); );
    // Body
    Vand_gate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vand_gate___024root*>(voidSelf);
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vand_gate___024root__trace_full_0_sub_0(Vand_gate___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vand_gate___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root__trace_full_0\n"); );
    // Body
    Vand_gate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vand_gate___024root*>(voidSelf);
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vand_gate___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vand_gate___024root__trace_full_0_sub_0(Vand_gate___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root__trace_full_0_sub_0\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb__DOT__a));
    bufp->fullBit(oldp+1,(vlSelfRef.tb__DOT__b));
    bufp->fullBit(oldp+2,(((IData)(vlSelfRef.tb__DOT__a) 
                           & (IData)(vlSelfRef.tb__DOT__b))));
}

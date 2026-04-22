// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vand_gate.h for the primary calling header

#include "Vand_gate__pch.h"

VlCoroutine Vand_gate___024root___eval_initial__TOP__Vtiming__0(Vand_gate___024root* vlSelf);

void Vand_gate___024root___eval_initial(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval_initial\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vand_gate___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vand_gate___024root___eval_initial__TOP__Vtiming__0(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("a b | y\n",0);
    vlSelfRef.tb__DOT__a = 0U;
    vlSelfRef.tb__DOT__b = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tb.v", 15);
    VL_WRITEF_NX("%b %b | %b\n",0,1,vlSelfRef.tb__DOT__a,
                 1,(IData)(vlSelfRef.tb__DOT__b),1,
                 vlSelfRef.tb__DOT__dut__DOT__y);
    vlSelfRef.tb__DOT__a = 0U;
    vlSelfRef.tb__DOT__b = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tb.v", 16);
    VL_WRITEF_NX("%b %b | %b\n",0,1,vlSelfRef.tb__DOT__a,
                 1,(IData)(vlSelfRef.tb__DOT__b),1,
                 vlSelfRef.tb__DOT__dut__DOT__y);
    vlSelfRef.tb__DOT__a = 1U;
    vlSelfRef.tb__DOT__b = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tb.v", 17);
    VL_WRITEF_NX("%b %b | %b\n",0,1,vlSelfRef.tb__DOT__a,
                 1,(IData)(vlSelfRef.tb__DOT__b),1,
                 vlSelfRef.tb__DOT__dut__DOT__y);
    vlSelfRef.tb__DOT__a = 1U;
    vlSelfRef.tb__DOT__b = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tb.v", 18);
    VL_WRITEF_NX("%b %b | %b\n",0,1,vlSelfRef.tb__DOT__a,
                 1,(IData)(vlSelfRef.tb__DOT__b),1,
                 vlSelfRef.tb__DOT__dut__DOT__y);
    VL_FINISH_MT("tb.v", 20, "");
    co_return;
}

void Vand_gate___024root___eval_triggers_vec__act(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval_triggers_vec__act\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool Vand_gate___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___trigger_anySet__act\n"); );
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

void Vand_gate___024root___act_sequent__TOP__0(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___act_sequent__TOP__0\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__dut__DOT__y = ((IData)(vlSelfRef.tb__DOT__a) 
                                      & (IData)(vlSelfRef.tb__DOT__b));
}

void Vand_gate___024root___eval_act(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval_act\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vand_gate___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vand_gate___024root___eval_nba(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval_nba\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vand_gate___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vand_gate___024root___timing_resume(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___timing_resume\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vand_gate___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vand_gate___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vand_gate___024root___eval_phase__act(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval_phase__act\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vand_gate___024root___eval_triggers_vec__act(vlSelf);
    Vand_gate___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vand_gate___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vand_gate___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vand_gate___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vand_gate___024root___timing_resume(vlSelf);
        Vand_gate___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vand_gate___024root___eval_phase__inact(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval_phase__inact\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb.v", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vand_gate___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vand_gate___024root___eval_phase__nba(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval_phase__nba\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vand_gate___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vand_gate___024root___eval_nba(vlSelf);
        Vand_gate___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vand_gate___024root___eval(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vand_gate___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb.v", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vand_gate___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vand_gate___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vand_gate___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vand_gate___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vand_gate___024root___eval_debug_assertions(Vand_gate___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vand_gate___024root___eval_debug_assertions\n"); );
    Vand_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vand_gate__pch.h"

Vand_gate__Syms::Vand_gate__Syms(VerilatedContext* contextp, const char* namep, Vand_gate* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(256);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
}

Vand_gate__Syms::~Vand_gate__Syms() {
    // Tear down scopes
    // Tear down sub module instances
}

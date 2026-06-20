// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsim__pch.h"

//============================================================
// Constructors

Vsim::Vsim(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsim__Syms(contextp(), _vcname__, this)}
    , sys_clk{vlSymsp->TOP.sys_clk}
    , serial_sink_data{vlSymsp->TOP.serial_sink_data}
    , serial_sink_ready{vlSymsp->TOP.serial_sink_ready}
    , serial_sink_valid{vlSymsp->TOP.serial_sink_valid}
    , serial_source_data{vlSymsp->TOP.serial_source_data}
    , serial_source_ready{vlSymsp->TOP.serial_source_ready}
    , serial_source_valid{vlSymsp->TOP.serial_source_valid}
    , sim_trace{vlSymsp->TOP.sim_trace}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsim::Vsim(const char* _vcname__)
    : Vsim(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsim::~Vsim() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsim___024root___eval_debug_assertions(Vsim___024root* vlSelf);
#endif  // VL_DEBUG
void Vsim___024root___eval_static(Vsim___024root* vlSelf);
void Vsim___024root___eval_initial(Vsim___024root* vlSelf);
void Vsim___024root___eval_settle(Vsim___024root* vlSelf);
void Vsim___024root___eval(Vsim___024root* vlSelf);

void Vsim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsim::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsim___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsim___024root___eval_static(&(vlSymsp->TOP));
        Vsim___024root___eval_initial(&(vlSymsp->TOP));
        Vsim___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsim___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsim::eventsPending() { return false; }

uint64_t Vsim::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsim::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsim___024root___eval_final(Vsim___024root* vlSelf);

VL_ATTR_COLD void Vsim::final() {
    Vsim___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsim::hierName() const { return vlSymsp->name(); }
const char* Vsim::modelName() const { return "Vsim"; }
unsigned Vsim::threads() const { return 1; }
void Vsim::prepareClone() const { contextp()->prepareClone(); }
void Vsim::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vsim::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsim::trace()' called on model that was Verilated without --trace option");
}

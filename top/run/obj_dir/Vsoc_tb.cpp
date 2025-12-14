// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsoc_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsoc_tb::Vsoc_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsoc_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsoc_tb::Vsoc_tb(const char* _vcname__)
    : Vsoc_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsoc_tb::~Vsoc_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsoc_tb___024root___eval_debug_assertions(Vsoc_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vsoc_tb___024root___eval_static(Vsoc_tb___024root* vlSelf);
void Vsoc_tb___024root___eval_initial(Vsoc_tb___024root* vlSelf);
void Vsoc_tb___024root___eval_settle(Vsoc_tb___024root* vlSelf);
void Vsoc_tb___024root___eval(Vsoc_tb___024root* vlSelf);

void Vsoc_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsoc_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsoc_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsoc_tb___024root___eval_static(&(vlSymsp->TOP));
        Vsoc_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vsoc_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsoc_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vsoc_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vsoc_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vsoc_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsoc_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsoc_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsoc_tb___024root___eval_final(Vsoc_tb___024root* vlSelf);

VL_ATTR_COLD void Vsoc_tb::final() {
    Vsoc_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsoc_tb::hierName() const { return vlSymsp->name(); }
const char* Vsoc_tb::modelName() const { return "Vsoc_tb"; }
unsigned Vsoc_tb::threads() const { return 1; }
void Vsoc_tb::prepareClone() const { contextp()->prepareClone(); }
void Vsoc_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsoc_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsoc_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsoc_tb___024root__trace_init_top(Vsoc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsoc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_tb___024root*>(voidSelf);
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsoc_tb___024root__trace_decl_types(tracep);
    Vsoc_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsoc_tb___024root__trace_register(Vsoc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsoc_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsoc_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsoc_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}

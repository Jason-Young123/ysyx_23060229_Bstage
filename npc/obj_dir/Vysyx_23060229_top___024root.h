// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060229_top.h for the primary calling header

#ifndef VERILATED_VYSYX_23060229_TOP___024ROOT_H_
#define VERILATED_VYSYX_23060229_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_23060229_top__Syms;
class Vysyx_23060229_top___024unit;


class Vysyx_23060229_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_23060229_top___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*5:0*/ ysyx_23060229_top__DOT__typ;
    CData/*4:0*/ ysyx_23060229_top__DOT__rs1;
    CData/*4:0*/ ysyx_23060229_top__DOT__rs2;
    CData/*4:0*/ ysyx_23060229_top__DOT__rd;
    CData/*0:0*/ ysyx_23060229_top__DOT__reg_wen;
    CData/*1:0*/ ysyx_23060229_top__DOT__csreg_wen;
    CData/*0:0*/ ysyx_23060229_top__DOT__mem_ren;
    CData/*0:0*/ ysyx_23060229_top__DOT__mem_wen;
    CData/*7:0*/ ysyx_23060229_top__DOT__mem_wmask;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_OUT(inst,31,0);
    VL_OUT(pc,31,0);
    IData/*31:0*/ ysyx_23060229_top__DOT__imm;
    IData/*31:0*/ ysyx_23060229_top__DOT__reg_din;
    IData/*31:0*/ ysyx_23060229_top__DOT__src1;
    IData/*31:0*/ ysyx_23060229_top__DOT__src2;
    IData/*31:0*/ ysyx_23060229_top__DOT__csreg_din;
    IData/*31:0*/ ysyx_23060229_top__DOT__csreg_dout;
    IData/*31:0*/ ysyx_23060229_top__DOT__mem_wdata;
    IData/*31:0*/ ysyx_23060229_top__DOT__mem_rdata;
    IData/*31:0*/ ysyx_23060229_top__DOT__pc_tmp;
    IData/*31:0*/ ysyx_23060229_top__DOT__muexu__DOT__myscomp__DOT__sub;
    IData/*31:0*/ ysyx_23060229_top__DOT__muexu__DOT__myscomp1__DOT__sub;
    IData/*31:0*/ __Vfunc_pmem_read___0__Vfuncout;
    IData/*31:0*/ __Vfunc_pmem_read___1__Vfuncout;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_OUT(regs[32],31,0);
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12;
    VlUnpacked<IData/*31:0*/, 4096> ysyx_23060229_top__DOT__mycsreg__DOT__CSReg;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_23060229_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_23060229_top___024root(Vysyx_23060229_top__Syms* symsp, const char* v__name);
    ~Vysyx_23060229_top___024root();
    VL_UNCOPYABLE(Vysyx_23060229_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

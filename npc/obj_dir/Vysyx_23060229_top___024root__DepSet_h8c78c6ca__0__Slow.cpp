// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060229_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060229_top___024root.h"

VL_ATTR_COLD void Vysyx_23060229_top___024root___eval_static(Vysyx_23060229_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060229_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060229_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_23060229_top___024root___eval_initial__TOP(Vysyx_23060229_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060229_top___024root___eval_initial(Vysyx_23060229_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060229_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060229_top___024root___eval_initial\n"); );
    // Body
    Vysyx_23060229_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vysyx_23060229_top___024root___eval_initial__TOP(Vysyx_23060229_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060229_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060229_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_23060229_top__DOT__reg_wen = 1U;
}

VL_ATTR_COLD void Vysyx_23060229_top___024root___eval_final(Vysyx_23060229_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060229_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060229_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_23060229_top___024root___eval_triggers__stl(Vysyx_23060229_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060229_top___024root___dump_triggers__stl(Vysyx_23060229_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_23060229_top___024root___eval_stl(Vysyx_23060229_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060229_top___024root___eval_settle(Vysyx_23060229_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060229_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060229_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_23060229_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060229_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/jason/Desktop/ysyx-workbench/npc/vfile/ysyx_23060229_top.v", 7, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_23060229_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060229_top___024root___dump_triggers__stl(Vysyx_23060229_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060229_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060229_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060229_top___024root___stl_sequent__TOP__0(Vysyx_23060229_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060229_top___024root___eval_stl(Vysyx_23060229_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060229_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060229_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_23060229_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060229_top___024root___dump_triggers__ico(Vysyx_23060229_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060229_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060229_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060229_top___024root___dump_triggers__act(Vysyx_23060229_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060229_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060229_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060229_top___024root___dump_triggers__nba(Vysyx_23060229_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060229_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060229_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060229_top___024root___ctor_var_reset(Vysyx_23060229_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060229_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060229_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_23060229_top__DOT__typ = VL_RAND_RESET_I(6);
    vlSelf->ysyx_23060229_top__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_23060229_top__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_23060229_top__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->ysyx_23060229_top__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060229_top__DOT__reg_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060229_top__DOT__reg_din = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060229_top__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060229_top__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060229_top__DOT__csreg_wen = VL_RAND_RESET_I(2);
    vlSelf->ysyx_23060229_top__DOT__csreg_din = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060229_top__DOT__csreg_dout = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060229_top__DOT__mem_ren = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060229_top__DOT__mem_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060229_top__DOT__mem_wmask = VL_RAND_RESET_I(8);
    vlSelf->ysyx_23060229_top__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060229_top__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060229_top__DOT__pc_tmp = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->ysyx_23060229_top__DOT__mycsreg__DOT__CSReg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_23060229_top__DOT__muexu__DOT__scomp_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp__DOT____VdfgTmp_h523b4e61__0 = 0;
    vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp1__DOT____VdfgTmp_h523b4e61__0 = 0;
    vlSelf->__Vfunc_pmem_read___0__Vfuncout = 0;
    vlSelf->__Vfunc_pmem_read___1__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
}

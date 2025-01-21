// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060229_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060229_top__Syms.h"
#include "Vysyx_23060229_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060229_top___024root___dump_triggers__ico(Vysyx_23060229_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060229_top___024root___eval_triggers__ico(Vysyx_23060229_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060229_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060229_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060229_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vysyx_23060229_top___024unit____Vdpiimwrap_hit_bad_trap_TOP____024unit();
void Vysyx_23060229_top___024unit____Vdpiimwrap_hit_good_trap_TOP____024unit();

VL_INLINE_OPT void Vysyx_23060229_top___024root___ico_sequent__TOP__0(Vysyx_23060229_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060229_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060229_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
        vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
        vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
        vlSelf->ysyx_23060229_top__DOT__pc_tmp = vlSelf->pc;
    } else if ((0x20U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
        if ((0x10U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((8U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = vlSelf->pc;
                Vysyx_23060229_top___024unit____Vdpiimwrap_hit_bad_trap_TOP____024unit();
            } else if ((4U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                        Vysyx_23060229_top___024unit____Vdpiimwrap_hit_bad_trap_TOP____024unit();
                        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                        vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                        vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                        vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                            = vlSelf->pc;
                    } else {
                        Vysyx_23060229_top___024unit____Vdpiimwrap_hit_good_trap_TOP____024unit();
                        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                        vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                        vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                        vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                            = vlSelf->pc;
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = vlSelf->ysyx_23060229_top__DOT__csreg_dout;
                } else {
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = vlSelf->ysyx_23060229_top__DOT__csreg_dout;
                }
            } else if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = ((IData)(4U) + vlSelf->pc);
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = (vlSelf->pc + vlSelf->ysyx_23060229_top__DOT__imm);
                } else {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = ((IData)(4U) + vlSelf->pc);
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = (0xfffffffeU & (vlSelf->ysyx_23060229_top__DOT__src1 
                                          + vlSelf->ysyx_23060229_top__DOT__imm));
                }
            } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = vlSelf->ysyx_23060229_top__DOT__csreg_dout;
                vlSelf->ysyx_23060229_top__DOT__csreg_din 
                    = ((0x1fU & (vlSelf->ysyx_23060229_top__DOT__imm 
                                 >> 0xfU)) | vlSelf->ysyx_23060229_top__DOT__csreg_dout);
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = vlSelf->ysyx_23060229_top__DOT__csreg_dout;
                vlSelf->ysyx_23060229_top__DOT__csreg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       & vlSelf->ysyx_23060229_top__DOT__csreg_dout);
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else if ((8U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((4U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                        vlSelf->ysyx_23060229_top__DOT__reg_din 
                            = vlSelf->ysyx_23060229_top__DOT__csreg_dout;
                        vlSelf->ysyx_23060229_top__DOT__csreg_din 
                            = ((0x1fU & (vlSelf->ysyx_23060229_top__DOT__imm 
                                         >> 0xfU)) 
                               | vlSelf->ysyx_23060229_top__DOT__csreg_dout);
                        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                        vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                            = ((IData)(4U) + vlSelf->pc);
                    } else {
                        vlSelf->ysyx_23060229_top__DOT__reg_din 
                            = vlSelf->ysyx_23060229_top__DOT__csreg_dout;
                        vlSelf->ysyx_23060229_top__DOT__csreg_din 
                            = (vlSelf->ysyx_23060229_top__DOT__src1 
                               | vlSelf->ysyx_23060229_top__DOT__csreg_dout);
                        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                        vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                            = ((IData)(4U) + vlSelf->pc);
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = vlSelf->ysyx_23060229_top__DOT__csreg_dout;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din 
                        = (0x1fU & (vlSelf->ysyx_23060229_top__DOT__imm 
                                    >> 0xfU));
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                } else {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = vlSelf->ysyx_23060229_top__DOT__csreg_dout;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din 
                        = vlSelf->ysyx_23060229_top__DOT__src1;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                }
            } else if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = (((0x1fU >= ((IData)(0x20U) 
                                       - (0x1fU & vlSelf->ysyx_23060229_top__DOT__imm)))
                             ? ((- (IData)((vlSelf->ysyx_23060229_top__DOT__src1 
                                            >> 0x1fU))) 
                                << ((IData)(0x20U) 
                                    - (0x1fU & vlSelf->ysyx_23060229_top__DOT__imm)))
                             : 0U) | (vlSelf->ysyx_23060229_top__DOT__src1 
                                      >> (0x1fU & vlSelf->ysyx_23060229_top__DOT__imm)));
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                } else {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = (vlSelf->ysyx_23060229_top__DOT__src1 
                           >> (0x1fU & vlSelf->ysyx_23060229_top__DOT__imm));
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                }
            } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       << (0x1fU & vlSelf->ysyx_23060229_top__DOT__imm));
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       < vlSelf->ysyx_23060229_top__DOT__imm);
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else if ((4U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = (1U & ((vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp1__DOT__sub 
                                  >> 0x1fU) ^ (((vlSelf->ysyx_23060229_top__DOT__src1 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->ysyx_23060229_top__DOT__imm 
                                                 >> 0x1fU)) 
                                               & ((vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp1__DOT__sub 
                                                   >> 0x1fU) 
                                                  != 
                                                  (vlSelf->ysyx_23060229_top__DOT__src1 
                                                   >> 0x1fU)))));
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                } else {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = (vlSelf->ysyx_23060229_top__DOT__src1 
                           ^ vlSelf->ysyx_23060229_top__DOT__imm);
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                }
            } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       | vlSelf->ysyx_23060229_top__DOT__imm);
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       & vlSelf->ysyx_23060229_top__DOT__imm);
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       + vlSelf->ysyx_23060229_top__DOT__imm);
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (0xffffU & vlSelf->ysyx_23060229_top__DOT__mem_rdata);
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            vlSelf->ysyx_23060229_top__DOT__reg_din 
                = (0xffU & vlSelf->ysyx_23060229_top__DOT__mem_rdata);
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((IData)(4U) + vlSelf->pc);
        } else {
            vlSelf->ysyx_23060229_top__DOT__reg_din 
                = vlSelf->ysyx_23060229_top__DOT__mem_rdata;
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((IData)(4U) + vlSelf->pc);
        }
    } else if ((0x10U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
        if ((8U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((4U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                        vlSelf->ysyx_23060229_top__DOT__reg_din 
                            = (((- (IData)((1U & (vlSelf->ysyx_23060229_top__DOT__mem_rdata 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_23060229_top__DOT__mem_rdata));
                        vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                        vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                            = ((IData)(4U) + vlSelf->pc);
                    } else {
                        vlSelf->ysyx_23060229_top__DOT__reg_din 
                            = (((- (IData)((1U & (vlSelf->ysyx_23060229_top__DOT__mem_rdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyx_23060229_top__DOT__mem_rdata));
                        vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                        vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                            = ((IData)(4U) + vlSelf->pc);
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                } else {
                    vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                }
            } else if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                } else {
                    vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                }
            } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else if ((4U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                } else {
                    vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                }
            } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (((0x1fU >= ((IData)(0x20U) - 
                                   (0x1fU & vlSelf->ysyx_23060229_top__DOT__src2)))
                         ? ((- (IData)((vlSelf->ysyx_23060229_top__DOT__src1 
                                        >> 0x1fU))) 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & vlSelf->ysyx_23060229_top__DOT__src2)))
                         : 0U) | (vlSelf->ysyx_23060229_top__DOT__src1 
                                  >> (0x1fU & vlSelf->ysyx_23060229_top__DOT__src2)));
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       >> (0x1fU & vlSelf->ysyx_23060229_top__DOT__src2));
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       << (0x1fU & vlSelf->ysyx_23060229_top__DOT__src2));
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       < vlSelf->ysyx_23060229_top__DOT__src2);
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            vlSelf->ysyx_23060229_top__DOT__reg_din 
                = (1U & ((vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp__DOT__sub 
                          >> 0x1fU) ^ (((vlSelf->ysyx_23060229_top__DOT__src1 
                                         >> 0x1fU) 
                                        != (vlSelf->ysyx_23060229_top__DOT__src2 
                                            >> 0x1fU)) 
                                       & ((vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp__DOT__sub 
                                           >> 0x1fU) 
                                          != (vlSelf->ysyx_23060229_top__DOT__src1 
                                              >> 0x1fU)))));
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((IData)(4U) + vlSelf->pc);
        } else {
            vlSelf->ysyx_23060229_top__DOT__reg_din 
                = (vlSelf->ysyx_23060229_top__DOT__src1 
                   & vlSelf->ysyx_23060229_top__DOT__src2);
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((IData)(4U) + vlSelf->pc);
        }
    } else if ((8U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
        if ((4U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = (vlSelf->ysyx_23060229_top__DOT__src1 
                           | vlSelf->ysyx_23060229_top__DOT__src2);
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                } else {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = (vlSelf->ysyx_23060229_top__DOT__src1 
                           ^ vlSelf->ysyx_23060229_top__DOT__src2);
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                }
            } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       - vlSelf->ysyx_23060229_top__DOT__src2);
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       + vlSelf->ysyx_23060229_top__DOT__src2);
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((vlSelf->ysyx_23060229_top__DOT__src1 
                        >= vlSelf->ysyx_23060229_top__DOT__src2)
                        ? (vlSelf->pc + vlSelf->ysyx_23060229_top__DOT__imm)
                        : ((IData)(4U) + vlSelf->pc));
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((1U & ((vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp__DOT__sub 
                               >> 0x1fU) ^ (((vlSelf->ysyx_23060229_top__DOT__src1 
                                              >> 0x1fU) 
                                             != (vlSelf->ysyx_23060229_top__DOT__src2 
                                                 >> 0x1fU)) 
                                            & ((vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp__DOT__sub 
                                                >> 0x1fU) 
                                               != (vlSelf->ysyx_23060229_top__DOT__src1 
                                                   >> 0x1fU)))))
                        ? ((IData)(4U) + vlSelf->pc)
                        : (vlSelf->pc + vlSelf->ysyx_23060229_top__DOT__imm));
            }
        } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((vlSelf->ysyx_23060229_top__DOT__src1 
                    < vlSelf->ysyx_23060229_top__DOT__src2)
                    ? (vlSelf->pc + vlSelf->ysyx_23060229_top__DOT__imm)
                    : ((IData)(4U) + vlSelf->pc));
        } else {
            vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((1U & ((vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp__DOT__sub 
                           >> 0x1fU) ^ (((vlSelf->ysyx_23060229_top__DOT__src1 
                                          >> 0x1fU) 
                                         != (vlSelf->ysyx_23060229_top__DOT__src2 
                                             >> 0x1fU)) 
                                        & ((vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp__DOT__sub 
                                            >> 0x1fU) 
                                           != (vlSelf->ysyx_23060229_top__DOT__src1 
                                               >> 0x1fU)))))
                    ? (vlSelf->pc + vlSelf->ysyx_23060229_top__DOT__imm)
                    : ((IData)(4U) + vlSelf->pc));
        }
    } else if ((4U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
        if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((vlSelf->ysyx_23060229_top__DOT__src1 
                        != vlSelf->ysyx_23060229_top__DOT__src2)
                        ? (vlSelf->pc + vlSelf->ysyx_23060229_top__DOT__imm)
                        : ((IData)(4U) + vlSelf->pc));
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((vlSelf->ysyx_23060229_top__DOT__src1 
                        == vlSelf->ysyx_23060229_top__DOT__src2)
                        ? (vlSelf->pc + vlSelf->ysyx_23060229_top__DOT__imm)
                        : ((IData)(4U) + vlSelf->pc));
            }
        } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata 
                = vlSelf->ysyx_23060229_top__DOT__src2;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((IData)(4U) + vlSelf->pc);
        } else {
            vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata 
                = vlSelf->ysyx_23060229_top__DOT__src2;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((IData)(4U) + vlSelf->pc);
        }
    } else if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
        if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata 
                = vlSelf->ysyx_23060229_top__DOT__src2;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((IData)(4U) + vlSelf->pc);
        } else {
            vlSelf->ysyx_23060229_top__DOT__reg_din 
                = vlSelf->ysyx_23060229_top__DOT__imm;
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((IData)(4U) + vlSelf->pc);
        }
    } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
        vlSelf->ysyx_23060229_top__DOT__reg_din = (vlSelf->pc 
                                                   + vlSelf->ysyx_23060229_top__DOT__imm);
        vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
        vlSelf->ysyx_23060229_top__DOT__pc_tmp = ((IData)(4U) 
                                                  + vlSelf->pc);
    } else {
        Vysyx_23060229_top___024unit____Vdpiimwrap_hit_bad_trap_TOP____024unit();
        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
        vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
        vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
        vlSelf->ysyx_23060229_top__DOT__pc_tmp = vlSelf->pc;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060229_top___024root___dump_triggers__act(Vysyx_23060229_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060229_top___024root___eval_triggers__act(Vysyx_23060229_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060229_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060229_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060229_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_23060229_top___024unit____Vdpiimwrap_pmem_write__TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_23060229_top___024unit____Vdpiimwrap_pmem_read__TOP____024unit(IData/*31:0*/ raddr, CData/*0:0*/ ren, IData/*31:0*/ &pmem_read___Vfuncrtn);

VL_INLINE_OPT void Vysyx_23060229_top___024root___nba_sequent__TOP__0(Vysyx_23060229_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060229_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060229_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*11:0*/ __Vdlyvdim0__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v0;
    __Vdlyvdim0__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v0;
    __Vdlyvval__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v0;
    __Vdlyvset__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v1;
    __Vdlyvset__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v1 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v2;
    __Vdlyvval__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v2 = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v0;
    __Vdlyvdim0__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v0;
    __Vdlyvval__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v0;
    __Vdlyvset__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v1;
    __Vdlyvset__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v1 = 0;
    VlWide<5>/*159:0*/ __Vtemp_h58563135__0;
    VlWide<4>/*127:0*/ __Vtemp_hf6414f3a__0;
    // Body
    if (VL_UNLIKELY(vlSelf->rst)) {
        VL_WRITEF("Memory resetting ...\n");
    } else if (vlSelf->ysyx_23060229_top__DOT__mem_wen) {
        Vysyx_23060229_top___024unit____Vdpiimwrap_pmem_write__TOP____024unit(
                                                                              (vlSelf->ysyx_23060229_top__DOT__imm 
                                                                               + vlSelf->ysyx_23060229_top__DOT__src1), vlSelf->ysyx_23060229_top__DOT__mem_wdata, (IData)(vlSelf->ysyx_23060229_top__DOT__mem_wmask));
    }
    __Vdlyvset__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v0 = 0U;
    __Vdlyvset__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v1 = 0U;
    __Vdlyvset__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v0 = 0U;
    __Vdlyvset__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v1 = 0U;
    if (VL_UNLIKELY(vlSelf->rst)) {
        VL_WRITEF("CSRegister resetting ...\n");
        __Vtemp_h58563135__0[0U] = 0x2e686578U;
        __Vtemp_h58563135__0[1U] = 0x73726567U;
        __Vtemp_h58563135__0[2U] = 0x63652f63U;
        __Vtemp_h58563135__0[3U] = 0x736f7572U;
        __Vtemp_h58563135__0[4U] = 0x7265U;
        VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h58563135__0)
                     ,  &(vlSelf->ysyx_23060229_top__DOT__mycsreg__DOT__CSReg)
                     , 0, ~0ULL);
    } else if ((1U == (IData)(vlSelf->ysyx_23060229_top__DOT__csreg_wen))) {
        __Vdlyvval__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v0 
            = vlSelf->ysyx_23060229_top__DOT__csreg_din;
        __Vdlyvset__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v0 = 1U;
        __Vdlyvdim0__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v0 
            = (vlSelf->ysyx_23060229_top__DOT__imm 
               >> 0x14U);
    } else if ((2U == (IData)(vlSelf->ysyx_23060229_top__DOT__csreg_wen))) {
        __Vdlyvset__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v1 = 1U;
        __Vdlyvval__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v2 
            = vlSelf->pc;
    }
    if (__Vdlyvset__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v0) {
        vlSelf->ysyx_23060229_top__DOT__mycsreg__DOT__CSReg[__Vdlyvdim0__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v0] 
            = __Vdlyvval__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v0;
    }
    if (__Vdlyvset__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v1) {
        vlSelf->ysyx_23060229_top__DOT__mycsreg__DOT__CSReg[0x342U] = 0xbU;
        vlSelf->ysyx_23060229_top__DOT__mycsreg__DOT__CSReg[0x341U] 
            = __Vdlyvval__ysyx_23060229_top__DOT__mycsreg__DOT__CSReg__v2;
    }
    if (VL_UNLIKELY(vlSelf->rst)) {
        VL_WRITEF("Register resetting ...\n");
        __Vtemp_hf6414f3a__0[0U] = 0x2e686578U;
        __Vtemp_hf6414f3a__0[1U] = 0x2f726567U;
        __Vtemp_hf6414f3a__0[2U] = 0x75726365U;
        __Vtemp_hf6414f3a__0[3U] = 0x7265736fU;
        VL_READMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_hf6414f3a__0)
                     ,  &(vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12)
                     , 0, ~0ULL);
        vlSelf->pc = 0x80000000U;
    } else {
        vlSelf->pc = vlSelf->ysyx_23060229_top__DOT__pc_tmp;
        if (vlSelf->ysyx_23060229_top__DOT__reg_wen) {
            __Vdlyvval__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v0 
                = vlSelf->ysyx_23060229_top__DOT__reg_din;
            __Vdlyvset__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v0 = 1U;
            __Vdlyvdim0__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v0 
                = vlSelf->ysyx_23060229_top__DOT__rd;
        }
        __Vdlyvset__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v1 = 1U;
    }
    if (__Vdlyvset__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v0) {
        vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12[__Vdlyvdim0__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v0] 
            = __Vdlyvval__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v0;
    }
    if (__Vdlyvset__ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12__v1) {
        vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12[0U] = 0U;
    }
    Vysyx_23060229_top___024unit____Vdpiimwrap_pmem_read__TOP____024unit(vlSelf->pc, 1U, vlSelf->__Vfunc_pmem_read___0__Vfuncout);
    vlSelf->inst = vlSelf->__Vfunc_pmem_read___0__Vfuncout;
    vlSelf->regs[0x1fU] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0x1fU];
    vlSelf->regs[0x1eU] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0x1eU];
    vlSelf->regs[0x1dU] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0x1dU];
    vlSelf->regs[0x1cU] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0x1cU];
    vlSelf->regs[0x1bU] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0x1bU];
    vlSelf->regs[0x1aU] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0x1aU];
    vlSelf->regs[0x19U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0x19U];
    vlSelf->regs[0x18U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0x18U];
    vlSelf->regs[0x17U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0x17U];
    vlSelf->regs[0x16U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0x16U];
    vlSelf->regs[0x15U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0x15U];
    vlSelf->regs[0x14U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0x14U];
    vlSelf->regs[0x13U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0x13U];
    vlSelf->regs[0x12U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0x12U];
    vlSelf->regs[0x11U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0x11U];
    vlSelf->regs[0x10U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0x10U];
    vlSelf->regs[0xfU] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0xfU];
    vlSelf->regs[0xeU] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0xeU];
    vlSelf->regs[0xdU] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0xdU];
    vlSelf->regs[0xcU] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0xcU];
    vlSelf->regs[0xbU] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0xbU];
    vlSelf->regs[0xaU] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0xaU];
    vlSelf->regs[9U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [9U];
    vlSelf->regs[8U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [8U];
    vlSelf->regs[7U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [7U];
    vlSelf->regs[6U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [6U];
    vlSelf->regs[5U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [5U];
    vlSelf->regs[4U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [4U];
    vlSelf->regs[3U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [3U];
    vlSelf->regs[2U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [2U];
    vlSelf->regs[1U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [1U];
    vlSelf->regs[0U] = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [0U];
    if (((((((((0x17U == (0x7fU & vlSelf->inst)) | 
               (0x37U == (0x7fU & vlSelf->inst))) | 
              (0x23U == (0x707fU & vlSelf->inst))) 
             | (0x1023U == (0x707fU & vlSelf->inst))) 
            | (0x2023U == (0x707fU & vlSelf->inst))) 
           | (0x63U == (0x707fU & vlSelf->inst))) | 
          (0x1063U == (0x707fU & vlSelf->inst))) | 
         (0x4063U == (0x707fU & vlSelf->inst)))) {
        vlSelf->ysyx_23060229_top__DOT__csreg_wen = 0U;
        if ((0x17U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_23060229_top__DOT__rd = (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 7U));
            vlSelf->ysyx_23060229_top__DOT__mem_wmask = 0U;
            vlSelf->ysyx_23060229_top__DOT__typ = 1U;
            vlSelf->ysyx_23060229_top__DOT__rs2 = (0x1fU 
                                                   & 0U);
            vlSelf->ysyx_23060229_top__DOT__imm = (0xfffff000U 
                                                   & vlSelf->inst);
            vlSelf->ysyx_23060229_top__DOT__rs1 = (0x1fU 
                                                   & 0U);
        } else if ((0x37U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_23060229_top__DOT__rd = (0x1fU 
                                                  & (vlSelf->inst 
                                                     >> 7U));
            vlSelf->ysyx_23060229_top__DOT__mem_wmask = 0U;
            vlSelf->ysyx_23060229_top__DOT__typ = 2U;
            vlSelf->ysyx_23060229_top__DOT__rs2 = (0x1fU 
                                                   & 0U);
            vlSelf->ysyx_23060229_top__DOT__imm = (0xfffff000U 
                                                   & vlSelf->inst);
            vlSelf->ysyx_23060229_top__DOT__rs1 = (0x1fU 
                                                   & 0U);
        } else {
            vlSelf->ysyx_23060229_top__DOT__rd = (0x1fU 
                                                  & 0U);
            if ((0x23U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__mem_wmask = 1U;
                vlSelf->ysyx_23060229_top__DOT__typ = 3U;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (((- (IData)((vlSelf->inst >> 0x1fU))) 
                        << 0xcU) | ((0xfe0U & (vlSelf->inst 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelf->inst 
                                                >> 7U))));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x1023U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__mem_wmask = 3U;
                vlSelf->ysyx_23060229_top__DOT__typ = 4U;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (((- (IData)((vlSelf->inst >> 0x1fU))) 
                        << 0xcU) | ((0xfe0U & (vlSelf->inst 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelf->inst 
                                                >> 7U))));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x2023U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__mem_wmask = 0xfU;
                vlSelf->ysyx_23060229_top__DOT__typ = 5U;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (((- (IData)((vlSelf->inst >> 0x1fU))) 
                        << 0xcU) | ((0xfe0U & (vlSelf->inst 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelf->inst 
                                                >> 7U))));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else {
                vlSelf->ysyx_23060229_top__DOT__mem_wmask = 0U;
                if ((0x63U == (0x707fU & vlSelf->inst))) {
                    vlSelf->ysyx_23060229_top__DOT__typ = 6U;
                    vlSelf->ysyx_23060229_top__DOT__rs2 
                        = (0x1fU & (vlSelf->inst >> 0x14U));
                    vlSelf->ysyx_23060229_top__DOT__imm 
                        = (((- (IData)((vlSelf->inst 
                                        >> 0x1fU))) 
                            << 0xdU) | ((0x1000U & 
                                         (vlSelf->inst 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->inst 
                                                    >> 7U))))));
                    vlSelf->ysyx_23060229_top__DOT__rs1 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                } else if ((0x1063U == (0x707fU & vlSelf->inst))) {
                    vlSelf->ysyx_23060229_top__DOT__typ = 7U;
                    vlSelf->ysyx_23060229_top__DOT__rs2 
                        = (0x1fU & (vlSelf->inst >> 0x14U));
                    vlSelf->ysyx_23060229_top__DOT__imm 
                        = (((- (IData)((vlSelf->inst 
                                        >> 0x1fU))) 
                            << 0xdU) | ((0x1000U & 
                                         (vlSelf->inst 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->inst 
                                                    >> 7U))))));
                    vlSelf->ysyx_23060229_top__DOT__rs1 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                } else {
                    vlSelf->ysyx_23060229_top__DOT__typ = 8U;
                    vlSelf->ysyx_23060229_top__DOT__rs2 
                        = (0x1fU & (vlSelf->inst >> 0x14U));
                    vlSelf->ysyx_23060229_top__DOT__imm 
                        = (((- (IData)((vlSelf->inst 
                                        >> 0x1fU))) 
                            << 0xdU) | ((0x1000U & 
                                         (vlSelf->inst 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->inst 
                                                    >> 7U))))));
                    vlSelf->ysyx_23060229_top__DOT__rs1 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                }
            }
        }
        vlSelf->ysyx_23060229_top__DOT__mem_wen = (
                                                   (0x17U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->inst)) 
                                                   & ((0x37U 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelf->inst)) 
                                                      & ((0x23U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->inst)) 
                                                         | ((0x1023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->inst)) 
                                                            | (0x2023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->inst))))));
    } else {
        if (((((((((0x6063U == (0x707fU & vlSelf->inst)) 
                   | (0x5063U == (0x707fU & vlSelf->inst))) 
                  | (0x7063U == (0x707fU & vlSelf->inst))) 
                 | (0x33U == (0xfe00707fU & vlSelf->inst))) 
                | (0x40000033U == (0xfe00707fU & vlSelf->inst))) 
               | (0x4033U == (0xfe00707fU & vlSelf->inst))) 
              | (0x6033U == (0xfe00707fU & vlSelf->inst))) 
             | (0x7033U == (0xfe00707fU & vlSelf->inst)))) {
            vlSelf->ysyx_23060229_top__DOT__csreg_wen = 0U;
            if ((0x6063U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060229_top__DOT__typ = 9U;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (((- (IData)((vlSelf->inst >> 0x1fU))) 
                        << 0xdU) | ((0x1000U & (vlSelf->inst 
                                                >> 0x13U)) 
                                    | ((0x800U & (vlSelf->inst 
                                                  << 4U)) 
                                       | ((0x7e0U & 
                                           (vlSelf->inst 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlSelf->inst 
                                                >> 7U))))));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x5063U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060229_top__DOT__typ = 0xaU;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (((- (IData)((vlSelf->inst >> 0x1fU))) 
                        << 0xdU) | ((0x1000U & (vlSelf->inst 
                                                >> 0x13U)) 
                                    | ((0x800U & (vlSelf->inst 
                                                  << 4U)) 
                                       | ((0x7e0U & 
                                           (vlSelf->inst 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlSelf->inst 
                                                >> 7U))))));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x7063U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060229_top__DOT__typ = 0xbU;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (((- (IData)((vlSelf->inst >> 0x1fU))) 
                        << 0xdU) | ((0x1000U & (vlSelf->inst 
                                                >> 0x13U)) 
                                    | ((0x800U & (vlSelf->inst 
                                                  << 4U)) 
                                       | ((0x7e0U & 
                                           (vlSelf->inst 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlSelf->inst 
                                                >> 7U))))));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else {
                if ((0x33U == (0xfe00707fU & vlSelf->inst))) {
                    vlSelf->ysyx_23060229_top__DOT__rd 
                        = (0x1fU & (vlSelf->inst >> 7U));
                    vlSelf->ysyx_23060229_top__DOT__typ = 0xcU;
                    vlSelf->ysyx_23060229_top__DOT__rs2 
                        = (0x1fU & (vlSelf->inst >> 0x14U));
                    vlSelf->ysyx_23060229_top__DOT__rs1 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                } else if ((0x40000033U == (0xfe00707fU 
                                            & vlSelf->inst))) {
                    vlSelf->ysyx_23060229_top__DOT__rd 
                        = (0x1fU & (vlSelf->inst >> 7U));
                    vlSelf->ysyx_23060229_top__DOT__typ = 0xdU;
                    vlSelf->ysyx_23060229_top__DOT__rs2 
                        = (0x1fU & (vlSelf->inst >> 0x14U));
                    vlSelf->ysyx_23060229_top__DOT__rs1 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                } else if ((0x4033U == (0xfe00707fU 
                                        & vlSelf->inst))) {
                    vlSelf->ysyx_23060229_top__DOT__rd 
                        = (0x1fU & (vlSelf->inst >> 7U));
                    vlSelf->ysyx_23060229_top__DOT__typ = 0xeU;
                    vlSelf->ysyx_23060229_top__DOT__rs2 
                        = (0x1fU & (vlSelf->inst >> 0x14U));
                    vlSelf->ysyx_23060229_top__DOT__rs1 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                } else if ((0x6033U == (0xfe00707fU 
                                        & vlSelf->inst))) {
                    vlSelf->ysyx_23060229_top__DOT__rd 
                        = (0x1fU & (vlSelf->inst >> 7U));
                    vlSelf->ysyx_23060229_top__DOT__typ = 0xfU;
                    vlSelf->ysyx_23060229_top__DOT__rs2 
                        = (0x1fU & (vlSelf->inst >> 0x14U));
                    vlSelf->ysyx_23060229_top__DOT__rs1 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                } else {
                    vlSelf->ysyx_23060229_top__DOT__rd 
                        = (0x1fU & (vlSelf->inst >> 7U));
                    vlSelf->ysyx_23060229_top__DOT__typ = 0x10U;
                    vlSelf->ysyx_23060229_top__DOT__rs2 
                        = (0x1fU & (vlSelf->inst >> 0x14U));
                    vlSelf->ysyx_23060229_top__DOT__rs1 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                }
                vlSelf->ysyx_23060229_top__DOT__imm = 0U;
            }
        } else if (((((((((0x2033U == (0xfe00707fU 
                                       & vlSelf->inst)) 
                          | (0x3033U == (0xfe00707fU 
                                         & vlSelf->inst))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSelf->inst))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSelf->inst))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSelf->inst))) 
                      | (0x2000033U == (0xfe00707fU 
                                        & vlSelf->inst))) 
                     | (0x2001033U == (0xfe00707fU 
                                       & vlSelf->inst))) 
                    | (0x2002033U == (0xfe00707fU & vlSelf->inst)))) {
            vlSelf->ysyx_23060229_top__DOT__csreg_wen = 0U;
            if ((0x2033U == (0xfe00707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x11U;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x3033U == (0xfe00707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x12U;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x1033U == (0xfe00707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x13U;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x5033U == (0xfe00707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x14U;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x15U;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x2000033U == (0xfe00707fU 
                                       & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x16U;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x2001033U == (0xfe00707fU 
                                       & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x17U;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x18U;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            }
            vlSelf->ysyx_23060229_top__DOT__imm = 0U;
        } else if (((((((((0x2003033U == (0xfe00707fU 
                                          & vlSelf->inst)) 
                          | (0x2004033U == (0xfe00707fU 
                                            & vlSelf->inst))) 
                         | (0x2005033U == (0xfe00707fU 
                                           & vlSelf->inst))) 
                        | (0x2006033U == (0xfe00707fU 
                                          & vlSelf->inst))) 
                       | (0x2007033U == (0xfe00707fU 
                                         & vlSelf->inst))) 
                      | (3U == (0x707fU & vlSelf->inst))) 
                     | (0x1003U == (0x707fU & vlSelf->inst))) 
                    | (0x2003U == (0x707fU & vlSelf->inst)))) {
            vlSelf->ysyx_23060229_top__DOT__csreg_wen = 0U;
            if ((0x2003033U == (0xfe00707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x19U;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__imm = 0U;
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x2004033U == (0xfe00707fU 
                                       & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x1aU;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__imm = 0U;
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x2005033U == (0xfe00707fU 
                                       & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x1bU;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__imm = 0U;
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x2006033U == (0xfe00707fU 
                                       & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x1cU;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__imm = 0U;
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x2007033U == (0xfe00707fU 
                                       & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x1dU;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__imm = 0U;
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else {
                if ((3U == (0x707fU & vlSelf->inst))) {
                    vlSelf->ysyx_23060229_top__DOT__rd 
                        = (0x1fU & (vlSelf->inst >> 7U));
                    vlSelf->ysyx_23060229_top__DOT__typ = 0x1eU;
                    vlSelf->ysyx_23060229_top__DOT__imm 
                        = (((- (IData)((vlSelf->inst 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->inst 
                                        >> 0x14U));
                    vlSelf->ysyx_23060229_top__DOT__rs1 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                } else if ((0x1003U == (0x707fU & vlSelf->inst))) {
                    vlSelf->ysyx_23060229_top__DOT__rd 
                        = (0x1fU & (vlSelf->inst >> 7U));
                    vlSelf->ysyx_23060229_top__DOT__typ = 0x1fU;
                    vlSelf->ysyx_23060229_top__DOT__imm 
                        = (((- (IData)((vlSelf->inst 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->inst 
                                        >> 0x14U));
                    vlSelf->ysyx_23060229_top__DOT__rs1 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                } else {
                    vlSelf->ysyx_23060229_top__DOT__rd 
                        = (0x1fU & (vlSelf->inst >> 7U));
                    vlSelf->ysyx_23060229_top__DOT__typ = 0x20U;
                    vlSelf->ysyx_23060229_top__DOT__imm 
                        = (((- (IData)((vlSelf->inst 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->inst 
                                        >> 0x14U));
                    vlSelf->ysyx_23060229_top__DOT__rs1 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                }
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & 0U);
            }
        } else if (((((((((0x4003U == (0x707fU & vlSelf->inst)) 
                          | (0x5003U == (0x707fU & vlSelf->inst))) 
                         | (0x13U == (0x707fU & vlSelf->inst))) 
                        | (0x7013U == (0x707fU & vlSelf->inst))) 
                       | (0x6013U == (0x707fU & vlSelf->inst))) 
                      | (0x4013U == (0x707fU & vlSelf->inst))) 
                     | (0x2013U == (0x707fU & vlSelf->inst))) 
                    | (0x3013U == (0x707fU & vlSelf->inst)))) {
            vlSelf->ysyx_23060229_top__DOT__csreg_wen = 0U;
            if ((0x4003U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x21U;
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (((- (IData)((vlSelf->inst >> 0x1fU))) 
                        << 0xcU) | (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x5003U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x22U;
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (((- (IData)((vlSelf->inst >> 0x1fU))) 
                        << 0xcU) | (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x13U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x23U;
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (((- (IData)((vlSelf->inst >> 0x1fU))) 
                        << 0xcU) | (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x7013U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x24U;
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (((- (IData)((vlSelf->inst >> 0x1fU))) 
                        << 0xcU) | (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x6013U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x25U;
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (((- (IData)((vlSelf->inst >> 0x1fU))) 
                        << 0xcU) | (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x4013U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x26U;
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (((- (IData)((vlSelf->inst >> 0x1fU))) 
                        << 0xcU) | (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x2013U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x27U;
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (((- (IData)((vlSelf->inst >> 0x1fU))) 
                        << 0xcU) | (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else {
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x28U;
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (((- (IData)((vlSelf->inst >> 0x1fU))) 
                        << 0xcU) | (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            }
            vlSelf->ysyx_23060229_top__DOT__rs2 = (0x1fU 
                                                   & 0U);
        } else if (((((((((0x1013U == (0xfe00707fU 
                                       & vlSelf->inst)) 
                          | (0x5013U == (0xfe00707fU 
                                         & vlSelf->inst))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->inst))) 
                        | (0x1073U == (0x707fU & vlSelf->inst))) 
                       | (0x2073U == (0x707fU & vlSelf->inst))) 
                      | (0x3073U == (0x707fU & vlSelf->inst))) 
                     | (0x5073U == (0x707fU & vlSelf->inst))) 
                    | (0x6073U == (0x707fU & vlSelf->inst)))) {
            if ((0x1013U == (0xfe00707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__csreg_wen = 0U;
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x29U;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x5013U == (0xfe00707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__csreg_wen = 0U;
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x2aU;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x40005013U == (0xfe00707fU 
                                        & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__csreg_wen = 0U;
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x2bU;
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (0x1fU & (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else {
                vlSelf->ysyx_23060229_top__DOT__csreg_wen = 1U;
                if ((0x1073U == (0x707fU & vlSelf->inst))) {
                    vlSelf->ysyx_23060229_top__DOT__rd 
                        = (0x1fU & (vlSelf->inst >> 7U));
                    vlSelf->ysyx_23060229_top__DOT__typ = 0x2cU;
                    vlSelf->ysyx_23060229_top__DOT__rs1 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                } else if ((0x2073U == (0x707fU & vlSelf->inst))) {
                    vlSelf->ysyx_23060229_top__DOT__rd 
                        = (0x1fU & (vlSelf->inst >> 7U));
                    vlSelf->ysyx_23060229_top__DOT__typ = 0x2dU;
                    vlSelf->ysyx_23060229_top__DOT__rs1 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                } else if ((0x3073U == (0x707fU & vlSelf->inst))) {
                    vlSelf->ysyx_23060229_top__DOT__rd 
                        = (0x1fU & (vlSelf->inst >> 7U));
                    vlSelf->ysyx_23060229_top__DOT__typ = 0x2eU;
                    vlSelf->ysyx_23060229_top__DOT__rs1 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                } else if ((0x5073U == (0x707fU & vlSelf->inst))) {
                    vlSelf->ysyx_23060229_top__DOT__rd 
                        = (0x1fU & (vlSelf->inst >> 7U));
                    vlSelf->ysyx_23060229_top__DOT__typ = 0x2fU;
                    vlSelf->ysyx_23060229_top__DOT__rs1 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                } else {
                    vlSelf->ysyx_23060229_top__DOT__rd 
                        = (0x1fU & (vlSelf->inst >> 7U));
                    vlSelf->ysyx_23060229_top__DOT__typ = 0x30U;
                    vlSelf->ysyx_23060229_top__DOT__rs1 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                }
                vlSelf->ysyx_23060229_top__DOT__rs2 
                    = (0x1fU & 0U);
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = vlSelf->inst;
            }
        } else {
            if ((0x7073U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__csreg_wen = 1U;
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x31U;
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = vlSelf->inst;
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else if ((0x67U == (0x707fU & vlSelf->inst))) {
                vlSelf->ysyx_23060229_top__DOT__csreg_wen = 0U;
                vlSelf->ysyx_23060229_top__DOT__rd 
                    = (0x1fU & (vlSelf->inst >> 7U));
                vlSelf->ysyx_23060229_top__DOT__typ = 0x32U;
                vlSelf->ysyx_23060229_top__DOT__imm 
                    = (((- (IData)((vlSelf->inst >> 0x1fU))) 
                        << 0xcU) | (vlSelf->inst >> 0x14U));
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & (vlSelf->inst >> 0xfU));
            } else {
                if ((0x6fU == (0x7fU & vlSelf->inst))) {
                    vlSelf->ysyx_23060229_top__DOT__csreg_wen = 0U;
                    vlSelf->ysyx_23060229_top__DOT__rd 
                        = (0x1fU & (vlSelf->inst >> 7U));
                    vlSelf->ysyx_23060229_top__DOT__typ = 0x33U;
                    vlSelf->ysyx_23060229_top__DOT__imm 
                        = (((- (IData)((vlSelf->inst 
                                        >> 0x1fU))) 
                            << 0x15U) | ((0x100000U 
                                          & (vlSelf->inst 
                                             >> 0xbU)) 
                                         | ((0xff000U 
                                             & vlSelf->inst) 
                                            | ((0x800U 
                                                & (vlSelf->inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->inst 
                                                     >> 0x14U))))));
                } else {
                    if ((0x100073U == vlSelf->inst)) {
                        vlSelf->ysyx_23060229_top__DOT__csreg_wen = 0U;
                        vlSelf->ysyx_23060229_top__DOT__typ = 0x36U;
                        vlSelf->ysyx_23060229_top__DOT__imm = 0U;
                    } else if ((0x73U == vlSelf->inst)) {
                        vlSelf->ysyx_23060229_top__DOT__csreg_wen = 2U;
                        vlSelf->ysyx_23060229_top__DOT__typ = 0x34U;
                        vlSelf->ysyx_23060229_top__DOT__imm = 0x30500000U;
                    } else {
                        vlSelf->ysyx_23060229_top__DOT__csreg_wen = 0U;
                        if ((0x30200073U == vlSelf->inst)) {
                            vlSelf->ysyx_23060229_top__DOT__typ = 0x35U;
                            vlSelf->ysyx_23060229_top__DOT__imm = 0x34100000U;
                        } else {
                            vlSelf->ysyx_23060229_top__DOT__typ = 0x37U;
                            vlSelf->ysyx_23060229_top__DOT__imm = 0U;
                        }
                    }
                    vlSelf->ysyx_23060229_top__DOT__rd 
                        = (0x1fU & 0U);
                }
                vlSelf->ysyx_23060229_top__DOT__rs1 
                    = (0x1fU & 0U);
            }
            vlSelf->ysyx_23060229_top__DOT__rs2 = (0x1fU 
                                                   & 0U);
        }
        vlSelf->ysyx_23060229_top__DOT__mem_wmask = 0U;
        vlSelf->ysyx_23060229_top__DOT__mem_wen = 0U;
    }
    vlSelf->ysyx_23060229_top__DOT__mem_ren = ((~ (
                                                   (((((((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->inst)) 
                                                         | (0x37U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->inst))) 
                                                        | (0x23U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->inst))) 
                                                       | (0x1023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->inst))) 
                                                      | (0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst))) 
                                                     | (0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))) 
                                                    | (0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst))) 
                                                   | (0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst)))) 
                                               & ((~ 
                                                   ((((((((0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->inst)) 
                                                          | (0x5063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->inst))) 
                                                         | (0x7063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->inst))) 
                                                        | (0x33U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->inst))) 
                                                       | (0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst))) 
                                                      | (0x4033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->inst))) 
                                                     | (0x6033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->inst))) 
                                                    | (0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->inst)))) 
                                                  & ((~ 
                                                      ((((((((0x2033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->inst)) 
                                                             | (0x3033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->inst))) 
                                                            | (0x1033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->inst))) 
                                                           | (0x5033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->inst))) 
                                                          | (0x40005033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->inst))) 
                                                         | (0x2000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->inst))) 
                                                        | (0x2001033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->inst))) 
                                                       | (0x2002033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst)))) 
                                                     & (((((((((0x2003033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->inst)) 
                                                               | (0x2004033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->inst))) 
                                                              | (0x2005033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->inst))) 
                                                             | (0x2006033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->inst))) 
                                                            | (0x2007033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->inst))) 
                                                           | (3U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->inst))) 
                                                          | (0x1003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->inst))) 
                                                         | (0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->inst)))
                                                         ? 
                                                        ((0x2003033U 
                                                          != 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst)) 
                                                         & ((0x2004033U 
                                                             != 
                                                             (0xfe00707fU 
                                                              & vlSelf->inst)) 
                                                            & ((0x2005033U 
                                                                != 
                                                                (0xfe00707fU 
                                                                 & vlSelf->inst)) 
                                                               & ((0x2006033U 
                                                                   != 
                                                                   (0xfe00707fU 
                                                                    & vlSelf->inst)) 
                                                                  & (0x2007033U 
                                                                     != 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->inst))))))
                                                         : 
                                                        (((((((((0x4003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->inst)) 
                                                                | (0x5003U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->inst))) 
                                                               | (0x13U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->inst))) 
                                                              | (0x7013U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->inst))) 
                                                             | (0x6013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->inst))) 
                                                            | (0x4013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->inst))) 
                                                           | (0x2013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->inst))) 
                                                          | (0x3013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->inst))) 
                                                         & ((0x4003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->inst)) 
                                                            | (0x5003U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->inst))))))));
    vlSelf->ysyx_23060229_top__DOT__src2 = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [vlSelf->ysyx_23060229_top__DOT__rs2];
    vlSelf->ysyx_23060229_top__DOT__csreg_dout = vlSelf->ysyx_23060229_top__DOT__mycsreg__DOT__CSReg
        [(vlSelf->ysyx_23060229_top__DOT__imm >> 0x14U)];
    vlSelf->ysyx_23060229_top__DOT__src1 = vlSelf->ysyx_23060229_top__DOT____Vcellout__myreg____pinNumber12
        [vlSelf->ysyx_23060229_top__DOT__rs1];
    vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp__DOT__sub 
        = (vlSelf->ysyx_23060229_top__DOT__src1 - vlSelf->ysyx_23060229_top__DOT__src2);
    vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp1__DOT__sub 
        = (vlSelf->ysyx_23060229_top__DOT__src1 - vlSelf->ysyx_23060229_top__DOT__imm);
    Vysyx_23060229_top___024unit____Vdpiimwrap_pmem_read__TOP____024unit(
                                                                         (vlSelf->ysyx_23060229_top__DOT__imm 
                                                                          + vlSelf->ysyx_23060229_top__DOT__src1), (IData)(vlSelf->ysyx_23060229_top__DOT__mem_ren), vlSelf->__Vfunc_pmem_read___1__Vfuncout);
    vlSelf->ysyx_23060229_top__DOT__mem_rdata = vlSelf->__Vfunc_pmem_read___1__Vfuncout;
    if (vlSelf->rst) {
        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
        vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
        vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
        vlSelf->ysyx_23060229_top__DOT__pc_tmp = vlSelf->pc;
    } else if ((0x20U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
        if ((0x10U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((8U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = vlSelf->pc;
                Vysyx_23060229_top___024unit____Vdpiimwrap_hit_bad_trap_TOP____024unit();
            } else if ((4U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                        Vysyx_23060229_top___024unit____Vdpiimwrap_hit_bad_trap_TOP____024unit();
                        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                        vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                        vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                        vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                            = vlSelf->pc;
                    } else {
                        Vysyx_23060229_top___024unit____Vdpiimwrap_hit_good_trap_TOP____024unit();
                        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                        vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                        vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                        vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                            = vlSelf->pc;
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = vlSelf->ysyx_23060229_top__DOT__csreg_dout;
                } else {
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = vlSelf->ysyx_23060229_top__DOT__csreg_dout;
                }
            } else if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = ((IData)(4U) + vlSelf->pc);
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = (vlSelf->pc + vlSelf->ysyx_23060229_top__DOT__imm);
                } else {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = ((IData)(4U) + vlSelf->pc);
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = (0xfffffffeU & (vlSelf->ysyx_23060229_top__DOT__src1 
                                          + vlSelf->ysyx_23060229_top__DOT__imm));
                }
            } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = vlSelf->ysyx_23060229_top__DOT__csreg_dout;
                vlSelf->ysyx_23060229_top__DOT__csreg_din 
                    = ((0x1fU & (vlSelf->ysyx_23060229_top__DOT__imm 
                                 >> 0xfU)) | vlSelf->ysyx_23060229_top__DOT__csreg_dout);
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = vlSelf->ysyx_23060229_top__DOT__csreg_dout;
                vlSelf->ysyx_23060229_top__DOT__csreg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       & vlSelf->ysyx_23060229_top__DOT__csreg_dout);
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else if ((8U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((4U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                        vlSelf->ysyx_23060229_top__DOT__reg_din 
                            = vlSelf->ysyx_23060229_top__DOT__csreg_dout;
                        vlSelf->ysyx_23060229_top__DOT__csreg_din 
                            = ((0x1fU & (vlSelf->ysyx_23060229_top__DOT__imm 
                                         >> 0xfU)) 
                               | vlSelf->ysyx_23060229_top__DOT__csreg_dout);
                        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                        vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                            = ((IData)(4U) + vlSelf->pc);
                    } else {
                        vlSelf->ysyx_23060229_top__DOT__reg_din 
                            = vlSelf->ysyx_23060229_top__DOT__csreg_dout;
                        vlSelf->ysyx_23060229_top__DOT__csreg_din 
                            = (vlSelf->ysyx_23060229_top__DOT__src1 
                               | vlSelf->ysyx_23060229_top__DOT__csreg_dout);
                        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                        vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                            = ((IData)(4U) + vlSelf->pc);
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = vlSelf->ysyx_23060229_top__DOT__csreg_dout;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din 
                        = (0x1fU & (vlSelf->ysyx_23060229_top__DOT__imm 
                                    >> 0xfU));
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                } else {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = vlSelf->ysyx_23060229_top__DOT__csreg_dout;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din 
                        = vlSelf->ysyx_23060229_top__DOT__src1;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                }
            } else if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = (((0x1fU >= ((IData)(0x20U) 
                                       - (0x1fU & vlSelf->ysyx_23060229_top__DOT__imm)))
                             ? ((- (IData)((vlSelf->ysyx_23060229_top__DOT__src1 
                                            >> 0x1fU))) 
                                << ((IData)(0x20U) 
                                    - (0x1fU & vlSelf->ysyx_23060229_top__DOT__imm)))
                             : 0U) | (vlSelf->ysyx_23060229_top__DOT__src1 
                                      >> (0x1fU & vlSelf->ysyx_23060229_top__DOT__imm)));
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                } else {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = (vlSelf->ysyx_23060229_top__DOT__src1 
                           >> (0x1fU & vlSelf->ysyx_23060229_top__DOT__imm));
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                }
            } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       << (0x1fU & vlSelf->ysyx_23060229_top__DOT__imm));
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       < vlSelf->ysyx_23060229_top__DOT__imm);
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else if ((4U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = (1U & ((vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp1__DOT__sub 
                                  >> 0x1fU) ^ (((vlSelf->ysyx_23060229_top__DOT__src1 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->ysyx_23060229_top__DOT__imm 
                                                 >> 0x1fU)) 
                                               & ((vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp1__DOT__sub 
                                                   >> 0x1fU) 
                                                  != 
                                                  (vlSelf->ysyx_23060229_top__DOT__src1 
                                                   >> 0x1fU)))));
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                } else {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = (vlSelf->ysyx_23060229_top__DOT__src1 
                           ^ vlSelf->ysyx_23060229_top__DOT__imm);
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                }
            } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       | vlSelf->ysyx_23060229_top__DOT__imm);
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       & vlSelf->ysyx_23060229_top__DOT__imm);
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       + vlSelf->ysyx_23060229_top__DOT__imm);
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (0xffffU & vlSelf->ysyx_23060229_top__DOT__mem_rdata);
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            vlSelf->ysyx_23060229_top__DOT__reg_din 
                = (0xffU & vlSelf->ysyx_23060229_top__DOT__mem_rdata);
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((IData)(4U) + vlSelf->pc);
        } else {
            vlSelf->ysyx_23060229_top__DOT__reg_din 
                = vlSelf->ysyx_23060229_top__DOT__mem_rdata;
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((IData)(4U) + vlSelf->pc);
        }
    } else if ((0x10U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
        if ((8U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((4U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                        vlSelf->ysyx_23060229_top__DOT__reg_din 
                            = (((- (IData)((1U & (vlSelf->ysyx_23060229_top__DOT__mem_rdata 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_23060229_top__DOT__mem_rdata));
                        vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                        vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                            = ((IData)(4U) + vlSelf->pc);
                    } else {
                        vlSelf->ysyx_23060229_top__DOT__reg_din 
                            = (((- (IData)((1U & (vlSelf->ysyx_23060229_top__DOT__mem_rdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyx_23060229_top__DOT__mem_rdata));
                        vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                        vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                            = ((IData)(4U) + vlSelf->pc);
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                } else {
                    vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                }
            } else if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                } else {
                    vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                }
            } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else if ((4U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                } else {
                    vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                }
            } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (((0x1fU >= ((IData)(0x20U) - 
                                   (0x1fU & vlSelf->ysyx_23060229_top__DOT__src2)))
                         ? ((- (IData)((vlSelf->ysyx_23060229_top__DOT__src1 
                                        >> 0x1fU))) 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & vlSelf->ysyx_23060229_top__DOT__src2)))
                         : 0U) | (vlSelf->ysyx_23060229_top__DOT__src1 
                                  >> (0x1fU & vlSelf->ysyx_23060229_top__DOT__src2)));
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       >> (0x1fU & vlSelf->ysyx_23060229_top__DOT__src2));
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       << (0x1fU & vlSelf->ysyx_23060229_top__DOT__src2));
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       < vlSelf->ysyx_23060229_top__DOT__src2);
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            vlSelf->ysyx_23060229_top__DOT__reg_din 
                = (1U & ((vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp__DOT__sub 
                          >> 0x1fU) ^ (((vlSelf->ysyx_23060229_top__DOT__src1 
                                         >> 0x1fU) 
                                        != (vlSelf->ysyx_23060229_top__DOT__src2 
                                            >> 0x1fU)) 
                                       & ((vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp__DOT__sub 
                                           >> 0x1fU) 
                                          != (vlSelf->ysyx_23060229_top__DOT__src1 
                                              >> 0x1fU)))));
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((IData)(4U) + vlSelf->pc);
        } else {
            vlSelf->ysyx_23060229_top__DOT__reg_din 
                = (vlSelf->ysyx_23060229_top__DOT__src1 
                   & vlSelf->ysyx_23060229_top__DOT__src2);
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((IData)(4U) + vlSelf->pc);
        }
    } else if ((8U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
        if ((4U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = (vlSelf->ysyx_23060229_top__DOT__src1 
                           | vlSelf->ysyx_23060229_top__DOT__src2);
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                } else {
                    vlSelf->ysyx_23060229_top__DOT__reg_din 
                        = (vlSelf->ysyx_23060229_top__DOT__src1 
                           ^ vlSelf->ysyx_23060229_top__DOT__src2);
                    vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                    vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                    vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                        = ((IData)(4U) + vlSelf->pc);
                }
            } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       - vlSelf->ysyx_23060229_top__DOT__src2);
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din 
                    = (vlSelf->ysyx_23060229_top__DOT__src1 
                       + vlSelf->ysyx_23060229_top__DOT__src2);
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((vlSelf->ysyx_23060229_top__DOT__src1 
                        >= vlSelf->ysyx_23060229_top__DOT__src2)
                        ? (vlSelf->pc + vlSelf->ysyx_23060229_top__DOT__imm)
                        : ((IData)(4U) + vlSelf->pc));
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((1U & ((vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp__DOT__sub 
                               >> 0x1fU) ^ (((vlSelf->ysyx_23060229_top__DOT__src1 
                                              >> 0x1fU) 
                                             != (vlSelf->ysyx_23060229_top__DOT__src2 
                                                 >> 0x1fU)) 
                                            & ((vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp__DOT__sub 
                                                >> 0x1fU) 
                                               != (vlSelf->ysyx_23060229_top__DOT__src1 
                                                   >> 0x1fU)))))
                        ? ((IData)(4U) + vlSelf->pc)
                        : (vlSelf->pc + vlSelf->ysyx_23060229_top__DOT__imm));
            }
        } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((vlSelf->ysyx_23060229_top__DOT__src1 
                    < vlSelf->ysyx_23060229_top__DOT__src2)
                    ? (vlSelf->pc + vlSelf->ysyx_23060229_top__DOT__imm)
                    : ((IData)(4U) + vlSelf->pc));
        } else {
            vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((1U & ((vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp__DOT__sub 
                           >> 0x1fU) ^ (((vlSelf->ysyx_23060229_top__DOT__src1 
                                          >> 0x1fU) 
                                         != (vlSelf->ysyx_23060229_top__DOT__src2 
                                             >> 0x1fU)) 
                                        & ((vlSelf->ysyx_23060229_top__DOT__muexu__DOT__myscomp__DOT__sub 
                                            >> 0x1fU) 
                                           != (vlSelf->ysyx_23060229_top__DOT__src1 
                                               >> 0x1fU)))))
                    ? (vlSelf->pc + vlSelf->ysyx_23060229_top__DOT__imm)
                    : ((IData)(4U) + vlSelf->pc));
        }
    } else if ((4U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
        if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
                vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((vlSelf->ysyx_23060229_top__DOT__src1 
                        != vlSelf->ysyx_23060229_top__DOT__src2)
                        ? (vlSelf->pc + vlSelf->ysyx_23060229_top__DOT__imm)
                        : ((IData)(4U) + vlSelf->pc));
            } else {
                vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
                vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
                vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                    = ((vlSelf->ysyx_23060229_top__DOT__src1 
                        == vlSelf->ysyx_23060229_top__DOT__src2)
                        ? (vlSelf->pc + vlSelf->ysyx_23060229_top__DOT__imm)
                        : ((IData)(4U) + vlSelf->pc));
            }
        } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata 
                = vlSelf->ysyx_23060229_top__DOT__src2;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((IData)(4U) + vlSelf->pc);
        } else {
            vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata 
                = vlSelf->ysyx_23060229_top__DOT__src2;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((IData)(4U) + vlSelf->pc);
        }
    } else if ((2U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
        if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
            vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata 
                = vlSelf->ysyx_23060229_top__DOT__src2;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((IData)(4U) + vlSelf->pc);
        } else {
            vlSelf->ysyx_23060229_top__DOT__reg_din 
                = vlSelf->ysyx_23060229_top__DOT__imm;
            vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
            vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
            vlSelf->ysyx_23060229_top__DOT__pc_tmp 
                = ((IData)(4U) + vlSelf->pc);
        }
    } else if ((1U & (IData)(vlSelf->ysyx_23060229_top__DOT__typ))) {
        vlSelf->ysyx_23060229_top__DOT__reg_din = (vlSelf->pc 
                                                   + vlSelf->ysyx_23060229_top__DOT__imm);
        vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
        vlSelf->ysyx_23060229_top__DOT__pc_tmp = ((IData)(4U) 
                                                  + vlSelf->pc);
    } else {
        Vysyx_23060229_top___024unit____Vdpiimwrap_hit_bad_trap_TOP____024unit();
        vlSelf->ysyx_23060229_top__DOT__mem_wdata = 0U;
        vlSelf->ysyx_23060229_top__DOT__reg_din = 0U;
        vlSelf->ysyx_23060229_top__DOT__csreg_din = 0U;
        vlSelf->ysyx_23060229_top__DOT__pc_tmp = vlSelf->pc;
    }
}

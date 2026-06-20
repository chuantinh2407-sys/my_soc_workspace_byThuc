// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim___024root.h"

VL_INLINE_OPT void Vsim___024root___ico_sequent__TOP__0(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->sim__DOT__uart_core_tx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_level0)) 
           & ((~ (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_readable)) 
              | (IData)(vlSelf->serial_source_ready)));
    vlSelf->sim__DOT__uart_core_tx_fifo_do_read = (
                                                   (0U 
                                                    != (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_level0)) 
                                                   & (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_syncfifo_re));
}

void Vsim___024root___eval_ico(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vsim___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vsim___024root___eval_triggers__ico(Vsim___024root* vlSelf);

bool Vsim___024root___eval_phase__ico(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsim___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vsim___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsim___024root___eval_act(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vsim___024root___nba_sequent__TOP__0(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__sim__DOT__storage_1__v0 = 0U;
    vlSelf->__Vdlyvset__sim__DOT__storage__v0 = 0U;
    vlSelf->__Vdlyvset__sim__DOT__picorv32__DOT__cpuregs__v0 = 0U;
    vlSelf->__Vdly__sim__DOT__bus_errors = vlSelf->sim__DOT__bus_errors;
    vlSelf->__Vdly__sim__DOT__uart_core_rx_fifo_consume 
        = vlSelf->sim__DOT__uart_core_rx_fifo_consume;
    vlSelf->__Vdly__sim__DOT__uart_core_tx_fifo_consume 
        = vlSelf->sim__DOT__uart_core_tx_fifo_consume;
    vlSelf->__Vdly__sim__DOT__uart_core_rx_fifo_level0 
        = vlSelf->sim__DOT__uart_core_rx_fifo_level0;
    vlSelf->__Vdly__sim__DOT__uart_core_tx_fifo_level0 
        = vlSelf->sim__DOT__uart_core_tx_fifo_level0;
    vlSelf->__Vdly__sim__DOT__ram_bus_ram_bus_ack = vlSelf->sim__DOT__ram_bus_ram_bus_ack;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__pcpi_timeout_counter 
        = vlSelf->sim__DOT__picorv32__DOT__pcpi_timeout_counter;
    vlSelf->__Vdly__sim__DOT__simsoc_ram_bus_ack = vlSelf->sim__DOT__simsoc_ram_bus_ack;
    vlSelf->__Vdlyvset__sim__DOT__sram__v0 = 0U;
    vlSelf->__Vdlyvset__sim__DOT__sram__v1 = 0U;
    vlSelf->__Vdlyvset__sim__DOT__sram__v2 = 0U;
    vlSelf->__Vdlyvset__sim__DOT__sram__v3 = 0U;
    vlSelf->__Vdly__sim__DOT__timer_value = vlSelf->sim__DOT__timer_value;
    vlSelf->__Vdly__sim__DOT__picorv325 = vlSelf->sim__DOT__picorv325;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__count_instr 
        = vlSelf->sim__DOT__picorv32__DOT__count_instr;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_rd 
        = vlSelf->sim__DOT__picorv32__DOT__latched_rd;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lb 
        = vlSelf->sim__DOT__picorv32__DOT__latched_is_lb;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lh 
        = vlSelf->sim__DOT__picorv32__DOT__latched_is_lh;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lu 
        = vlSelf->sim__DOT__picorv32__DOT__latched_is_lu;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__do_waitirq 
        = vlSelf->sim__DOT__picorv32__DOT__do_waitirq;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__decoder_pseudo_trigger 
        = vlSelf->sim__DOT__picorv32__DOT__decoder_pseudo_trigger;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__timer 
        = vlSelf->sim__DOT__picorv32__DOT__timer;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__count_cycle 
        = vlSelf->sim__DOT__picorv32__DOT__count_cycle;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_sh 
        = vlSelf->sim__DOT__picorv32__DOT__reg_sh;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_prefetch 
        = vlSelf->sim__DOT__picorv32__DOT__mem_do_prefetch;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__irq_active 
        = vlSelf->sim__DOT__picorv32__DOT__irq_active;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__decoder_trigger 
        = vlSelf->sim__DOT__picorv32__DOT__decoder_trigger;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_wordsize 
        = vlSelf->sim__DOT__picorv32__DOT__mem_wordsize;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_compr 
        = vlSelf->sim__DOT__picorv32__DOT__latched_compr;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_pc 
        = vlSelf->sim__DOT__picorv32__DOT__reg_pc;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst 
        = vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__irq_state 
        = vlSelf->sim__DOT__picorv32__DOT__irq_state;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
        = vlSelf->sim__DOT__picorv32__DOT__reg_out;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__irq_mask 
        = vlSelf->sim__DOT__picorv32__DOT__irq_mask;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state 
        = vlSelf->sim__DOT__picorv32__DOT__cpu_state;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 
        = vlSelf->sim__DOT__picorv32__DOT__reg_op1;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_state 
        = vlSelf->sim__DOT__picorv32__DOT__mem_state;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__running;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu 
        = vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    if (((IData)(vlSelf->serial_sink_valid) & (IData)(vlSelf->serial_sink_ready))) {
        vlSelf->__Vdlyvval__sim__DOT__storage_1__v0 
            = vlSelf->serial_sink_data;
        vlSelf->__Vdlyvset__sim__DOT__storage_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__sim__DOT__storage_1__v0 
            = vlSelf->sim__DOT__uart_core_rx_fifo_wrport_adr;
        vlSelf->sim__DOT__uart_core_rx_fifo_produce 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->sim__DOT__uart_core_rx_fifo_produce)));
        if ((1U & (~ (IData)(vlSelf->sim__DOT__uart_core_rx_fifo_do_read)))) {
            vlSelf->__Vdly__sim__DOT__uart_core_rx_fifo_level0 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->sim__DOT__uart_core_rx_fifo_level0)));
        }
    } else if (vlSelf->sim__DOT__uart_core_rx_fifo_do_read) {
        vlSelf->__Vdly__sim__DOT__uart_core_rx_fifo_level0 
            = (0x1fU & ((IData)(vlSelf->sim__DOT__uart_core_rx_fifo_level0) 
                        - (IData)(1U)));
    }
    if (((IData)(vlSelf->sim__DOT__uart_core_rxtx_re) 
         & (0x10U != (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_level0)))) {
        vlSelf->__Vdlyvval__sim__DOT__storage__v0 = 
            (0xffU & vlSelf->sim__DOT__interface1_dat_w);
        vlSelf->__Vdlyvset__sim__DOT__storage__v0 = 1U;
        vlSelf->__Vdlyvdim0__sim__DOT__storage__v0 
            = vlSelf->sim__DOT__uart_core_tx_fifo_wrport_adr;
        vlSelf->sim__DOT__uart_core_tx_fifo_produce 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_produce)));
    }
    if ((((IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn) 
          & (IData)(vlSelf->sim__DOT__picorv32__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelf->sim__DOT__picorv32__DOT__latched_rd)))) {
        vlSelf->sim__DOT__picorv32__DOT____Vlvbound_h42d012a2__0 
            = vlSelf->sim__DOT__picorv32__DOT__cpuregs_wrdata;
        if ((0x23U >= (IData)(vlSelf->sim__DOT__picorv32__DOT__latched_rd))) {
            vlSelf->__Vdlyvval__sim__DOT__picorv32__DOT__cpuregs__v0 
                = vlSelf->sim__DOT__picorv32__DOT____Vlvbound_h42d012a2__0;
            vlSelf->__Vdlyvset__sim__DOT__picorv32__DOT__cpuregs__v0 = 1U;
            vlSelf->__Vdlyvdim0__sim__DOT__picorv32__DOT__cpuregs__v0 
                = vlSelf->sim__DOT__picorv32__DOT__latched_rd;
        }
    }
    if ((0xffffffffU != vlSelf->sim__DOT__bus_errors)) {
        if (vlSelf->sim__DOT__error) {
            vlSelf->__Vdly__sim__DOT__bus_errors = 
                ((IData)(1U) + vlSelf->sim__DOT__bus_errors);
        }
    }
    if (vlSelf->sim__DOT__uart_core_rx_fifo_do_read) {
        vlSelf->__Vdly__sim__DOT__uart_core_rx_fifo_consume 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->sim__DOT__uart_core_rx_fifo_consume)));
    }
    if (vlSelf->sim__DOT__uart_core_tx_fifo_do_read) {
        vlSelf->__Vdly__sim__DOT__uart_core_tx_fifo_consume 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_consume)));
    }
    if (vlSelf->sim__DOT__int_rst) {
        vlSelf->__Vdly__sim__DOT__bus_errors = 0U;
        vlSelf->__Vdly__sim__DOT__uart_core_rx_fifo_consume = 0U;
        vlSelf->__Vdly__sim__DOT__uart_core_tx_fifo_consume = 0U;
        vlSelf->sim__DOT__uart_core_rx_fifo_produce = 0U;
        vlSelf->sim__DOT__uart_core_tx_fifo_produce = 0U;
        vlSelf->__Vdly__sim__DOT__uart_core_rx_fifo_level0 = 0U;
    }
    if (((IData)(vlSelf->sim__DOT__uart_core_rxtx_re) 
         & (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_sink_ready))) {
        if ((1U & (~ (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_do_read)))) {
            vlSelf->__Vdly__sim__DOT__uart_core_tx_fifo_level0 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_level0)));
        }
    } else if (vlSelf->sim__DOT__uart_core_tx_fifo_do_read) {
        vlSelf->__Vdly__sim__DOT__uart_core_tx_fifo_level0 
            = (0x1fU & ((IData)(vlSelf->sim__DOT__uart_core_tx_fifo_level0) 
                        - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vsim___024root___nba_sequent__TOP__1(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__sim__DOT__ram_bus_ram_bus_ack = 0U;
    if ((((IData)(vlSelf->sim__DOT__ram_bus_ram_bus_cyc) 
          & (IData)(vlSelf->sim__DOT__rhs_self4)) & 
         (~ (IData)(vlSelf->sim__DOT__ram_bus_ram_bus_ack)))) {
        vlSelf->__Vdly__sim__DOT__ram_bus_ram_bus_ack = 1U;
    }
    if (((IData)(vlSelf->sim__DOT__rhs_self4) & ((~ (IData)(vlSelf->sim__DOT__shared_ack)) 
                                                 & (IData)(vlSelf->sim__DOT__rhs_self3)))) {
        if ((1U & (~ (IData)(vlSelf->sim__DOT__done)))) {
            vlSelf->sim__DOT__count = (0xfffffU & (vlSelf->sim__DOT__count 
                                                   - (IData)(1U)));
        }
    } else {
        vlSelf->sim__DOT__count = 0xf4240U;
    }
    vlSelf->__Vdly__sim__DOT__simsoc_ram_bus_ack = 0U;
    if (((((IData)(vlSelf->sim__DOT__rhs_self3) & (IData)(vlSelf->sim__DOT__slave_sel)) 
          & (IData)(vlSelf->sim__DOT__rhs_self4)) & 
         (~ (IData)(vlSelf->sim__DOT__simsoc_ram_bus_ack)))) {
        vlSelf->__Vdly__sim__DOT__simsoc_ram_bus_ack = 1U;
    }
    if ((1U & (IData)(vlSelf->sim__DOT__ram_we))) {
        vlSelf->__Vdlyvval__sim__DOT__sram__v0 = (0xffU 
                                                  & vlSelf->sim__DOT__rhs_self1);
        vlSelf->__Vdlyvset__sim__DOT__sram__v0 = 1U;
        vlSelf->__Vdlyvlsb__sim__DOT__sram__v0 = 0U;
        vlSelf->__Vdlyvdim0__sim__DOT__sram__v0 = (0x7ffU 
                                                   & vlSelf->sim__DOT__rhs_self0);
    }
    if ((2U & (IData)(vlSelf->sim__DOT__ram_we))) {
        vlSelf->__Vdlyvval__sim__DOT__sram__v1 = (0xffU 
                                                  & (vlSelf->sim__DOT__rhs_self1 
                                                     >> 8U));
        vlSelf->__Vdlyvset__sim__DOT__sram__v1 = 1U;
        vlSelf->__Vdlyvlsb__sim__DOT__sram__v1 = 8U;
        vlSelf->__Vdlyvdim0__sim__DOT__sram__v1 = (0x7ffU 
                                                   & vlSelf->sim__DOT__rhs_self0);
    }
    if ((4U & (IData)(vlSelf->sim__DOT__ram_we))) {
        vlSelf->__Vdlyvval__sim__DOT__sram__v2 = (0xffU 
                                                  & (vlSelf->sim__DOT__rhs_self1 
                                                     >> 0x10U));
        vlSelf->__Vdlyvset__sim__DOT__sram__v2 = 1U;
        vlSelf->__Vdlyvlsb__sim__DOT__sram__v2 = 0x10U;
        vlSelf->__Vdlyvdim0__sim__DOT__sram__v2 = (0x7ffU 
                                                   & vlSelf->sim__DOT__rhs_self0);
    }
    if ((8U & (IData)(vlSelf->sim__DOT__ram_we))) {
        vlSelf->__Vdlyvval__sim__DOT__sram__v3 = (vlSelf->sim__DOT__rhs_self1 
                                                  >> 0x18U);
        vlSelf->__Vdlyvset__sim__DOT__sram__v3 = 1U;
        vlSelf->__Vdlyvlsb__sim__DOT__sram__v3 = 0x18U;
        vlSelf->__Vdlyvdim0__sim__DOT__sram__v3 = (0x7ffU 
                                                   & vlSelf->sim__DOT__rhs_self0);
    }
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 0U;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 0U;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 0U;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 0U;
    if (((((IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn) 
           & (IData)(vlSelf->sim__DOT__picorv325)) 
          & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__pcpi_div_ready))) 
         & (0x2000033U == (0xfe00007fU & vlSelf->sim__DOT__picorv326)))) {
        if ((4U != (7U & (vlSelf->sim__DOT__picorv326 
                          >> 0xcU)))) {
            if ((5U != (7U & (vlSelf->sim__DOT__picorv326 
                              >> 0xcU)))) {
                if ((6U != (7U & (vlSelf->sim__DOT__picorv326 
                                  >> 0xcU)))) {
                    if ((7U == (7U & (vlSelf->sim__DOT__picorv326 
                                      >> 0xcU)))) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 1U;
                    }
                }
                if ((6U == (7U & (vlSelf->sim__DOT__picorv326 
                                  >> 0xcU)))) {
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 1U;
                }
            }
            if ((5U == (7U & (vlSelf->sim__DOT__picorv326 
                              >> 0xcU)))) {
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 1U;
            }
        }
        if ((4U == (7U & (vlSelf->sim__DOT__picorv326 
                          >> 0xcU)))) {
            vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 1U;
        }
    }
    if (vlSelf->sim__DOT__uart_core_tx_fifo_do_read) {
        vlSelf->sim__DOT__storage_dat1 = vlSelf->sim__DOT__storage
            [vlSelf->sim__DOT__uart_core_tx_fifo_consume];
    }
    if (((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst) 
         & (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_done))) {
        vlSelf->sim__DOT__picorv32__DOT__decoded_rs1 
            = (0x1fU & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched 
                        >> 0xfU));
        if ((IData)((0xbU == (0xfe00007fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched)))) {
            vlSelf->sim__DOT__picorv32__DOT__decoded_rs1 
                = (0x20U | (IData)(vlSelf->sim__DOT__picorv32__DOT__decoded_rs1));
        }
        if ((IData)((0x400000bU == (0xfe00007fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched)))) {
            vlSelf->sim__DOT__picorv32__DOT__decoded_rs1 = 0x20U;
        }
    }
    vlSelf->sim__DOT__mem_dat0 = ((0x24U >= (0x3fU 
                                             & (IData)(vlSelf->sim__DOT__interface1_adr)))
                                   ? vlSelf->sim__DOT__mem
                                  [(0x3fU & (IData)(vlSelf->sim__DOT__interface1_adr))]
                                   : 0U);
    if (vlSelf->sim__DOT__csr_bankarray_csrbank1_ev_pending_re) {
        vlSelf->sim__DOT__timer_pending_wr_stb = 1U;
        vlSelf->sim__DOT__uart_core_pending_wr_stb 
            = vlSelf->sim__DOT__csr_bankarray_csrbank2_ev_pending_re;
        vlSelf->sim__DOT__timer_pending_wr_data = (1U 
                                                   & vlSelf->sim__DOT__interface1_dat_w);
    } else {
        vlSelf->sim__DOT__timer_pending_wr_stb = 0U;
        vlSelf->sim__DOT__uart_core_pending_wr_stb 
            = vlSelf->sim__DOT__csr_bankarray_csrbank2_ev_pending_re;
    }
    if (vlSelf->sim__DOT__csr_bankarray_csrbank2_ev_pending_re) {
        vlSelf->sim__DOT__uart_core_pending_wr_data 
            = (3U & vlSelf->sim__DOT__interface1_dat_w);
    }
    vlSelf->sim__DOT__reset_wr_stb = vlSelf->sim__DOT__csr_bankarray_csrbank0_reset_re;
    if (vlSelf->sim__DOT__int_rst) {
        vlSelf->__Vdly__sim__DOT__uart_core_tx_fifo_level0 = 0U;
        vlSelf->__Vdly__sim__DOT__ram_bus_ram_bus_ack = 0U;
        vlSelf->sim__DOT__count = 0xf4240U;
        vlSelf->__Vdly__sim__DOT__simsoc_ram_bus_ack = 0U;
        vlSelf->sim__DOT__timer_pending_wr_stb = 0U;
        vlSelf->sim__DOT__uart_core_pending_wr_stb = 0U;
        vlSelf->sim__DOT__timer_pending_wr_data = 0U;
        vlSelf->sim__DOT__uart_core_pending_wr_data = 0U;
        vlSelf->sim__DOT__reset_wr_stb = 0U;
    }
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q 
        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__pcpi_div_wait) 
           & (IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn));
    vlSelf->sim__DOT__sram_adr0 = (0x7ffU & vlSelf->sim__DOT__rhs_self0);
    vlSelf->sim__DOT__rom_dat0 = vlSelf->sim__DOT__rom
        [(0x7fffU & vlSelf->sim__DOT__rhs_self0)];
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 0U;
    if ((((IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn) 
          & (IData)(vlSelf->sim__DOT__picorv325)) & 
         (0x2000033U == (0xfe00007fU & vlSelf->sim__DOT__picorv326)))) {
        if ((0U != (7U & (vlSelf->sim__DOT__picorv326 
                          >> 0xcU)))) {
            if ((1U != (7U & (vlSelf->sim__DOT__picorv326 
                              >> 0xcU)))) {
                if ((2U != (7U & (vlSelf->sim__DOT__picorv326 
                                  >> 0xcU)))) {
                    if ((3U == (7U & (vlSelf->sim__DOT__picorv326 
                                      >> 0xcU)))) {
                        vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsim___024root___nba_sequent__TOP__2(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->sim__DOT__csr_bankarray_sel_r = (1U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->sim__DOT__interface1_adr) 
                                                 >> 9U)));
    if (((IData)(vlSelf->sim__DOT__picorv32__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__decoder_pseudo_trigger)))) {
        vlSelf->sim__DOT__picorv32__DOT__instr_fence 
            = ((0xfU == (0x7fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)) 
               & (~ (IData)((0U != (7U & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                          >> 0xcU))))));
    }
    if ((1U & (~ (IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn)))) {
        vlSelf->sim__DOT__picorv32__DOT__instr_fence = 0U;
    }
    vlSelf->sim__DOT__slave_sel_r = vlSelf->sim__DOT__slave_sel;
    vlSelf->sim__DOT__state = vlSelf->sim__DOT__next_state;
    if (vlSelf->sim__DOT__int_rst) {
        vlSelf->sim__DOT__csr_bankarray_sel_r = 0U;
        vlSelf->sim__DOT__slave_sel_r = 0U;
        vlSelf->sim__DOT__state = 0U;
    }
    vlSelf->sim__DOT__csr_bankarray_interface0_bank_bus_dat_r = 0U;
    if ((0U == (0x1fU & ((IData)(vlSelf->sim__DOT__interface1_adr) 
                         >> 9U)))) {
        if ((0U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))) {
            vlSelf->sim__DOT__csr_bankarray_interface0_bank_bus_dat_r 
                = vlSelf->sim__DOT__reset_storage;
        } else if ((1U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))) {
            vlSelf->sim__DOT__csr_bankarray_interface0_bank_bus_dat_r 
                = vlSelf->sim__DOT__scratch_storage;
        } else if ((2U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))) {
            vlSelf->sim__DOT__csr_bankarray_interface0_bank_bus_dat_r 
                = vlSelf->sim__DOT__bus_errors;
        }
    }
    vlSelf->sim__DOT__csr_bankarray_interface2_bank_bus_dat_r = 0U;
    if ((3U == (0x1fU & ((IData)(vlSelf->sim__DOT__interface1_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr))))) {
            vlSelf->sim__DOT__csr_bankarray_interface2_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))
                    ? (0xffU & (IData)(vlSelf->sim__DOT__storage_1_dat1))
                    : ((1U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))
                        ? (0x10U == (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_level0))
                        : ((2U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))
                            ? (1U & (~ (IData)(vlSelf->sim__DOT__uart_core_rx_fifo_readable)))
                            : ((3U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))
                                ? (IData)(vlSelf->sim__DOT__uart_core_status_status)
                                : ((4U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))
                                    ? (IData)(vlSelf->sim__DOT__uart_core_pending_status)
                                    : ((5U == (0x1ffU 
                                               & (IData)(vlSelf->sim__DOT__interface1_adr)))
                                        ? (IData)(vlSelf->sim__DOT__uart_core_enable_storage)
                                        : ((6U == (0x1ffU 
                                                   & (IData)(vlSelf->sim__DOT__interface1_adr)))
                                            ? (1U & 
                                               (~ (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_readable)))
                                            : (1U & 
                                               (~ (IData)(vlSelf->serial_sink_ready))))))))));
        }
    }
    vlSelf->sim__DOT__csr_bankarray_interface1_bank_bus_dat_r = 0U;
    if ((2U == (0x1fU & ((IData)(vlSelf->sim__DOT__interface1_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr))))) {
            vlSelf->sim__DOT__csr_bankarray_interface1_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))
                    ? vlSelf->sim__DOT__timer_load_storage
                    : ((1U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))
                        ? vlSelf->sim__DOT__timer_reload_storage
                        : ((2U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))
                            ? (IData)(vlSelf->sim__DOT__timer_en_storage)
                            : ((3U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))
                                ? (IData)(vlSelf->sim__DOT__timer_update_value_storage)
                                : ((4U == (0x1ffU & (IData)(vlSelf->sim__DOT__interface1_adr)))
                                    ? vlSelf->sim__DOT__timer_value_status
                                    : ((5U == (0x1ffU 
                                               & (IData)(vlSelf->sim__DOT__interface1_adr)))
                                        ? (0U == vlSelf->sim__DOT__timer_value)
                                        : ((6U == (0x1ffU 
                                                   & (IData)(vlSelf->sim__DOT__interface1_adr)))
                                            ? (IData)(vlSelf->sim__DOT__timer_zero_pending)
                                            : (IData)(vlSelf->sim__DOT__timer_enable_storage))))))));
        }
    }
    if ((1U & (~ ((~ (IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn)) 
                  | (IData)(vlSelf->sim__DOT__picorv32_trap))))) {
        if (vlSelf->sim__DOT__picorv321) {
            vlSelf->sim__DOT__picorv32_mem_wdata = vlSelf->sim__DOT__picorv323;
        }
        if (((IData)(vlSelf->sim__DOT__picorv320) | (IData)(vlSelf->sim__DOT__picorv321))) {
            vlSelf->sim__DOT__picorv32_mem_addr = (
                                                   ((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_prefetch) 
                                                    | (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst))
                                                    ? 
                                                   (0xfffffffcU 
                                                    & vlSelf->sim__DOT__picorv32__DOT__next_pc)
                                                    : 
                                                   (0xfffffffcU 
                                                    & vlSelf->sim__DOT__picorv32__DOT__reg_op1));
        }
    }
    if ((1U & ((~ (IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn)) 
               | (IData)(vlSelf->sim__DOT__picorv32_trap)))) {
        if ((1U & (~ (IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn)))) {
            vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn)) 
                   | (IData)(vlSelf->sim__DOT__shared_ack)))) {
            vlSelf->sim__DOT__picorv32_mem_valid = 0U;
        }
    } else {
        if (((IData)(vlSelf->sim__DOT__picorv320) | (IData)(vlSelf->sim__DOT__picorv321))) {
            vlSelf->sim__DOT__picorv32_mem_wstrb = 
                ((IData)(vlSelf->sim__DOT__picorv324) 
                 & (- (IData)((IData)(vlSelf->sim__DOT__picorv321))));
        }
        if ((0U == (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_state))) {
            if ((((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_prefetch) 
                  | (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst)) 
                 | (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rdata))) {
                vlSelf->sim__DOT__picorv32_mem_valid = 1U;
                vlSelf->sim__DOT__picorv32_mem_wstrb = 0U;
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_state = 1U;
            }
            if (vlSelf->sim__DOT__picorv32__DOT__mem_do_wdata) {
                vlSelf->sim__DOT__picorv32_mem_valid = 1U;
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_state))) {
            if (vlSelf->sim__DOT__picorv32__DOT__mem_xfer) {
                vlSelf->sim__DOT__picorv32_mem_valid = 0U;
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_state 
                    = (((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst) 
                        | (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rdata))
                        ? 0U : 3U);
            }
        } else if ((2U == (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_state))) {
            if (vlSelf->sim__DOT__picorv32__DOT__mem_xfer) {
                vlSelf->sim__DOT__picorv32_mem_valid = 0U;
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_state))) {
            if (vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst) {
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_state = 0U;
            }
        }
    }
}

VL_INLINE_OPT void Vsim___024root___nba_sequent__TOP__3(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_wr = 0U;
    vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_ready = 0U;
    if (((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn))) {
        vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_wr = 1U;
        vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_ready = 1U;
        vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_rd 
            = (IData)(((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                        ? VL_SHIFTR_QQI(64,64,32, vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rd, 0x20U)
                        : vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rd));
    }
    if (vlSelf->__Vdlyvset__sim__DOT__picorv32__DOT__cpuregs__v0) {
        vlSelf->sim__DOT__picorv32__DOT__cpuregs[vlSelf->__Vdlyvdim0__sim__DOT__picorv32__DOT__cpuregs__v0] 
            = vlSelf->__Vdlyvval__sim__DOT__picorv32__DOT__cpuregs__v0;
    }
    vlSelf->sim__DOT__uart_core_rx_fifo_level0 = vlSelf->__Vdly__sim__DOT__uart_core_rx_fifo_level0;
    vlSelf->sim__DOT__ram_bus_ram_bus_ack = vlSelf->__Vdly__sim__DOT__ram_bus_ram_bus_ack;
    vlSelf->sim__DOT__simsoc_ram_bus_ack = vlSelf->__Vdly__sim__DOT__simsoc_ram_bus_ack;
    if (vlSelf->__Vdlyvset__sim__DOT__sram__v0) {
        vlSelf->sim__DOT__sram[vlSelf->__Vdlyvdim0__sim__DOT__sram__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sim__DOT__sram__v0))) 
                & vlSelf->sim__DOT__sram[vlSelf->__Vdlyvdim0__sim__DOT__sram__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sim__DOT__sram__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sim__DOT__sram__v0))));
    }
    if (vlSelf->__Vdlyvset__sim__DOT__sram__v1) {
        vlSelf->sim__DOT__sram[vlSelf->__Vdlyvdim0__sim__DOT__sram__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sim__DOT__sram__v1))) 
                & vlSelf->sim__DOT__sram[vlSelf->__Vdlyvdim0__sim__DOT__sram__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sim__DOT__sram__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sim__DOT__sram__v1))));
    }
    if (vlSelf->__Vdlyvset__sim__DOT__sram__v2) {
        vlSelf->sim__DOT__sram[vlSelf->__Vdlyvdim0__sim__DOT__sram__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sim__DOT__sram__v2))) 
                & vlSelf->sim__DOT__sram[vlSelf->__Vdlyvdim0__sim__DOT__sram__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sim__DOT__sram__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sim__DOT__sram__v2))));
    }
    if (vlSelf->__Vdlyvset__sim__DOT__sram__v3) {
        vlSelf->sim__DOT__sram[vlSelf->__Vdlyvdim0__sim__DOT__sram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sim__DOT__sram__v3))) 
                & vlSelf->sim__DOT__sram[vlSelf->__Vdlyvdim0__sim__DOT__sram__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sim__DOT__sram__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sim__DOT__sram__v3))));
    }
    vlSelf->sim__DOT__uart_core_tx_fifo_consume = vlSelf->__Vdly__sim__DOT__uart_core_tx_fifo_consume;
    if (vlSelf->__Vdlyvset__sim__DOT__storage__v0) {
        vlSelf->sim__DOT__storage[vlSelf->__Vdlyvdim0__sim__DOT__storage__v0] 
            = vlSelf->__Vdlyvval__sim__DOT__storage__v0;
    }
    vlSelf->sim__DOT__bus_errors = vlSelf->__Vdly__sim__DOT__bus_errors;
    vlSelf->sim__DOT__uart_core_tx_fifo_level0 = vlSelf->__Vdly__sim__DOT__uart_core_tx_fifo_level0;
    vlSelf->sim__DOT__picorv32__DOT__mem_state = vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_state;
    vlSelf->sim__DOT__uart_core_rx_fifo_wrport_adr 
        = vlSelf->sim__DOT__uart_core_rx_fifo_produce;
    vlSelf->sim__DOT__uart_core_tx_fifo_wrport_adr 
        = vlSelf->sim__DOT__uart_core_tx_fifo_produce;
    vlSelf->serial_sink_ready = (0x10U != (IData)(vlSelf->sim__DOT__uart_core_rx_fifo_level0));
    vlSelf->sim__DOT__error = 0U;
    if ((0U == vlSelf->sim__DOT__count)) {
        vlSelf->sim__DOT__error = 1U;
        vlSelf->sim__DOT__done = 1U;
    } else {
        vlSelf->sim__DOT__done = 0U;
    }
    vlSelf->sim__DOT__picorv32__DOT__pcpi_div_ready = 0U;
    vlSelf->sim__DOT__picorv32__DOT__pcpi_div_wr = 0U;
    vlSelf->sim__DOT__picorv32__DOT__pcpi_div_rd = 0U;
    if (vlSelf->sim__DOT____Vcellinp__picorv32__resetn) {
        if (vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__start) {
            vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__running = 1U;
            vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                = ((((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     | (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                    & (vlSelf->sim__DOT__picorv32__DOT__reg_op1 
                       >> 0x1fU)) ? (- vlSelf->sim__DOT__picorv32__DOT__reg_op1)
                    : vlSelf->sim__DOT__picorv32__DOT__reg_op1);
            vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (0x7fffffffffffffffULL & VL_SHIFTL_QQI(63,63,32, 
                                                         ((((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                                                            | (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                                                           & (vlSelf->sim__DOT__picorv32__DOT__reg_op2 
                                                              >> 0x1fU))
                                                           ? 
                                                          (- (QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__reg_op2)))
                                                           : (QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__reg_op2))), 0x1fU));
            vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient = 0U;
            vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = 0x80000000U;
        } else if (((~ (IData)((0U != vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk))) 
                    & (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__running))) {
            vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
            vlSelf->sim__DOT__picorv32__DOT__pcpi_div_ready = 1U;
            vlSelf->sim__DOT__picorv32__DOT__pcpi_div_wr = 1U;
            vlSelf->sim__DOT__picorv32__DOT__pcpi_div_rd 
                = (((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                    | (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu))
                    ? ((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                        : vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                    : ((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__dividend)
                        : vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__dividend));
        } else {
            if ((vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                 <= (QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__dividend)))) {
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                    = (vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                       - (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__divisor));
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                    = (vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                       | vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk);
            }
            vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (0x7fffffffffffffffULL & VL_SHIFTR_QQI(63,63,32, vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__divisor, 1U));
            vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
                = VL_SHIFTR_III(32,32,32, vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk, 1U);
        }
    } else {
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
    }
    vlSelf->serial_source_data = (0xffU & (IData)(vlSelf->sim__DOT__storage_dat1));
    vlSelf->sim__DOT__csr_bankarray_sram_bus_dat_r = 0U;
    if (vlSelf->sim__DOT__csr_bankarray_sel_r) {
        vlSelf->sim__DOT__csr_bankarray_sram_bus_dat_r 
            = vlSelf->sim__DOT__mem_dat0;
    }
    vlSelf->sim__DOT__interface0_ack = 0U;
    if (vlSelf->sim__DOT__state) {
        vlSelf->sim__DOT__interface0_ack = 1U;
    }
    if (vlSelf->sim__DOT__csr_bankarray_csrbank0_scratch_re) {
        vlSelf->sim__DOT__scratch_storage = vlSelf->sim__DOT__interface1_dat_w;
    }
    if (vlSelf->sim__DOT__csr_bankarray_csrbank0_reset_re) {
        vlSelf->sim__DOT__reset_storage = (3U & vlSelf->sim__DOT__interface1_dat_w);
    }
    if (vlSelf->sim__DOT__uart_core_rx_fifo_do_read) {
        vlSelf->sim__DOT__storage_1_dat1 = vlSelf->sim__DOT__storage_1
            [vlSelf->sim__DOT__uart_core_rx_fifo_consume];
    }
    vlSelf->sim__DOT__uart_core_tx_fifo_sink_ready 
        = (0x10U != (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_level0));
    if (vlSelf->sim__DOT__uart_core_tx_fifo_syncfifo_re) {
        vlSelf->sim__DOT__uart_core_tx_fifo_readable = 1U;
    } else if (vlSelf->serial_source_ready) {
        vlSelf->sim__DOT__uart_core_tx_fifo_readable = 0U;
    }
    if (vlSelf->sim__DOT__csr_bankarray_csrbank2_ev_enable_re) {
        vlSelf->sim__DOT__uart_core_enable_storage 
            = (3U & vlSelf->sim__DOT__interface1_dat_w);
    }
    if (vlSelf->sim__DOT__uart_core_rx_fifo_syncfifo_re) {
        vlSelf->sim__DOT__uart_core_rx_fifo_readable = 1U;
    } else if (vlSelf->sim__DOT__uart_core_rx_clear) {
        vlSelf->sim__DOT__uart_core_rx_fifo_readable = 0U;
    }
    if (vlSelf->sim__DOT__csr_bankarray_csrbank1_update_value_re) {
        vlSelf->sim__DOT__timer_update_value_storage 
            = (1U & vlSelf->sim__DOT__interface1_dat_w);
    }
    if (vlSelf->sim__DOT__int_rst) {
        vlSelf->sim__DOT__scratch_storage = 0x12345678U;
        vlSelf->sim__DOT__reset_storage = 0U;
        vlSelf->sim__DOT__uart_core_tx_fifo_readable = 0U;
        vlSelf->sim__DOT__uart_core_enable_storage = 0U;
        vlSelf->sim__DOT__uart_core_rx_fifo_readable = 0U;
        vlSelf->sim__DOT__timer_update_value_storage = 0U;
    }
    if (vlSelf->sim__DOT__csr_bankarray_csrbank1_ev_enable_re) {
        vlSelf->sim__DOT__timer_enable_storage = (1U 
                                                  & vlSelf->sim__DOT__interface1_dat_w);
    }
}

VL_INLINE_OPT void Vsim___024root___nba_sequent__TOP__4(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__4\n"); );
    // Init
    CData/*3:0*/ sim__DOT__picorv32_idbus_sel;
    sim__DOT__picorv32_idbus_sel = 0;
    CData/*0:0*/ sim__DOT__picorv32_idbus_we;
    sim__DOT__picorv32_idbus_we = 0;
    // Body
    if (vlSelf->sim__DOT__timer_zero_clear) {
        vlSelf->sim__DOT__timer_zero_pending = 0U;
    }
    if (((0U == vlSelf->sim__DOT__timer_value) & (~ (IData)(vlSelf->sim__DOT__timer_zero_trigger_d)))) {
        vlSelf->sim__DOT__timer_zero_pending = 1U;
    }
    vlSelf->__Vdly__sim__DOT__timer_value = ((IData)(vlSelf->sim__DOT__timer_en_storage)
                                              ? ((0U 
                                                  == vlSelf->sim__DOT__timer_value)
                                                  ? vlSelf->sim__DOT__timer_reload_storage
                                                  : 
                                                 (vlSelf->sim__DOT__timer_value 
                                                  - (IData)(1U)))
                                              : vlSelf->sim__DOT__timer_load_storage);
    if (vlSelf->sim__DOT__timer_update_value_wr_stb) {
        vlSelf->sim__DOT__timer_value_status = vlSelf->sim__DOT__timer_value;
    }
    vlSelf->sim__DOT__rhs_self1 = vlSelf->sim__DOT__picorv32_mem_wdata;
    vlSelf->sim__DOT__rhs_self0 = (vlSelf->sim__DOT__picorv32_mem_addr 
                                   >> 2U);
    if ((0U != (IData)(vlSelf->sim__DOT__picorv32_mem_wstrb))) {
        sim__DOT__picorv32_idbus_we = 1U;
        sim__DOT__picorv32_idbus_sel = vlSelf->sim__DOT__picorv32_mem_wstrb;
    } else {
        sim__DOT__picorv32_idbus_we = 0U;
        sim__DOT__picorv32_idbus_sel = 0xfU;
    }
    vlSelf->sim__DOT__rhs_self4 = vlSelf->sim__DOT__picorv32_mem_valid;
    vlSelf->sim__DOT__rhs_self3 = vlSelf->sim__DOT__picorv32_mem_valid;
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 0U;
    if (vlSelf->sim__DOT____Vcellinp__picorv32__resetn) {
        if (vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting) {
            vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = (((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                    | (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu))
                    ? VL_EXTENDS_QI(64,32, vlSelf->sim__DOT__picorv32__DOT__reg_op1)
                    : (QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__reg_op1)));
            vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = ((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh)
                    ? VL_EXTENDS_QI(64,32, vlSelf->sim__DOT__picorv32__DOT__reg_op2)
                    : (QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__reg_op2)));
            vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rd = 0ULL;
            vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = 0ULL;
            vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = ((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                    ? 0x3eU : 0x1eU);
            vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting 
                = (1U & (~ ((~ (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)) 
                            & (IData)(vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_wait))));
        } else {
            vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = (0x7fU & ((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter) 
                            - (IData)(1U)));
            vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                = vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd;
            vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                = vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx;
            vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1;
            vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2;
            if ((0x40U & (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter))) {
                vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 1U;
                vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
            }
        }
        if (vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__start) {
            vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__outsign 
                = ((((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     & ((vlSelf->sim__DOT__picorv32__DOT__reg_op1 
                         >> 0x1fU) != (vlSelf->sim__DOT__picorv32__DOT__reg_op2 
                                       >> 0x1fU))) 
                    & (0U != vlSelf->sim__DOT__picorv32__DOT__reg_op2)) 
                   | ((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                      & (vlSelf->sim__DOT__picorv32__DOT__reg_op1 
                         >> 0x1fU)));
        }
    } else {
        vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
    }
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__running;
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    vlSelf->sim__DOT__shared_ack = (((IData)(vlSelf->sim__DOT__simsoc_ram_bus_ack) 
                                     | (IData)(vlSelf->sim__DOT__ram_bus_ram_bus_ack)) 
                                    | (IData)(vlSelf->sim__DOT__interface0_ack));
    if ((0U == vlSelf->sim__DOT__count)) {
        vlSelf->sim__DOT__shared_ack = 1U;
    }
    vlSelf->sim__DOT__uart_core_rx_fifo_consume = vlSelf->__Vdly__sim__DOT__uart_core_rx_fifo_consume;
    if (vlSelf->__Vdlyvset__sim__DOT__storage_1__v0) {
        vlSelf->sim__DOT__storage_1[vlSelf->__Vdlyvdim0__sim__DOT__storage_1__v0] 
            = vlSelf->__Vdlyvval__sim__DOT__storage_1__v0;
    }
    vlSelf->sim__DOT__uart_core_rx_clear = 0U;
    if (((IData)(vlSelf->sim__DOT__uart_core_pending_wr_stb) 
         & ((IData)(vlSelf->sim__DOT__uart_core_pending_wr_data) 
            >> 1U))) {
        vlSelf->sim__DOT__uart_core_rx_clear = 1U;
    }
    vlSelf->sim__DOT__timer_zero_clear = 0U;
    if (((IData)(vlSelf->sim__DOT__timer_pending_wr_stb) 
         & (IData)(vlSelf->sim__DOT__timer_pending_wr_data))) {
        vlSelf->sim__DOT__timer_zero_clear = 1U;
    }
    vlSelf->sim__DOT__basiclowerer_self = vlSelf->sim__DOT__rhs_self1;
    vlSelf->sim__DOT__slave_sel = (((0x8200U == (0xffffU 
                                                 & (vlSelf->sim__DOT__rhs_self0 
                                                    >> 0xeU))) 
                                    << 2U) | (((0x800U 
                                                == 
                                                (0x7ffffU 
                                                 & (vlSelf->sim__DOT__rhs_self0 
                                                    >> 0xbU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (0x7fffU 
                                                  & (vlSelf->sim__DOT__rhs_self0 
                                                     >> 0xfU)))));
    vlSelf->sim__DOT__rhs_self5 = sim__DOT__picorv32_idbus_we;
    vlSelf->sim__DOT__rhs_self2 = sim__DOT__picorv32_idbus_sel;
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    vlSelf->sim__DOT__soc_rst = 0U;
    if (vlSelf->sim__DOT__reset_wr_stb) {
        vlSelf->sim__DOT__soc_rst = (1U & (IData)(vlSelf->sim__DOT__reset_storage));
    }
    vlSelf->serial_source_valid = vlSelf->sim__DOT__uart_core_tx_fifo_readable;
    vlSelf->sim__DOT__uart_core_tx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_level0)) 
           & ((~ (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_readable)) 
              | (IData)(vlSelf->serial_source_ready)));
    vlSelf->sim__DOT__uart_core_rx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSelf->sim__DOT__uart_core_rx_fifo_level0)) 
           & ((~ (IData)(vlSelf->sim__DOT__uart_core_rx_fifo_readable)) 
              | (IData)(vlSelf->sim__DOT__uart_core_rx_clear)));
    vlSelf->sim__DOT____VdfgExtracted_hbbeaa1ab__0 
        = (((IData)(vlSelf->sim__DOT__uart_core_rx_fifo_readable) 
            << 1U) | (0x10U != (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_level0)));
    vlSelf->sim__DOT__timer_zero_trigger_d = (0U == vlSelf->sim__DOT__timer_value);
    vlSelf->sim__DOT__timer_update_value_wr_stb = vlSelf->sim__DOT__csr_bankarray_csrbank1_update_value_re;
    if (vlSelf->sim__DOT__csr_bankarray_csrbank1_en_re) {
        vlSelf->sim__DOT__timer_en_storage = (1U & vlSelf->sim__DOT__interface1_dat_w);
    }
    if (vlSelf->sim__DOT__csr_bankarray_csrbank1_reload_re) {
        vlSelf->sim__DOT__timer_reload_storage = vlSelf->sim__DOT__interface1_dat_w;
    }
    if (vlSelf->sim__DOT__csr_bankarray_csrbank1_load_re) {
        vlSelf->sim__DOT__timer_load_storage = vlSelf->sim__DOT__interface1_dat_w;
    }
    if (vlSelf->sim__DOT__int_rst) {
        vlSelf->sim__DOT__timer_enable_storage = 0U;
        vlSelf->sim__DOT__timer_zero_pending = 0U;
        vlSelf->sim__DOT__timer_value_status = 0U;
        vlSelf->__Vdly__sim__DOT__timer_value = 0U;
        vlSelf->sim__DOT__timer_zero_trigger_d = 0U;
        vlSelf->sim__DOT__timer_update_value_wr_stb = 0U;
        vlSelf->sim__DOT__timer_en_storage = 0U;
        vlSelf->sim__DOT__timer_reload_storage = 0U;
        vlSelf->sim__DOT__timer_load_storage = 0U;
    }
    vlSelf->sim__DOT__ram_bus_ram_bus_cyc = ((IData)(vlSelf->sim__DOT__rhs_self3) 
                                             & ((IData)(vlSelf->sim__DOT__slave_sel) 
                                                >> 1U));
    vlSelf->sim__DOT____VdfgExtracted_h34b3db20__0 
        = ((IData)(vlSelf->sim__DOT__rhs_self3) & (
                                                   ((IData)(vlSelf->sim__DOT__slave_sel) 
                                                    >> 2U) 
                                                   & (IData)(vlSelf->sim__DOT__rhs_self4)));
    vlSelf->sim__DOT__csr_data_width = 0U;
    if ((0U != (IData)(vlSelf->sim__DOT__rhs_self2))) {
        vlSelf->sim__DOT__csr_data_width = 0U;
    }
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rd;
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rdx;
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rs1;
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rs2;
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
        = ((1U & (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1))
            ? vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2
            : 0ULL);
}

VL_INLINE_OPT void Vsim___024root___nba_sequent__TOP__5(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__5\n"); );
    // Init
    CData/*0:0*/ sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0;
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 = 0;
    // Body
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = 0ULL;
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 
        = (1U & ((((0xfU & (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd)) 
                   + (0xfU & (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx))) 
                  + (0xfU & (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2))) 
                 >> 4U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 
        = (0xfU & (((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
                    + (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx)) 
                   + (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2)));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffffffff7ULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0)) 
              << 3U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffffff0ULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | (IData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0)));
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 
        = (1U & ((((0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 4U))) + (0xfU 
                                                & (IData)(
                                                          (vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 4U)))) 
                  + (0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 4U)))) >> 4U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 
        = (0xfU & (((IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 4U)) + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 4U))) 
                   + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 4U))));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffffffff7fULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0)) 
              << 7U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffffffff0fULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0)) 
              << 4U));
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 
        = (1U & ((((0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 8U))) + (0xfU 
                                                & (IData)(
                                                          (vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                           >> 8U)))) 
                  + (0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 8U)))) >> 4U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 
        = (0xfU & (((IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 8U)) + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                >> 8U))) 
                   + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 8U))));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffffff7ffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0)) 
              << 0xbU));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffff0ffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0)) 
              << 8U));
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 
        = (1U & ((((0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0xcU))) + (0xfU 
                                                  & (IData)(
                                                            (vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                             >> 0xcU)))) 
                  + (0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0xcU)))) >> 4U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 
        = (0xfU & (((IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0xcU)) + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                  >> 0xcU))) 
                   + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0xcU))));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffffff7fffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0)) 
              << 0xfU));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffffff0fffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0)) 
              << 0xcU));
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 
        = (1U & ((((0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x10U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x10U)))) 
                  + (0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x10U)))) >> 4U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 
        = (0xfU & (((IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x10U)) + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x10U))) 
                   + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x10U))));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffffff7ffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0)) 
              << 0x13U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffff0ffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0)) 
              << 0x10U));
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 
        = (1U & ((((0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x14U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x14U)))) 
                  + (0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x14U)))) >> 4U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 
        = (0xfU & (((IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x14U)) + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x14U))) 
                   + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x14U))));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffffff7fffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0)) 
              << 0x17U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffffff0fffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0)) 
              << 0x14U));
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 
        = (1U & ((((0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x18U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x18U)))) 
                  + (0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x18U)))) >> 4U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 
        = (0xfU & (((IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x18U)) + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x18U))) 
                   + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x18U))));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffffff7ffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0)) 
              << 0x1bU));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffff0ffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0)) 
              << 0x18U));
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 
        = (1U & ((((0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x1cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x1cU)))) 
                  + (0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x1cU)))) >> 4U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 
        = (0xfU & (((IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x1cU)) + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x1cU))) 
                   + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x1cU))));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffffff7fffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0)) 
              << 0x1fU));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffffff0fffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0)) 
              << 0x1cU));
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 
        = (1U & ((((0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x20U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x20U)))) 
                  + (0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x20U)))) >> 4U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 
        = (0xfU & (((IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x20U)) + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x20U))) 
                   + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x20U))));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffffff7ffffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0)) 
              << 0x23U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffff0ffffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0)) 
              << 0x20U));
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 
        = (1U & ((((0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x24U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x24U)))) 
                  + (0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x24U)))) >> 4U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 
        = (0xfU & (((IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x24U)) + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x24U))) 
                   + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x24U))));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffffff7fffffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0)) 
              << 0x27U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffffff0fffffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0)) 
              << 0x24U));
}

VL_INLINE_OPT void Vsim___024root___nba_sequent__TOP__6(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__6\n"); );
    // Init
    CData/*0:0*/ sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0;
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 = 0;
    // Body
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 
        = (1U & ((((0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x28U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x28U)))) 
                  + (0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x28U)))) >> 4U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 
        = (0xfU & (((IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x28U)) + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x28U))) 
                   + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x28U))));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfffff7ffffffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0)) 
              << 0x2bU));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffff0ffffffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0)) 
              << 0x28U));
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 
        = (1U & ((((0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x2cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x2cU)))) 
                  + (0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x2cU)))) >> 4U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 
        = (0xfU & (((IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x2cU)) + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x2cU))) 
                   + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x2cU))));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xffff7fffffffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0)) 
              << 0x2fU));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xffff0fffffffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0)) 
              << 0x2cU));
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 
        = (1U & ((((0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x30U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x30U)))) 
                  + (0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x30U)))) >> 4U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 
        = (0xfU & (((IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x30U)) + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x30U))) 
                   + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x30U))));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xfff7ffffffffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0)) 
              << 0x33U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfff0ffffffffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0)) 
              << 0x30U));
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 
        = (1U & ((((0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x34U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x34U)))) 
                  + (0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x34U)))) >> 4U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 
        = (0xfU & (((IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x34U)) + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x34U))) 
                   + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x34U))));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xff7fffffffffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0)) 
              << 0x37U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xff0fffffffffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0)) 
              << 0x34U));
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 
        = (1U & ((((0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x38U))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x38U)))) 
                  + (0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x38U)))) >> 4U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 
        = (0xfU & (((IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x38U)) + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x38U))) 
                   + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x38U))));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0xf7ffffffffffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0)) 
              << 0x3bU));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xf0ffffffffffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0)) 
              << 0x38U));
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 
        = (1U & ((((0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                    >> 0x3cU))) + (0xfU 
                                                   & (IData)(
                                                             (vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                              >> 0x3cU)))) 
                  + (0xfU & (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                     >> 0x3cU)))) >> 4U));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 
        = (0xfU & (((IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                             >> 0x3cU)) + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                   >> 0x3cU))) 
                   + (IData)((vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                              >> 0x3cU))));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
        = ((0x7fffffffffffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
           | ((QData)((IData)(sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0)) 
              << 0x3fU));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = ((0xfffffffffffffffULL & vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
           | ((QData)((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0)) 
              << 0x3cU));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = VL_SHIFTL_QQI(64,64,32, vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt, 1U);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = VL_SHIFTR_QQI(64,64,32, vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1, 1U);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = VL_SHIFTL_QQI(64,64,32, vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2, 1U);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 0U;
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 0U;
    if ((((IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn) 
          & (IData)(vlSelf->sim__DOT__picorv325)) & 
         (0x2000033U == (0xfe00007fU & vlSelf->sim__DOT__picorv326)))) {
        if ((0U != (7U & (vlSelf->sim__DOT__picorv326 
                          >> 0xcU)))) {
            if ((1U == (7U & (vlSelf->sim__DOT__picorv326 
                              >> 0xcU)))) {
                vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 1U;
            }
            if ((1U != (7U & (vlSelf->sim__DOT__picorv326 
                              >> 0xcU)))) {
                if ((2U == (7U & (vlSelf->sim__DOT__picorv326 
                                  >> 0xcU)))) {
                    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 1U;
                }
            }
        }
    }
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q 
        = vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_wait;
    vlSelf->sim__DOT__uart_core_tx_fifo_do_read = (
                                                   (0U 
                                                    != (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_level0)) 
                                                   & (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_syncfifo_re));
    vlSelf->sim__DOT__uart_core_rx_fifo_do_read = (
                                                   (0U 
                                                    != (IData)(vlSelf->sim__DOT__uart_core_rx_fifo_level0)) 
                                                   & (IData)(vlSelf->sim__DOT__uart_core_rx_fifo_syncfifo_re));
    vlSelf->sim__DOT__uart_core_status_status = vlSelf->sim__DOT____VdfgExtracted_hbbeaa1ab__0;
    vlSelf->sim__DOT__uart_core_pending_status = vlSelf->sim__DOT____VdfgExtracted_hbbeaa1ab__0;
    vlSelf->sim__DOT__timer_value = vlSelf->__Vdly__sim__DOT__timer_value;
    vlSelf->sim__DOT__interface1_dat_w = 0U;
    vlSelf->sim__DOT____VdfgTmp_h48ee2550__0 = ((IData)(vlSelf->sim__DOT__ram_bus_ram_bus_cyc) 
                                                & ((IData)(vlSelf->sim__DOT__rhs_self4) 
                                                   & (IData)(vlSelf->sim__DOT__rhs_self5)));
    if (vlSelf->sim__DOT__state) {
        vlSelf->sim__DOT__next_state = 1U;
        vlSelf->sim__DOT__next_state = 0U;
    } else {
        vlSelf->sim__DOT__next_state = 0U;
        if (vlSelf->sim__DOT____VdfgExtracted_h34b3db20__0) {
            vlSelf->sim__DOT__next_state = 1U;
        }
    }
    vlSelf->sim__DOT__interface1_we = 0U;
    vlSelf->sim__DOT__interface1_adr = 0U;
    if ((1U & (~ (IData)(vlSelf->sim__DOT__state)))) {
        vlSelf->sim__DOT__interface1_dat_w = vlSelf->sim__DOT__basiclowerer_self;
        if (vlSelf->sim__DOT____VdfgExtracted_h34b3db20__0) {
            vlSelf->sim__DOT__interface1_we = ((IData)(vlSelf->sim__DOT__rhs_self5) 
                                               & (0U 
                                                  != (IData)(vlSelf->sim__DOT__rhs_self2)));
            vlSelf->sim__DOT__interface1_adr = (0x3fffU 
                                                & vlSelf->sim__DOT__rhs_self0);
        }
    }
}

VL_INLINE_OPT void Vsim___024root___nba_sequent__TOP__7(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->sim__DOT__interface0_dat_r = 0U;
    if (vlSelf->sim__DOT__state) {
        vlSelf->sim__DOT__interface0_dat_r = 0U;
        if ((1U & (~ (IData)(vlSelf->sim__DOT__csr_data_width)))) {
            vlSelf->sim__DOT__interface0_dat_r = (vlSelf->sim__DOT__csr_bankarray_interface0_bank_bus_dat_r 
                                                  | (vlSelf->sim__DOT__csr_bankarray_interface1_bank_bus_dat_r 
                                                     | (vlSelf->sim__DOT__csr_bankarray_interface2_bank_bus_dat_r 
                                                        | vlSelf->sim__DOT__csr_bankarray_sram_bus_dat_r)));
        }
    }
    vlSelf->sim__DOT__picorv32_trap = 0U;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_sh = 0U;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out = 0U;
    vlSelf->sim__DOT__picorv32__DOT__set_mem_do_rinst = 0U;
    vlSelf->sim__DOT__picorv32__DOT__set_mem_do_rdata = 0U;
    vlSelf->sim__DOT__picorv32__DOT__set_mem_do_wdata = 0U;
    vlSelf->sim__DOT__picorv32__DOT__next_irq_pending 
        = vlSelf->sim__DOT__picorv32__DOT__irq_pending;
    if ((0U != vlSelf->sim__DOT__picorv32__DOT__timer)) {
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__timer 
            = (vlSelf->sim__DOT__picorv32__DOT__timer 
               - (IData)(1U));
    }
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__decoder_trigger 
        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst) 
           & (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_done));
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__decoder_pseudo_trigger = 0U;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__do_waitirq = 0U;
    if (vlSelf->sim__DOT____Vcellinp__picorv32__resetn) {
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__count_cycle 
            = (1ULL + vlSelf->sim__DOT__picorv32__DOT__count_cycle);
        if (((((((((0x80U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state))) 
                | (8U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state))) 
               | (4U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state))) 
              | (2U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state))) 
             | (1U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state))) {
                vlSelf->sim__DOT__picorv32_trap = 1U;
            } else if ((0x40U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state))) {
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelf->sim__DOT__picorv32__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__do_waitirq))));
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_wordsize = 0U;
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lu = 0U;
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lh = 0U;
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lb = 0U;
                vlSelf->sim__DOT__picorv32__DOT__current_pc 
                    = vlSelf->sim__DOT__picorv32__DOT__reg_next_pc;
                if (vlSelf->sim__DOT__picorv32__DOT__latched_branch) {
                    vlSelf->sim__DOT__picorv32__DOT__current_pc 
                        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelf->sim__DOT__picorv32__DOT__latched_stalu)
                                               ? vlSelf->sim__DOT__picorv32__DOT__alu_out_q
                                               : vlSelf->sim__DOT__picorv32__DOT__reg_out))
                            : vlSelf->sim__DOT__picorv32__DOT__reg_next_pc);
                } else if ((1U & (~ ((IData)(vlSelf->sim__DOT__picorv32__DOT__latched_store) 
                                     & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__latched_branch)))))) {
                    if ((1U & (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_state))) {
                        vlSelf->sim__DOT__picorv32__DOT__current_pc = 0x10U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__irq_active = 1U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst = 1U;
                    } else if ((2U & (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_state))) {
                        vlSelf->sim__DOT__picorv32__DOT__next_irq_pending 
                            = (vlSelf->sim__DOT__picorv32__DOT__next_irq_pending 
                               & vlSelf->sim__DOT__picorv32__DOT__irq_mask);
                    }
                }
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_pc 
                    = vlSelf->sim__DOT__picorv32__DOT__current_pc;
                vlSelf->sim__DOT__picorv32__DOT__reg_next_pc 
                    = vlSelf->sim__DOT__picorv32__DOT__current_pc;
                vlSelf->sim__DOT__picorv32__DOT__latched_stalu = 0U;
                vlSelf->sim__DOT__picorv32__DOT__latched_store = 0U;
                vlSelf->sim__DOT__picorv32__DOT__latched_branch = 0U;
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_rd 
                    = vlSelf->sim__DOT__picorv32__DOT__decoded_rd;
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_compr 
                    = vlSelf->sim__DOT__picorv32__DOT__compressed_instr;
                if ((((((IData)(vlSelf->sim__DOT__picorv32__DOT__decoder_trigger) 
                        & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_active))) 
                       & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_delay))) 
                      & (0U != (vlSelf->sim__DOT__picorv32__DOT__irq_pending 
                                & (~ vlSelf->sim__DOT__picorv32__DOT__irq_mask)))) 
                     | (0U != (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_state)))) {
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__irq_state 
                        = ((0U == (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_state))
                            ? 1U : ((1U == (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_state))
                                     ? 2U : 0U));
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_compr 
                        = vlSelf->sim__DOT__picorv32__DOT__latched_compr;
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_rd 
                        = (0x3fU & (0x20U | (1U & (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_state))));
                } else if ((((IData)(vlSelf->sim__DOT__picorv32__DOT__decoder_trigger) 
                             | (IData)(vlSelf->sim__DOT__picorv32__DOT__do_waitirq)) 
                            & (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_waitirq))) {
                    if ((0U != vlSelf->sim__DOT__picorv32__DOT__irq_pending)) {
                        vlSelf->sim__DOT__picorv32__DOT__latched_store = 1U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                            = vlSelf->sim__DOT__picorv32__DOT__irq_pending;
                        vlSelf->sim__DOT__picorv32__DOT__reg_next_pc 
                            = (vlSelf->sim__DOT__picorv32__DOT__current_pc 
                               + ((IData)(vlSelf->sim__DOT__picorv32__DOT__compressed_instr)
                                   ? 2U : 4U));
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst = 1U;
                    } else {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__do_waitirq = 1U;
                    }
                } else if (vlSelf->sim__DOT__picorv32__DOT__decoder_trigger) {
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__count_instr 
                        = (1ULL + vlSelf->sim__DOT__picorv32__DOT__count_instr);
                    vlSelf->sim__DOT__picorv32__DOT__irq_delay 
                        = vlSelf->sim__DOT__picorv32__DOT__irq_active;
                    vlSelf->sim__DOT__picorv32__DOT__reg_next_pc 
                        = (vlSelf->sim__DOT__picorv32__DOT__current_pc 
                           + ((IData)(vlSelf->sim__DOT__picorv32__DOT__compressed_instr)
                               ? 2U : 4U));
                    if (vlSelf->sim__DOT__picorv32__DOT__instr_jal) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst = 1U;
                        vlSelf->sim__DOT__picorv32__DOT__reg_next_pc 
                            = (vlSelf->sim__DOT__picorv32__DOT__current_pc 
                               + vlSelf->sim__DOT__picorv32__DOT__decoded_imm_j);
                        vlSelf->sim__DOT__picorv32__DOT__latched_branch = 1U;
                    } else {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst = 0U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_retirq))));
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state))) {
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 = 0U;
                vlSelf->sim__DOT__picorv32__DOT__reg_op2 = 0U;
                if (((((((((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_trap) 
                           | (IData)(vlSelf->sim__DOT__picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                          | (IData)(vlSelf->sim__DOT__picorv32__DOT__is_lui_auipc_jal)) 
                         | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_getq)) 
                        | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_setq)) 
                       | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_retirq)) 
                      | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_maskirq)) 
                     | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_timer))) {
                    if (vlSelf->sim__DOT__picorv32__DOT__instr_trap) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 
                            = vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs1;
                        vlSelf->__Vdly__sim__DOT__picorv325 = 1U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_sh 
                            = (0x1fU & vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs2);
                        vlSelf->sim__DOT__picorv32__DOT__reg_op2 
                            = vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs2;
                        if (vlSelf->sim__DOT__picorv32__DOT__pcpi_int_ready) {
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst = 1U;
                            vlSelf->__Vdly__sim__DOT__picorv325 = 0U;
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                                = vlSelf->sim__DOT__picorv32__DOT__pcpi_int_rd;
                            vlSelf->sim__DOT__picorv32__DOT__latched_store 
                                = vlSelf->sim__DOT__picorv32__DOT__pcpi_int_wr;
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x40U;
                        } else if (((IData)(vlSelf->sim__DOT__picorv32__DOT__pcpi_timeout) 
                                    | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_ecall_ebreak))) {
                            vlSelf->__Vdly__sim__DOT__picorv325 = 0U;
                            if ((1U & ((~ (vlSelf->sim__DOT__picorv32__DOT__irq_mask 
                                           >> 1U)) 
                                       & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_active))))) {
                                vlSelf->sim__DOT__picorv32__DOT__next_irq_pending 
                                    = (2U | vlSelf->sim__DOT__picorv32__DOT__next_irq_pending);
                                vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x40U;
                            } else {
                                vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x80U;
                            }
                        }
                    } else if (vlSelf->sim__DOT__picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelf->sim__DOT__picorv32__DOT__instr_rdcycle) {
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                                = (IData)(vlSelf->sim__DOT__picorv32__DOT__count_cycle);
                        } else if (vlSelf->sim__DOT__picorv32__DOT__instr_rdcycleh) {
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                                = (IData)((vlSelf->sim__DOT__picorv32__DOT__count_cycle 
                                           >> 0x20U));
                        } else if (vlSelf->sim__DOT__picorv32__DOT__instr_rdinstr) {
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                                = (IData)(vlSelf->sim__DOT__picorv32__DOT__count_instr);
                        } else if (vlSelf->sim__DOT__picorv32__DOT__instr_rdinstrh) {
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                                = (IData)((vlSelf->sim__DOT__picorv32__DOT__count_instr 
                                           >> 0x20U));
                        }
                        vlSelf->sim__DOT__picorv32__DOT__latched_store = 1U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x40U;
                    } else if (vlSelf->sim__DOT__picorv32__DOT__is_lui_auipc_jal) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 
                            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lui)
                                ? 0U : vlSelf->sim__DOT__picorv32__DOT__reg_pc);
                        vlSelf->sim__DOT__picorv32__DOT__reg_op2 
                            = vlSelf->sim__DOT__picorv32__DOT__decoded_imm;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst 
                            = vlSelf->sim__DOT__picorv32__DOT__mem_do_prefetch;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 8U;
                    } else if (vlSelf->sim__DOT__picorv32__DOT__instr_getq) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                            = vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs1;
                        vlSelf->sim__DOT__picorv32__DOT__latched_store = 1U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x40U;
                    } else if (vlSelf->sim__DOT__picorv32__DOT__instr_setq) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_rd 
                            = (0x20U | (IData)(vlSelf->sim__DOT__picorv32__DOT__latched_rd));
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                            = vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs1;
                        vlSelf->sim__DOT__picorv32__DOT__latched_store = 1U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x40U;
                    } else if (vlSelf->sim__DOT__picorv32__DOT__instr_retirq) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__irq_active = 0U;
                        vlSelf->sim__DOT__picorv32__DOT__latched_branch = 1U;
                        vlSelf->sim__DOT__picorv32__DOT__latched_store = 1U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                            = (0xfffffffeU & vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs1);
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x40U;
                    } else if (vlSelf->sim__DOT__picorv32__DOT__instr_maskirq) {
                        vlSelf->sim__DOT__picorv32__DOT__latched_store = 1U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                            = vlSelf->sim__DOT__picorv32__DOT__irq_mask;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x40U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__irq_mask 
                            = vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs1;
                    } else {
                        vlSelf->sim__DOT__picorv32__DOT__latched_store = 1U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                            = vlSelf->sim__DOT__picorv32__DOT__timer;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x40U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__timer 
                            = vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs1;
                    }
                } else if (((IData)(vlSelf->sim__DOT__picorv32__DOT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_trap)))) {
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 
                        = vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs1;
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 1U;
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst = 1U;
                } else if (vlSelf->sim__DOT__picorv32__DOT__is_slli_srli_srai) {
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 
                        = vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs1;
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_sh 
                        = vlSelf->sim__DOT__picorv32__DOT__decoded_rs2;
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 4U;
                } else if (vlSelf->sim__DOT__picorv32__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 
                        = vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs1;
                    vlSelf->sim__DOT__picorv32__DOT__reg_op2 
                        = vlSelf->sim__DOT__picorv32__DOT__decoded_imm;
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst 
                        = vlSelf->sim__DOT__picorv32__DOT__mem_do_prefetch;
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 8U;
                } else {
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 
                        = vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs1;
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_sh 
                        = (0x1fU & vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs2);
                    vlSelf->sim__DOT__picorv32__DOT__reg_op2 
                        = vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs2;
                    if (vlSelf->sim__DOT__picorv32__DOT__is_sb_sh_sw) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 2U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst = 1U;
                    } else if (vlSelf->sim__DOT__picorv32__DOT__is_sll_srl_sra) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 4U;
                    } else {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst 
                            = vlSelf->sim__DOT__picorv32__DOT__mem_do_prefetch;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state))) {
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_sh 
                    = (0x1fU & vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs2);
                vlSelf->sim__DOT__picorv32__DOT__reg_op2 
                    = vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs2;
                if (vlSelf->sim__DOT__picorv32__DOT__instr_trap) {
                    vlSelf->__Vdly__sim__DOT__picorv325 = 1U;
                    if (vlSelf->sim__DOT__picorv32__DOT__pcpi_int_ready) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst = 1U;
                        vlSelf->__Vdly__sim__DOT__picorv325 = 0U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                            = vlSelf->sim__DOT__picorv32__DOT__pcpi_int_rd;
                        vlSelf->sim__DOT__picorv32__DOT__latched_store 
                            = vlSelf->sim__DOT__picorv32__DOT__pcpi_int_wr;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x40U;
                    } else if (((IData)(vlSelf->sim__DOT__picorv32__DOT__pcpi_timeout) 
                                | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_ecall_ebreak))) {
                        vlSelf->__Vdly__sim__DOT__picorv325 = 0U;
                        if ((1U & ((~ (vlSelf->sim__DOT__picorv32__DOT__irq_mask 
                                       >> 1U)) & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_active))))) {
                            vlSelf->sim__DOT__picorv32__DOT__next_irq_pending 
                                = (2U | vlSelf->sim__DOT__picorv32__DOT__next_irq_pending);
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x40U;
                        } else {
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x80U;
                        }
                    }
                } else if (vlSelf->sim__DOT__picorv32__DOT__is_sb_sh_sw) {
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 2U;
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst = 1U;
                } else if (vlSelf->sim__DOT__picorv32__DOT__is_sll_srl_sra) {
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 4U;
                } else {
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst 
                        = vlSelf->sim__DOT__picorv32__DOT__mem_do_prefetch;
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state))) {
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                    = (vlSelf->sim__DOT__picorv32__DOT__reg_pc 
                       + vlSelf->sim__DOT__picorv32__DOT__decoded_imm);
                if (vlSelf->sim__DOT__picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_rd = 0U;
                    vlSelf->sim__DOT__picorv32__DOT__latched_store 
                        = vlSelf->sim__DOT__picorv32__DOT__alu_out_0;
                    vlSelf->sim__DOT__picorv32__DOT__latched_branch 
                        = vlSelf->sim__DOT__picorv32__DOT__alu_out_0;
                    if (vlSelf->sim__DOT__picorv32__DOT__mem_done) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelf->sim__DOT__picorv32__DOT__alu_out_0) {
                        vlSelf->sim__DOT__picorv32__DOT__set_mem_do_rinst = 1U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelf->sim__DOT__picorv32__DOT__latched_branch 
                        = vlSelf->sim__DOT__picorv32__DOT__instr_jalr;
                    vlSelf->sim__DOT__picorv32__DOT__latched_store = 1U;
                    vlSelf->sim__DOT__picorv32__DOT__latched_stalu = 1U;
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state))) {
                vlSelf->sim__DOT__picorv32__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelf->sim__DOT__picorv32__DOT__reg_sh))) {
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                        = vlSelf->sim__DOT__picorv32__DOT__reg_op1;
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst 
                        = vlSelf->sim__DOT__picorv32__DOT__mem_do_prefetch;
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelf->sim__DOT__picorv32__DOT__reg_sh))) {
                    if (((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_slli) 
                         | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sll))) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelf->sim__DOT__picorv32__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_srli) 
                                | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_srl))) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelf->sim__DOT__picorv32__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_srai) 
                                | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sra))) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelf->sim__DOT__picorv32__DOT__reg_op1, 4U);
                    }
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_sh 
                        = (0x1fU & ((IData)(vlSelf->sim__DOT__picorv32__DOT__reg_sh) 
                                    - (IData)(4U)));
                } else {
                    if (((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_slli) 
                         | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sll))) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelf->sim__DOT__picorv32__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_srli) 
                                | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_srl))) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelf->sim__DOT__picorv32__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_srai) 
                                | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sra))) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelf->sim__DOT__picorv32__DOT__reg_op1, 1U);
                    }
                    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_sh 
                        = (0x1fU & ((IData)(vlSelf->sim__DOT__picorv32__DOT__reg_sh) 
                                    - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_wdata)))) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 
                            = (vlSelf->sim__DOT__picorv32__DOT__reg_op1 
                               + vlSelf->sim__DOT__picorv32__DOT__decoded_imm);
                        vlSelf->sim__DOT__picorv32__DOT__set_mem_do_wdata = 1U;
                        if (vlSelf->sim__DOT__picorv32__DOT__instr_sb) {
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_wordsize = 2U;
                        } else if (vlSelf->sim__DOT__picorv32__DOT__instr_sh) {
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_wordsize = 1U;
                        } else if (vlSelf->sim__DOT__picorv32__DOT__instr_sw) {
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_done))) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x40U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__decoder_trigger = 1U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelf->sim__DOT__picorv32__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_done))) {
                        if (vlSelf->sim__DOT__picorv32__DOT__latched_is_lu) {
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                                = vlSelf->sim__DOT__picorv32__DOT__mem_rdata_word;
                        } else if (vlSelf->sim__DOT__picorv32__DOT__latched_is_lh) {
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_word));
                        } else if (vlSelf->sim__DOT__picorv32__DOT__latched_is_lb) {
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0xffU 
                                                 & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_word));
                        }
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__decoder_trigger = 1U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__decoder_pseudo_trigger = 1U;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rdata)))) {
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 
                            = (vlSelf->sim__DOT__picorv32__DOT__reg_op1 
                               + vlSelf->sim__DOT__picorv32__DOT__decoded_imm);
                        vlSelf->sim__DOT__picorv32__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lb) 
                             | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lbu))) {
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lh) 
                                    | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lhu))) {
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_wordsize = 1U;
                        } else if (vlSelf->sim__DOT__picorv32__DOT__instr_lw) {
                            vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_wordsize = 0U;
                        }
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lu 
                            = vlSelf->sim__DOT__picorv32__DOT__is_lbu_lhu_lw;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lh 
                            = vlSelf->sim__DOT__picorv32__DOT__instr_lh;
                        vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lb 
                            = vlSelf->sim__DOT__picorv32__DOT__instr_lb;
                    }
                }
            }
        }
    } else {
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__count_cycle = 0ULL;
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__count_instr = 0ULL;
        vlSelf->sim__DOT__picorv32__DOT__next_irq_pending = 0U;
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_pc = 0U;
        vlSelf->sim__DOT__picorv32__DOT__reg_next_pc = 0U;
        vlSelf->sim__DOT__picorv32__DOT__latched_store = 0U;
        vlSelf->sim__DOT__picorv32__DOT__latched_stalu = 0U;
        vlSelf->sim__DOT__picorv32__DOT__latched_branch = 0U;
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lu = 0U;
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lh = 0U;
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lb = 0U;
        vlSelf->__Vdly__sim__DOT__picorv325 = 0U;
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__irq_active = 0U;
        vlSelf->sim__DOT__picorv32__DOT__irq_delay = 0U;
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__irq_mask = 0xffffffffU;
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__irq_state = 0U;
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__timer = 0U;
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x40U;
    }
}

VL_INLINE_OPT void Vsim___024root___nba_sequent__TOP__8(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->sim__DOT__picorv32__DOT__next_irq_pending 
        = (vlSelf->sim__DOT__picorv32__DOT__next_irq_pending 
           | vlSelf->sim__DOT__picorv32_interrupt);
    if ((0U != vlSelf->sim__DOT__picorv32__DOT__timer)) {
        if ((0U == (vlSelf->sim__DOT__picorv32__DOT__timer 
                    - (IData)(1U)))) {
            vlSelf->sim__DOT__picorv32__DOT__next_irq_pending 
                = (1U | vlSelf->sim__DOT__picorv32__DOT__next_irq_pending);
        }
    }
    if (((IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn) 
         & ((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rdata) 
            | (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_wordsize)) 
             & (0U != (3U & vlSelf->sim__DOT__picorv32__DOT__reg_op1)))) {
            if ((1U & ((~ (vlSelf->sim__DOT__picorv32__DOT__irq_mask 
                           >> 2U)) & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_active))))) {
                vlSelf->sim__DOT__picorv32__DOT__next_irq_pending 
                    = (4U | vlSelf->sim__DOT__picorv32__DOT__next_irq_pending);
            } else {
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x80U;
            }
        }
        if (((1U == (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_wordsize)) 
             & vlSelf->sim__DOT__picorv32__DOT__reg_op1)) {
            if ((1U & ((~ (vlSelf->sim__DOT__picorv32__DOT__irq_mask 
                           >> 2U)) & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_active))))) {
                vlSelf->sim__DOT__picorv32__DOT__next_irq_pending 
                    = (4U | vlSelf->sim__DOT__picorv32__DOT__next_irq_pending);
            } else {
                vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x80U;
            }
        }
    }
    if ((((IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn) 
          & (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst)) 
         & (0U != (3U & vlSelf->sim__DOT__picorv32__DOT__reg_pc)))) {
        if ((1U & ((~ (vlSelf->sim__DOT__picorv32__DOT__irq_mask 
                       >> 2U)) & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_active))))) {
            vlSelf->sim__DOT__picorv32__DOT__next_irq_pending 
                = (4U | vlSelf->sim__DOT__picorv32__DOT__next_irq_pending);
        } else {
            vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = 0x80U;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn)) 
               | (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_done)))) {
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_prefetch = 0U;
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst = 0U;
        vlSelf->sim__DOT__picorv32__DOT__mem_do_rdata = 0U;
        vlSelf->sim__DOT__picorv32__DOT__mem_do_wdata = 0U;
    }
    if (vlSelf->sim__DOT__picorv32__DOT__set_mem_do_rinst) {
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst = 1U;
    }
    if (vlSelf->sim__DOT__picorv32__DOT__set_mem_do_rdata) {
        vlSelf->sim__DOT__picorv32__DOT__mem_do_rdata = 1U;
    }
    if (vlSelf->sim__DOT__picorv32__DOT__set_mem_do_wdata) {
        vlSelf->sim__DOT__picorv32__DOT__mem_do_wdata = 1U;
    }
    vlSelf->sim__DOT__picorv32__DOT__irq_pending = vlSelf->sim__DOT__picorv32__DOT__next_irq_pending;
    vlSelf->sim__DOT__picorv32__DOT__current_pc = 0U;
    vlSelf->sim__DOT__int_rst = 0U;
    vlSelf->sim__DOT__ram_we = ((0xfffffff8U & (((IData)(vlSelf->sim__DOT____VdfgTmp_h48ee2550__0) 
                                                 << 3U) 
                                                & (IData)(vlSelf->sim__DOT__rhs_self2))) 
                                | ((0xfffffffcU & (
                                                   ((IData)(vlSelf->sim__DOT____VdfgTmp_h48ee2550__0) 
                                                    << 2U) 
                                                   & (IData)(vlSelf->sim__DOT__rhs_self2))) 
                                   | (3U & ((- (IData)((IData)(vlSelf->sim__DOT____VdfgTmp_h48ee2550__0))) 
                                            & (IData)(vlSelf->sim__DOT__rhs_self2)))));
    vlSelf->sim__DOT____VdfgExtracted_h3483df38__0 
        = (IData)((0U == (IData)(vlSelf->sim__DOT__interface1_adr)));
    vlSelf->sim__DOT____VdfgExtracted_h347da0bd__0 
        = (IData)((1U == (IData)(vlSelf->sim__DOT__interface1_adr)));
    vlSelf->sim__DOT____VdfgExtracted_h8553e3f3__0 
        = (IData)((0x400U == (IData)(vlSelf->sim__DOT__interface1_adr)));
    vlSelf->sim__DOT____VdfgExtracted_h853cba48__0 
        = (IData)((0x401U == (IData)(vlSelf->sim__DOT__interface1_adr)));
    vlSelf->sim__DOT____VdfgExtracted_h853caf59__0 
        = (IData)((0x402U == (IData)(vlSelf->sim__DOT__interface1_adr)));
    vlSelf->sim__DOT____VdfgExtracted_h853d24a6__0 
        = (IData)((0x403U == (IData)(vlSelf->sim__DOT__interface1_adr)));
    vlSelf->sim__DOT____VdfgExtracted_h859e558e__0 
        = (IData)((0x406U == (IData)(vlSelf->sim__DOT__interface1_adr)));
    vlSelf->sim__DOT____VdfgExtracted_h853d4c21__0 
        = (IData)((0x407U == (IData)(vlSelf->sim__DOT__interface1_adr)));
    vlSelf->sim__DOT____VdfgExtracted_hbece7cd5__0 
        = (IData)((0x600U == (IData)(vlSelf->sim__DOT__interface1_adr)));
    vlSelf->sim__DOT____VdfgExtracted_hbecb2757__0 
        = (IData)((0x604U == (IData)(vlSelf->sim__DOT__interface1_adr)));
    vlSelf->sim__DOT____VdfgExtracted_hbec47a0f__0 
        = (IData)((0x605U == (IData)(vlSelf->sim__DOT__interface1_adr)));
    vlSelf->sim__DOT__picorv32__DOT__reg_sh = vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_sh;
    vlSelf->sim__DOT__picorv32__DOT__count_cycle = vlSelf->__Vdly__sim__DOT__picorv32__DOT__count_cycle;
    vlSelf->sim__DOT__picorv32__DOT__timer = vlSelf->__Vdly__sim__DOT__picorv32__DOT__timer;
    vlSelf->sim__DOT__picorv32__DOT__do_waitirq = vlSelf->__Vdly__sim__DOT__picorv32__DOT__do_waitirq;
    vlSelf->sim__DOT__picorv32__DOT__latched_is_lu 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lu;
    vlSelf->sim__DOT__picorv32__DOT__latched_is_lh 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lh;
    vlSelf->sim__DOT__picorv32__DOT__latched_is_lb 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lb;
    vlSelf->sim__DOT__picorv32__DOT__count_instr = vlSelf->__Vdly__sim__DOT__picorv32__DOT__count_instr;
    vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs1 = 
        ((0U != (IData)(vlSelf->sim__DOT__picorv32__DOT__decoded_rs1))
          ? ((0x23U >= (IData)(vlSelf->sim__DOT__picorv32__DOT__decoded_rs1))
              ? vlSelf->sim__DOT__picorv32__DOT__cpuregs
             [vlSelf->sim__DOT__picorv32__DOT__decoded_rs1]
              : 0U) : 0U);
    vlSelf->sim__DOT__picorv32__DOT__pcpi_int_ready 
        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_ready) 
           | (IData)(vlSelf->sim__DOT__picorv32__DOT__pcpi_div_ready));
    vlSelf->sim__DOT__picorv32__DOT__latched_rd = vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_rd;
    vlSelf->sim__DOT__picorv32__DOT__pcpi_int_rd = 0U;
    vlSelf->sim__DOT__picorv32__DOT__pcpi_int_wr = 0U;
    if (vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_ready) {
        vlSelf->sim__DOT__picorv32__DOT__pcpi_int_rd 
            = vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_rd;
        vlSelf->sim__DOT__picorv32__DOT__pcpi_int_wr 
            = vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_wr;
    } else if (vlSelf->sim__DOT__picorv32__DOT__pcpi_div_ready) {
        vlSelf->sim__DOT__picorv32__DOT__pcpi_int_rd 
            = vlSelf->sim__DOT__picorv32__DOT__pcpi_div_rd;
        vlSelf->sim__DOT__picorv32__DOT__pcpi_int_wr 
            = vlSelf->sim__DOT__picorv32__DOT__pcpi_div_wr;
    }
    vlSelf->sim__DOT__picorv32_interrupt = 0U;
    vlSelf->sim__DOT__picorv32_interrupt = ((0xffffffe7U 
                                             & vlSelf->sim__DOT__picorv32_interrupt) 
                                            | ((((IData)(vlSelf->sim__DOT__timer_enable_storage) 
                                                 & (IData)(vlSelf->sim__DOT__timer_zero_pending)) 
                                                << 4U) 
                                               | (8U 
                                                  & ((((IData)(vlSelf->sim__DOT__uart_core_pending_status) 
                                                       & (IData)(vlSelf->sim__DOT__uart_core_enable_storage)) 
                                                      << 3U) 
                                                     | (0xfffffff8U 
                                                        & (((IData)(vlSelf->sim__DOT__uart_core_pending_status) 
                                                            & (IData)(vlSelf->sim__DOT__uart_core_enable_storage)) 
                                                           << 2U))))));
    vlSelf->sim__DOT__picorv32__DOT__irq_active = vlSelf->__Vdly__sim__DOT__picorv32__DOT__irq_active;
    vlSelf->sim__DOT__picorv32__DOT__mem_do_prefetch 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_prefetch;
    vlSelf->sim__DOT__picorv32__DOT__mem_wordsize = vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_wordsize;
    vlSelf->sim__DOT__picorv32__DOT__reg_pc = vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_pc;
    vlSelf->sim__DOT__picorv32__DOT__latched_compr 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_compr;
    vlSelf->sim__DOT__picorv32__DOT__reg_out = vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out;
    vlSelf->sim__DOT__picorv32__DOT__irq_state = vlSelf->__Vdly__sim__DOT__picorv32__DOT__irq_state;
    vlSelf->sim__DOT__picorv32__DOT__irq_mask = vlSelf->__Vdly__sim__DOT__picorv32__DOT__irq_mask;
    vlSelf->sim__DOT__picorv32__DOT__cpu_state = vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state;
}

VL_INLINE_OPT void Vsim___024root___nba_sequent__TOP__9(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->sim__DOT__picorv32__DOT__reg_op1 = vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1;
    vlSelf->sim__DOT__csr_bankarray_csrbank0_reset_re = 0U;
    if (vlSelf->sim__DOT____VdfgExtracted_h3483df38__0) {
        vlSelf->sim__DOT__csr_bankarray_csrbank0_reset_re 
            = vlSelf->sim__DOT__interface1_we;
    }
    vlSelf->sim__DOT__csr_bankarray_csrbank0_scratch_re = 0U;
    if (vlSelf->sim__DOT____VdfgExtracted_h347da0bd__0) {
        vlSelf->sim__DOT__csr_bankarray_csrbank0_scratch_re 
            = vlSelf->sim__DOT__interface1_we;
    }
    vlSelf->sim__DOT__csr_bankarray_csrbank1_load_re = 0U;
    if (vlSelf->sim__DOT____VdfgExtracted_h8553e3f3__0) {
        vlSelf->sim__DOT__csr_bankarray_csrbank1_load_re 
            = vlSelf->sim__DOT__interface1_we;
    }
    vlSelf->sim__DOT__csr_bankarray_csrbank1_reload_re = 0U;
    if (vlSelf->sim__DOT____VdfgExtracted_h853cba48__0) {
        vlSelf->sim__DOT__csr_bankarray_csrbank1_reload_re 
            = vlSelf->sim__DOT__interface1_we;
    }
    vlSelf->sim__DOT__csr_bankarray_csrbank1_en_re = 0U;
    if (vlSelf->sim__DOT____VdfgExtracted_h853caf59__0) {
        vlSelf->sim__DOT__csr_bankarray_csrbank1_en_re 
            = vlSelf->sim__DOT__interface1_we;
    }
    vlSelf->sim__DOT__csr_bankarray_csrbank1_update_value_re = 0U;
    if (vlSelf->sim__DOT____VdfgExtracted_h853d24a6__0) {
        vlSelf->sim__DOT__csr_bankarray_csrbank1_update_value_re 
            = vlSelf->sim__DOT__interface1_we;
    }
    vlSelf->sim__DOT__csr_bankarray_csrbank1_ev_pending_re = 0U;
    if (vlSelf->sim__DOT____VdfgExtracted_h859e558e__0) {
        vlSelf->sim__DOT__csr_bankarray_csrbank1_ev_pending_re 
            = vlSelf->sim__DOT__interface1_we;
    }
    vlSelf->sim__DOT__csr_bankarray_csrbank1_ev_enable_re = 0U;
    if (vlSelf->sim__DOT____VdfgExtracted_h853d4c21__0) {
        vlSelf->sim__DOT__csr_bankarray_csrbank1_ev_enable_re 
            = vlSelf->sim__DOT__interface1_we;
    }
    vlSelf->sim__DOT__uart_core_rxtx_re = 0U;
    if (vlSelf->sim__DOT____VdfgExtracted_hbece7cd5__0) {
        vlSelf->sim__DOT__uart_core_rxtx_re = vlSelf->sim__DOT__interface1_we;
    }
    vlSelf->sim__DOT__csr_bankarray_csrbank2_ev_pending_re = 0U;
    if (vlSelf->sim__DOT____VdfgExtracted_hbecb2757__0) {
        vlSelf->sim__DOT__csr_bankarray_csrbank2_ev_pending_re 
            = vlSelf->sim__DOT__interface1_we;
    }
    vlSelf->sim__DOT__csr_bankarray_csrbank2_ev_enable_re = 0U;
    if (vlSelf->sim__DOT____VdfgExtracted_hbec47a0f__0) {
        vlSelf->sim__DOT__csr_bankarray_csrbank2_ev_enable_re 
            = vlSelf->sim__DOT__interface1_we;
    }
    vlSelf->sim__DOT__picorv32__DOT__next_pc = (((IData)(vlSelf->sim__DOT__picorv32__DOT__latched_branch) 
                                                 & (IData)(vlSelf->sim__DOT__picorv32__DOT__latched_store))
                                                 ? 
                                                (0xfffffffeU 
                                                 & vlSelf->sim__DOT__picorv32__DOT__reg_out)
                                                 : vlSelf->sim__DOT__picorv32__DOT__reg_next_pc);
    vlSelf->sim__DOT__picorv32__DOT__cpuregs_write = 0U;
    if ((0x40U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state))) {
        if (vlSelf->sim__DOT__picorv32__DOT__latched_branch) {
            vlSelf->sim__DOT__picorv32__DOT__cpuregs_write = 1U;
        } else if (((IData)(vlSelf->sim__DOT__picorv32__DOT__latched_store) 
                    & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__latched_branch)))) {
            vlSelf->sim__DOT__picorv32__DOT__cpuregs_write = 1U;
        } else if ((1U & (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_state))) {
            vlSelf->sim__DOT__picorv32__DOT__cpuregs_write = 1U;
        } else if ((2U & (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_state))) {
            vlSelf->sim__DOT__picorv32__DOT__cpuregs_write = 1U;
        }
    }
    vlSelf->sim__DOT__picorv32__DOT__alu_out_q = vlSelf->sim__DOT__picorv32__DOT__alu_out;
    if (((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst) 
         & (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_done))) {
        vlSelf->sim__DOT__picorv32__DOT__compressed_instr = 0U;
        vlSelf->sim__DOT__picorv32__DOT__decoded_rd 
            = (0x1fU & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched 
                        >> 7U));
        vlSelf->sim__DOT__picorv32__DOT__decoded_rs2 
            = (0x1fU & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched 
                        >> 0x14U));
        vlSelf->sim__DOT__picorv32__DOT__instr_waitirq 
            = (IData)((0x800000bU == (0xfe00007fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched)));
        vlSelf->sim__DOT__picorv32__DOT__instr_retirq 
            = (IData)((0x400000bU == (0xfe00007fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched)));
    }
    if ((0U == (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_wordsize))) {
        vlSelf->sim__DOT__picorv323 = vlSelf->sim__DOT__picorv32__DOT__reg_op2;
        vlSelf->sim__DOT__picorv324 = 0xfU;
    } else if ((1U == (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_wordsize))) {
        vlSelf->sim__DOT__picorv323 = ((vlSelf->sim__DOT__picorv32__DOT__reg_op2 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->sim__DOT__picorv32__DOT__reg_op2));
        vlSelf->sim__DOT__picorv324 = ((2U & vlSelf->sim__DOT__picorv32__DOT__reg_op1)
                                        ? 0xcU : 3U);
    } else if ((2U == (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_wordsize))) {
        vlSelf->sim__DOT__picorv323 = ((vlSelf->sim__DOT__picorv32__DOT__reg_op2 
                                        << 0x18U) | 
                                       ((0xff0000U 
                                         & (vlSelf->sim__DOT__picorv32__DOT__reg_op2 
                                            << 0x10U)) 
                                        | ((0xff00U 
                                            & (vlSelf->sim__DOT__picorv32__DOT__reg_op2 
                                               << 8U)) 
                                           | (0xffU 
                                              & vlSelf->sim__DOT__picorv32__DOT__reg_op2))));
        vlSelf->sim__DOT__picorv324 = (0xfU & ((IData)(1U) 
                                               << (3U 
                                                   & vlSelf->sim__DOT__picorv32__DOT__reg_op1)));
    }
    vlSelf->sim__DOT__picorv32__DOT__alu_eq = (vlSelf->sim__DOT__picorv32__DOT__reg_op1 
                                               == vlSelf->sim__DOT__picorv32__DOT__reg_op2);
    vlSelf->sim__DOT__picorv32__DOT__alu_lts = VL_LTS_III(32, vlSelf->sim__DOT__picorv32__DOT__reg_op1, vlSelf->sim__DOT__picorv32__DOT__reg_op2);
    vlSelf->sim__DOT__picorv32__DOT__alu_ltu = (vlSelf->sim__DOT__picorv32__DOT__reg_op1 
                                                < vlSelf->sim__DOT__picorv32__DOT__reg_op2);
    if (((IData)(vlSelf->sim__DOT__picorv32__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__decoder_pseudo_trigger)))) {
        vlSelf->sim__DOT__picorv32__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x7fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)) 
                & (~ (IData)((0U != (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                     >> 0x15U))))) 
               & (~ (IData)((0U != (0x1fffU & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                               >> 7U))))));
        vlSelf->sim__DOT__picorv32__DOT__instr_getq 
            = (IData)((0xbU == (0xfe00007fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_setq 
            = (IData)((0x200000bU == (0xfe00007fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_maskirq 
            = (IData)((0x600000bU == (0xfe00007fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_timer 
            = (IData)((0xa00000bU == (0xfe00007fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_rdcycle 
            = ((IData)((0xc0002073U == (0xfffff07fU 
                                        & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q))) 
               | (IData)((0xc0102073U == (0xfffff07fU 
                                          & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q))));
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim___024root.h"

VL_ATTR_COLD void Vsim___024root___eval_static__TOP(Vsim___024root* vlSelf);

VL_ATTR_COLD void Vsim___024root___eval_static(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_static\n"); );
    // Body
    Vsim___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vsim___024root___eval_static__TOP(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_static__TOP\n"); );
    // Init
    CData/*3:0*/ sim__DOT__picorv32_idbus_sel;
    sim__DOT__picorv32_idbus_sel = 0;
    CData/*0:0*/ sim__DOT__picorv32_idbus_we;
    sim__DOT__picorv32_idbus_we = 0;
    // Body
    vlSelf->sim__DOT__basiclowerer_self = 0U;
    vlSelf->sim__DOT__bus_errors = 0U;
    vlSelf->sim__DOT__count = 0xf4240U;
    vlSelf->sim__DOT__csr_bankarray_csrbank0_reset_re = 0U;
    vlSelf->sim__DOT__csr_bankarray_csrbank0_scratch_re = 0U;
    vlSelf->sim__DOT__csr_bankarray_csrbank1_en_re = 0U;
    vlSelf->sim__DOT__csr_bankarray_csrbank1_ev_enable_re = 0U;
    vlSelf->sim__DOT__csr_bankarray_csrbank1_ev_pending_re = 0U;
    vlSelf->sim__DOT__csr_bankarray_csrbank1_load_re = 0U;
    vlSelf->sim__DOT__csr_bankarray_csrbank1_reload_re = 0U;
    vlSelf->sim__DOT__csr_bankarray_csrbank1_update_value_re = 0U;
    vlSelf->sim__DOT__csr_bankarray_csrbank2_ev_enable_re = 0U;
    vlSelf->sim__DOT__csr_bankarray_csrbank2_ev_pending_re = 0U;
    vlSelf->sim__DOT__csr_bankarray_interface0_bank_bus_dat_r = 0U;
    vlSelf->sim__DOT__csr_bankarray_interface1_bank_bus_dat_r = 0U;
    vlSelf->sim__DOT__csr_bankarray_interface2_bank_bus_dat_r = 0U;
    vlSelf->sim__DOT__csr_bankarray_sel_r = 0U;
    vlSelf->sim__DOT__csr_bankarray_sram_bus_dat_r = 0U;
    vlSelf->sim__DOT__csr_data_width = 0U;
    vlSelf->sim__DOT__error = 0U;
    vlSelf->sim__DOT__int_rst = 1U;
    vlSelf->sim__DOT__interface0_ack = 0U;
    vlSelf->sim__DOT__interface0_dat_r = 0U;
    vlSelf->sim__DOT__interface1_adr = 0U;
    vlSelf->sim__DOT__interface1_dat_w = 0U;
    vlSelf->sim__DOT__interface1_we = 0U;
    vlSelf->sim__DOT__next_state = 0U;
    sim__DOT__picorv32_idbus_sel = 0U;
    sim__DOT__picorv32_idbus_we = 0U;
    vlSelf->sim__DOT__picorv32_interrupt = 0U;
    vlSelf->sim__DOT__ram_bus_ram_bus_ack = 0U;
    vlSelf->sim__DOT__ram_we = 0U;
    vlSelf->sim__DOT__reset_storage = 0U;
    vlSelf->sim__DOT__reset_wr_stb = 0U;
    vlSelf->sim__DOT__rhs_self0 = 0U;
    vlSelf->sim__DOT__rhs_self1 = 0U;
    vlSelf->sim__DOT__rhs_self2 = 0U;
    vlSelf->sim__DOT__rhs_self3 = 0U;
    vlSelf->sim__DOT__rhs_self4 = 0U;
    vlSelf->sim__DOT__rhs_self5 = 0U;
    vlSelf->sim__DOT__scratch_storage = 0x12345678U;
    vlSelf->sim__DOT__shared_ack = 0U;
    vlSelf->sim__DOT__shared_dat_r = 0U;
    vlSelf->sim__DOT__simsoc_ram_bus_ack = 0U;
    vlSelf->sim__DOT__slave_sel = 0U;
    vlSelf->sim__DOT__slave_sel_r = 0U;
    vlSelf->sim__DOT__soc_rst = 0U;
    vlSelf->sim__DOT__state = 0U;
    vlSelf->sim__DOT__timer_en_storage = 0U;
    vlSelf->sim__DOT__timer_enable_storage = 0U;
    vlSelf->sim__DOT__timer_load_storage = 0U;
    vlSelf->sim__DOT__timer_pending_wr_data = 0U;
    vlSelf->sim__DOT__timer_pending_wr_stb = 0U;
    vlSelf->sim__DOT__timer_reload_storage = 0U;
    vlSelf->sim__DOT__timer_update_value_storage = 0U;
    vlSelf->sim__DOT__timer_update_value_wr_stb = 0U;
    vlSelf->sim__DOT__timer_value = 0U;
    vlSelf->sim__DOT__timer_value_status = 0U;
    vlSelf->sim__DOT__timer_zero_clear = 0U;
    vlSelf->sim__DOT__timer_zero_pending = 0U;
    vlSelf->sim__DOT__timer_zero_trigger_d = 0U;
    vlSelf->sim__DOT__uart_core_enable_storage = 0U;
    vlSelf->sim__DOT__uart_core_pending_status = 0U;
    vlSelf->sim__DOT__uart_core_pending_wr_data = 0U;
    vlSelf->sim__DOT__uart_core_pending_wr_stb = 0U;
    vlSelf->sim__DOT__uart_core_rx_clear = 0U;
    vlSelf->sim__DOT__uart_core_rx_fifo_consume = 0U;
    vlSelf->sim__DOT__uart_core_rx_fifo_level0 = 0U;
    vlSelf->sim__DOT__uart_core_rx_fifo_produce = 0U;
    vlSelf->sim__DOT__uart_core_rx_fifo_readable = 0U;
    vlSelf->sim__DOT__uart_core_rx_fifo_wrport_adr = 0U;
    vlSelf->sim__DOT__uart_core_rxtx_re = 0U;
    vlSelf->sim__DOT__uart_core_status_status = 0U;
    vlSelf->sim__DOT__uart_core_tx_fifo_consume = 0U;
    vlSelf->sim__DOT__uart_core_tx_fifo_level0 = 0U;
    vlSelf->sim__DOT__uart_core_tx_fifo_produce = 0U;
    vlSelf->sim__DOT__uart_core_tx_fifo_readable = 0U;
    vlSelf->sim__DOT__uart_core_tx_fifo_wrport_adr = 0U;
}

VL_ATTR_COLD void Vsim___024root___eval_initial__TOP(Vsim___024root* vlSelf);

VL_ATTR_COLD void Vsim___024root___eval_initial(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_initial\n"); );
    // Body
    Vsim___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__sys_clk__0 = vlSelf->sys_clk;
}

VL_ATTR_COLD void Vsim___024root___eval_initial__TOP(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    __Vtemp_1[0U] = 0x696e6974U;
    __Vtemp_1[1U] = 0x726f6d2eU;
    __Vtemp_1[2U] = 0x73696d5fU;
    VL_READMEM_N(true, 32, 32768, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->sim__DOT__rom), 0, ~0ULL);
    __Vtemp_2[0U] = 0x696e6974U;
    __Vtemp_2[1U] = 0x72616d2eU;
    __Vtemp_2[2U] = 0x696d5f73U;
    __Vtemp_2[3U] = 0x73U;
    VL_READMEM_N(true, 32, 2048, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelf->sim__DOT__sram), 0, ~0ULL);
    __Vtemp_3[0U] = 0x696e6974U;
    __Vtemp_3[1U] = 0x6d656d2eU;
    __Vtemp_3[2U] = 0x73696d5fU;
    VL_READMEM_N(true, 8, 37, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_3)
                 ,  &(vlSelf->sim__DOT__mem), 0, ~0ULL);
    vlSelf->sim_trace = 1U;
}

VL_ATTR_COLD void Vsim___024root___eval_final(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__stl(Vsim___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsim___024root___eval_phase__stl(Vsim___024root* vlSelf);

VL_ATTR_COLD void Vsim___024root___eval_settle(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vsim___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/nguyen-van-thuc/ic_workspace/my_soc_workspace/projects/soc_mini/build/sim/gateware/sim.v", 23, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsim___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__stl(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim___024root___stl_sequent__TOP__0(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0;
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 = 0;
    // Body
    vlSelf->sim__DOT__error = 0U;
    if ((0U == vlSelf->sim__DOT__count)) {
        vlSelf->sim__DOT__error = 1U;
    }
    vlSelf->sim__DOT__uart_core_tx_fifo_wrport_adr 
        = vlSelf->sim__DOT__uart_core_tx_fifo_produce;
    vlSelf->sim__DOT__uart_core_rx_fifo_wrport_adr 
        = vlSelf->sim__DOT__uart_core_rx_fifo_produce;
    vlSelf->serial_sink_ready = (0x10U != (IData)(vlSelf->sim__DOT__uart_core_rx_fifo_level0));
    vlSelf->serial_source_valid = vlSelf->sim__DOT__uart_core_tx_fifo_readable;
    vlSelf->sim__DOT__uart_core_tx_fifo_sink_ready 
        = (0x10U != (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_level0));
    vlSelf->serial_source_data = (0xffU & (IData)(vlSelf->sim__DOT__storage_dat1));
    vlSelf->sim__DOT__done = (0U == vlSelf->sim__DOT__count);
    vlSelf->sim__DOT__timer_zero_clear = 0U;
    if (((IData)(vlSelf->sim__DOT__timer_pending_wr_stb) 
         & (IData)(vlSelf->sim__DOT__timer_pending_wr_data))) {
        vlSelf->sim__DOT__timer_zero_clear = 1U;
    }
    vlSelf->sim__DOT__picorv32__DOT__pcpi_int_ready 
        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_ready) 
           | (IData)(vlSelf->sim__DOT__picorv32__DOT__pcpi_div_ready));
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
    vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs1 = 
        ((0U != (IData)(vlSelf->sim__DOT__picorv32__DOT__decoded_rs1))
          ? ((0x23U >= (IData)(vlSelf->sim__DOT__picorv32__DOT__decoded_rs1))
              ? vlSelf->sim__DOT__picorv32__DOT__cpuregs
             [vlSelf->sim__DOT__picorv32__DOT__decoded_rs1]
              : 0U) : 0U);
    vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs2 = 
        ((0U != (IData)(vlSelf->sim__DOT__picorv32__DOT__decoded_rs2))
          ? vlSelf->sim__DOT__picorv32__DOT__cpuregs
         [vlSelf->sim__DOT__picorv32__DOT__decoded_rs2]
          : 0U);
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelf->sim__DOT__picorv32__DOT__pcpi_div_wait));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
           | ((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
              | (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu)));
    vlSelf->sim__DOT__picorv32__DOT__pcpi_int_wr = 0U;
    vlSelf->sim__DOT__picorv32__DOT__pcpi_int_rd = 0U;
    if (vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_ready) {
        vlSelf->sim__DOT__picorv32__DOT__pcpi_int_wr 
            = vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_wr;
        vlSelf->sim__DOT__picorv32__DOT__pcpi_int_rd 
            = vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_rd;
    } else if (vlSelf->sim__DOT__picorv32__DOT__pcpi_div_ready) {
        vlSelf->sim__DOT__picorv32__DOT__pcpi_int_wr 
            = vlSelf->sim__DOT__picorv32__DOT__pcpi_div_wr;
        vlSelf->sim__DOT__picorv32__DOT__pcpi_int_rd 
            = vlSelf->sim__DOT__picorv32__DOT__pcpi_div_rd;
    }
    vlSelf->sim__DOT__picorv32__DOT__cpuregs_write = 0U;
    vlSelf->sim__DOT__picorv32__DOT__next_pc = (((IData)(vlSelf->sim__DOT__picorv32__DOT__latched_branch) 
                                                 & (IData)(vlSelf->sim__DOT__picorv32__DOT__latched_store))
                                                 ? 
                                                (0xfffffffeU 
                                                 & vlSelf->sim__DOT__picorv32__DOT__reg_out)
                                                 : vlSelf->sim__DOT__picorv32__DOT__reg_next_pc);
    vlSelf->sim__DOT__picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_rdcycle) 
           | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_rdcycleh) 
              | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_rdinstr) 
                 | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_rdinstrh))));
    vlSelf->sim__DOT__uart_core_tx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_level0)) 
           & ((~ (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_readable)) 
              | (IData)(vlSelf->serial_source_ready)));
    vlSelf->sim__DOT__rhs_self1 = vlSelf->sim__DOT__picorv32_mem_wdata;
    vlSelf->sim__DOT__uart_core_rx_clear = 0U;
    if (((IData)(vlSelf->sim__DOT__uart_core_pending_wr_stb) 
         & ((IData)(vlSelf->sim__DOT__uart_core_pending_wr_data) 
            >> 1U))) {
        vlSelf->sim__DOT__uart_core_rx_clear = 1U;
    }
    vlSelf->sim__DOT__picorv32__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state))) {
        if (vlSelf->sim__DOT__picorv32__DOT__latched_branch) {
            vlSelf->sim__DOT__picorv32__DOT__cpuregs_write = 1U;
            vlSelf->sim__DOT__picorv32__DOT__cpuregs_wrdata 
                = (vlSelf->sim__DOT__picorv32__DOT__reg_pc 
                   + ((IData)(vlSelf->sim__DOT__picorv32__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelf->sim__DOT__picorv32__DOT__latched_store) 
                    & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__latched_branch)))) {
            vlSelf->sim__DOT__picorv32__DOT__cpuregs_write = 1U;
            vlSelf->sim__DOT__picorv32__DOT__cpuregs_wrdata 
                = ((IData)(vlSelf->sim__DOT__picorv32__DOT__latched_stalu)
                    ? vlSelf->sim__DOT__picorv32__DOT__alu_out_q
                    : vlSelf->sim__DOT__picorv32__DOT__reg_out);
        } else if ((1U & (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_state))) {
            vlSelf->sim__DOT__picorv32__DOT__cpuregs_write = 1U;
            vlSelf->sim__DOT__picorv32__DOT__cpuregs_wrdata 
                = (vlSelf->sim__DOT__picorv32__DOT__reg_next_pc 
                   | (IData)(vlSelf->sim__DOT__picorv32__DOT__latched_compr));
        } else if ((2U & (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_state))) {
            vlSelf->sim__DOT__picorv32__DOT__cpuregs_write = 1U;
            vlSelf->sim__DOT__picorv32__DOT__cpuregs_wrdata 
                = (vlSelf->sim__DOT__picorv32__DOT__irq_pending 
                   & (~ vlSelf->sim__DOT__picorv32__DOT__irq_mask));
        }
    }
    vlSelf->sim__DOT____VdfgExtracted_hbbeaa1ab__0 
        = (((IData)(vlSelf->sim__DOT__uart_core_rx_fifo_readable) 
            << 1U) | (0x10U != (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_level0)));
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
}

VL_ATTR_COLD void Vsim___024root___stl_sequent__TOP__1(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___stl_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0;
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 = 0;
    // Body
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
}

VL_ATTR_COLD void Vsim___024root___stl_sequent__TOP__2(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___stl_sequent__TOP__2\n"); );
    // Init
    CData/*3:0*/ sim__DOT__picorv32_idbus_sel;
    sim__DOT__picorv32_idbus_sel = 0;
    CData/*0:0*/ sim__DOT__picorv32_idbus_we;
    sim__DOT__picorv32_idbus_we = 0;
    CData/*0:0*/ sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0;
    sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hc94c5992__0 = 0;
    // Body
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
    vlSelf->sim__DOT__interface0_ack = 0U;
    if (vlSelf->sim__DOT__state) {
        vlSelf->sim__DOT__interface0_ack = 1U;
    }
    vlSelf->sim__DOT__picorv32__DOT__alu_eq = (vlSelf->sim__DOT__picorv32__DOT__reg_op1 
                                               == vlSelf->sim__DOT__picorv32__DOT__reg_op2);
    vlSelf->sim__DOT__picorv32__DOT__alu_lts = VL_LTS_III(32, vlSelf->sim__DOT__picorv32__DOT__reg_op1, vlSelf->sim__DOT__picorv32__DOT__reg_op2);
    vlSelf->sim__DOT__picorv32__DOT__alu_ltu = (vlSelf->sim__DOT__picorv32__DOT__reg_op1 
                                                < vlSelf->sim__DOT__picorv32__DOT__reg_op2);
    vlSelf->sim__DOT__soc_rst = 0U;
    if (vlSelf->sim__DOT__reset_wr_stb) {
        vlSelf->sim__DOT__soc_rst = (1U & (IData)(vlSelf->sim__DOT__reset_storage));
    }
    vlSelf->sim__DOT__csr_bankarray_sram_bus_dat_r = 0U;
    if (vlSelf->sim__DOT__csr_bankarray_sel_r) {
        vlSelf->sim__DOT__csr_bankarray_sram_bus_dat_r 
            = vlSelf->sim__DOT__mem_dat0;
    }
    vlSelf->sim__DOT__picorv32__DOT__instr_trap = (1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lui) 
                                                       | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_auipc) 
                                                          | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_jal) 
                                                             | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_jalr) 
                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_beq) 
                                                                   | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_bne) 
                                                                      | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_blt) 
                                                                         | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_bge) 
                                                                            | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_bltu) 
                                                                               | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_bgeu) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lb) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lh) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lw) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lbu) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lhu) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sb) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sh) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sw) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_addi) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_slti) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_xori) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_ori) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_andi) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_slli) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_srli) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_srai) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_add) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sub) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sll) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_slt) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sltu) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_xor) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_srl) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sra) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_or) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_and) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_rdcycle) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_rdcycleh) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_rdinstr) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_rdinstrh) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_fence) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_getq) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_setq) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_retirq) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_maskirq) 
                                                                                | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_timer) 
                                                                                | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_waitirq))))))))))))))))))))))))))))))))))))))))))))))))));
    if ((0U != (IData)(vlSelf->sim__DOT__picorv32_mem_wstrb))) {
        sim__DOT__picorv32_idbus_we = 1U;
        sim__DOT__picorv32_idbus_sel = vlSelf->sim__DOT__picorv32_mem_wstrb;
    } else {
        sim__DOT__picorv32_idbus_we = 0U;
        sim__DOT__picorv32_idbus_sel = 0xfU;
    }
    vlSelf->sim__DOT__rhs_self4 = vlSelf->sim__DOT__picorv32_mem_valid;
    vlSelf->sim__DOT__rhs_self3 = vlSelf->sim__DOT__picorv32_mem_valid;
    vlSelf->sim__DOT__rhs_self0 = (vlSelf->sim__DOT__picorv32_mem_addr 
                                   >> 2U);
    vlSelf->sim__DOT__uart_core_tx_fifo_do_read = (
                                                   (0U 
                                                    != (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_level0)) 
                                                   & (IData)(vlSelf->sim__DOT__uart_core_tx_fifo_syncfifo_re));
    vlSelf->sim__DOT__basiclowerer_self = vlSelf->sim__DOT__rhs_self1;
    vlSelf->sim__DOT__uart_core_rx_fifo_syncfifo_re 
        = ((0U != (IData)(vlSelf->sim__DOT__uart_core_rx_fifo_level0)) 
           & ((~ (IData)(vlSelf->sim__DOT__uart_core_rx_fifo_readable)) 
              | (IData)(vlSelf->sim__DOT__uart_core_rx_clear)));
    vlSelf->sim__DOT__uart_core_status_status = vlSelf->sim__DOT____VdfgExtracted_hbbeaa1ab__0;
    vlSelf->sim__DOT__uart_core_pending_status = vlSelf->sim__DOT____VdfgExtracted_hbbeaa1ab__0;
    vlSelf->sim__DOT__shared_ack = (((IData)(vlSelf->sim__DOT__simsoc_ram_bus_ack) 
                                     | (IData)(vlSelf->sim__DOT__ram_bus_ram_bus_ack)) 
                                    | (IData)(vlSelf->sim__DOT__interface0_ack));
    if ((0U == vlSelf->sim__DOT__count)) {
        vlSelf->sim__DOT__shared_ack = 1U;
    }
    vlSelf->sim__DOT__picorv32__DOT__alu_out_0 = 0U;
    if (vlSelf->sim__DOT__picorv32__DOT__instr_beq) {
        vlSelf->sim__DOT__picorv32__DOT__alu_out_0 
            = vlSelf->sim__DOT__picorv32__DOT__alu_eq;
    } else if (vlSelf->sim__DOT__picorv32__DOT__instr_bne) {
        vlSelf->sim__DOT__picorv32__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__alu_eq)));
    } else if (vlSelf->sim__DOT__picorv32__DOT__instr_bge) {
        vlSelf->sim__DOT__picorv32__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__alu_lts)));
    } else if (vlSelf->sim__DOT__picorv32__DOT__instr_bgeu) {
        vlSelf->sim__DOT__picorv32__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__alu_ltu)));
    } else if (vlSelf->sim__DOT__picorv32__DOT__is_slti_blt_slt) {
        vlSelf->sim__DOT__picorv32__DOT__alu_out_0 
            = vlSelf->sim__DOT__picorv32__DOT__alu_lts;
    } else if (vlSelf->sim__DOT__picorv32__DOT__is_sltiu_bltu_sltu) {
        vlSelf->sim__DOT__picorv32__DOT__alu_out_0 
            = vlSelf->sim__DOT__picorv32__DOT__alu_ltu;
    }
    vlSelf->sim__DOT__picorv32__DOT__alu_out = 0U;
    if (vlSelf->sim__DOT__picorv32__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelf->sim__DOT__picorv32__DOT__alu_out = 
            ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sub)
              ? (vlSelf->sim__DOT__picorv32__DOT__reg_op1 
                 - vlSelf->sim__DOT__picorv32__DOT__reg_op2)
              : (vlSelf->sim__DOT__picorv32__DOT__reg_op1 
                 + vlSelf->sim__DOT__picorv32__DOT__reg_op2));
    } else if (vlSelf->sim__DOT__picorv32__DOT__is_compare) {
        vlSelf->sim__DOT__picorv32__DOT__alu_out = vlSelf->sim__DOT__picorv32__DOT__alu_out_0;
    } else if (((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_xori) 
                | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_xor))) {
        vlSelf->sim__DOT__picorv32__DOT__alu_out = 
            (vlSelf->sim__DOT__picorv32__DOT__reg_op1 
             ^ vlSelf->sim__DOT__picorv32__DOT__reg_op2);
    } else if (((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_ori) 
                | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_or))) {
        vlSelf->sim__DOT__picorv32__DOT__alu_out = 
            (vlSelf->sim__DOT__picorv32__DOT__reg_op1 
             | vlSelf->sim__DOT__picorv32__DOT__reg_op2);
    } else if (((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_andi) 
                | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_and))) {
        vlSelf->sim__DOT__picorv32__DOT__alu_out = 
            (vlSelf->sim__DOT__picorv32__DOT__reg_op1 
             & vlSelf->sim__DOT__picorv32__DOT__reg_op2);
    }
    vlSelf->sim__DOT____Vcellinp__picorv32__resetn 
        = (1U & (~ ((IData)(vlSelf->sim__DOT__int_rst) 
                    | ((IData)(vlSelf->sim__DOT__soc_rst) 
                       | ((IData)(vlSelf->sim__DOT__reset_storage) 
                          >> 1U)))));
    vlSelf->sim__DOT__rhs_self5 = sim__DOT__picorv32_idbus_we;
    vlSelf->sim__DOT__rhs_self2 = sim__DOT__picorv32_idbus_sel;
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
    vlSelf->sim__DOT__interface1_dat_w = 0U;
    if ((1U & (~ (IData)(vlSelf->sim__DOT__state)))) {
        vlSelf->sim__DOT__interface1_dat_w = vlSelf->sim__DOT__basiclowerer_self;
    }
}

VL_ATTR_COLD void Vsim___024root___stl_sequent__TOP__3(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___stl_sequent__TOP__3\n"); );
    // Body
    vlSelf->sim__DOT__uart_core_rx_fifo_do_read = (
                                                   (0U 
                                                    != (IData)(vlSelf->sim__DOT__uart_core_rx_fifo_level0)) 
                                                   & (IData)(vlSelf->sim__DOT__uart_core_rx_fifo_syncfifo_re));
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
    vlSelf->sim__DOT__picorv32__DOT__mem_xfer = ((IData)(vlSelf->sim__DOT__shared_ack) 
                                                 & (IData)(vlSelf->sim__DOT__picorv32_mem_valid));
    vlSelf->sim__DOT__picorv321 = ((IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn) 
                                   & ((~ (IData)((0U 
                                                  != (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_state)))) 
                                      & (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_wdata)));
    vlSelf->sim__DOT__picorv320 = ((IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn) 
                                   & ((~ (IData)((0U 
                                                  != (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_state)))) 
                                      & ((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst) 
                                         | ((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_prefetch) 
                                            | (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rdata)))));
    vlSelf->sim__DOT__csr_data_width = 0U;
    if ((0U != (IData)(vlSelf->sim__DOT__rhs_self2))) {
        vlSelf->sim__DOT__csr_data_width = 0U;
    }
    vlSelf->sim__DOT__ram_bus_ram_bus_cyc = ((IData)(vlSelf->sim__DOT__rhs_self3) 
                                             & ((IData)(vlSelf->sim__DOT__slave_sel) 
                                                >> 1U));
    vlSelf->sim__DOT____VdfgExtracted_h34b3db20__0 
        = ((IData)(vlSelf->sim__DOT__rhs_self3) & (
                                                   ((IData)(vlSelf->sim__DOT__slave_sel) 
                                                    >> 2U) 
                                                   & (IData)(vlSelf->sim__DOT__rhs_self4)));
    vlSelf->sim__DOT__picorv32__DOT__mem_done = ((IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn) 
                                                 & (((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_xfer) 
                                                     & ((0U 
                                                         != (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_state)) 
                                                        & ((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst) 
                                                           | ((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rdata) 
                                                              | (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_wdata))))) 
                                                    | ((3U 
                                                        == (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_state)) 
                                                       & (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst))));
    vlSelf->sim__DOT__interface0_dat_r = 0U;
    vlSelf->sim__DOT____VdfgTmp_h48ee2550__0 = ((IData)(vlSelf->sim__DOT__ram_bus_ram_bus_cyc) 
                                                & ((IData)(vlSelf->sim__DOT__rhs_self4) 
                                                   & (IData)(vlSelf->sim__DOT__rhs_self5)));
    if (vlSelf->sim__DOT__state) {
        vlSelf->sim__DOT__next_state = 1U;
        vlSelf->sim__DOT__interface0_dat_r = 0U;
        if ((1U & (~ (IData)(vlSelf->sim__DOT__csr_data_width)))) {
            vlSelf->sim__DOT__interface0_dat_r = (vlSelf->sim__DOT__csr_bankarray_interface0_bank_bus_dat_r 
                                                  | (vlSelf->sim__DOT__csr_bankarray_interface1_bank_bus_dat_r 
                                                     | (vlSelf->sim__DOT__csr_bankarray_interface2_bank_bus_dat_r 
                                                        | vlSelf->sim__DOT__csr_bankarray_sram_bus_dat_r)));
        }
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
        if (vlSelf->sim__DOT____VdfgExtracted_h34b3db20__0) {
            vlSelf->sim__DOT__interface1_we = ((IData)(vlSelf->sim__DOT__rhs_self5) 
                                               & (0U 
                                                  != (IData)(vlSelf->sim__DOT__rhs_self2)));
            vlSelf->sim__DOT__interface1_adr = (0x3fffU 
                                                & vlSelf->sim__DOT__rhs_self0);
        }
    }
    vlSelf->sim__DOT__shared_dat_r = ((((- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->sim__DOT__slave_sel_r)))) 
                                        & vlSelf->sim__DOT__rom_dat0) 
                                       | ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->sim__DOT__slave_sel_r) 
                                                         >> 1U)))) 
                                          & vlSelf->sim__DOT__sram
                                          [vlSelf->sim__DOT__sram_adr0])) 
                                      | ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->sim__DOT__slave_sel_r) 
                                                        >> 2U)))) 
                                         & vlSelf->sim__DOT__interface0_dat_r));
    if ((0U == vlSelf->sim__DOT__count)) {
        vlSelf->sim__DOT__shared_dat_r = 0xffffffffU;
    }
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
    if ((0U == (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_wordsize))) {
        vlSelf->sim__DOT__picorv32__DOT__mem_rdata_word 
            = vlSelf->sim__DOT__shared_dat_r;
    } else if ((1U == (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_wordsize))) {
        if ((2U & vlSelf->sim__DOT__picorv32__DOT__reg_op1)) {
            if ((2U & vlSelf->sim__DOT__picorv32__DOT__reg_op1)) {
                vlSelf->sim__DOT__picorv32__DOT__mem_rdata_word 
                    = (vlSelf->sim__DOT__shared_dat_r 
                       >> 0x10U);
            }
        } else {
            vlSelf->sim__DOT__picorv32__DOT__mem_rdata_word 
                = (0xffffU & vlSelf->sim__DOT__shared_dat_r);
        }
    } else if ((2U == (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_wordsize))) {
        vlSelf->sim__DOT__picorv32__DOT__mem_rdata_word 
            = ((2U & vlSelf->sim__DOT__picorv32__DOT__reg_op1)
                ? ((1U & vlSelf->sim__DOT__picorv32__DOT__reg_op1)
                    ? (vlSelf->sim__DOT__shared_dat_r 
                       >> 0x18U) : (0xffU & (vlSelf->sim__DOT__shared_dat_r 
                                             >> 0x10U)))
                : ((1U & vlSelf->sim__DOT__picorv32__DOT__reg_op1)
                    ? (0xffU & (vlSelf->sim__DOT__shared_dat_r 
                                >> 8U)) : (0xffU & vlSelf->sim__DOT__shared_dat_r)));
    }
    vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched 
        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_xfer)
            ? vlSelf->sim__DOT__shared_dat_r : vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q);
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
}

VL_ATTR_COLD void Vsim___024root___stl_sequent__TOP__4(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___stl_sequent__TOP__4\n"); );
    // Body
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
}

VL_ATTR_COLD void Vsim___024root___eval_stl(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vsim___024root___stl_sequent__TOP__0(vlSelf);
        Vsim___024root___stl_sequent__TOP__1(vlSelf);
        Vsim___024root___stl_sequent__TOP__2(vlSelf);
        Vsim___024root___stl_sequent__TOP__3(vlSelf);
        Vsim___024root___stl_sequent__TOP__4(vlSelf);
    }
}

VL_ATTR_COLD void Vsim___024root___eval_triggers__stl(Vsim___024root* vlSelf);

VL_ATTR_COLD bool Vsim___024root___eval_phase__stl(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsim___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vsim___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__ico(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__act(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge sys_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__nba(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge sys_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim___024root___ctor_var_reset(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->serial_sink_data = VL_RAND_RESET_I(8);
    vlSelf->serial_sink_ready = VL_RAND_RESET_I(1);
    vlSelf->serial_sink_valid = VL_RAND_RESET_I(1);
    vlSelf->serial_source_data = VL_RAND_RESET_I(8);
    vlSelf->serial_source_ready = VL_RAND_RESET_I(1);
    vlSelf->serial_source_valid = VL_RAND_RESET_I(1);
    vlSelf->sim_trace = VL_RAND_RESET_I(1);
    vlSelf->sys_clk = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__basiclowerer_self = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__bus_errors = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__count = VL_RAND_RESET_I(20);
    vlSelf->sim__DOT__csr_bankarray_csrbank0_reset_re = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__csr_bankarray_csrbank0_scratch_re = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__csr_bankarray_csrbank1_en_re = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__csr_bankarray_csrbank1_ev_enable_re = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__csr_bankarray_csrbank1_ev_pending_re = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__csr_bankarray_csrbank1_load_re = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__csr_bankarray_csrbank1_reload_re = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__csr_bankarray_csrbank1_update_value_re = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__csr_bankarray_csrbank2_ev_enable_re = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__csr_bankarray_csrbank2_ev_pending_re = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__csr_bankarray_interface0_bank_bus_dat_r = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__csr_bankarray_interface1_bank_bus_dat_r = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__csr_bankarray_interface2_bank_bus_dat_r = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__csr_bankarray_sel_r = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__csr_bankarray_sram_bus_dat_r = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__csr_data_width = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__error = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__int_rst = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__interface0_ack = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__interface0_dat_r = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__interface1_adr = VL_RAND_RESET_I(14);
    vlSelf->sim__DOT__interface1_dat_w = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__interface1_we = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv320 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv321 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv323 = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv324 = VL_RAND_RESET_I(4);
    vlSelf->sim__DOT__picorv325 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv326 = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32_interrupt = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32_mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->sim__DOT__picorv32_trap = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__ram_bus_ram_bus_ack = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__ram_bus_ram_bus_cyc = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__ram_we = VL_RAND_RESET_I(4);
    vlSelf->sim__DOT__reset_storage = VL_RAND_RESET_I(2);
    vlSelf->sim__DOT__reset_wr_stb = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__rhs_self0 = VL_RAND_RESET_I(30);
    vlSelf->sim__DOT__rhs_self1 = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__rhs_self2 = VL_RAND_RESET_I(4);
    vlSelf->sim__DOT__rhs_self3 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__rhs_self4 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__rhs_self5 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__scratch_storage = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__shared_ack = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__shared_dat_r = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__simsoc_ram_bus_ack = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__slave_sel = VL_RAND_RESET_I(3);
    vlSelf->sim__DOT__slave_sel_r = VL_RAND_RESET_I(3);
    vlSelf->sim__DOT__soc_rst = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__timer_en_storage = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__timer_enable_storage = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__timer_load_storage = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__timer_pending_wr_data = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__timer_pending_wr_stb = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__timer_reload_storage = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__timer_update_value_storage = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__timer_update_value_wr_stb = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__timer_value = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__timer_value_status = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__timer_zero_clear = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__timer_zero_pending = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__timer_zero_trigger_d = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__uart_core_enable_storage = VL_RAND_RESET_I(2);
    vlSelf->sim__DOT__uart_core_pending_status = VL_RAND_RESET_I(2);
    vlSelf->sim__DOT__uart_core_pending_wr_data = VL_RAND_RESET_I(2);
    vlSelf->sim__DOT__uart_core_pending_wr_stb = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__uart_core_rx_clear = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__uart_core_rx_fifo_consume = VL_RAND_RESET_I(4);
    vlSelf->sim__DOT__uart_core_rx_fifo_do_read = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__uart_core_rx_fifo_level0 = VL_RAND_RESET_I(5);
    vlSelf->sim__DOT__uart_core_rx_fifo_produce = VL_RAND_RESET_I(4);
    vlSelf->sim__DOT__uart_core_rx_fifo_readable = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__uart_core_rx_fifo_syncfifo_re = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__uart_core_rx_fifo_wrport_adr = VL_RAND_RESET_I(4);
    vlSelf->sim__DOT__uart_core_rxtx_re = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__uart_core_status_status = VL_RAND_RESET_I(2);
    vlSelf->sim__DOT__uart_core_tx_fifo_consume = VL_RAND_RESET_I(4);
    vlSelf->sim__DOT__uart_core_tx_fifo_do_read = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__uart_core_tx_fifo_level0 = VL_RAND_RESET_I(5);
    vlSelf->sim__DOT__uart_core_tx_fifo_produce = VL_RAND_RESET_I(4);
    vlSelf->sim__DOT__uart_core_tx_fifo_readable = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__uart_core_tx_fifo_sink_ready = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__uart_core_tx_fifo_syncfifo_re = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__uart_core_tx_fifo_wrport_adr = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->sim__DOT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sim__DOT__rom_dat0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->sim__DOT__sram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sim__DOT__sram_adr0 = VL_RAND_RESET_I(11);
    for (int __Vi0 = 0; __Vi0 < 37; ++__Vi0) {
        vlSelf->sim__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->sim__DOT__mem_dat0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->sim__DOT__storage[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->sim__DOT__storage_dat1 = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->sim__DOT__storage_1[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->sim__DOT__storage_1_dat1 = VL_RAND_RESET_I(10);
    vlSelf->sim__DOT____Vcellinp__picorv32__resetn = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT____VdfgExtracted_h34b3db20__0 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT____VdfgExtracted_h3483df38__0 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT____VdfgExtracted_h347da0bd__0 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT____VdfgExtracted_h8553e3f3__0 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT____VdfgExtracted_h853cba48__0 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT____VdfgExtracted_h853caf59__0 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT____VdfgExtracted_h853d24a6__0 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT____VdfgExtracted_h859e558e__0 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT____VdfgExtracted_h853d4c21__0 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT____VdfgExtracted_hbece7cd5__0 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT____VdfgExtracted_hbecb2757__0 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT____VdfgExtracted_hbec47a0f__0 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT____VdfgExtracted_hbbeaa1ab__0 = VL_RAND_RESET_I(2);
    vlSelf->sim__DOT____VdfgTmp_h48ee2550__0 = 0;
    vlSelf->sim__DOT__picorv32__DOT__count_cycle = VL_RAND_RESET_Q(64);
    vlSelf->sim__DOT__picorv32__DOT__count_instr = VL_RAND_RESET_Q(64);
    vlSelf->sim__DOT__picorv32__DOT__reg_pc = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__reg_next_pc = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__reg_op1 = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__reg_op2 = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__reg_out = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__reg_sh = VL_RAND_RESET_I(5);
    vlSelf->sim__DOT__picorv32__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__irq_delay = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__irq_active = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__irq_mask = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__irq_pending = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__timer = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->sim__DOT__picorv32__DOT__cpuregs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_wr = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_rd = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_wait = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_ready = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__pcpi_div_wr = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__pcpi_div_rd = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__pcpi_div_wait = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__pcpi_div_ready = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__pcpi_int_wr = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__pcpi_int_rd = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__pcpi_int_ready = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__mem_state = VL_RAND_RESET_I(2);
    vlSelf->sim__DOT__picorv32__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    vlSelf->sim__DOT__picorv32__DOT__mem_rdata_word = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__mem_xfer = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__mem_done = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_lui = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_auipc = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_jal = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_jalr = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_beq = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_bne = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_blt = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_bge = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_bltu = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_bgeu = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_lb = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_lh = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_lw = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_lbu = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_lhu = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_sb = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_sh = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_sw = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_addi = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_slti = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_sltiu = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_xori = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_ori = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_andi = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_slli = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_srli = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_srai = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_add = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_sub = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_sll = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_slt = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_sltu = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_xor = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_srl = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_sra = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_or = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_and = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_rdcycle = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_rdcycleh = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_rdinstr = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_ecall_ebreak = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_fence = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_getq = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_setq = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_retirq = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_maskirq = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_waitirq = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_timer = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__instr_trap = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__decoded_rd = VL_RAND_RESET_I(6);
    vlSelf->sim__DOT__picorv32__DOT__decoded_rs1 = VL_RAND_RESET_I(6);
    vlSelf->sim__DOT__picorv32__DOT__decoded_rs2 = VL_RAND_RESET_I(5);
    vlSelf->sim__DOT__picorv32__DOT__decoded_imm = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__decoded_imm_j = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__compressed_instr = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__is_lui_auipc_jal = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__is_lb_lh_lw_lbu_lhu = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__is_slli_srli_srai = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__is_sb_sh_sw = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__is_sll_srl_sra = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__is_slti_blt_slt = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__is_sltiu_bltu_sltu = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__is_lbu_lhu_lw = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_imm = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_reg = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__is_compare = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__cpu_state = VL_RAND_RESET_I(8);
    vlSelf->sim__DOT__picorv32__DOT__irq_state = VL_RAND_RESET_I(2);
    vlSelf->sim__DOT__picorv32__DOT__set_mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__set_mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__set_mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__latched_store = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__latched_stalu = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__latched_branch = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__latched_compr = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__latched_rd = VL_RAND_RESET_I(6);
    vlSelf->sim__DOT__picorv32__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__pcpi_timeout_counter = VL_RAND_RESET_I(4);
    vlSelf->sim__DOT__picorv32__DOT__pcpi_timeout = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__next_irq_pending = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__do_waitirq = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__alu_out_q = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__alu_out_0 = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__alu_eq = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__alu_ltu = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__alu_lts = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__cpuregs_write = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__cpuregs_wrdata = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs1 = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs2 = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT____Vlvbound_h42d012a2__0 = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 = VL_RAND_RESET_Q(64);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 = VL_RAND_RESET_Q(64);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rd = VL_RAND_RESET_Q(64);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = VL_RAND_RESET_Q(64);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd = VL_RAND_RESET_Q(64);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx = VL_RAND_RESET_Q(64);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = VL_RAND_RESET_Q(64);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = VL_RAND_RESET_I(7);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_hce26e1e2__0 = VL_RAND_RESET_I(4);
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__dividend = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__divisor = VL_RAND_RESET_Q(63);
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = VL_RAND_RESET_I(32);
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__outsign = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__uart_core_tx_fifo_level0 = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__sim__DOT__timer_value = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__sim__DOT__bus_errors = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__sim__DOT__ram_bus_ram_bus_ack = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__uart_core_tx_fifo_consume = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__sim__DOT__simsoc_ram_bus_ack = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__uart_core_rx_fifo_consume = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__sim__DOT__uart_core_rx_fifo_level0 = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvdim0__sim__DOT__sram__v0 = 0;
    vlSelf->__Vdlyvlsb__sim__DOT__sram__v0 = 0;
    vlSelf->__Vdlyvval__sim__DOT__sram__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sim__DOT__sram__v0 = 0;
    vlSelf->__Vdlyvdim0__sim__DOT__sram__v1 = 0;
    vlSelf->__Vdlyvlsb__sim__DOT__sram__v1 = 0;
    vlSelf->__Vdlyvval__sim__DOT__sram__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sim__DOT__sram__v1 = 0;
    vlSelf->__Vdlyvdim0__sim__DOT__sram__v2 = 0;
    vlSelf->__Vdlyvlsb__sim__DOT__sram__v2 = 0;
    vlSelf->__Vdlyvval__sim__DOT__sram__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sim__DOT__sram__v2 = 0;
    vlSelf->__Vdlyvdim0__sim__DOT__sram__v3 = 0;
    vlSelf->__Vdlyvlsb__sim__DOT__sram__v3 = 0;
    vlSelf->__Vdlyvval__sim__DOT__sram__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sim__DOT__sram__v3 = 0;
    vlSelf->__Vdlyvdim0__sim__DOT__storage__v0 = 0;
    vlSelf->__Vdlyvval__sim__DOT__storage__v0 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvset__sim__DOT__storage__v0 = 0;
    vlSelf->__Vdlyvdim0__sim__DOT__storage_1__v0 = 0;
    vlSelf->__Vdlyvval__sim__DOT__storage_1__v0 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvset__sim__DOT__storage_1__v0 = 0;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvdim0__sim__DOT__picorv32__DOT__cpuregs__v0 = 0;
    vlSelf->__Vdlyvval__sim__DOT__picorv32__DOT__cpuregs__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__sim__DOT__picorv32__DOT__cpuregs__v0 = 0;
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_sh = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_out = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__count_cycle = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__timer = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__do_waitirq = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__irq_active = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_rd = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__latched_compr = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__irq_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__count_instr = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__cpu_state = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__reg_op1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__sim__DOT__picorv325 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__irq_mask = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__pcpi_timeout_counter = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__dividend = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__divisor = VL_RAND_RESET_Q(63);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__sys_clk__0 = VL_RAND_RESET_I(1);
}

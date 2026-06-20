// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"
#include "Vsim___024root.h"

VL_INLINE_OPT void Vsim___024root___nba_sequent__TOP__10(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__10\n"); );
    // Body
    if ((((IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn) 
          & (IData)(vlSelf->sim__DOT__picorv325)) & 
         (~ ((IData)(vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_wait) 
             | (IData)(vlSelf->sim__DOT__picorv32__DOT__pcpi_div_wait))))) {
        if ((0U != (IData)(vlSelf->sim__DOT__picorv32__DOT__pcpi_timeout_counter))) {
            vlSelf->__Vdly__sim__DOT__picorv32__DOT__pcpi_timeout_counter 
                = (0xfU & ((IData)(vlSelf->sim__DOT__picorv32__DOT__pcpi_timeout_counter) 
                           - (IData)(1U)));
        }
    } else {
        vlSelf->__Vdly__sim__DOT__picorv32__DOT__pcpi_timeout_counter = 0xfU;
    }
    vlSelf->sim__DOT__picorv32__DOT__pcpi_timeout = 
        (1U & (~ (IData)((0U != (IData)(vlSelf->sim__DOT__picorv32__DOT__pcpi_timeout_counter)))));
    if ((1U & (~ (IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn)))) {
        vlSelf->sim__DOT__picorv32__DOT__pcpi_timeout = 0U;
    }
    vlSelf->sim__DOT__picorv32__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lbu) 
           | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lhu) 
              | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lw)));
    vlSelf->sim__DOT__picorv32__DOT__pcpi_timeout_counter 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__pcpi_timeout_counter;
    vlSelf->sim__DOT__picorv32__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelf->sim__DOT__picorv32__DOT__cpu_state))) {
        if (vlSelf->sim__DOT__picorv32__DOT__latched_branch) {
            vlSelf->sim__DOT__picorv32__DOT__cpuregs_wrdata 
                = (vlSelf->sim__DOT__picorv32__DOT__reg_pc 
                   + ((IData)(vlSelf->sim__DOT__picorv32__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelf->sim__DOT__picorv32__DOT__latched_store) 
                    & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__latched_branch)))) {
            vlSelf->sim__DOT__picorv32__DOT__cpuregs_wrdata 
                = ((IData)(vlSelf->sim__DOT__picorv32__DOT__latched_stalu)
                    ? vlSelf->sim__DOT__picorv32__DOT__alu_out_q
                    : vlSelf->sim__DOT__picorv32__DOT__reg_out);
        } else if ((1U & (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_state))) {
            vlSelf->sim__DOT__picorv32__DOT__cpuregs_wrdata 
                = (vlSelf->sim__DOT__picorv32__DOT__reg_next_pc 
                   | (IData)(vlSelf->sim__DOT__picorv32__DOT__latched_compr));
        } else if ((2U & (IData)(vlSelf->sim__DOT__picorv32__DOT__irq_state))) {
            vlSelf->sim__DOT__picorv32__DOT__cpuregs_wrdata 
                = (vlSelf->sim__DOT__picorv32__DOT__irq_pending 
                   & (~ vlSelf->sim__DOT__picorv32__DOT__irq_mask));
        }
    }
    vlSelf->sim__DOT__picorv32__DOT__cpuregs_rs2 = 
        ((0U != (IData)(vlSelf->sim__DOT__picorv32__DOT__decoded_rs2))
          ? vlSelf->sim__DOT__picorv32__DOT__cpuregs
         [vlSelf->sim__DOT__picorv32__DOT__decoded_rs2]
          : 0U);
    if (((IData)(vlSelf->sim__DOT__picorv32__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__decoder_pseudo_trigger)))) {
        vlSelf->sim__DOT__picorv32__DOT__instr_rdcycleh 
            = ((IData)((0xc8002073U == (0xfffff07fU 
                                        & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q))) 
               | (IData)((0xc8102073U == (0xfffff07fU 
                                          & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q))));
        vlSelf->sim__DOT__picorv32__DOT__instr_rdinstr 
            = (IData)((0xc0202073U == (0xfffff07fU 
                                       & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_rdinstrh 
            = (IData)((0xc8202073U == (0xfffff07fU 
                                       & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
    }
    vlSelf->sim__DOT__picorv32__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_rdcycle) 
           | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_rdcycleh) 
              | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_rdinstr) 
                 | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_rdinstrh))));
    vlSelf->sim__DOT__picorv32__DOT__pcpi_div_wait 
        = (((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
            | ((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu) 
               | ((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                  | (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu)))) 
           & (IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn));
    vlSelf->sim__DOT__picorv32__DOT__pcpi_mul_wait 
        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
           | (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh));
    vlSelf->sim__DOT__picorv32__DOT__is_lui_auipc_jal 
        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lui) 
           | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_auipc) 
              | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_jal)));
    vlSelf->sim__DOT__picorv32__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lui) 
           | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_auipc) 
              | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_jal) 
                 | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_jalr) 
                    | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_addi) 
                       | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_add) 
                          | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sub)))))));
    vlSelf->sim__DOT__picorv32__DOT__is_slti_blt_slt 
        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_slti) 
           | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_blt) 
              | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_slt)));
    vlSelf->sim__DOT__picorv32__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sltiu) 
           | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_bltu) 
              | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sltu)));
    vlSelf->sim__DOT__picorv32__DOT__is_compare = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
                                                   | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_slti) 
                                                      | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_slt) 
                                                         | ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sltiu) 
                                                            | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_sltu)))));
    if (((IData)(vlSelf->sim__DOT__picorv32__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__decoder_pseudo_trigger)))) {
        vlSelf->sim__DOT__picorv32__DOT__instr_beq 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_bne 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x1000U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_blt 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x4000U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_bge 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x5000U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_bltu 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x6000U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_bgeu 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x7000U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_lb = 
            ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_lb_lh_lw_lbu_lhu) 
             & (0U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_lh = 
            ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_lb_lh_lw_lbu_lhu) 
             & (0x1000U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_lw = 
            ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_lb_lh_lw_lbu_lhu) 
             & (0x2000U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_lbu 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x4000U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_lhu 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x5000U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_sb = 
            ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_sb_sh_sw) 
             & (0U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_sh = 
            ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_sb_sh_sw) 
             & (0x1000U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_sw = 
            ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_sb_sh_sw) 
             & (0x2000U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_addi 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_imm) 
               & (0U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_slti 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_imm) 
               & (0x2000U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_sltiu 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_imm) 
               & (0x3000U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_xori 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_imm) 
               & (0x4000U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_ori 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_imm) 
               & (0x6000U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_andi 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_imm) 
               & (0x7000U == (0x7000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_slli 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_imm) 
               & (0x1000U == (0xfe007000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_srli 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_imm) 
               & (0x5000U == (0xfe007000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_srai 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_imm) 
               & (0x40005000U == (0xfe007000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__is_slli_srli_srai 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_imm) 
               & ((IData)((0x1000U == (0xfe007000U 
                                       & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q))) 
                  | ((IData)((0x5000U == (0xfe007000U 
                                          & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q))))));
        vlSelf->sim__DOT__picorv32__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_jalr) 
               | ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                   >> 0xcU))) | ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                                      >> 0xcU))) 
                                                 | ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                                         >> 0xcU))) 
                                                    | ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                                            >> 0xcU))) 
                                                       | ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                                               >> 0xcU))) 
                                                          | (7U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                                                 >> 0xcU))))))))));
        vlSelf->sim__DOT__picorv32__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelf->sim__DOT__picorv32__DOT__is_compare = 0U;
        vlSelf->sim__DOT__picorv32__DOT__decoded_imm 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_jal)
                ? vlSelf->sim__DOT__picorv32__DOT__decoded_imm_j
                : (((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_lui) 
                    | (IData)(vlSelf->sim__DOT__picorv32__DOT__instr_auipc))
                    ? VL_SHIFTL_III(32,32,32, (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                               >> 0xcU), 0xcU)
                    : (((IData)(vlSelf->sim__DOT__picorv32__DOT__instr_jalr) 
                        | ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                                >> 0x14U))
                        : ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((0x1000U 
                                              & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                                         >> 7U))))))
                            : ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
    }
}

VL_INLINE_OPT void Vsim___024root___nba_sequent__TOP__11(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu;
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
           | ((IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
              | (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu)));
    vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelf->sim__DOT__picorv32__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelf->sim__DOT__picorv32__DOT__pcpi_div_wait));
    vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 0U;
    if ((((IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn) 
          & (IData)(vlSelf->sim__DOT__picorv325)) & 
         (0x2000033U == (0xfe00007fU & vlSelf->sim__DOT__picorv326)))) {
        if ((0U == (7U & (vlSelf->sim__DOT__picorv326 
                          >> 0xcU)))) {
            vlSelf->sim__DOT__picorv32__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 1U;
        }
    }
    if (((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst) 
         & (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_done))) {
        vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_imm 
            = (0x13U == (0x7fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched));
        vlSelf->sim__DOT__picorv32__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x7fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched));
        vlSelf->sim__DOT__picorv32__DOT__is_sb_sh_sw 
            = (0x23U == (0x7fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched));
        vlSelf->sim__DOT__picorv32__DOT__decoded_imm_j 
            = ((0xfffffU & vlSelf->sim__DOT__picorv32__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x1ffffeU 
                                               & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched 
                                                  >> 0xbU)))));
        vlSelf->sim__DOT__picorv32__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSelf->sim__DOT__picorv32__DOT__decoded_imm_j) 
               | (0x7feU & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched 
                                                     >> 0xbU))) 
                            >> 9U)));
        vlSelf->sim__DOT__picorv32__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSelf->sim__DOT__picorv32__DOT__decoded_imm_j) 
               | (0x800U & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched 
                                                     >> 0xbU))) 
                            << 2U)));
        vlSelf->sim__DOT__picorv32__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSelf->sim__DOT__picorv32__DOT__decoded_imm_j) 
               | (0xff000U & (VL_EXTENDS_II(32,21, 
                                            (0x1ffffeU 
                                             & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched 
                                                >> 0xbU))) 
                              << 0xbU)));
        vlSelf->sim__DOT__picorv32__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSelf->sim__DOT__picorv32__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x1ffffeU 
                                            & (vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched 
                                               >> 0xbU)))));
        vlSelf->sim__DOT__picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x7fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched));
        vlSelf->sim__DOT__picorv32__DOT__instr_auipc 
            = (0x17U == (0x7fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched));
        vlSelf->sim__DOT__picorv32__DOT__instr_lui 
            = (0x37U == (0x7fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched));
        vlSelf->sim__DOT__picorv32__DOT__instr_jal 
            = (0x6fU == (0x7fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched));
        vlSelf->sim__DOT__picorv32__DOT__instr_jalr 
            = (IData)((0x67U == (0x707fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched)));
    }
    if ((1U & (~ (IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn)))) {
        vlSelf->sim__DOT__picorv32__DOT__is_compare = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_beq = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_bne = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_blt = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_bge = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_bltu = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_bgeu = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_addi = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_slti = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_sltiu = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_xori = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_ori = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_andi = 0U;
        vlSelf->sim__DOT__picorv32__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
    }
    if (((IData)(vlSelf->sim__DOT__picorv32__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__decoder_pseudo_trigger)))) {
        vlSelf->sim__DOT__picorv32__DOT__instr_add 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_reg) 
               & (0U == (0xfe007000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_sub 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_reg) 
               & (0x40000000U == (0xfe007000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_sll 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_reg) 
               & (0x1000U == (0xfe007000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_slt 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_reg) 
               & (0x2000U == (0xfe007000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_sltu 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_reg) 
               & (0x3000U == (0xfe007000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_xor 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_reg) 
               & (0x4000U == (0xfe007000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_srl 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_reg) 
               & (0x5000U == (0xfe007000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_sra 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_reg) 
               & (0x40005000U == (0xfe007000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_or = 
            ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_reg) 
             & (0x6000U == (0xfe007000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__instr_and 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_reg) 
               & (0x7000U == (0xfe007000U & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q)));
        vlSelf->sim__DOT__picorv32__DOT__is_sll_srl_sra 
            = ((IData)(vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_reg) 
               & ((IData)((0x1000U == (0xfe007000U 
                                       & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q))) 
                  | ((IData)((0x5000U == (0xfe007000U 
                                          & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q))))));
    }
}

VL_INLINE_OPT void Vsim___024root___nba_sequent__TOP__12(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__12\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn)))) {
        vlSelf->sim__DOT__picorv32__DOT__instr_add = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_sub = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_sll = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_slt = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_sltu = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_xor = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_srl = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_sra = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_or = 0U;
        vlSelf->sim__DOT__picorv32__DOT__instr_and = 0U;
    }
    vlSelf->sim__DOT__picorv325 = vlSelf->__Vdly__sim__DOT__picorv325;
    vlSelf->sim__DOT____Vcellinp__picorv32__resetn 
        = (1U & (~ ((IData)(vlSelf->sim__DOT__int_rst) 
                    | ((IData)(vlSelf->sim__DOT__soc_rst) 
                       | ((IData)(vlSelf->sim__DOT__reset_storage) 
                          >> 1U)))));
    if (((IData)(vlSelf->sim__DOT__picorv32__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->sim__DOT__picorv32__DOT__decoder_pseudo_trigger)))) {
        vlSelf->sim__DOT__picorv326 = vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q;
    }
    vlSelf->sim__DOT__picorv321 = ((IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn) 
                                   & ((~ (IData)((0U 
                                                  != (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_state)))) 
                                      & (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_wdata)));
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
    if (((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst) 
         & (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_done))) {
        vlSelf->sim__DOT__picorv32__DOT__is_alu_reg_reg 
            = (0x33U == (0x7fU & vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched));
    }
    vlSelf->sim__DOT__picorv32__DOT__decoder_pseudo_trigger 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__decoder_pseudo_trigger;
    vlSelf->sim__DOT__picorv32__DOT__decoder_trigger 
        = vlSelf->__Vdly__sim__DOT__picorv32__DOT__decoder_trigger;
    vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst = vlSelf->__Vdly__sim__DOT__picorv32__DOT__mem_do_rinst;
    if (vlSelf->sim__DOT__picorv32__DOT__mem_xfer) {
        vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q 
            = vlSelf->sim__DOT__shared_dat_r;
    }
    vlSelf->sim__DOT__picorv320 = ((IData)(vlSelf->sim__DOT____Vcellinp__picorv32__resetn) 
                                   & ((~ (IData)((0U 
                                                  != (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_state)))) 
                                      & ((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rinst) 
                                         | ((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_prefetch) 
                                            | (IData)(vlSelf->sim__DOT__picorv32__DOT__mem_do_rdata)))));
    vlSelf->sim__DOT__picorv32__DOT__mem_xfer = ((IData)(vlSelf->sim__DOT__shared_ack) 
                                                 & (IData)(vlSelf->sim__DOT__picorv32_mem_valid));
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
}

VL_INLINE_OPT void Vsim___024root___nba_sequent__TOP__13(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__13\n"); );
    // Body
    vlSelf->sim__DOT__picorv32__DOT__mem_rdata_latched 
        = ((IData)(vlSelf->sim__DOT__picorv32__DOT__mem_xfer)
            ? vlSelf->sim__DOT__shared_dat_r : vlSelf->sim__DOT__picorv32__DOT__mem_rdata_q);
}

void Vsim___024root___nba_sequent__TOP__0(Vsim___024root* vlSelf);
void Vsim___024root___nba_sequent__TOP__1(Vsim___024root* vlSelf);
void Vsim___024root___nba_sequent__TOP__2(Vsim___024root* vlSelf);
void Vsim___024root___nba_sequent__TOP__3(Vsim___024root* vlSelf);
void Vsim___024root___nba_sequent__TOP__4(Vsim___024root* vlSelf);
void Vsim___024root___nba_sequent__TOP__5(Vsim___024root* vlSelf);
void Vsim___024root___nba_sequent__TOP__6(Vsim___024root* vlSelf);
void Vsim___024root___nba_sequent__TOP__7(Vsim___024root* vlSelf);
void Vsim___024root___nba_sequent__TOP__8(Vsim___024root* vlSelf);
void Vsim___024root___nba_sequent__TOP__9(Vsim___024root* vlSelf);

void Vsim___024root___eval_nba(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsim___024root___nba_sequent__TOP__0(vlSelf);
        Vsim___024root___nba_sequent__TOP__1(vlSelf);
        Vsim___024root___nba_sequent__TOP__2(vlSelf);
        Vsim___024root___nba_sequent__TOP__3(vlSelf);
        Vsim___024root___nba_sequent__TOP__4(vlSelf);
        Vsim___024root___nba_sequent__TOP__5(vlSelf);
        Vsim___024root___nba_sequent__TOP__6(vlSelf);
        Vsim___024root___nba_sequent__TOP__7(vlSelf);
        Vsim___024root___nba_sequent__TOP__8(vlSelf);
        Vsim___024root___nba_sequent__TOP__9(vlSelf);
        Vsim___024root___nba_sequent__TOP__10(vlSelf);
        Vsim___024root___nba_sequent__TOP__11(vlSelf);
        Vsim___024root___nba_sequent__TOP__12(vlSelf);
        Vsim___024root___nba_sequent__TOP__13(vlSelf);
    }
}

void Vsim___024root___eval_triggers__act(Vsim___024root* vlSelf);
void Vsim___024root___eval_act(Vsim___024root* vlSelf);

bool Vsim___024root___eval_phase__act(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsim___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vsim___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsim___024root___eval_phase__nba(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsim___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__ico(Vsim___024root* vlSelf);
#endif  // VL_DEBUG
bool Vsim___024root___eval_phase__ico(Vsim___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__nba(Vsim___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim___024root___dump_triggers__act(Vsim___024root* vlSelf);
#endif  // VL_DEBUG

void Vsim___024root___eval(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vsim___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/nguyen-van-thuc/ic_workspace/my_soc_workspace/projects/soc_mini/build/sim/gateware/sim.v", 23, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vsim___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsim___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/nguyen-van-thuc/ic_workspace/my_soc_workspace/projects/soc_mini/build/sim/gateware/sim.v", 23, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vsim___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/nguyen-van-thuc/ic_workspace/my_soc_workspace/projects/soc_mini/build/sim/gateware/sim.v", 23, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vsim___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vsim___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsim___024root___eval_debug_assertions(Vsim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->serial_sink_valid & 0xfeU))) {
        Verilated::overWidthError("serial_sink_valid");}
    if (VL_UNLIKELY((vlSelf->serial_source_ready & 0xfeU))) {
        Verilated::overWidthError("serial_source_ready");}
    if (VL_UNLIKELY((vlSelf->sys_clk & 0xfeU))) {
        Verilated::overWidthError("sys_clk");}
}
#endif  // VL_DEBUG

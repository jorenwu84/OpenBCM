/*----------------------------------------------------------------------
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *
 * Broadcom Corporation                                                 
 * Proprietary and Confidential information                             
 * All rights reserved                                                  
 * This source file is the property of Broadcom Corporation, and        
 * may not be copied or distributed in any isomorphic form without the  
 * prior written consent of Broadcom Corporation.                       
 *--------------------------------------------------------------------- 
 * Description: This file is automatically generated. It contains enums,
 * elems, and doxygen comments needed for SerDes Configuration programs.
 *--------------------------------------------------------------------- 
 * CVS INFORMATION:                                                     
 * Please see inc/enum_desc.txt for CVS information.                    
 *----------------------------------------------------------------------
 */

/* This file is automatically generated. Do not modify it. Modify the
 * inc/enum_desc.txt to change enums, elems, or comments. For issues about
 * the process that creates this file contact the tscmod development team.
 */

#include "tscmod_enum_defines.h"

char* e2s_tscmod_lane_select [CNT_tscmod_lane_select] = {
  "TSCMOD_LANE_0_0_0_1" ,
  "TSCMOD_LANE_0_0_1_0" ,
  "TSCMOD_LANE_0_0_1_1" ,
  "TSCMOD_LANE_0_1_0_0" ,
  "TSCMOD_LANE_0_1_0_1" ,
  "TSCMOD_LANE_0_1_1_0" ,
  "TSCMOD_LANE_0_1_1_1" ,
  "TSCMOD_LANE_1_0_0_0" ,
  "TSCMOD_LANE_1_0_0_1" ,
  "TSCMOD_LANE_1_0_1_0" ,
  "TSCMOD_LANE_1_0_1_1" ,
  "TSCMOD_LANE_1_1_0_0" ,
  "TSCMOD_LANE_1_1_0_1" ,
  "TSCMOD_LANE_1_1_1_0" ,
  "TSCMOD_LANE_1_1_1_1" ,
  "TSCMOD_LANE_BCST" ,
  "TSCMOD_LANE_ILLEGAL" 
}; /* e2s_tscmod_lane_select */

int e2n_tscmod_lane_select [CNT_tscmod_lane_select] = {
  1 ,
  2 ,
  3 ,
  4 ,
  5 ,
  6 ,
  7 ,
  8 ,
  9 ,
  10 ,
  11 ,
  12 ,
  13 ,
  14 ,
  15 ,
  15 ,
  0 
}; /* e2n_tscmod_lane_select */

char* e2s_tscmod_spd_intfc_type [CNT_tscmod_spd_intfc_type] = {
  "TSCMOD_SPD_ZERO" ,
  "TSCMOD_SPD_10_SGMII" ,
  "TSCMOD_SPD_100_SGMII" ,
  "TSCMOD_SPD_1000_SGMII" ,
  "TSCMOD_SPD_2500" ,
  "TSCMOD_SPD_5000" ,
  "TSCMOD_SPD_10000_XFI" ,
  "TSCMOD_SPD_10600_XFI_HG" ,
  "TSCMOD_SPD_10000_HI" ,
  "TSCMOD_SPD_10000" ,
  "TSCMOD_SPD_12000_HI" ,
  "TSCMOD_SPD_13000" ,
  "TSCMOD_SPD_15000" ,
  "TSCMOD_SPD_16000" ,
  "TSCMOD_SPD_20000" ,
  "TSCMOD_SPD_20000_SCR" ,
  "TSCMOD_SPD_21000" ,
  "TSCMOD_SPD_25455" ,
  "TSCMOD_SPD_31500" ,
  "TSCMOD_SPD_40G_X4" ,
  "TSCMOD_SPD_42G_X4" ,
  "TSCMOD_SPD_40G_MLD" ,
  "TSCMOD_SPD_42G_MLD" ,
  "TSCMOD_SPD_10000_X2" ,
  "TSCMOD_SPD_10000_HI_DXGXS" ,
  "TSCMOD_SPD_10000_DXGXS" ,
  "TSCMOD_SPD_10000_HI_DXGXS_SCR" ,
  "TSCMOD_SPD_10000_DXGXS_SCR" ,
  "TSCMOD_SPD_10500_HI_DXGXS" ,
  "TSCMOD_SPD_12773_HI_DXGXS" ,
  "TSCMOD_SPD_12773_DXGXS" ,
  "TSCMOD_SPD_15750_HI_DXGXS" ,
  "TSCMOD_SPD_20G_MLD_DXGXS" ,
  "TSCMOD_SPD_21G_HI_MLD_DXGXS" ,
  "TSCMOD_SPD_20G_DXGXS" ,
  "TSCMOD_SPD_21G_HI_DXGXS" ,
  "TSCMOD_SPD_100G_CR10" ,
  "TSCMOD_SPD_120G_CR12" ,
  "TSCMOD_SPD_ILLEGAL" 
}; /* e2s_tscmod_spd_intfc_type */

int e2n_tscmod_spd_intfc_type [CNT_tscmod_spd_intfc_type] = {
  0 ,
  10 ,
  100 ,
  1000 ,
  2500 ,
  5000 ,
  10000 ,
  10500 ,
  10000 ,
  10000 ,
  12000 ,
  13000 ,
  15000 ,
  16000 ,
  20000 ,
  20000 ,
  21000 ,
  25455 ,
  31500 ,
  40000 ,
  42000 ,
  40000 ,
  42000 ,
  10000 ,
  10000 ,
  10000 ,
  10000 ,
  10000 ,
  10500 ,
  12773 ,
  12773 ,
  15750 ,
  20000 ,
  21000 ,
  20000 ,
  21000 ,
  100000 ,
  120000 ,
  0 
}; /* e2n_tscmod_spd_intfc_type */

char* e2s_tscmod_regacc_type [CNT_tscmod_regacc_type] = {
  "TSCMOD_MDIO_CL22" ,
  "TSCMOD_MDIO_CL45" ,
  "TSCMOD_MDIO_CL22_IEEE" ,
  "TSCMOD_MDIO_PCB" ,
  "TSCMOD_MDIO_TOTSC" ,
  "TSCMOD_MDIO_ILLEGAL" 
}; /* e2s_tscmod_regacc_type */

char* e2s_tscmod_port_type [CNT_tscmod_port_type] = {
  "TSCMOD_SINGLE_PORT" ,
  "TSCMOD_MULTI_PORT" ,
  "TSCMOD_DXGXS" ,
  "TSCMOD_PORT_MODE_ILLEGAL" 
}; /* e2s_tscmod_port_type */

char* e2s_tscmod_os_type [CNT_tscmod_os_type] = {
  "TSCMOD_OS1" ,
  "TSCMOD_OS2" ,
  "TSCMOD_OS3" ,
  "TSCMOD_OS3p3" ,
  "TSCMOD_OS5" ,
  "TSCMOD_OS6" ,
  "TSCMOD_OS_IND_LANE" ,
  "TSCMOD_OS8" ,
  "TSCMOD_OS8p25" ,
  "TSCMOD_OS_ILLEGAL" 
}; /* e2s_tscmod_os_type */

char* e2s_tscmod_duplex_type [CNT_tscmod_duplex_type] = {
  "TSCMOD_SIMPLEX" ,
  "TSCMOD_HALF_DUPLEX" ,
  "TSCMOD_DUPLEX" ,
  "TSCMOD_DUPLEX_ILLEGAL" 
}; /* e2s_tscmod_duplex_type */

char* e2s_tscmod_diag_type [CNT_tscmod_diag_type] = {
  "TSCMOD_DIAG_GENERAL" ,
  "TSCMOD_DIAG_LINK" ,
  "TSCMOD_DIAG_ANEG" ,
  "TSCMOD_DIAG_TFC" ,
  "TSCMOD_DIAG_DFE" ,
  "TSCMOD_DIAG_SLICERS" ,
  "TSCMOD_DIAG_TX_AMPS" ,
  "TSCMOD_DIAG_TX_TAPS" ,
  "TSCMOD_DIAG_RX_TAPS" ,
  "TSCMOD_DIAG_IEEE" ,
  "TSCMOD_DIAG_TOPOLOGY" ,
  "TSCMOD_DIAG_EEE" ,
  "TSCMOD_DIAG_EYE" ,
  "TSCMOD_DIAG_SPEED" ,
  "TSCMOD_DIAG_TX_LOOPBACK" ,
  "TSCMOD_DIAG_RX_LOOPBACK" ,
  "TSCMOD_DIAG_RX_PPM" ,
  "TSCMOD_DIAG_PRBS" ,
  "TSCMOD_DIAG_RX_SIGDET" ,
  "TSCMOD_DIAG_POKE" ,
  "TSCMOD_DIAG_CL72" ,
  "TSCMOD_DIAG_PLL" ,
  "TSCMOD_DIAG_PMD" ,
  "TSCMOD_DIAG_HG" ,
  "TSCMOD_DIAG_ALL" ,
  "TSCMOD_DIAG_ILLEGAL" 
}; /* e2s_tscmod_diag_type */

char* e2s_tscmod_diag_idx_type [CNT_tscmod_diag_idx_type] = {
  "TSCMOD_DIAG_GENERAL_IDX" ,
  "TSCMOD_DIAG_LINK_IDX" ,
  "TSCMOD_DIAG_ANEG_IDX" ,
  "TSCMOD_DIAG_TFC_IDX" ,
  "TSCMOD_DIAG_DFE_IDX" ,
  "TSCMOD_DIAG_SLICERS_IDX" ,
  "TSCMOD_DIAG_TX_AMPS_IDX" ,
  "TSCMOD_DIAG_TX_TAPS_IDX" ,
  "TSCMOD_DIAG_RX_TAPS_IDX" ,
  "TSCMOD_DIAG_IEEE_IDX" ,
  "TSCMOD_DIAG_TOPOLOGY_IDX" ,
  "TSCMOD_DIAG_EEE_IDX" ,
  "TSCMOD_DIAG_EYE_IDX" ,
  "TSCMOD_DIAG_SPEED_IDX" ,
  "TSCMOD_DIAG_TX_LOOPBACK_IDX" ,
  "TSCMOD_DIAG_RX_LOOPBACK_IDX" ,
  "TSCMOD_DIAG_RX_PPM_IDX" ,
  "TSCMOD_DIAG_PRBS_IDX" ,
  "TSCMOD_DIAG_RX_SIGDET_IDX" ,
  "TSCMOD_DIAG_POKE_IDX" ,
  "TSCMOD_DIAG_CL72_IDX" ,
  "TSCMOD_DIAG_PLL_IDX" ,
  "TSCMOD_DIAG_PMD_IDX" ,
  "TSCMOD_DIAG_HG_IDX" ,
  "TSCMOD_DIAG_ALL_IDX" ,
  "TSCMOD_DIAG_IDX_ILLEGAL" 
}; /* e2s_tscmod_diag_idx_type */

int e2n_tscmod_diag_idx_type [CNT_tscmod_diag_idx_type] = {
  0x1 ,
  0x2 ,
  0x4 ,
  0x8 ,
  0x10 ,
  0x20 ,
  0x40 ,
  0x80 ,
  0x100 ,
  0x200 ,
  0x400 ,
  0x800 ,
  0x1000 ,
  0x2000 ,
  0x4000 ,
  0x8000 ,
  0x10000 ,
  0x20000 ,
  0x40000 ,
  0x80000 ,
  0x100000,
  0x200000,
  0x400000,
  0xffffff ,
  0x0 
}; /* e2n_tscmod_diag_idx_type */

char* e2s_tscmod_diag_an_type [CNT_tscmod_diag_an_type] = {
  "TSCMOD_DIAG_AN_DONE" ,
  "TSCMOD_DIAG_AN_HCD" ,
  "TSCMOD_DIAG_AN_MODE" ,
  "TSCMOD_DIAG_AN_TYPE_ILLEGAL" 
}; /* e2s_tscmod_diag_an_type */

char* e2s_tscmod_diag_general_type [CNT_tscmod_diag_general_type] = {
  "TSCMOD_DIAG_G_INFO", 
  "TSCMOD_DIAG_G_PORT" ,
  "TSCMOD_DIAG_G_CFG" ,
  "TSCMOD_DIAG_G_SPEED" ,
  "TSCMOD_DIAG_G_AN" ,
  "TSCMOD_DIAG_G_DSC" ,
  "TSCMOD_DIAG_G_DSC_CFG" ,
  "TSCMOD_DIAG_G_UCODE" ,
  "TSCMOD_DIAG_G_PATTERN" ,
  "TSCMOD_DIAG_G_PATH" ,
  "TSCMOD_DIAG_G_PMAPMD" ,
  "TSCMOD_DIAG_G_CL72" ,
  "TSCMOD_DIAG_G_MISC1" ,
  "TSCMOD_DIAG_G_MISC2" ,
  "TSCMOD_DIAG_G_MISC3" ,
  "TSCMOD_DIAG_G_RXLOS" ,
  "TSCMOD_DIAG_G_TYPE_ILLEGAL" 
}; /* e2s_tscmod_diag_general_type */

char* e2s_tscmod_aspd_type [CNT_tscmod_aspd_type] = {
  "TSCMOD_ASPD_10M" ,
  "TSCMOD_ASPD_100M" ,
  "TSCMOD_ASPD_1000M" ,
  "TSCMOD_ASPD_2p5G_X1" ,
  "TSCMOD_ASPD_5G_X4" ,
  "TSCMOD_ASPD_6G_X4" ,
  "TSCMOD_ASPD_10G_X4" ,
  "TSCMOD_ASPD_10G_CX4" ,
  "TSCMOD_ASPD_12G_X4" ,
  "TSCMOD_ASPD_12p5G_X4" ,
  "TSCMOD_ASPD_13G_X4" ,
  "TSCMOD_ASPD_15G_X4" ,
  "TSCMOD_ASPD_16G_X4" ,
  "TSCMOD_ASPD_1G_KX1" ,
  "TSCMOD_ASPD_10G_KX4" ,
  "TSCMOD_ASPD_10G_KR1" ,
  "TSCMOD_ASPD_5G_X1" ,
  "TSCMOD_ASPD_6p36G_X1" ,
  "TSCMOD_ASPD_20G_CX4" ,
  "TSCMOD_ASPD_21G_X4" ,
  "TSCMOD_ASPD_25p45G_X4" ,
  "TSCMOD_ASPD_10G_X2_NOSCRAMBLE" ,
  "TSCMOD_ASPD_10G_CX2_NOSCRAMBLE" ,
  "TSCMOD_ASPD_10p5G_X2" ,
  "TSCMOD_ASPD_10p5G_CX2_NOSCRAMBLE" ,
  "TSCMOD_ASPD_12p7G_X2" ,
  "TSCMOD_ASPD_12p7G_CX2" ,
  "TSCMOD_ASPD_10G_X1" ,
  "TSCMOD_ASPD_40G_X4" ,
  "TSCMOD_ASPD_20G_X2" ,
  "TSCMOD_ASPD_20G_CX2" ,
  "TSCMOD_ASPD_10G_SFI" ,
  "TSCMOD_ASPD_31p5G_X4" ,
  "TSCMOD_ASPD_32p7G_X4" ,
  "TSCMOD_ASPD_20G_X4" ,
  "TSCMOD_ASPD_10G_X2" ,
  "TSCMOD_ASPD_10G_CX2" ,
  "TSCMOD_ASPD_12G_SCO_R2" ,
  "TSCMOD_ASPD_10G_SCO_X2" ,
  "TSCMOD_ASPD_40G_KR4" ,
  "TSCMOD_ASPD_40G_CR4" ,
  "TSCMOD_ASPD_100G_CR10" ,
  "TSCMOD_ASPD_5G_X2" ,
  "TSCMOD_ASPD_15p75G_X2" ,
  "TSCMOD_ASPD_2G_FC" ,
  "TSCMOD_ASPD_4G_FC" ,
  "TSCMOD_ASPD_8G_FC" ,
  "TSCMOD_ASPD_10G_CX1" ,
  "TSCMOD_ASPD_1G_CX1" ,
  "TSCMOD_ASPD_20G_KR2" ,
  "TSCMOD_ASPD_20G_CR2" ,
  "TSCMOD_ASPD_TYPE_ILLEGAL" 
}; /* e2s_tscmod_aspd_type */

int e2n_tscmod_aspd_type [CNT_tscmod_aspd_type] = {
  0x0 ,
  0x1 ,
  0x2 ,
  0x3 ,
  0x4 ,
  0x5 ,
  0x6 ,
  0x7 ,
  0x8 ,
  0x9 ,
  0xa ,
  0xb ,
  0xc ,
  0xd ,
  0xe ,
  0xf ,
  0x10 ,
  0x11 ,
  0x12 ,
  0x13 ,
  0x14 ,
  0x15 ,
  0x16 ,
  0x17 ,
  0x18 ,
  0x19 ,
  0x1a ,
  0x1b ,
  0x1c ,
  0x1d ,
  0x1e ,
  0x1f ,
  0x20 ,
  0x21 ,
  0x22 ,
  0x23 ,
  0x24 ,
  0x25 ,
  0x26 ,
  0x27 ,
  0x28 ,
  0x29 ,
  0x2a ,
  0x2c ,
  0x2e ,
  0x2f ,
  0x30 ,
  0x33 ,
  0x34 ,
  0x39 ,
  0x3a ,
  0xff 
}; /* e2n_tscmod_aspd_type */

char* e2s_tscmod_model_type [CNT_tscmod_model_type] = {
  "TSCMOD_WC" ,
  "TSCMOD_A0" ,
  "TSCMOD_MODEL_TYPE_ILLEGAL" 
}; /* e2s_tscmod_model_type */

char* e2s_tscmod_an_type [CNT_tscmod_an_type] = {
  "TSCMOD_AN_NONE" ,
  "TSCMOD_CL73" ,
  "TSCMOD_CL37" ,
  "TSCMOD_CL37_10G" ,
  "TSCMOD_CL73_BAM" ,
  "TSCMOD_CL37_BAM" ,
  "TSCMOD_CL37_SGMII" ,
  "TSCMOD_HPAM" ,
  "TSCMOD_AN_TYPE_ILLEGAL" 
}; /* e2s_tscmod_an_type */

char* e2s_tscmod_tech_ability [CNT_tscmod_tech_ability] = {
  "TSCMOD_ABILITY_1G_KX" ,
  "TSCMOD_ABILITY_10G_KX4" ,
  "TSCMOD_ABILITY_10G_KR" ,
  "TSCMOD_ABILITY_40G_KR4" ,
  "TSCMOD_ABILITY_40G_CR4" ,
  "TSCMOD_ABILITY_100G_CR10" ,
  "TSCMOD_ABILITY_20G_KR2" ,
  "TSCMOD_ABILITY_20G_CR2" ,
  "TSCMOD_ABILITY_ILLEGAL" 
}; /* e2s_tscmod_tech_ability */

int e2n_tscmod_tech_ability [CNT_tscmod_tech_ability] = {
  0x5 ,
  0x4 ,
  0x3 ,
  0x2 ,
  0x1 ,
  0x0 ,
  0x100 ,
  0x101 ,
  0x999 
}; /* e2n_tscmod_tech_ability */

char* e2s_tscmod_cl37bam_ability [CNT_tscmod_cl37bam_ability] = {
  "TSCMOD_BAM37ABL_2P5G" ,
  "TSCMOD_BAM37ABL_5G_X4" ,
  "TSCMOD_BAM37ABL_6G_X4" ,
  "TSCMOD_BAM37ABL_10G_HIGIG" ,
  "TSCMOD_BAM37ABL_10G_CX4" ,
  "TSCMOD_BAM37ABL_12G_X4" ,
  "TSCMOD_BAM37ABL_12P5_X4" ,
  "TSCMOD_BAM37ABL_13G_X4" ,
  "TSCMOD_BAM37ABL_15G_X4" ,
  "TSCMOD_BAM37ABL_16G_X4" ,
  "TSCMOD_BAM37ABL_20G_X4_CX4" ,
  "TSCMOD_BAM37ABL_20G_X4" ,
  "TSCMOD_BAM37ABL_21G_X4" ,
  "TSCMOD_BAM37ABL_25P455G" ,
  "TSCMOD_BAM37ABL_31P5G" ,
  "TSCMOD_BAM37ABL_32P7G" ,
  "TSCMOD_BAM37ABL_40G" ,
  "TSCMOD_BAM37ABL_10G_X2_CX4" ,
  "TSCMOD_BAM37ABL_10G_DXGXS" ,
  "TSCMOD_BAM37ABL_10P5G_DXGXS" ,
  "TSCMOD_BAM37ABL_12P7_DXGXS" ,
  "TSCMOD_BAM37ABL_15P75G_R2" ,
  "TSCMOD_BAM37ABL_20G_X2_CX4" ,
  "TSCMOD_BAM37ABL_20G_X2" ,
  "TSCMOD_BAM37ABL_ILLEGAL" 
}; /* e2s_tscmod_cl37bam_ability */

int e2n_tscmod_cl37bam_ability [CNT_tscmod_cl37bam_ability] = {
  0x200 ,
  0x201 ,
  0x202 ,
  0x203 ,
  0x204 ,
  0x208 ,
  0x209 ,
  0x300 ,
  0x301 ,
  0x303 ,
  0x304 ,
  0x305 ,
  0x308 ,
  0x309 ,
  0x30a ,
  0x30b ,
  0x30c ,
  0x206 ,
  0x205 ,
  0x207 ,
  0x20a ,
  0x302 ,
  0x307 ,
  0x306 ,
  0x999 
}; /* e2n_tscmod_cl37bam_ability */

char* e2s_tscmod_eye_direction [CNT_tscmod_eye_direction] = {
  "TSCMOD_EYE_VU" ,
  "TSCMOD_EYE_VD" ,
  "TSCMOD_EYE_HL" ,
  "TSCMOD_EYE_HR" ,
  "TSCMOD_EYE_ILLEGAL" 
}; /* e2s_tscmod_eye_direction */


/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */

#include <sal/core/libc.h>
#include <shared/swstate/sw_state.h>
#include <shared/error.h>
#include <shared/swstate/sw_state_defs.h>
#include <shared/bsl.h>
#include <shared/swstate/sw_state_dump.h>
#include <shared/swstate/diagnostic/sw_state_diagnostic.h>
#include <shared/swstate/diagnostic/sw_state_dpp_bcm_linkbonding_diagnostic.h>

#ifdef BCM_WARM_BOOT_API_TEST
#ifdef _ERR_MSG_MODULE_NAME
    #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE

extern shr_sw_state_t *sw_state[BCM_MAX_NUM_UNITS];

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_linkbonding_dump(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    {
        uint32 j0, J0;
        sw_state_get_nof_elements(unit, sw_state[unit]->dpp.bcm.linkbonding, sizeof(*sw_state[unit]->dpp.bcm.linkbonding), &j0 ,&J0);
        for (; j0 < J0; j0++) {
            shr_sw_state_dump_update_current_idx(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.linkbonding.lbg_valid_bmp.dump(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.linkbonding.modem_to_ports.dump(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.linkbonding.port_to_lbg.dump(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.linkbonding.modem_to_ing_lbg.dump(unit, j0);
            sw_state_diagnostic[unit].dpp.bcm.linkbonding.modem_to_egr_lbg.dump(unit, j0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_linkbonding_lbg_valid_bmp_dump(int unit, int linkbonding_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        uint32 j0, J0;
        sw_state_get_nof_elements(unit, sw_state[unit]->dpp.bcm.linkbonding->lbg_valid_bmp, sizeof(*sw_state[unit]->dpp.bcm.linkbonding->lbg_valid_bmp), &j0 ,&J0);
        for (; j0 < J0; j0++) {
            shr_sw_state_dump_update_current_idx(unit, j0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.linkbonding->lbg_valid_bmp[j0],
                "sw_state[%d]->dpp.bcm.linkbonding->lbg_valid_bmp[%d]: ", unit, j0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_linkbonding_modem_to_ports_dump(int unit, int linkbonding_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.bcm.linkbonding->modem_to_ports
            , sizeof(*sw_state[unit]->dpp.bcm.linkbonding->modem_to_ports), SOC_TMC_LB_NOF_MODEM) ? SOC_TMC_LB_NOF_MODEM - 1 : 0;
        for (; i0 < SOC_TMC_LB_NOF_MODEM; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.linkbonding->modem_to_ports[i0],
                "sw_state[%d]->dpp.bcm.linkbonding->modem_to_ports[%d]: ", unit, i0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_linkbonding_port_to_lbg_dump(int unit, int linkbonding_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.bcm.linkbonding->port_to_lbg
            , sizeof(*sw_state[unit]->dpp.bcm.linkbonding->port_to_lbg), SOC_MAX_NUM_PORTS) ? SOC_MAX_NUM_PORTS - 1 : 0;
        for (; i0 < SOC_MAX_NUM_PORTS; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.linkbonding->port_to_lbg[i0],
                "sw_state[%d]->dpp.bcm.linkbonding->port_to_lbg[%d]: ", unit, i0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_linkbonding_modem_to_ing_lbg_dump(int unit, int linkbonding_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.bcm.linkbonding->modem_to_ing_lbg
            , sizeof(*sw_state[unit]->dpp.bcm.linkbonding->modem_to_ing_lbg), SOC_TMC_LB_NOF_MODEM) ? SOC_TMC_LB_NOF_MODEM - 1 : 0;
        for (; i0 < SOC_TMC_LB_NOF_MODEM; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.linkbonding->modem_to_ing_lbg[i0],
                "sw_state[%d]->dpp.bcm.linkbonding->modem_to_ing_lbg[%d]: ", unit, i0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_bcm_linkbonding_modem_to_egr_lbg_dump(int unit, int linkbonding_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    {
        int i0;
        i0 = shr_sw_state_dump_check_all_the_same(unit, sw_state[unit]->dpp.bcm.linkbonding->modem_to_egr_lbg
            , sizeof(*sw_state[unit]->dpp.bcm.linkbonding->modem_to_egr_lbg), SOC_TMC_LB_NOF_MODEM) ? SOC_TMC_LB_NOF_MODEM - 1 : 0;
        for (; i0 < SOC_TMC_LB_NOF_MODEM; i0++) {
            shr_sw_state_dump_update_current_idx(unit, i0);
            SW_STATE_PRINT_OPAQUE(unit, sw_state[unit]->dpp.bcm.linkbonding->modem_to_egr_lbg[i0],
                "sw_state[%d]->dpp.bcm.linkbonding->modem_to_egr_lbg[%d]: ", unit, i0);
        }
        shr_sw_state_dump_end_of_stride(unit);
    }
    SW_STATE_FUNC_RETURN;
}

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 


int
sw_state_dpp_bcm_linkbonding_diagnostic_cb_init(int unit){
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_diagnostic[unit].dpp.bcm.linkbonding.dump = sw_state_dpp_bcm_linkbonding_dump;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_diagnostic[unit].dpp.bcm.linkbonding.lbg_valid_bmp.dump = sw_state_dpp_bcm_linkbonding_lbg_valid_bmp_dump;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_diagnostic[unit].dpp.bcm.linkbonding.modem_to_ports.dump = sw_state_dpp_bcm_linkbonding_modem_to_ports_dump;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_diagnostic[unit].dpp.bcm.linkbonding.port_to_lbg.dump = sw_state_dpp_bcm_linkbonding_port_to_lbg_dump;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_diagnostic[unit].dpp.bcm.linkbonding.modem_to_ing_lbg.dump = sw_state_dpp_bcm_linkbonding_modem_to_ing_lbg_dump;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
    sw_state_diagnostic[unit].dpp.bcm.linkbonding.modem_to_egr_lbg.dump = sw_state_dpp_bcm_linkbonding_modem_to_egr_lbg_dump;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
    return _SHR_E_NONE;
}

#undef _ERR_MSG_MODULE_NAME
#endif /* BCM_WARM_BOOT_API_TEST */

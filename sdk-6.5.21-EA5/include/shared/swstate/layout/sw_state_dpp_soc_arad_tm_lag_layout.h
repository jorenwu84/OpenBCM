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
#ifndef _SHR_sw_state_dpp_soc_arad_tm_lag_H_
#define _SHR_sw_state_dpp_soc_arad_tm_lag_H_


#define SW_STATE_DPP_SOC_ARAD_TM_LAG_IN_USE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SOC_ARAD_TM_LAG_LOCAL_TO_REASSEMBLY_CONTEXT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SOC_ARAD_TM_LAG_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SOC_ARAD_TM_LAG_IN_USE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SOC_ARAD_TM_LAG_LOCAL_TO_REASSEMBLY_CONTEXT_LAYOUT_NOF_MAX_LAYOUT_NODES) 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_soc_arad_tm_lag_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_soc_arad_tm_lag_in_use_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_soc_arad_tm_lag_local_to_reassembly_context_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#endif /* _SHR_sw_state_dpp_soc_arad_tm_lag_H_ */

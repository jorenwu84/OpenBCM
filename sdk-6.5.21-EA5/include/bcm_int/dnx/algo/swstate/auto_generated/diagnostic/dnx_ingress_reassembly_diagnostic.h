/** \file algo/swstate/auto_generated/diagnostic/dnx_ingress_reassembly_diagnostic.h
 *
 * sw state functions declarations
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef __DNX_INGRESS_REASSEMBLY_DIAGNOSTIC_H__
#define __DNX_INGRESS_REASSEMBLY_DIAGNOSTIC_H__

#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/dnx_sw_state_size.h>
#include <soc/dnxc/swstate/dnx_sw_state_diagnostic_operation_counters.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/dnx_ingress_reassembly_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/port/port_ingr_reassembly.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_egr_queuing.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_ingr_reassembly.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
typedef enum {
    DNX_INGRESS_REASSEMBLY_DB_INFO,
    DNX_INGRESS_REASSEMBLY_DB_ALLOC_INFO,
    DNX_INGRESS_REASSEMBLY_DB_RCY_INFO,
    DNX_INGRESS_REASSEMBLY_DB_RCY_REASSEMBLY_CONTEXT_INFO,
    DNX_INGRESS_REASSEMBLY_DB_MIRROR_INFO,
    DNX_INGRESS_REASSEMBLY_DB_MIRROR_INFO_INFO,
    DNX_INGRESS_REASSEMBLY_DB_MIRROR_INFO_REASSEMBLY_CONTEXT_INFO,
    DNX_INGRESS_REASSEMBLY_DB_MIRROR_INFO_REF_COUNT_INFO,
    DNX_INGRESS_REASSEMBLY_DB_DISABLED_CONTEXT_INFO,
    DNX_INGRESS_REASSEMBLY_DB_INFO_NOF_ENTRIES
} sw_state_dnx_ingress_reassembly_db_layout_e;


extern dnx_sw_state_diagnostic_info_t dnx_ingress_reassembly_db_info[SOC_MAX_NUM_DEVICES][DNX_INGRESS_REASSEMBLY_DB_INFO_NOF_ENTRIES];

extern const char* dnx_ingress_reassembly_db_layout_str[DNX_INGRESS_REASSEMBLY_DB_INFO_NOF_ENTRIES];
int dnx_ingress_reassembly_db_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_ingress_reassembly_db_alloc_dump(
    int unit, int alloc_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_ingress_reassembly_db_rcy_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_ingress_reassembly_db_rcy_reassembly_context_dump(
    int unit, int reassembly_context_idx_0, int reassembly_context_idx_1, int reassembly_context_idx_2, dnx_sw_state_dump_filters_t filters);

int dnx_ingress_reassembly_db_mirror_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_ingress_reassembly_db_mirror_info_dump(
    int unit, int info_idx_0, int info_idx_1, int info_idx_2, dnx_sw_state_dump_filters_t filters);

int dnx_ingress_reassembly_db_mirror_info_reassembly_context_dump(
    int unit, int info_idx_0, int info_idx_1, int info_idx_2, dnx_sw_state_dump_filters_t filters);

int dnx_ingress_reassembly_db_mirror_info_ref_count_dump(
    int unit, int info_idx_0, int info_idx_1, int info_idx_2, dnx_sw_state_dump_filters_t filters);

int dnx_ingress_reassembly_db_disabled_context_dump(
    int unit, int disabled_context_idx_0, dnx_sw_state_dump_filters_t filters);

#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_INGRESS_REASSEMBLY_DIAGNOSTIC_H__ */

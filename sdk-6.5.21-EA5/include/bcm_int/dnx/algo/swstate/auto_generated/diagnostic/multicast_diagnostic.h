/** \file algo/swstate/auto_generated/diagnostic/multicast_diagnostic.h
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

#ifndef __MULTICAST_DIAGNOSTIC_H__
#define __MULTICAST_DIAGNOSTIC_H__

#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/dnx_sw_state_size.h>
#include <soc/dnxc/swstate/dnx_sw_state_diagnostic_operation_counters.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/multicast_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
typedef enum {
    MULTICAST_DB_INFO,
    MULTICAST_DB_MCDB_INFO,
    MULTICAST_DB_GROUP_IS_TDM_INFO,
    MULTICAST_DB_INFO_NOF_ENTRIES
} sw_state_multicast_db_layout_e;


extern dnx_sw_state_diagnostic_info_t multicast_db_info[SOC_MAX_NUM_DEVICES][MULTICAST_DB_INFO_NOF_ENTRIES];

extern const char* multicast_db_layout_str[MULTICAST_DB_INFO_NOF_ENTRIES];
int multicast_db_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int multicast_db_mcdb_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int multicast_db_group_is_tdm_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __MULTICAST_DIAGNOSTIC_H__ */

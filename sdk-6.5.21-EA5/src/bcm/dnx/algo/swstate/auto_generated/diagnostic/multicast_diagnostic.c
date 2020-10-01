/** \file algo/swstate/auto_generated/diagnostic/multicast_diagnostic.c
 *
 * sw state functions definitions
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

#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_SWSTATEDNX_GENERAL

#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/multicast_diagnostic.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
/*
 * Global Variables
 */

extern multicast_sw_state_t * multicast_db_data[SOC_MAX_NUM_DEVICES];
/*
 * FUNCTIONs
 */

/*
 *
 * dump function for the variable multicast_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
multicast_db_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;
    SHR_IF_ERR_EXIT(multicast_db_mcdb_dump(unit, filters));
    SHR_IF_ERR_EXIT(multicast_db_group_is_tdm_dump(unit, filters));
    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable mcdb
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
multicast_db_mcdb_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "multicast mcdb") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate multicast mcdb\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "multicast_db/mcdb.txt",
            "multicast_db[%d]->","((multicast_sw_state_t*)sw_state_roots_array[%d][MULTICAST_MODULE_ID])->","mcdb: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((multicast_sw_state_t*)sw_state_roots_array[unit][MULTICAST_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "multicast_db[%d]->","((multicast_sw_state_t*)sw_state_roots_array[%d][MULTICAST_MODULE_ID])->","mcdb: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            MULTICAST_MODULE_ID,
            &((multicast_sw_state_t*)sw_state_roots_array[unit][MULTICAST_MODULE_ID])->mcdb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable group_is_tdm
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
multicast_db_group_is_tdm_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "multicast group_is_tdm") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate multicast group_is_tdm\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "multicast_db/group_is_tdm.txt",
            "multicast_db[%d]->","((multicast_sw_state_t*)sw_state_roots_array[%d][MULTICAST_MODULE_ID])->","group_is_tdm: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((multicast_sw_state_t*)sw_state_roots_array[unit][MULTICAST_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "multicast_db[%d]->","((multicast_sw_state_t*)sw_state_roots_array[%d][MULTICAST_MODULE_ID])->","group_is_tdm: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            MULTICAST_MODULE_ID,
            &((multicast_sw_state_t*)sw_state_roots_array[unit][MULTICAST_MODULE_ID])->group_is_tdm);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 * Global Variables
 */

dnx_sw_state_diagnostic_info_t multicast_db_info[SOC_MAX_NUM_DEVICES][MULTICAST_DB_INFO_NOF_ENTRIES];
const char* multicast_db_layout_str[MULTICAST_DB_INFO_NOF_ENTRIES] = {
    "MULTICAST_DB~",
    "MULTICAST_DB~MCDB~",
    "MULTICAST_DB~GROUP_IS_TDM~",
};
#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE

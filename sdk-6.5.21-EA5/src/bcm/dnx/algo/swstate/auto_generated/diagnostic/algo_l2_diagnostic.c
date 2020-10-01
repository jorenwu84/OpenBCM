/** \file algo/swstate/auto_generated/diagnostic/algo_l2_diagnostic.c
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

#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/algo_l2_diagnostic.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
/*
 * Global Variables
 */

extern algo_l2_sw_state_t * algo_l2_db_data[SOC_MAX_NUM_DEVICES];
/*
 * FUNCTIONs
 */

/*
 *
 * dump function for the variable algo_l2_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_l2_db_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;
    SHR_IF_ERR_EXIT(algo_l2_db_event_forwarding_profile_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_l2_db_vsi_learning_profile_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_l2_db_vsi_aging_profile_dump(unit, filters));
    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable event_forwarding_profile
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_l2_db_event_forwarding_profile_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_l2 event_forwarding_profile") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_l2 event_forwarding_profile\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_l2_db/event_forwarding_profile.txt",
            "algo_l2_db[%d]->","((algo_l2_sw_state_t*)sw_state_roots_array[%d][ALGO_L2_MODULE_ID])->","event_forwarding_profile: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_l2_sw_state_t*)sw_state_roots_array[unit][ALGO_L2_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_l2_db[%d]->","((algo_l2_sw_state_t*)sw_state_roots_array[%d][ALGO_L2_MODULE_ID])->","event_forwarding_profile: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_L2_MODULE_ID,
            &((algo_l2_sw_state_t*)sw_state_roots_array[unit][ALGO_L2_MODULE_ID])->event_forwarding_profile,
            dnx_l2_event_forwarding_profile_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable vsi_learning_profile
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_l2_db_vsi_learning_profile_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_l2 vsi_learning_profile") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_l2 vsi_learning_profile\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_l2_db/vsi_learning_profile.txt",
            "algo_l2_db[%d]->","((algo_l2_sw_state_t*)sw_state_roots_array[%d][ALGO_L2_MODULE_ID])->","vsi_learning_profile: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_l2_sw_state_t*)sw_state_roots_array[unit][ALGO_L2_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_l2_db[%d]->","((algo_l2_sw_state_t*)sw_state_roots_array[%d][ALGO_L2_MODULE_ID])->","vsi_learning_profile: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_L2_MODULE_ID,
            &((algo_l2_sw_state_t*)sw_state_roots_array[unit][ALGO_L2_MODULE_ID])->vsi_learning_profile,
            dnx_l2_vsi_profile_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable vsi_aging_profile
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_l2_db_vsi_aging_profile_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_l2 vsi_aging_profile") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_l2 vsi_aging_profile\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_l2_db/vsi_aging_profile.txt",
            "algo_l2_db[%d]->","((algo_l2_sw_state_t*)sw_state_roots_array[%d][ALGO_L2_MODULE_ID])->","vsi_aging_profile: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_l2_sw_state_t*)sw_state_roots_array[unit][ALGO_L2_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_l2_db[%d]->","((algo_l2_sw_state_t*)sw_state_roots_array[%d][ALGO_L2_MODULE_ID])->","vsi_aging_profile: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_L2_MODULE_ID,
            &((algo_l2_sw_state_t*)sw_state_roots_array[unit][ALGO_L2_MODULE_ID])->vsi_aging_profile,
            dnx_l2_vsi_aging_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 * Global Variables
 */

dnx_sw_state_diagnostic_info_t algo_l2_db_info[SOC_MAX_NUM_DEVICES][ALGO_L2_DB_INFO_NOF_ENTRIES];
const char* algo_l2_db_layout_str[ALGO_L2_DB_INFO_NOF_ENTRIES] = {
    "ALGO_L2_DB~",
    "ALGO_L2_DB~EVENT_FORWARDING_PROFILE~",
    "ALGO_L2_DB~VSI_LEARNING_PROFILE~",
    "ALGO_L2_DB~VSI_AGING_PROFILE~",
};
#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE

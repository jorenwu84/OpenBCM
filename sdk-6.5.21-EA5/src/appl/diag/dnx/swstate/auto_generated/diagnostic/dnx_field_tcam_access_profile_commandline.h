/** \file dnx/swstate/auto_generated/diagnostic/dnx_field_tcam_access_profile_commandline.h
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

#ifndef __DNX_FIELD_TCAM_ACCESS_PROFILE_COMMANDLINE_H__
#define __DNX_FIELD_TCAM_ACCESS_PROFILE_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_field_tcam_access_profile_types.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_field_types.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_dump_man;
shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_size_get_man;
shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_diagnostic_operation_counters_man;
extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_access_profile_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_access_profile_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_occupied_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_occupied_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_occupied_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_occupied_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_occupied_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_occupied_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_occupied_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_occupied_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_occupied_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_occupied_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_occupied_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_occupied_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_key_size_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_key_size_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_key_size_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_key_size_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_key_size_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_key_size_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_key_size_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_key_size_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_key_size_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_key_size_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_key_size_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_key_size_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_action_size_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_action_size_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_action_size_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_action_size_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_action_size_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_action_size_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_action_size_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_action_size_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_action_size_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_action_size_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_action_size_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_action_size_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_bank_ids_bmp_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_bank_ids_bmp_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_bank_ids_bmp_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_bank_ids_bmp_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_bank_ids_bmp_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_bank_ids_bmp_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_bank_ids_bmp_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_bank_ids_bmp_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_bank_ids_bmp_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_bank_ids_bmp_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_bank_ids_bmp_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_bank_ids_bmp_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_is_direct_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_is_direct_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_is_direct_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_is_direct_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_is_direct_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_is_direct_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_is_direct_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_is_direct_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_is_direct_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_is_direct_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_is_direct_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_is_direct_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_prefix_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_prefix_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_prefix_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_prefix_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_prefix_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_prefix_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_prefix_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_prefix_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_prefix_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_prefix_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_prefix_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_prefix_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_handler_id_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_handler_id_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_handler_id_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_handler_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_handler_id_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_handler_id_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_handler_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_handler_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_handler_id_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_access_profile_access_profiles_handler_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_handler_id_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_access_profile_access_profiles_handler_id_diagnostic_operation_counters_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_FIELD_TCAM_ACCESS_PROFILE_COMMANDLINE_H__ */

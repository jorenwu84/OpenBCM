/** \file dnx/swstate/auto_generated/diagnostic/meter_commandline.h
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

#ifndef __METER_COMMANDLINE_H__
#define __METER_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/meter_types.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#include <bcm_int/dnx/policer/policer_mgmt.h>
#include <include/bcm/policer.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_meter_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_dump_man;
shr_error_e sh_dnx_swstate_meter_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_size_get_man;
shr_error_e sh_dnx_swstate_meter_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_diagnostic_operation_counters_man;
extern sh_sand_cmd_t sh_dnx_swstate_meter_cmds[];
extern sh_sand_man_t dnx_swstate_meter_man;
extern const char cmd_dnx_swstate_meter_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_meter_profile_limits_info_cmds[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_man;
extern const char cmd_dnx_swstate_meter_profile_limits_info_desc[];
shr_error_e sh_dnx_swstate_meter_profile_limits_info_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_dump_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_size_get_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_profile_limits_info_max_rate_cmds[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_rate_man;
extern const char cmd_dnx_swstate_meter_profile_limits_info_max_rate_desc[];
shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_rate_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_rate_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_rate_dump_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_rate_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_rate_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_rate_size_get_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_rate_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_rate_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_rate_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_profile_limits_info_max_burst_normal_mode_cmds[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_burst_normal_mode_man;
extern const char cmd_dnx_swstate_meter_profile_limits_info_max_burst_normal_mode_desc[];
shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_burst_normal_mode_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_burst_normal_mode_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_burst_normal_mode_dump_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_burst_normal_mode_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_burst_normal_mode_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_burst_normal_mode_size_get_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_burst_normal_mode_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_burst_normal_mode_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_burst_normal_mode_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_profile_limits_info_max_burst_large_mode_cmds[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_burst_large_mode_man;
extern const char cmd_dnx_swstate_meter_profile_limits_info_max_burst_large_mode_desc[];
shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_burst_large_mode_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_burst_large_mode_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_burst_large_mode_dump_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_burst_large_mode_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_burst_large_mode_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_burst_large_mode_size_get_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_burst_large_mode_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_burst_large_mode_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_burst_large_mode_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_profile_limits_info_min_rate_cmds[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_min_rate_man;
extern const char cmd_dnx_swstate_meter_profile_limits_info_min_rate_desc[];
shr_error_e sh_dnx_swstate_meter_profile_limits_info_min_rate_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_min_rate_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_min_rate_dump_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_min_rate_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_min_rate_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_min_rate_size_get_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_min_rate_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_min_rate_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_min_rate_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_profile_limits_info_min_burst_cmds[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_min_burst_man;
extern const char cmd_dnx_swstate_meter_profile_limits_info_min_burst_desc[];
shr_error_e sh_dnx_swstate_meter_profile_limits_info_min_burst_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_min_burst_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_min_burst_dump_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_min_burst_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_min_burst_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_min_burst_size_get_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_min_burst_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_min_burst_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_min_burst_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_profile_limits_info_max_cbs_mant_cmds[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_cbs_mant_man;
extern const char cmd_dnx_swstate_meter_profile_limits_info_max_cbs_mant_desc[];
shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_cbs_mant_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_cbs_mant_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_cbs_mant_dump_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_cbs_mant_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_cbs_mant_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_cbs_mant_size_get_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_cbs_mant_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_cbs_mant_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_cbs_mant_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_profile_limits_info_max_cbs_exp_cmds[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_cbs_exp_man;
extern const char cmd_dnx_swstate_meter_profile_limits_info_max_cbs_exp_desc[];
shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_cbs_exp_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_cbs_exp_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_cbs_exp_dump_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_cbs_exp_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_cbs_exp_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_cbs_exp_size_get_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_cbs_exp_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_cbs_exp_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_cbs_exp_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_profile_limits_info_max_ir_mant_cmds[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_ir_mant_man;
extern const char cmd_dnx_swstate_meter_profile_limits_info_max_ir_mant_desc[];
shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_ir_mant_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_ir_mant_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_ir_mant_dump_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_ir_mant_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_ir_mant_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_ir_mant_size_get_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_ir_mant_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_ir_mant_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_ir_mant_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_profile_limits_info_max_ir_exp_cmds[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_ir_exp_man;
extern const char cmd_dnx_swstate_meter_profile_limits_info_max_ir_exp_desc[];
shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_ir_exp_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_ir_exp_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_ir_exp_dump_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_ir_exp_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_ir_exp_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_ir_exp_size_get_man;


shr_error_e sh_dnx_swstate_meter_profile_limits_info_max_ir_exp_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_profile_limits_info_max_ir_exp_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_profile_limits_info_max_ir_exp_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_global_meter_enabled_cmds[];
extern sh_sand_man_t dnx_swstate_meter_global_meter_enabled_man;
extern const char cmd_dnx_swstate_meter_global_meter_enabled_desc[];
shr_error_e sh_dnx_swstate_meter_global_meter_enabled_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_global_meter_enabled_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_global_meter_enabled_dump_man;


shr_error_e sh_dnx_swstate_meter_global_meter_enabled_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_global_meter_enabled_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_global_meter_enabled_size_get_man;


shr_error_e sh_dnx_swstate_meter_global_meter_enabled_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_global_meter_enabled_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_global_meter_enabled_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_generic_meter_info_cmds[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_man;
extern const char cmd_dnx_swstate_meter_generic_meter_info_desc[];
shr_error_e sh_dnx_swstate_meter_generic_meter_info_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_dump_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_size_get_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_generic_meter_info_db_info_cmds[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_man;
extern const char cmd_dnx_swstate_meter_generic_meter_info_db_info_desc[];
shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_dump_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_size_get_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_generic_meter_info_db_info_enable_cmds[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_enable_man;
extern const char cmd_dnx_swstate_meter_generic_meter_info_db_info_enable_desc[];
shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_enable_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_enable_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_enable_dump_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_enable_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_enable_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_enable_size_get_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_enable_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_enable_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_enable_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_generic_meter_info_db_info_created_cmds[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_created_man;
extern const char cmd_dnx_swstate_meter_generic_meter_info_db_info_created_desc[];
shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_created_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_created_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_created_dump_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_created_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_created_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_created_size_get_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_created_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_created_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_created_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_generic_meter_info_db_info_expansion_enable_cmds[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_expansion_enable_man;
extern const char cmd_dnx_swstate_meter_generic_meter_info_db_info_expansion_enable_desc[];
shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_expansion_enable_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_expansion_enable_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_expansion_enable_dump_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_expansion_enable_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_expansion_enable_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_expansion_enable_size_get_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_expansion_enable_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_expansion_enable_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_expansion_enable_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_generic_meter_info_db_info_expansion_is_per_tc_cmds[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_expansion_is_per_tc_man;
extern const char cmd_dnx_swstate_meter_generic_meter_info_db_info_expansion_is_per_tc_desc[];
shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_expansion_is_per_tc_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_expansion_is_per_tc_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_expansion_is_per_tc_dump_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_expansion_is_per_tc_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_expansion_is_per_tc_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_expansion_is_per_tc_size_get_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_expansion_is_per_tc_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_expansion_is_per_tc_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_expansion_is_per_tc_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_generic_meter_info_db_info_is_single_bucket_cmds[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_is_single_bucket_man;
extern const char cmd_dnx_swstate_meter_generic_meter_info_db_info_is_single_bucket_desc[];
shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_is_single_bucket_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_is_single_bucket_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_is_single_bucket_dump_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_is_single_bucket_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_is_single_bucket_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_is_single_bucket_size_get_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_is_single_bucket_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_is_single_bucket_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_is_single_bucket_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_generic_meter_info_db_info_use_single_bucket_bank_cmds[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_use_single_bucket_bank_man;
extern const char cmd_dnx_swstate_meter_generic_meter_info_db_info_use_single_bucket_bank_desc[];
shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_use_single_bucket_bank_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_use_single_bucket_bank_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_use_single_bucket_bank_dump_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_use_single_bucket_bank_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_use_single_bucket_bank_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_use_single_bucket_bank_size_get_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_use_single_bucket_bank_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_use_single_bucket_bank_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_use_single_bucket_bank_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_generic_meter_info_db_info_nof_generic_banks_cmds[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_nof_generic_banks_man;
extern const char cmd_dnx_swstate_meter_generic_meter_info_db_info_nof_generic_banks_desc[];
shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_nof_generic_banks_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_nof_generic_banks_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_nof_generic_banks_dump_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_nof_generic_banks_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_nof_generic_banks_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_nof_generic_banks_size_get_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_nof_generic_banks_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_nof_generic_banks_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_nof_generic_banks_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_generic_meter_info_db_info_banks_arr_cmds[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_man;
extern const char cmd_dnx_swstate_meter_generic_meter_info_db_info_banks_arr_desc[];
shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_banks_arr_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_dump_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_banks_arr_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_size_get_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_banks_arr_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_generic_meter_info_db_info_banks_arr_bank_id_cmds[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_bank_id_man;
extern const char cmd_dnx_swstate_meter_generic_meter_info_db_info_banks_arr_bank_id_desc[];
shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_banks_arr_bank_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_bank_id_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_bank_id_dump_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_banks_arr_bank_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_bank_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_bank_id_size_get_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_banks_arr_bank_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_bank_id_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_bank_id_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_generic_meter_info_db_info_banks_arr_base_meter_index_cmds[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_base_meter_index_man;
extern const char cmd_dnx_swstate_meter_generic_meter_info_db_info_banks_arr_base_meter_index_desc[];
shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_banks_arr_base_meter_index_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_base_meter_index_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_base_meter_index_dump_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_banks_arr_base_meter_index_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_base_meter_index_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_base_meter_index_size_get_man;


shr_error_e sh_dnx_swstate_meter_generic_meter_info_db_info_banks_arr_base_meter_index_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_base_meter_index_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_generic_meter_info_db_info_banks_arr_base_meter_index_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_policer_templates_cmds[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_man;
extern const char cmd_dnx_swstate_meter_policer_templates_desc[];
shr_error_e sh_dnx_swstate_meter_policer_templates_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_dump_man;


shr_error_e sh_dnx_swstate_meter_policer_templates_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_size_get_man;


shr_error_e sh_dnx_swstate_meter_policer_templates_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_policer_templates_policer_ingress_db0_cmds[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_ingress_db0_man;
extern const char cmd_dnx_swstate_meter_policer_templates_policer_ingress_db0_desc[];
shr_error_e sh_dnx_swstate_meter_policer_templates_policer_ingress_db0_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_policer_ingress_db0_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_ingress_db0_dump_man;


shr_error_e sh_dnx_swstate_meter_policer_templates_policer_ingress_db0_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_policer_ingress_db0_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_ingress_db0_size_get_man;


shr_error_e sh_dnx_swstate_meter_policer_templates_policer_ingress_db0_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_policer_ingress_db0_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_ingress_db0_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_policer_templates_policer_ingress_db1_cmds[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_ingress_db1_man;
extern const char cmd_dnx_swstate_meter_policer_templates_policer_ingress_db1_desc[];
shr_error_e sh_dnx_swstate_meter_policer_templates_policer_ingress_db1_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_policer_ingress_db1_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_ingress_db1_dump_man;


shr_error_e sh_dnx_swstate_meter_policer_templates_policer_ingress_db1_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_policer_ingress_db1_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_ingress_db1_size_get_man;


shr_error_e sh_dnx_swstate_meter_policer_templates_policer_ingress_db1_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_policer_ingress_db1_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_ingress_db1_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_policer_templates_policer_ingress_db2_cmds[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_ingress_db2_man;
extern const char cmd_dnx_swstate_meter_policer_templates_policer_ingress_db2_desc[];
shr_error_e sh_dnx_swstate_meter_policer_templates_policer_ingress_db2_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_policer_ingress_db2_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_ingress_db2_dump_man;


shr_error_e sh_dnx_swstate_meter_policer_templates_policer_ingress_db2_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_policer_ingress_db2_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_ingress_db2_size_get_man;


shr_error_e sh_dnx_swstate_meter_policer_templates_policer_ingress_db2_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_policer_ingress_db2_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_ingress_db2_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_policer_templates_policer_egress_db0_cmds[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_egress_db0_man;
extern const char cmd_dnx_swstate_meter_policer_templates_policer_egress_db0_desc[];
shr_error_e sh_dnx_swstate_meter_policer_templates_policer_egress_db0_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_policer_egress_db0_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_egress_db0_dump_man;


shr_error_e sh_dnx_swstate_meter_policer_templates_policer_egress_db0_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_policer_egress_db0_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_egress_db0_size_get_man;


shr_error_e sh_dnx_swstate_meter_policer_templates_policer_egress_db0_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_policer_egress_db0_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_egress_db0_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_meter_policer_templates_policer_egress_db1_cmds[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_egress_db1_man;
extern const char cmd_dnx_swstate_meter_policer_templates_policer_egress_db1_desc[];
shr_error_e sh_dnx_swstate_meter_policer_templates_policer_egress_db1_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_policer_egress_db1_dump_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_egress_db1_dump_man;


shr_error_e sh_dnx_swstate_meter_policer_templates_policer_egress_db1_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_policer_egress_db1_size_get_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_egress_db1_size_get_man;


shr_error_e sh_dnx_swstate_meter_policer_templates_policer_egress_db1_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_meter_policer_templates_policer_egress_db1_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_meter_policer_templates_policer_egress_db1_diagnostic_operation_counters_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __METER_COMMANDLINE_H__ */

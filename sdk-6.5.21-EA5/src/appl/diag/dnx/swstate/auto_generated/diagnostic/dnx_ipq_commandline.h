/** \file dnx/swstate/auto_generated/diagnostic/dnx_ipq_commandline.h
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

#ifndef __DNX_IPQ_COMMANDLINE_H__
#define __DNX_IPQ_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_ipq_types.h>
#include <include/soc/dnx/dnx_data/auto_generated/dnx_data_ipq.h>
#include <soc/dnxc/swstate/types/sw_state_bitmap.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_dnx_ipq_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ipq_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_dump_man;
shr_error_e sh_dnx_swstate_dnx_ipq_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ipq_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_size_get_man;
shr_error_e sh_dnx_swstate_dnx_ipq_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ipq_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_diagnostic_operation_counters_man;
extern sh_sand_cmd_t sh_dnx_swstate_dnx_ipq_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_man;
extern const char cmd_dnx_swstate_dnx_ipq_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_dnx_ipq_base_queues_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_base_queues_man;
extern const char cmd_dnx_swstate_dnx_ipq_base_queues_desc[];
shr_error_e sh_dnx_swstate_dnx_ipq_base_queues_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ipq_base_queues_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_base_queues_dump_man;


shr_error_e sh_dnx_swstate_dnx_ipq_base_queues_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ipq_base_queues_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_base_queues_size_get_man;


shr_error_e sh_dnx_swstate_dnx_ipq_base_queues_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ipq_base_queues_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_base_queues_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_ipq_base_queues_num_cos_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_base_queues_num_cos_man;
extern const char cmd_dnx_swstate_dnx_ipq_base_queues_num_cos_desc[];
shr_error_e sh_dnx_swstate_dnx_ipq_base_queues_num_cos_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ipq_base_queues_num_cos_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_base_queues_num_cos_dump_man;


shr_error_e sh_dnx_swstate_dnx_ipq_base_queues_num_cos_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ipq_base_queues_num_cos_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_base_queues_num_cos_size_get_man;


shr_error_e sh_dnx_swstate_dnx_ipq_base_queues_num_cos_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ipq_base_queues_num_cos_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_base_queues_num_cos_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_ipq_base_queues_sys_port_ref_counter_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_base_queues_sys_port_ref_counter_man;
extern const char cmd_dnx_swstate_dnx_ipq_base_queues_sys_port_ref_counter_desc[];
shr_error_e sh_dnx_swstate_dnx_ipq_base_queues_sys_port_ref_counter_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ipq_base_queues_sys_port_ref_counter_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_base_queues_sys_port_ref_counter_dump_man;


shr_error_e sh_dnx_swstate_dnx_ipq_base_queues_sys_port_ref_counter_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ipq_base_queues_sys_port_ref_counter_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_base_queues_sys_port_ref_counter_size_get_man;


shr_error_e sh_dnx_swstate_dnx_ipq_base_queues_sys_port_ref_counter_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ipq_base_queues_sys_port_ref_counter_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_base_queues_sys_port_ref_counter_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_ipq_base_queue_is_asymm_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_base_queue_is_asymm_man;
extern const char cmd_dnx_swstate_dnx_ipq_base_queue_is_asymm_desc[];
shr_error_e sh_dnx_swstate_dnx_ipq_base_queue_is_asymm_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ipq_base_queue_is_asymm_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_base_queue_is_asymm_dump_man;


shr_error_e sh_dnx_swstate_dnx_ipq_base_queue_is_asymm_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ipq_base_queue_is_asymm_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_base_queue_is_asymm_size_get_man;


shr_error_e sh_dnx_swstate_dnx_ipq_base_queue_is_asymm_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_ipq_base_queue_is_asymm_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_ipq_base_queue_is_asymm_diagnostic_operation_counters_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_IPQ_COMMANDLINE_H__ */

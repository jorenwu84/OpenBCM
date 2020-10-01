/** \file dnx/swstate/auto_generated/diagnostic/dnx_scheduler_commandline.h
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

#ifndef __DNX_SCHEDULER_COMMANDLINE_H__
#define __DNX_SCHEDULER_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_scheduler_types.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_port.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_sch.h>
#include <soc/dnxc/swstate/types/sw_state_bitmap.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_dnx_scheduler_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_dump_man;
shr_error_e sh_dnx_swstate_dnx_scheduler_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_size_get_man;
shr_error_e sh_dnx_swstate_dnx_scheduler_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_diagnostic_operation_counters_man;
extern sh_sand_cmd_t sh_dnx_swstate_dnx_scheduler_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_man;
extern const char cmd_dnx_swstate_dnx_scheduler_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_dnx_scheduler_port_shaper_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_port_shaper_man;
extern const char cmd_dnx_swstate_dnx_scheduler_port_shaper_desc[];
shr_error_e sh_dnx_swstate_dnx_scheduler_port_shaper_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_port_shaper_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_port_shaper_dump_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_port_shaper_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_port_shaper_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_port_shaper_size_get_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_port_shaper_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_port_shaper_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_port_shaper_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_scheduler_port_shaper_rate_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_port_shaper_rate_man;
extern const char cmd_dnx_swstate_dnx_scheduler_port_shaper_rate_desc[];
shr_error_e sh_dnx_swstate_dnx_scheduler_port_shaper_rate_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_port_shaper_rate_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_port_shaper_rate_dump_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_port_shaper_rate_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_port_shaper_rate_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_port_shaper_rate_size_get_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_port_shaper_rate_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_port_shaper_rate_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_port_shaper_rate_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_scheduler_port_shaper_valid_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_port_shaper_valid_man;
extern const char cmd_dnx_swstate_dnx_scheduler_port_shaper_valid_desc[];
shr_error_e sh_dnx_swstate_dnx_scheduler_port_shaper_valid_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_port_shaper_valid_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_port_shaper_valid_dump_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_port_shaper_valid_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_port_shaper_valid_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_port_shaper_valid_size_get_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_port_shaper_valid_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_port_shaper_valid_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_port_shaper_valid_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_scheduler_hr_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_hr_man;
extern const char cmd_dnx_swstate_dnx_scheduler_hr_desc[];
shr_error_e sh_dnx_swstate_dnx_scheduler_hr_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_hr_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_hr_dump_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_hr_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_hr_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_hr_size_get_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_hr_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_hr_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_hr_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_scheduler_hr_is_colored_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_hr_is_colored_man;
extern const char cmd_dnx_swstate_dnx_scheduler_hr_is_colored_desc[];
shr_error_e sh_dnx_swstate_dnx_scheduler_hr_is_colored_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_hr_is_colored_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_hr_is_colored_dump_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_hr_is_colored_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_hr_is_colored_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_hr_is_colored_size_get_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_hr_is_colored_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_hr_is_colored_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_hr_is_colored_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_scheduler_interface_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_interface_man;
extern const char cmd_dnx_swstate_dnx_scheduler_interface_desc[];
shr_error_e sh_dnx_swstate_dnx_scheduler_interface_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_interface_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_interface_dump_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_interface_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_interface_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_interface_size_get_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_interface_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_interface_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_interface_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_scheduler_interface_modified_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_interface_modified_man;
extern const char cmd_dnx_swstate_dnx_scheduler_interface_modified_desc[];
shr_error_e sh_dnx_swstate_dnx_scheduler_interface_modified_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_interface_modified_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_interface_modified_dump_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_interface_modified_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_interface_modified_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_interface_modified_size_get_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_interface_modified_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_interface_modified_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_interface_modified_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_scheduler_fmq_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_fmq_man;
extern const char cmd_dnx_swstate_dnx_scheduler_fmq_desc[];
shr_error_e sh_dnx_swstate_dnx_scheduler_fmq_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_fmq_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_fmq_dump_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_fmq_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_fmq_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_fmq_size_get_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_fmq_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_fmq_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_fmq_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_scheduler_fmq_reserved_hr_flow_id_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_fmq_reserved_hr_flow_id_man;
extern const char cmd_dnx_swstate_dnx_scheduler_fmq_reserved_hr_flow_id_desc[];
shr_error_e sh_dnx_swstate_dnx_scheduler_fmq_reserved_hr_flow_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_fmq_reserved_hr_flow_id_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_fmq_reserved_hr_flow_id_dump_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_fmq_reserved_hr_flow_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_fmq_reserved_hr_flow_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_fmq_reserved_hr_flow_id_size_get_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_fmq_reserved_hr_flow_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_fmq_reserved_hr_flow_id_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_fmq_reserved_hr_flow_id_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_scheduler_fmq_nof_reserved_hr_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_fmq_nof_reserved_hr_man;
extern const char cmd_dnx_swstate_dnx_scheduler_fmq_nof_reserved_hr_desc[];
shr_error_e sh_dnx_swstate_dnx_scheduler_fmq_nof_reserved_hr_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_fmq_nof_reserved_hr_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_fmq_nof_reserved_hr_dump_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_fmq_nof_reserved_hr_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_fmq_nof_reserved_hr_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_fmq_nof_reserved_hr_size_get_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_fmq_nof_reserved_hr_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_fmq_nof_reserved_hr_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_fmq_nof_reserved_hr_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_scheduler_fmq_fmq_flow_id_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_fmq_fmq_flow_id_man;
extern const char cmd_dnx_swstate_dnx_scheduler_fmq_fmq_flow_id_desc[];
shr_error_e sh_dnx_swstate_dnx_scheduler_fmq_fmq_flow_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_fmq_fmq_flow_id_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_fmq_fmq_flow_id_dump_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_fmq_fmq_flow_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_fmq_fmq_flow_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_fmq_fmq_flow_id_size_get_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_fmq_fmq_flow_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_fmq_fmq_flow_id_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_fmq_fmq_flow_id_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_scheduler_general_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_general_man;
extern const char cmd_dnx_swstate_dnx_scheduler_general_desc[];
shr_error_e sh_dnx_swstate_dnx_scheduler_general_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_general_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_general_dump_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_general_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_general_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_general_size_get_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_general_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_general_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_general_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_scheduler_general_reserved_erp_hr_flow_id_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_general_reserved_erp_hr_flow_id_man;
extern const char cmd_dnx_swstate_dnx_scheduler_general_reserved_erp_hr_flow_id_desc[];
shr_error_e sh_dnx_swstate_dnx_scheduler_general_reserved_erp_hr_flow_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_general_reserved_erp_hr_flow_id_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_general_reserved_erp_hr_flow_id_dump_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_general_reserved_erp_hr_flow_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_general_reserved_erp_hr_flow_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_general_reserved_erp_hr_flow_id_size_get_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_general_reserved_erp_hr_flow_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_general_reserved_erp_hr_flow_id_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_general_reserved_erp_hr_flow_id_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_scheduler_general_nof_reserved_erp_hr_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_general_nof_reserved_erp_hr_man;
extern const char cmd_dnx_swstate_dnx_scheduler_general_nof_reserved_erp_hr_desc[];
shr_error_e sh_dnx_swstate_dnx_scheduler_general_nof_reserved_erp_hr_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_general_nof_reserved_erp_hr_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_general_nof_reserved_erp_hr_dump_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_general_nof_reserved_erp_hr_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_general_nof_reserved_erp_hr_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_general_nof_reserved_erp_hr_size_get_man;


shr_error_e sh_dnx_swstate_dnx_scheduler_general_nof_reserved_erp_hr_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_scheduler_general_nof_reserved_erp_hr_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_scheduler_general_nof_reserved_erp_hr_diagnostic_operation_counters_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_SCHEDULER_COMMANDLINE_H__ */

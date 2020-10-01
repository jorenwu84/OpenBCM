

/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_BCMDNX_PVT

#include <soc/dnx/dnx_data/auto_generated/dnx_data_internal_pvt.h>







static shr_error_e
j2p_a0_dnx_data_pvt_general_pvt_peak_clear_support_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_pvt;
    int submodule_index = dnx_data_pvt_submodule_general;
    int feature_index = dnx_data_pvt_general_pvt_peak_clear_support;
    SHR_FUNC_INIT_VARS(unit);

    feature = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].features[feature_index];
    
    feature->default_data = 1;

    
    feature->data = 1;

    
    feature->flags |= DNXC_DATA_F_SUPPORTED;

    
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_feature_value_set(unit, feature));

exit:
    SHR_FUNC_EXIT;
}



static shr_error_e
j2p_a0_dnx_data_pvt_general_nof_pvt_monitors_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_pvt;
    int submodule_index = dnx_data_pvt_submodule_general;
    int define_index = dnx_data_pvt_general_define_nof_pvt_monitors;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    
    define->default_data = 9;

    
    define->data = 9;

    
    define->flags |= DNXC_DATA_F_SUPPORTED;

    
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}


static shr_error_e
j2p_a0_dnx_data_pvt_general_pvt_base_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_pvt;
    int submodule_index = dnx_data_pvt_submodule_general;
    int define_index = dnx_data_pvt_general_define_pvt_base;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    
    define->default_data = 36681200;

    
    define->data = 36681200;

    
    define->flags |= DNXC_DATA_F_SUPPORTED;

    
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}


static shr_error_e
j2p_a0_dnx_data_pvt_general_pvt_factor_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_pvt;
    int submodule_index = dnx_data_pvt_submodule_general;
    int define_index = dnx_data_pvt_general_define_pvt_factor;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    
    define->default_data = 24540;

    
    define->data = 24540;

    
    define->flags |= DNXC_DATA_F_SUPPORTED;

    
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}


static shr_error_e
j2p_a0_dnx_data_pvt_general_pvt_mon_control_sel_nof_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_pvt;
    int submodule_index = dnx_data_pvt_submodule_general;
    int define_index = dnx_data_pvt_general_define_pvt_mon_control_sel_nof_bits;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    
    define->default_data = 5;

    
    define->data = 5;

    
    define->flags |= DNXC_DATA_F_SUPPORTED;

    
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}


static shr_error_e
j2p_a0_dnx_data_pvt_general_thermal_data_nof_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_pvt;
    int submodule_index = dnx_data_pvt_submodule_general;
    int define_index = dnx_data_pvt_general_define_thermal_data_nof_bits;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    
    define->default_data = 11;

    
    define->data = 11;

    
    define->flags |= DNXC_DATA_F_SUPPORTED;

    
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}


static shr_error_e
j2p_a0_dnx_data_pvt_general_vol_sel_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_pvt;
    int submodule_index = dnx_data_pvt_submodule_general;
    int define_index = dnx_data_pvt_general_define_vol_sel;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    
    define->default_data = 10;

    
    define->data = 10;

    
    define->flags |= DNXC_DATA_F_SUPPORTED;

    
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}


static shr_error_e
j2p_a0_dnx_data_pvt_general_vol_factor_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_pvt;
    int submodule_index = dnx_data_pvt_submodule_general;
    int define_index = dnx_data_pvt_general_define_vol_factor;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    
    define->default_data = 1020;

    
    define->data = 1020;

    
    define->flags |= DNXC_DATA_F_SUPPORTED;

    
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}


static shr_error_e
j2p_a0_dnx_data_pvt_general_vol_multiple_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_pvt;
    int submodule_index = dnx_data_pvt_submodule_general;
    int define_index = dnx_data_pvt_general_define_vol_multiple;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    
    define->default_data = 1;

    
    define->data = 1;

    
    define->flags |= DNXC_DATA_F_SUPPORTED;

    
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}


static shr_error_e
j2p_a0_dnx_data_pvt_general_vol_divisor_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_pvt;
    int submodule_index = dnx_data_pvt_submodule_general;
    int define_index = dnx_data_pvt_general_define_vol_divisor;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    
    define->default_data = 2048;

    
    define->data = 2048;

    
    define->flags |= DNXC_DATA_F_SUPPORTED;

    
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}




shr_error_e
j2p_a0_data_pvt_attach(
    int unit)
{
    dnxc_data_module_t *module = NULL;
    dnxc_data_submodule_t *submodule = NULL;
    dnxc_data_define_t *define = NULL;
    dnxc_data_feature_t *feature = NULL;
    dnxc_data_table_t *table = NULL;
    int module_index = dnx_data_module_pvt;
    int submodule_index = -1, data_index = -1;
    SHR_FUNC_INIT_VARS(unit);

    COMPILER_REFERENCE(define);
    COMPILER_REFERENCE(feature);
    COMPILER_REFERENCE(table);
    COMPILER_REFERENCE(submodule);
    COMPILER_REFERENCE(data_index);
    COMPILER_REFERENCE(submodule_index);
    module = &_dnxc_data[unit].modules[module_index];
    
    submodule_index = dnx_data_pvt_submodule_general;
    submodule = &module->submodules[submodule_index];

    
    data_index = dnx_data_pvt_general_define_nof_pvt_monitors;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_pvt_general_nof_pvt_monitors_set;
    data_index = dnx_data_pvt_general_define_pvt_base;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_pvt_general_pvt_base_set;
    data_index = dnx_data_pvt_general_define_pvt_factor;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_pvt_general_pvt_factor_set;
    data_index = dnx_data_pvt_general_define_pvt_mon_control_sel_nof_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_pvt_general_pvt_mon_control_sel_nof_bits_set;
    data_index = dnx_data_pvt_general_define_thermal_data_nof_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_pvt_general_thermal_data_nof_bits_set;
    data_index = dnx_data_pvt_general_define_vol_sel;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_pvt_general_vol_sel_set;
    data_index = dnx_data_pvt_general_define_vol_factor;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_pvt_general_vol_factor_set;
    data_index = dnx_data_pvt_general_define_vol_multiple;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_pvt_general_vol_multiple_set;
    data_index = dnx_data_pvt_general_define_vol_divisor;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_pvt_general_vol_divisor_set;

    
    data_index = dnx_data_pvt_general_pvt_peak_clear_support;
    feature = &submodule->features[data_index];
    feature->set = j2p_a0_dnx_data_pvt_general_pvt_peak_clear_support_set;

    

    SHR_FUNC_EXIT;
}
#undef BSL_LOG_MODULE


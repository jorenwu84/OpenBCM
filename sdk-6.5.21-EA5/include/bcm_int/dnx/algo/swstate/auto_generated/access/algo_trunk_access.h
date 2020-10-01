/** \file algo/swstate/auto_generated/access/algo_trunk_access.h
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

#ifndef __ALGO_TRUNK_ACCESS_H__
#define __ALGO_TRUNK_ACCESS_H__

#include <bcm_int/dnx/algo/swstate/auto_generated/types/algo_trunk_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#include <bcm_int/dnx/algo/trunk/algo_trunk.h>
/*
 * TYPEDEFs
 */

/**
 * implemented by: algo_trunk_db_is_init
 */
typedef int (*algo_trunk_db_is_init_cb)(
    int unit, uint8 *is_init);

/**
 * implemented by: algo_trunk_db_init
 */
typedef int (*algo_trunk_db_init_cb)(
    int unit);

/**
 * implemented by: algo_trunk_db_egress_trunk_set
 */
typedef int (*algo_trunk_db_egress_trunk_set_cb)(
    int unit, dnx_algo_template_t egress_trunk);

/**
 * implemented by: algo_trunk_db_egress_trunk_get
 */
typedef int (*algo_trunk_db_egress_trunk_get_cb)(
    int unit, dnx_algo_template_t *egress_trunk);

/**
 * implemented by: algo_trunk_db_egress_trunk_create
 */
typedef int (*algo_trunk_db_egress_trunk_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

/**
 * implemented by: algo_trunk_db_egress_trunk_allocate_single
 */
typedef int (*algo_trunk_db_egress_trunk_allocate_single_cb)(
    int unit, uint32 flags, bcm_trunk_t *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

/**
 * implemented by: algo_trunk_db_egress_trunk_free_single
 */
typedef int (*algo_trunk_db_egress_trunk_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

/**
 * implemented by: algo_trunk_db_egress_trunk_exchange
 */
typedef int (*algo_trunk_db_egress_trunk_exchange_cb)(
    int unit, uint32 flags, const bcm_trunk_t *profile_data, int old_profile, const void *extra_arguments, int *new_profile, uint8 *first_reference, uint8 *last_reference);

/**
 * implemented by: algo_trunk_db_egress_trunk_profile_data_get
 */
typedef int (*algo_trunk_db_egress_trunk_profile_data_get_cb)(
    int unit, int profile, int *ref_count, bcm_trunk_t *profile_data);

/**
 * implemented by: algo_trunk_db_egress_trunk_profile_get
 */
typedef int (*algo_trunk_db_egress_trunk_profile_get_cb)(
    int unit, const bcm_trunk_t *profile_data, int *profile);

/**
 * implemented by: algo_trunk_db_pools_alloc
 */
typedef int (*algo_trunk_db_pools_alloc_cb)(
    int unit, uint32 nof_instances_to_alloc_0);

/**
 * implemented by: algo_trunk_db_pools_groups_alloc
 */
typedef int (*algo_trunk_db_pools_groups_alloc_cb)(
    int unit, uint32 pools_idx_0, uint32 nof_instances_to_alloc_0);

/**
 * implemented by: algo_trunk_db_pools_groups_spa_id_manager_set
 */
typedef int (*algo_trunk_db_pools_groups_spa_id_manager_set_cb)(
    int unit, uint32 pools_idx_0, uint32 groups_idx_0, dnx_algo_res_t spa_id_manager);

/**
 * implemented by: algo_trunk_db_pools_groups_spa_id_manager_get
 */
typedef int (*algo_trunk_db_pools_groups_spa_id_manager_get_cb)(
    int unit, uint32 pools_idx_0, uint32 groups_idx_0, dnx_algo_res_t *spa_id_manager);

/**
 * implemented by: algo_trunk_db_pools_groups_spa_id_manager_create
 */
typedef int (*algo_trunk_db_pools_groups_spa_id_manager_create_cb)(
    int unit, uint32 pools_idx_0, uint32 groups_idx_0, dnx_algo_res_create_data_t * data, void *extra_arguments);

/**
 * implemented by: algo_trunk_db_pools_groups_spa_id_manager_allocate_single
 */
typedef int (*algo_trunk_db_pools_groups_spa_id_manager_allocate_single_cb)(
    int unit, uint32 pools_idx_0, uint32 groups_idx_0, uint32 flags, void *extra_arguments, int *element);

/**
 * implemented by: algo_trunk_db_pools_groups_spa_id_manager_allocate_several
 */
typedef int (*algo_trunk_db_pools_groups_spa_id_manager_allocate_several_cb)(
    int unit, uint32 pools_idx_0, uint32 groups_idx_0, uint32 flags, uint32 nof_elements, void *extra_arguments, int *element);

/**
 * implemented by: algo_trunk_db_pools_groups_spa_id_manager_free_single
 */
typedef int (*algo_trunk_db_pools_groups_spa_id_manager_free_single_cb)(
    int unit, uint32 pools_idx_0, uint32 groups_idx_0, int element);

/**
 * implemented by: algo_trunk_db_pools_groups_spa_id_manager_free_several
 */
typedef int (*algo_trunk_db_pools_groups_spa_id_manager_free_several_cb)(
    int unit, uint32 pools_idx_0, uint32 groups_idx_0, uint32 nof_elements, int element);

/**
 * implemented by: algo_trunk_db_pools_groups_spa_id_manager_is_allocated
 */
typedef int (*algo_trunk_db_pools_groups_spa_id_manager_is_allocated_cb)(
    int unit, uint32 pools_idx_0, uint32 groups_idx_0, int element, uint8 *is_allocated);

/**
 * implemented by: algo_trunk_db_pools_groups_spa_id_manager_clear
 */
typedef int (*algo_trunk_db_pools_groups_spa_id_manager_clear_cb)(
    int unit, uint32 pools_idx_0, uint32 groups_idx_0);

/**
 * implemented by: algo_trunk_db_pools_groups_spa_id_manager_nof_free_elements_get
 */
typedef int (*algo_trunk_db_pools_groups_spa_id_manager_nof_free_elements_get_cb)(
    int unit, uint32 pools_idx_0, uint32 groups_idx_0, int *nof_free_elements);

/**
 * implemented by: algo_trunk_db_pools_groups_spa_id_manager_get_next
 */
typedef int (*algo_trunk_db_pools_groups_spa_id_manager_get_next_cb)(
    int unit, uint32 pools_idx_0, uint32 groups_idx_0, int *element);

/**
 * implemented by: algo_trunk_db_pools_groups_spa_id_manager_dump_info_get
 */
typedef int (*algo_trunk_db_pools_groups_spa_id_manager_dump_info_get_cb)(
    int unit, uint32 pools_idx_0, uint32 groups_idx_0, dnx_algo_res_dump_data_t * info);

/**
 * implemented by: algo_trunk_db_pools_groups_spa_id_manager_nof_allocated_elements_in_range_get
 */
typedef int (*algo_trunk_db_pools_groups_spa_id_manager_nof_allocated_elements_in_range_get_cb)(
    int unit, uint32 pools_idx_0, uint32 groups_idx_0, int range_start, int nof_elements_in_range, int *nof_allocated_elements);

/**
 * implemented by: algo_trunk_db_pools_groups_spa_id_manager_advanced_algorithm_info_set
 */
typedef int (*algo_trunk_db_pools_groups_spa_id_manager_advanced_algorithm_info_set_cb)(
    int unit, uint32 pools_idx_0, uint32 groups_idx_0, void *algorithm_info);

/**
 * implemented by: algo_trunk_db_pools_groups_spa_id_manager_advanced_algorithm_info_get
 */
typedef int (*algo_trunk_db_pools_groups_spa_id_manager_advanced_algorithm_info_get_cb)(
    int unit, uint32 pools_idx_0, uint32 groups_idx_0, void *algorithm_info);

/*
 * STRUCTs
 */

/**
 * This structure holds the access functions for the variable egress_trunk
 */
typedef struct {
    algo_trunk_db_egress_trunk_set_cb set;
    algo_trunk_db_egress_trunk_get_cb get;
    algo_trunk_db_egress_trunk_create_cb create;
    algo_trunk_db_egress_trunk_allocate_single_cb allocate_single;
    algo_trunk_db_egress_trunk_free_single_cb free_single;
    algo_trunk_db_egress_trunk_exchange_cb exchange;
    algo_trunk_db_egress_trunk_profile_data_get_cb profile_data_get;
    algo_trunk_db_egress_trunk_profile_get_cb profile_get;
} algo_trunk_db_egress_trunk_cbs;

/**
 * This structure holds the access functions for the variable spa_id_manager
 */
typedef struct {
    algo_trunk_db_pools_groups_spa_id_manager_set_cb set;
    algo_trunk_db_pools_groups_spa_id_manager_get_cb get;
    algo_trunk_db_pools_groups_spa_id_manager_create_cb create;
    algo_trunk_db_pools_groups_spa_id_manager_allocate_single_cb allocate_single;
    algo_trunk_db_pools_groups_spa_id_manager_allocate_several_cb allocate_several;
    algo_trunk_db_pools_groups_spa_id_manager_free_single_cb free_single;
    algo_trunk_db_pools_groups_spa_id_manager_free_several_cb free_several;
    algo_trunk_db_pools_groups_spa_id_manager_is_allocated_cb is_allocated;
    algo_trunk_db_pools_groups_spa_id_manager_clear_cb clear;
    algo_trunk_db_pools_groups_spa_id_manager_nof_free_elements_get_cb nof_free_elements_get;
    algo_trunk_db_pools_groups_spa_id_manager_get_next_cb get_next;
    algo_trunk_db_pools_groups_spa_id_manager_dump_info_get_cb dump_info_get;
    algo_trunk_db_pools_groups_spa_id_manager_nof_allocated_elements_in_range_get_cb nof_allocated_elements_in_range_get;
    algo_trunk_db_pools_groups_spa_id_manager_advanced_algorithm_info_set_cb advanced_algorithm_info_set;
    algo_trunk_db_pools_groups_spa_id_manager_advanced_algorithm_info_get_cb advanced_algorithm_info_get;
} algo_trunk_db_pools_groups_spa_id_manager_cbs;

/**
 * This structure holds the access functions for the variable algo_trunk_group_info_t
 */
typedef struct {
    algo_trunk_db_pools_groups_alloc_cb alloc;
    /**
     * Access struct for spa_id_manager
     */
    algo_trunk_db_pools_groups_spa_id_manager_cbs spa_id_manager;
} algo_trunk_db_pools_groups_cbs;

/**
 * This structure holds the access functions for the variable algo_trunk_pool_info_t
 */
typedef struct {
    algo_trunk_db_pools_alloc_cb alloc;
    /**
     * Access struct for groups
     */
    algo_trunk_db_pools_groups_cbs groups;
} algo_trunk_db_pools_cbs;

/**
 * This structure holds the access functions for the variable algo_trunk_sw_state_t
 */
typedef struct {
    algo_trunk_db_is_init_cb is_init;
    algo_trunk_db_init_cb init;
    /**
     * Access struct for egress_trunk
     */
    algo_trunk_db_egress_trunk_cbs egress_trunk;
    /**
     * Access struct for pools
     */
    algo_trunk_db_pools_cbs pools;
} algo_trunk_db_cbs;

/*
 * Global Variables
 */

/*
 * Global Variables
 */

extern algo_trunk_db_cbs algo_trunk_db;

#endif /* __ALGO_TRUNK_ACCESS_H__ */

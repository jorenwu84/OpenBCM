/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
*/
#ifndef _SHR_sw_state_dpp_shr_H_
#define _SHR_sw_state_dpp_shr_H_


#define SW_STATE_DPP_SHR_RESMGR_INFO_RESTYPECOUNT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_RESPOOLCOUNT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_RES_RESPOOLID_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_RES_RESELEMSIZE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_RES_REFCOUNT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_RES_NAME_NAME_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_RES_NAME_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_RESMGR_INFO_RES_NAME_NAME_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_RES_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_RESMGR_INFO_RES_RESPOOLID_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RESMGR_INFO_RES_RESELEMSIZE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RESMGR_INFO_RES_REFCOUNT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RESMGR_INFO_RES_NAME_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_POOL_RESMANAGERTYPE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_POOL_LOW_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_POOL_COUNT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_POOL_REFCOUNT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_POOL_INUSE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_POOL_RESHANDLE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_POOL_TAGGED_BMP_EXTRAS_TAG_LENGTH_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_POOL_TAGGED_BMP_EXTRAS_GRAIN_SIZE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_POOL_TAGGED_BMP_EXTRAS_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_RESMGR_INFO_POOL_TAGGED_BMP_EXTRAS_TAG_LENGTH_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RESMGR_INFO_POOL_TAGGED_BMP_EXTRAS_GRAIN_SIZE_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_POOL_NAME_NAME_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_POOL_NAME_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_RESMGR_INFO_POOL_NAME_NAME_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_POOL_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_RESMGR_INFO_POOL_RESMANAGERTYPE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RESMGR_INFO_POOL_LOW_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RESMGR_INFO_POOL_COUNT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RESMGR_INFO_POOL_REFCOUNT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RESMGR_INFO_POOL_INUSE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RESMGR_INFO_POOL_RESHANDLE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RESMGR_INFO_POOL_TAGGED_BMP_EXTRAS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RESMGR_INFO_POOL_NAME_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_SHR_RESMGR_INFO_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_RESMGR_INFO_RESTYPECOUNT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RESMGR_INFO_RESPOOLCOUNT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RESMGR_INFO_RES_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RESMGR_INFO_POOL_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_MAX_NUM_ENTRIES_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_KEY_SIZE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_DATA_SIZE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_NUM_FREE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_FREE_ARR_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_ENTRY_ARRAYS_NEXT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_ENTRY_ARRAYS_DATAS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_ENTRY_ARRAYS_KEYS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_ENTRY_ARRAYS_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_ENTRY_ARRAYS_NEXT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_ENTRY_ARRAYS_DATAS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_ENTRY_ARRAYS_KEYS_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_TABLE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_MAX_NUM_ENTRIES_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_KEY_SIZE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_DATA_SIZE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_NUM_FREE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_FREE_ARR_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_ENTRY_ARRAYS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_TABLE_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_SHR_HTBLS_NOF_HTBL_USED_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_HTBLS_MAX_NOF_HTBLS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_HTBLS_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_HTBLS_HASH_TABLE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_HTBLS_NOF_HTBL_USED_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_HTBLS_MAX_NOF_HTBLS_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_MAX_NOF_BMPS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_NOF_IN_USE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_OCCUPIED_IDS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_LOW_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_COUNT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_USED_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_GRAINSIZE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_TAGSIZE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_LASTFREE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_NEXTALLOC_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_TAGDATA_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_DATA_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_LOW_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_COUNT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_USED_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_GRAINSIZE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_TAGSIZE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_LASTFREE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_NEXTALLOC_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_TAGDATA_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_DATA_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_MAX_NOF_BMPS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_NOF_IN_USE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_OCCUPIED_IDS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_BITMAP_LISTS_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_TEMPLATETYPECOUNT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_TEMPLATEPOOLCOUNT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_TEMPLATE_PARAM_TEMPLATEPOOLID_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_TEMPLATE_PARAM_REFCOUNT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_TEMPLATE_PARAM_NAME_NAME_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_TEMPLATE_PARAM_NAME_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_TEMPLATE_INFO_TEMPLATE_PARAM_NAME_NAME_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_TEMPLATE_PARAM_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_TEMPLATE_INFO_TEMPLATE_PARAM_TEMPLATEPOOLID_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_TEMPLATE_INFO_TEMPLATE_PARAM_REFCOUNT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_TEMPLATE_INFO_TEMPLATE_PARAM_NAME_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_TEMPLATEMANAGERTYPE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_TEMPLATE_LOW_ID_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_TEMPLATE_COUNT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_MAX_ENTITIES_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_DATA_SIZE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_REFCOUNT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_TEMPLATEHANDLE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_EXTRAS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_NAME_NAME_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_NAME_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_NAME_NAME_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_TEMPLATEMANAGERTYPE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_TEMPLATE_LOW_ID_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_TEMPLATE_COUNT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_MAX_ENTITIES_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_DATA_SIZE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_REFCOUNT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_TEMPLATEHANDLE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_EXTRAS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_NAME_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_SHR_TEMPLATE_INFO_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_TEMPLATE_INFO_TEMPLATETYPECOUNT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_TEMPLATE_INFO_TEMPLATEPOOLCOUNT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_TEMPLATE_INFO_TEMPLATE_PARAM_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_TEMPLATE_INFO_POOL_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_SHR_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SHR_RESMGR_INFO_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_HTBLS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_RES_TAG_BMP_INFO_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_SHR_TEMPLATE_INFO_LAYOUT_NOF_MAX_LAYOUT_NODES) 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_resTypeCount_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_resPoolCount_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_res_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_res_resPoolId_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_res_resElemSize_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_res_refCount_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_res_name_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_res_name_name_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_pool_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_pool_resManagerType_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_pool_low_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_pool_count_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_pool_refCount_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_pool_inuse_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_pool_resHandle_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_pool_tagged_bmp_extras_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_pool_tagged_bmp_extras_tag_length_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_pool_tagged_bmp_extras_grain_size_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_pool_name_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_resmgr_info_pool_name_name_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_htbls_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_htbls_hash_table_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_htbls_hash_table_max_num_entries_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_htbls_hash_table_key_size_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_htbls_hash_table_data_size_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_htbls_hash_table_num_free_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_htbls_hash_table_free_arr_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_htbls_hash_table_entry_arrays_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_htbls_hash_table_entry_arrays_next_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_htbls_hash_table_entry_arrays_datas_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_htbls_hash_table_entry_arrays_keys_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_htbls_hash_table_table_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_htbls_nof_htbl_used_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_htbls_max_nof_htbls_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_res_tag_bmp_info_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_res_tag_bmp_info_max_nof_bmps_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_res_tag_bmp_info_nof_in_use_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_res_tag_bmp_info_occupied_ids_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_res_tag_bmp_info_bitmap_lists_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_res_tag_bmp_info_bitmap_lists_low_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_res_tag_bmp_info_bitmap_lists_count_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_res_tag_bmp_info_bitmap_lists_used_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_res_tag_bmp_info_bitmap_lists_grainSize_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_res_tag_bmp_info_bitmap_lists_tagSize_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_res_tag_bmp_info_bitmap_lists_lastFree_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_res_tag_bmp_info_bitmap_lists_nextAlloc_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_res_tag_bmp_info_bitmap_lists_tagData_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_res_tag_bmp_info_bitmap_lists_data_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_templateTypeCount_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_templatePoolCount_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_template_param_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_template_param_templatePoolId_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_template_param_refCount_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_template_param_name_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_template_param_name_name_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_pool_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_pool_templateManagerType_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_pool_template_low_id_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_pool_template_count_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_pool_max_entities_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_pool_data_size_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_pool_refCount_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_pool_templateHandle_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_pool_extras_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_pool_name_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 
#if (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_shr_template_info_pool_name_name_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* (defined(BCM_PETRA_SUPPORT)||defined(BCM_DNX_SUPPORT))*/ 

#endif /* _SHR_sw_state_dpp_shr_H_ */

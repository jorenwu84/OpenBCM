/***********************************************************************************
 *                                                                                 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

/**********************************************************************************
 **********************************************************************************
 *  File Name     :  srds_api_err_code.h                                          *
 *  Created On    :  18/09/2013                                                   *
 *  Created By    :  Kiran Divakar                                                *
 *  Description   :  Header file with Error Code enums                            *
 *  Revision      :                                                           *
 */

#ifndef SRDS_API_ERR_CODE_PUBLIC_H
#define SRDS_API_ERR_CODE_PUBLIC_H

#ifdef NON_SDK
#include <stdint.h>
#endif

/*! @file
 *  @brief Error code enumerations
 */

/*! @addtogroup APITag
 * @{
 */

/*! @defgroup SrdsAPIErrCodeTag Error Code Enums  */

/*! @addtogroup SrdsAPIErrCodeTag
 * @{
 */

typedef uint16_t err_code_t;


/** ERROR CODE Enum */
enum srds_err_code_enum {
    SRDS_ERR_CODE_NONE = 0,
    SRDS_ERR_CODE_INVALID_RAM_ADDR,
    SRDS_ERR_CODE_SERDES_DELAY,
    SRDS_ERR_CODE_POLLING_TIMEOUT,
    SRDS_ERR_CODE_CFG_PATT_INVALID_PATTERN,
    SRDS_ERR_CODE_CFG_PATT_INVALID_PATT_LENGTH,
    SRDS_ERR_CODE_CFG_PATT_LEN_MISMATCH,
    SRDS_ERR_CODE_CFG_PATT_PATTERN_BIGGER_THAN_MAXLEN,
    SRDS_ERR_CODE_CFG_PATT_INVALID_HEX,
    SRDS_ERR_CODE_CFG_PATT_INVALID_BIN2HEX,
    SRDS_ERR_CODE_CFG_PATT_INVALID_SEQ_WRITE,
    SRDS_ERR_CODE_PATT_GEN_INVALID_MODE_SEL,
    SRDS_ERR_CODE_INVALID_UCODE_LEN,
    SRDS_ERR_CODE_MICRO_INIT_NOT_DONE,
    SRDS_ERR_CODE_UCODE_LOAD_FAIL,
    SRDS_ERR_CODE_UCODE_VERIFY_FAIL,
    SRDS_ERR_CODE_INVALID_TEMP_IDX,
    SRDS_ERR_CODE_INVALID_PLL_CFG,
    SRDS_ERR_CODE_TX_HPF_INVALID,
    SRDS_ERR_CODE_VGA_INVALID,
    SRDS_ERR_CODE_PF_INVALID,
    SRDS_ERR_CODE_TX_AMP_CTRL_INVALID,
    SRDS_ERR_CODE_INVALID_EVENT_LOG_WRITE,
    SRDS_ERR_CODE_INVALID_EVENT_LOG_READ,
    SRDS_ERR_CODE_UC_CMD_RETURN_ERROR,
    SRDS_ERR_CODE_DATA_NOTAVAIL,
    SRDS_ERR_CODE_BAD_PTR_OR_INVALID_INPUT,
    SRDS_ERR_CODE_UC_NOT_STOPPED,
    SRDS_ERR_CODE_UC_CRC_NOT_MATCH,
    SRDS_ERR_CODE_CORE_DP_NOT_RESET,
    SRDS_ERR_CODE_LANE_DP_NOT_RESET,
    SRDS_ERR_CODE_EXCEPTION,
    SRDS_ERR_CODE_INFO_TABLE_ERROR,
    SRDS_ERR_CODE_REFCLK_FREQUENCY_INVALID,
    SRDS_ERR_CODE_PLL_DIV_INVALID,
    SRDS_ERR_CODE_VCO_FREQUENCY_INVALID,
    SRDS_ERR_CODE_INSUFFICIENT_PARAMETERS,
    SRDS_ERR_CODE_CONFLICTING_PARAMETERS,
    SRDS_ERR_CODE_BAD_LANE_COUNT,
    SRDS_ERR_CODE_BAD_LANE,
    SRDS_ERR_CODE_UC_NOT_RESET,
    SRDS_ERR_CODE_FFE_TAP_INVALID,
    SRDS_ERR_CODE_FFE_NOT_AVAILABLE,
    SRDS_ERR_CODE_INVALID_RX_PAM_MODE,
    SRDS_ERR_CODE_INVALID_PRBS_ERR_ANALYZER_FEC_SIZE,
    SRDS_ERR_CODE_INVALID_PRBS_ERR_ANALYZER_ERR_THRESH,
    SRDS_ERR_CODE_INVALID_PRBS_ERR_ANALYZER_NO_PLL_LOCK,
    SRDS_ERR_CODE_CFG_PATT_INVALID_PAM4,
    SRDS_ERR_CODE_INVALID_TDT_PATTERN_FOR_HW_MODE,
    SRDS_ERR_CODE_ODD_PRE_OR_POST_TAP_INPUT,
    SRDS_ERR_CODE_RX_PI_DISP_MSB_STATUS_IS_1,
    SRDS_ERR_CODE_IMAGE_SIZE_NOT_SUPPORTED,
    SRDS_ERR_CODE_TDT_CLIPPED_WAVEFORM,
    SRDS_ERR_CODE_DBSTOP_NOT_WORKING,
    SRDS_ERR_CODE_PRBS_CHK_HW_TIMERS_NOT_EXPIRED,
    SRDS_ERR_CODE_INVALID_VALUE,
    SRDS_ERR_CODE_UC_CMD_POLLING_TIMEOUT,
    SRDS_ERR_CODE_INVALID_INFO_TABLE_ADDR,
    SRDS_ERR_CODE_INVALID_DIG_LPBK_STATE,
    SRDS_ERR_CODE_MEM_ALLOC_FAIL,
    SRDS_ERR_CODE_PRBS_CHK_DISABLED,
    SRDS_ERR_CODE_RX_CLKGATE_FRC_ON,
    SRDS_ERR_CODE_NO_PMD_RX_LOCK,
    SRDS_ERR_CODE_SRDS_REG_ACCESS_FAIL,
    SRDS_ERR_CODE_INVALID_UAPI_CASE,
    SRDS_ERR_CODE_RX_TUNING_NOT_DONE,
    SRDS_ERR_CODE_API_IP_DOES_NOT_MATCH_CORE,
    SRDS_ERR_CODE_UCODE_IP_DOES_NOT_MATCH_CORE,
    SRDS_ERR_CODE_REACHED_BUF_SIZE_LIMIT,
    SRDS_ERR_CODE_INVALID_MODE,
    SRDS_ERR_CODE_NO_PLL_LOCK,
    SRDS_ERR_TDT_PATTERN_LENGTH_WR_FAILED = 255,
    SRDS_ERR_CODE_TXFIR   = 1 << 8,
    SRDS_ERR_CODE_DFE_TAP = 2 << 8,
    SRDS_ERR_CODE_DIAG    = 3 << 8,
    SRDS_ERR_TDT_PATTERN_LENGTH_WR_FAILED=255
};

/** TXFIR Error Codes Enum */
enum srds_txfir_failcodes {
    SRDS_ERR_CODE_TXFIR_PRE_INVALID         = ERR_CODE_TXFIR +   1,
    SRDS_ERR_CODE_TXFIR_MAIN_INVALID        = ERR_CODE_TXFIR +   2,
    SRDS_ERR_CODE_TXFIR_POST1_INVALID       = ERR_CODE_TXFIR +   4,
    SRDS_ERR_CODE_TXFIR_POST2_INVALID       = ERR_CODE_TXFIR +   8,
    SRDS_ERR_CODE_TXFIR_POST3_INVALID       = ERR_CODE_TXFIR +  16,
    SRDS_ERR_CODE_TXFIR_V2_LIMIT            = ERR_CODE_TXFIR +  32,
    SRDS_ERR_CODE_TXFIR_SUM_LIMIT           = ERR_CODE_TXFIR +  64,
    SRDS_ERR_CODE_TXFIR_PRE_POST1_SUM_LIMIT = ERR_CODE_TXFIR + 128
};

/** DFE Tap Error Codes Enum */
enum srds_dfe_tap_failcodes {
    SRDS_ERR_CODE_DFE1_INVALID        = ERR_CODE_DFE_TAP +  1,
    SRDS_ERR_CODE_DFE2_INVALID        = ERR_CODE_DFE_TAP +  2,
    SRDS_ERR_CODE_DFE3_INVALID        = ERR_CODE_DFE_TAP +  4,
    SRDS_ERR_CODE_DFE4_INVALID        = ERR_CODE_DFE_TAP +  8,
    SRDS_ERR_CODE_DFE5_INVALID        = ERR_CODE_DFE_TAP + 16,
    SRDS_ERR_CODE_DFE_TAP_IDX_INVALID = ERR_CODE_DFE_TAP + 32
};

/** DIAG Error Codes Enum */
enum srds_diag_failcodes {
    SRDS_ERR_CODE_DIAG_TIMEOUT               = ERR_CODE_DIAG + 1,
    SRDS_ERR_CODE_DIAG_INVALID_STATUS_RETURN = ERR_CODE_DIAG + 2,
    SRDS_ERR_CODE_DIAG_SCAN_NOT_COMPLETE     = ERR_CODE_DIAG + 3,
    SRDS_ERR_CODE_DIAG_TIMESTAMP_FAIL        = ERR_CODE_DIAG + 4,
    SRDS_ERR_CODE_DIAG_SCAN_NO_PMD_LOCK      = ERR_CODE_DIAG + 5
};

/*! @} SrdsAPIErrCodeTag */
/*! @} APITag */
#endif

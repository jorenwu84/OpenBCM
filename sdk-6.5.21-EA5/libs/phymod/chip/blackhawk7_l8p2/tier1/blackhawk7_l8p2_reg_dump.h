/*************************************************************************************
 *                                                                                   *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

/*************************************************************************************
 *************************************************************************************
 *                                                                                   *
 *  Revision      :  Id                                                              *
 *                                                                                   *
 *  Description   :  Defines and externed arrays used for register dump              *
 */


/* THIS FILE IS GENERATED USING AN AUTOMATED SCRIPT. PLEASE DO NOT EDIT THIS FILE DIRECTLY! */

#ifndef BLACKHAWK7_L8P2_API_REG_DUMP_H
#define BLACKHAWK7_L8P2_API_REG_DUMP_H

#include "blackhawk7_l8p2_usr_includes.h"

/*! @file
 *  @brief Register addresses and types used for register dump APIs
 */

/*! @addtogroup APITag
 * @{
 */

/*! @defgroup SerdesAPIRegDumpTag Support for Register Dump APIs  */

/*! @addtogroup SerdesAPIRegDumpTag
 * @{
 */


/*! @def BLACKHAWK7_L8P2_REG_DUMP_SECTIONS
 * The number of contiguous register address ranges that will have their contents dumped.
 */
#define BLACKHAWK7_L8P2_REG_DUMP_SECTIONS  (13)

/*! @def BLACKHAWK7_L8P2_REG_PLL_START
 * The register address of the first PLL register.
 * A value of 0xffff indicates there are no PLL registers for this IP.
 */
#define BLACKHAWK7_L8P2_REG_PLL_START      (0xd110)

/*! @def BLACKHAWK7_L8P2_REG_UC_START
 * The register address of the first UC register.
 * A value of 0xffff indicates there are no UC registers for this IP.
 */
#define BLACKHAWK7_L8P2_REG_UC_START       (0xd240)
extern const uint16_t blackhawk7_l8p2_reg_dump_arr[BLACKHAWK7_L8P2_REG_DUMP_SECTIONS][2];

/*! @} SerdesAPIRegDumpTag */
/*! @} APITag */

#endif /* SERDES_API_REG_DUMP_H */


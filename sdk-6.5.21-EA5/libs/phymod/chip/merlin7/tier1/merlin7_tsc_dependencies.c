/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * 
 *  This file implements Switch specific Bus access to the PMD.
*/

#include "common/srds_api_err_code.h"
#include "common/srds_api_types.h"
#include "merlin7_tsc_common.h"
#include "merlin7_tsc_dependencies.h"
#include <phymod/acc/phymod_tsc_iblk.h>
#include <phymod/phymod.h>
#include <phymod/phymod_system.h>


/** Read a register from the currently selected Serdes IP Lane.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param address Address of register to be read
 * @param *val value read out from the register
 * @return Error code generated by read function (returns ERR_CODE_NONE if no errors)
 */
err_code_t merlin7_tsc_pmd_rdt_reg(srds_access_t *sa__, uint16_t address, uint16_t *val)
{
    uint32_t data;
    phymod_tsc_iblk_read(sa__, (PHYMOD_REG_ACC_TSC_IBLK | 0x10000 | (uint32_t) address), &data);
    data = data & 0xffff;
    *val = (uint16_t)data;
    return ( 0 );
}

/** Write to a register from the currently selected Serdes IP Lane.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param address Address of register to be written
 * @param val Value to be written to the register
 * @return Error code generated by write function (returns ERR_CODE_NONE if no errors)
 */
err_code_t merlin7_tsc_pmd_wr_reg(srds_access_t *sa__, uint16_t address, uint16_t val)
{
    uint32_t data = 0xffff & val;
    uint32_t error_code;
    error_code = phymod_tsc_iblk_write(sa__, (PHYMOD_REG_ACC_TSC_IBLK | 0x10000 | (uint32_t) address), data);
    if(error_code)
      return  ERR_CODE_DATA_NOTAVAIL;
    return  ERR_CODE_NONE;
}

/** Masked Register Write to the currently selected Serdes IP core/lane.
 * If using Serdes MDIO controller to access the registers, implement this function using merlin7_tsc_pmd_mdio_mwr_reg(..)
 *
 * If NOT using a Serdes MDIO controller or the Serdes PMI Masked write feature, please use the following code to
 * implement this function
 *
 *    merlin7_tsc_pmd_wr_reg(addr, ((merlin7_tsc_pmd_rd_reg(addr) & ~mask) | (mask & (val << lsb))));
 *
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param addr Address of register to be written
 * @param mask 16-bit mask indicating the position of the field with bits of 1s
 * @param lsb  LSB of the field
 * @param val  16bit value to be written
 * @return Error code generated by write function (returns ERR_CODE_NONE if no errors)
 */
err_code_t merlin7_tsc_pmd_mwr_reg(srds_access_t *sa__, uint16_t addr, uint16_t mask, uint8_t lsb, uint16_t val)
{
    uint32_t mymask = (uint32_t)mask;
    phymod_access_t sa_copy;
    uint32_t i;
    uint32_t error_code;

    uint32_t data = ((mymask << 16) & 0xffff0000) | val << lsb;

    error_code=0;
    PHYMOD_MEMCPY(&sa_copy, sa__, sizeof(srds_access_t));
    for(i=1; i <= 0x8; i = i << 1) {
        if(i & sa__->lane_mask) {
            sa_copy.lane_mask = i;
            error_code+=phymod_tsc_iblk_write(&sa_copy, (PHYMOD_REG_ACC_TSC_IBLK | 0x10000 | (uint32_t) addr), data);
        }
    }
    if(error_code)
        return  ERR_CODE_DATA_NOTAVAIL;
    return ERR_CODE_NONE;
}

/** Write to a PRAM location for the currently selected Serdes IP Core.
 *  The address is auto-incrementing, per the PRAM interface specification.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param val Value to be written
 * @return Error code generated by write function (returns ERR_CODE_NONE if no errors)
 */
err_code_t merlin7_tsc_pmd_wr_pram(srds_access_t *sa__, uint8_t val)
{
    return ERR_CODE_NONE;
}

/** Write message to the logger with the designated verbose level.
 * Output is sent to stdout and a logfile
 * @param message_verbose_level   Verbose level for the current message
 * @param *format Format string as in printf
 * @param ... Additional variables used as in printf
 * @return Error code generated by function (returns ERR_CODE_NONE if no errors)
 */
#ifdef SRDS_API_ALL_FUNCTIONS_HAVE_ACCESS_STRUCT
int logger_write(srds_access_t *sa__, int message_verbose_level, const char *format, ...)
{
    return ERR_CODE_NONE;
}
#endif

/** Delay the execution of the code for atleast specified amount of time in nanoseconds.
 * This function is used ONLY for delays less than 1 microsecond, non-zero error code may be returned otherwise.
 * The user can implement this as an empty function if their register access latency exceeds 1 microsecond.
 * @param delay_ns Delay in nanoseconds
 * @return Error code generated by delay function (returns ERR_CODE_NONE if no errors)
 */
err_code_t merlin7_tsc_delay_ns(srds_access_t *sa__, uint16_t delay_ns)
{
    uint32_t delay;
    delay = delay_ns / 1000;
    if(!delay) {
        delay = 1;
    }
    PHYMOD_USLEEP(delay);
    return 0;
}

/** Delay the execution of the code for atleast specified amount of time in microseconds.
 * For longer delays, accuracy is required. When requested delay is > 100ms, the implemented delay is assumed
 * to be < 10% bigger than requested.
 * This function is used ONLY for delays greater than or equal to 1 microsecond.
 * @param delay_us Delay in microseconds
 * @return Error code generated by delay function (returns ERR_CODE_NONE if no errors)
 */
err_code_t merlin7_tsc_delay_us(srds_access_t *sa__, uint32_t delay_us)
{
    PHYMOD_USLEEP(delay_us);
    return 0;
}

/** Delay the execution of the code for atleast specified amount of time in milliseconds.
 * For longer delays, accuracy is required. When requested delay is > 100ms, the implemented delay is assumed
 * to be < 10% bigger than requested.
 * This function is used ONLY for delays greater than or equal to 1 millisecond.
 * @param delay_ms Delay in milliseconds
 * @return Error code generated by delay function (returns ERR_CODE_NONE if no errors)
 */
err_code_t merlin7_tsc_delay_ms(srds_access_t *sa__, uint32_t delay_ms)
{
    uint32_t delay;
    delay = delay_ms * 1000;
    if (!delay ) {
        delay = 1;
    }
    PHYMOD_USLEEP(delay);
    return ( 0 );
}

/** Return the address of current selected Serdes IP Core.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @return the IP level address of the current core.
 */
uint8_t merlin7_tsc_get_core(srds_access_t *sa__)
{
    return 0;
}

/** Return the address of current selected Serdes IP lane.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @return the IP level address of the current lane. 0 to N-1, for an N lane IP
 */
uint8_t merlin7_tsc_get_lane(srds_access_t *sa__)
{
    if(sa__->lane_mask == 0x1) {
        return 0;
    } else if(sa__->lane_mask == 0x2) {
        return 1;
    } else if(sa__->lane_mask == 0x4) {
        return 2;
    } else if(sa__->lane_mask == 0x8) {
        return 3;
    } else {
        return 0;
    }
}

/** Set the address of current selected Serdes IP lane.  Used in diagnostic
 * and core-level management functions.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param lane_index is the lane index
 * @return Any error code generated during execution; ERR_CODE NONE otherwise.
 */
err_code_t merlin7_tsc_set_lane(srds_access_t *sa__, uint8_t lane_index)
{
    return ERR_CODE_NONE;
}

srds_info_t *merlin7_tsc_get_info_table_address(srds_access_t *sa__)
{
    return (srds_info_t *) (sa__->pmd_info_ptr);
}

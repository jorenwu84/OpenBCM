/*
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *    _____   _____________________
 *   / __\ \ / / _ \ _ \ __/ __/ __|
 *  | (__ \ ^ /|  _/   / _|\__ \__ \
 *   \___| |_| |_| |_|_\___|___/___/ TIMING TECHNOLOGY
 *   ==================================================
 * Generated by CyClocksRT R1.05.00
 *
 * Modification Date: 8/12/02
 * Comments:
 * Customer:
 * FAE:
 * License #:
 * Part Number:  CY22150
 *                      ______________
 *                    _|     \__/     |_
 *               XIN |_| 1         16 |_| XOUT
 *                    _|              |_
 *               VDD |_| 2         15 |_| CLK6
 *                    _|              |_
 *              AVDD |_| 3         14 |_| CLK5
 *                    _|              |_
 *               SDA |_| 4         13 |_| VSS
 *                    _|   CY22150    |_
 *              AVSS |_| 5         12 |_| LCLK4
 *                    _|              |_
 *              VSSL |_| 6         11 |_| VDDL
 *                    _|              |_
 *             LCLK1 |_| 7         10 |_| SCL
 *                    _|              |_
 *             LCLK2 |_| 8          9 |_| LCLK3
 *                     |______________|
 *
 *
 * Reference Input:   25.000000 MHz External
 * Target VCO:  314.000000 MHz
 * Actual VCO:  314.000000 MHz    PPM:      0.0
 *
 * P value:  314  MSB 0100111010 LSB
 * Q vaule:  25  MSB 0011001 LSB
 * Charge Pump Setting:  4
 * Divider 1-X:  4   VCO
 * Divider 2-X:  9   VCO
 *
 * Clock Output
 * ====================================================================
 * |Output|  Source  |  Desired   |   Actual   |    PPM     | Voltage |
 * ====================================================================
 * | CLK1 |  Pll/2   | 157.000000 | 157.000000 |       0.0  |   2.5V  |
 * | CLK2 |  Pll/2   | 157.000000 | 157.000000 |       0.0  |   2.5V  |
 * | CLK3 |    Off   |    Off     |    Off     |    - -     |   2.5V  |
 * | CLK4 |    Off   |    Off     |    Off     |    - -     |   2.5V  |
 * | CLK5 |  Pll/  9 |  34.888889 |  34.888889 |       0.0  |   3.3V  |
 * | CLK6 |  Pll/  9 |  34.888889 |  34.888889 |       0.0  |   3.3V  |
 * ====================================================================
 *
 *
 *
 * Programming Algorithm
 *
 *  For Core (Outputs AB, PLL3): NOTE: Q defaults to 25 so no adjustmnt
 *  is necessary.
 *
 * 1. Adjust Q to desired value (25).  Default so no action necessary!!!
 * 2. Adjust P to desired value 3. Adjust output divider to desired value
 * (2) - default is 3 for core and SDRAM 4. Adjust LF
 *
 * For SDRAM (Outputs CD, PLL2):
 *
 * 1. Adjust Q to desired value (25)
 * 2. Adjust P to desired value
 * 3. Adjust output divider to desired value (2) - default is 3 for core and
 *    SDRAM
 * 4. Adjust LF
 *
 * For PCI/CPU clock  (OUTPUT E, PLL1)
 *
 * 1. Adjust Q to desired value (25).  Default so no action necessary!!!
 * 2. Adjust P to desired value
 * 3. Adjust output divider to desired value (4) - Default so no action
 *    necessary!!!
 * 4. Adjust LF.
 * 5. Compensate as necessary for baud rate or other parameters affected by
 *    changing the PCI or CPU frequency!!!!!!
 *
 *
 * See the Cypress W22393 Clock chip data sheet(s) for more details.
 * See also: http://www.cypress.com/clock/datasheets.html
 */

#include <sal/types.h>
#include <soc/drv.h>
#include <soc/error.h>
#include <soc/i2c.h>
#include <shared/bsl.h>

#define MHZ(x)    ((x)*1000000)

/* FRef = 25MHz */
#define    CY22150_REF_CLK    MHZ(25)
#define    CY22150_DIV_CORE   2
#define    CY22150_DIV_SDRAM  2
#define    CY22150_DIV_PCI    4
#define CY_DEBUG(x) do { \
        LOG_CLI((BSL_META(x);                                  \
        sal_usleep(1000);                               \
    } while (0)

/*
 * Charge Pump : Computed based on Ptotal
 * See datasheet for more info.
 */
STATIC uint8
cy22150_charge_pump(int val)
{
    uint8 tmp;

    /* Convert from MHz if required */
    if (val > MHZ(1)) {
	val /= MHZ(1);
    }
    if (val >= 16 && val <= 44) {
	tmp = 0;
    } else if (val >= 45 && val <= 479) {
	tmp = 1;
    } else if (val >= 480 && val <= 639) {
	tmp = 2;
    } else if (val >= 640 && val <= 799) {
	tmp = 3;
    } else if (val >= 800 && val <= 1023) {
	tmp = 4;
    } else {
	tmp = 0;
    }
    return tmp;
}

STATIC int
cy22150_ioctl(int unit, int devno,
              int opcode, void *data, int len)
{
#ifdef COMPILER_HAS_DOUBLE
    double clk, qt;
#else
    int qt;
#endif
    int iclk, P0, ip, iq;
    uint8 tmp, lf, saddr = soc_i2c_addr(unit, devno);

    if ( I2C_XPLL_SET_PCI == opcode ) {
        /* Not implemented, but report success */
    } else if ( I2C_XPLL_GET_PCI == opcode ) {
        /* Not implemented, but report success */
    } else if ( I2C_XPLL_SET_CORE == opcode ) {
#ifdef COMPILER_HAS_DOUBLE
	clk = *((double *)data);

	/* Convert from MHz if required */
	if( clk < MHZ(1))
	    clk *= MHZ(1);

	/* Setup new core clock */
	iclk = (int) clk;
#else
	iclk = *((int *)data);
#endif
        /* Compute actual frequency in MHz */
        iclk = (CY22150_DIV_CORE * iclk) / MHZ(1);

        /* This is set only on an odd clock freq */
 	P0 = iclk % 2;

	/* Compute Qt and convert to byte value (in MHz)*/
	qt = CY22150_REF_CLK - MHZ(2);
	qt = qt / MHZ(1);

	/* Compute P/Q (integer format) */
	ip = ((iclk - P0) / 2) - 4;
	iq = (int) qt;

        /* Bit 8 of Q (0x42) is PNot */
	iq |= (P0 << 8);

	/* Compute Charge Pump setting */
	lf = cy22150_charge_pump(iclk);

        /* Bits 7-5 fixed at 110b */
        tmp = 0xC0;

	/* Add upper P bits */
	tmp |= (ip >> 8);

	/* Add Charge Pump bits */
	tmp |= (lf << 2);

	/* Configure new clock setting */
	soc_i2c_write_byte_data(unit, saddr, 0x40, tmp);
	soc_i2c_write_byte_data(unit, saddr, 0x41, (uint8)ip);
	soc_i2c_write_byte_data(unit, saddr, 0x42, (uint8)iq);

    } else if ( I2C_XPLL_GET_CORE == opcode) {
	uint8 p_l, p_h, q, pNot;
	uint16 p;

	soc_i2c_read_byte_data(unit, saddr, 0x41, &p_l);
	soc_i2c_read_byte_data(unit, saddr, 0x40, &p_h);
	soc_i2c_read_byte_data(unit, saddr, 0x42, &q);
	pNot = ((p_h & 0x04) >> 2); /* Bit 2 of 0x57 */
	p_h &= 0x03; /* Clear all bits except bits 0-1 */
	p = (p_h << 8) | p_l; /* 10 bits of p value */
#ifdef COMPILER_HAS_DOUBLE
	clk =   2 * ( p + 4 )  + pNot ;
	clk *= CY22150_REF_CLK;
	clk /= (q+2);
	clk /= 2;
	clk /= MHZ(1);
	*((double *)data) = clk;
#else
	iclk = 2 * (p + 4) + pNot;
	iclk *= CY22150_REF_CLK / (q + 2);
	iclk /= 2;
	*((int *)data) = iclk;
#endif
    } else if ( I2C_XPLL_SET_SDRAM == opcode) {
        /* Not implemented, but report success */
    } else if ( I2C_XPLL_GET_SDRAM == opcode) {
        /* Not implemented, but report success */
    } else {
	return SOC_E_PARAM;
    }

    return SOC_E_NONE;
}

/*
 * Function: cy22150_init
 *
 * Purpose:
 *    Initialize the CY22150 clock chip
 * Parameters:
 *    unit - StrataSwitch device number or I2C bus number
 *    devno - chip device id
 *    data - not used
 *    len - not used
 * Returns:
 *    SOC_E_NONE - no failure
 */
STATIC int
cy22150_init(int unit, int devno, 
             void *data, int len)
{
#if 0
    int i;
    uint8 x;
    uint8 saddr = soc_i2c_addr(unit, devno);

    /* Dump register values */
    for (i = 0x08; i <= 0x17; i++) {
        soc_i2c_read_byte_data(unit, saddr, (uint8)i, &x);
        LOG_CLI((BSL_META_U(unit,
                            "pll[%x] = 0x%x\n"), i, x));
    }
    for (i = 0x40; i <= 0x57; i++) {
        soc_i2c_read_byte_data(unit, saddr, (uint8)i, &x);
        LOG_CLI((BSL_META_U(unit,
                            "pll[%x] = 0x%x\n"), i, x));
    }
#endif
    soc_i2c_devdesc_set(unit, devno, "Cypress W22150 clock Chip");
    return SOC_E_NONE;
}

STATIC int
cy22150_read(int unit, int devno,
	     uint16 addr, uint8 *data, uint32 *len)
{
    *len = 1; /* Byte-write mode */
    return soc_i2c_read_byte_data(unit,
				  soc_i2c_addr(unit, devno),
				  (uint8)addr, data);
}

STATIC int
cy22150_write(int unit, int devno,
              uint16 addr, uint8 *data, uint32 len)
{
    return soc_i2c_write_byte_data(unit,
				   soc_i2c_addr(unit, devno),
				   (uint8)addr, *data);
}

/* CY22150/W311 Clock Chip Driver callout */
i2c_driver_t _soc_i2c_cy22150_driver = {
    0x0, 0x0, /* System assigned bytes */
    CY22150_DEVICE_TYPE,
    cy22150_read,
    cy22150_write,
    cy22150_ioctl,
    cy22150_init,
    NULL,
};

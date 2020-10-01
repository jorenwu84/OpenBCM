/*
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *
 * File:        field.h
 * Purpose:     Register/memory field descriptions
 */

#ifndef _SOC_FIELD_H
#define _SOC_FIELD_H

#include <soc/types.h>
#if defined(BCM_ESW_SUPPORT) || defined(BCM_SAND_SUPPORT) || defined(PORTMOD_SUPPORT)
#include <soc/mcm/allenum.h>
#endif
#include <soc/schanmsg.h>
#include <soc/types.h>


/* Values for flags */

#define SOCF_LE                     0x01    /* little endian */
#define SOCF_RO                     0x02    /* read only */
#define SOCF_WO                     0x04    /* write only */

#define SOCF_LSB                    0x05    /* Used for define the MAC Address format */
#define SOCF_MSB                    0x06    /* Used for define the MAC Address format */

#define SOCF_SC                     0x08       
#define SOCF_RES                    0x10    /* reserved (do not test, etc.) */
#define SOCF_GLOBAL                 0x20    /* Fields common to different views */
#define SOCF_W1TC                   0x40    /* write 1 to clear, TREX2 STYLE field only */
#define SOCF_COR                    0x80    /* clear on read, TREX2 STYLE field only */
#define SOCF_PUNCH                  0x100   /* punch bit, write 1 but always read 0. TREX2 STYLE field only */
#define SOCF_WVTC                   0x200   /* write value to clear */
#define SOCF_RWBW                   0x400   /* read/write, block writable, TREX2 STYLE field only */
#define SOCF_SIG                    0x800   /* Field is a signal*/
#define SOCF_INTR                   0x1000  /*field is an interrupt */
#define SOCF_IGNORE_DEFAULT_TEST    0x2000  /*field is an for ignore default test */
#define SOCF_COUNTER                0x4000  /* field is a counter */
#define SOCF_ERROR                  0x8000  /* field is a error counter */




typedef struct soc_field_info_s {
	soc_field_t	field;
	uint16		len;	/* Bits in field */
	uint16		bp;	/* Least bit position of the field */
	uint16  	flags;	/* Logical OR of SOCF_* */
} soc_field_info_t;

/*
 * Find field _fsrch in the field list _flist (with _fnum entries)
 * Sets _infop to the field_info of _fsrch or NULL if not found
 */
#define	SOC_FIND_FIELD(_fsrch, _flist, _fnum, _infop) do { \
    soc_field_info_t *__s, *__m, *__e; \
    _infop = NULL; \
    __s = _flist; \
    if (__s->field == _fsrch) { \
        _infop = __s; \
    } else { \
        __e = &__s[_fnum-1]; \
        if (__e->field == _fsrch) { \
            _infop = __e; \
        } else { \
            __m = __s + _fnum/2; \
            while ((__s < __e) && (__m < __e) && (__s->field != _fsrch) && \
                   (__m->field != _fsrch)) { \
                if (_fsrch < __m->field) { \
                    __e = __m - 1; \
                } else if (_fsrch > __m->field) { \
                    __s = __m + 1; \
                } else { \
                    break; \
                } \
                __m = __s + ((__e-__s)+1)/2; \
            } \
            if (__m->field == _fsrch) { \
                _infop = __m; \
            } else if (__s->field == _fsrch) { \
                _infop = __s; \
            } \
        } \
    } \
} while (0)

EXTERN int soc_mem_field_length(int unit, soc_mem_t mem, soc_field_t field);

#define SOC_MEM_FIELD32_VALUE_MAX(_unit, _mem, _field)              \
    ((soc_mem_field_length((_unit), (_mem) , (_field)) < 32) ?      \
     ((1 << soc_mem_field_length((_unit), (_mem), (_field))) - 1) : \
     ((uint32)(0xFFFFFFFF)))

#define SOC_MEM_FIELD32_VALUE_FIT(_unit, _mem, _field, _value) \
    (((uint32)(_value)) <= SOC_MEM_FIELD32_VALUE_MAX((_unit), (_mem), (_field)))

#if !defined(SOC_NO_NAMES)
EXTERN char *soc_fieldnames[];
#define SOC_FIELD_NAME(unit, field)		soc_fieldnames[field]
#else
#define SOC_FIELD_NAME(unit, field)		""
#endif

#endif	/* !_SOC_FIELD_H */

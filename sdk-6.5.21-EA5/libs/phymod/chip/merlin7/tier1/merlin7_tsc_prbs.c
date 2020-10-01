/***********************************************************************************
 *                                                                                 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

/***********************************************************************************
 ***********************************************************************************
 *  File Name     :  merlin7_tsc_prbs.c                                             *
 *  Created On    :  04 Nov 2015                                                   *
 *  Created By    :  Brent Roberts                                                 *
 *  Description   :  Serdes PRBS test APIs for Serdes IPs                          *
 *  Revision      :     *
 */

/** @file merlin7_tsc_prbs.c
 * Implementation of API PRBS functions
 */
#ifdef INCLUDE_STD_HEADERS
#include <stdio.h>
#endif
#ifdef SRDS_API_FLOATING_POINT_SUPPORT
#include <math.h>
#endif

#include <phymod/phymod_system.h>
#include "merlin7_tsc_prbs.h"
#include "merlin7_tsc_common.h"
#include "merlin7_tsc_config.h"
#include "merlin7_tsc_dependencies.h"
#include "merlin7_tsc_functions.h"
#include "merlin7_tsc_internal.h"
#include "merlin7_tsc_internal_error.h"
#include "merlin7_tsc_select_defns.h"
#include "merlin7_tsc_access.h"

#include "merlin7_api_uc_vars_rdwr_defns.h"

#ifndef SMALL_FOOTPRINT

/******************************/
/*  TX Pattern Generator APIs */
/******************************/

/* Cofigure shared TX Pattern (Return Val = 0:PASS, 1-6:FAIL (reports 6 possible error scenarios if failed)) */
err_code_t merlin7_tsc_config_shared_tx_pattern(srds_access_t *sa__, uint8_t patt_length_bits, const char pattern[]) {
    INIT_SRDS_ERR_CODE

  char       patt_final[245] = "";
  char       patt_mod[245]   = "", bin[5] = "";
  uint8_t    str_len, i, k, j = 0;
  uint8_t    offset_len, actual_patt_len = 0, hex = 0;
  uint8_t    zero_pad_len    = 0; /* suppress warnings, changed by merlin7_tsc_INTERNAL_calc_patt_gen_mode_sel() */
  uint16_t   patt_gen_wr_val = 0;
  uint8_t    mode_sel        = 0; /* suppress warnings, changed by merlin7_tsc_INTERNAL_calc_patt_gen_mode_sel() */

  EFUN(merlin7_tsc_INTERNAL_calc_patt_gen_mode_sel(sa__, &mode_sel,&zero_pad_len,patt_length_bits));

  /* Generating the appropriate write value to patt_gen_seq registers */
  str_len = (uint8_t)USR_STRLEN(pattern);

  if ((str_len > 2) && ((USR_STRNCMP(pattern, "0x", 2)) == 0)) {
    /* Hexadecimal Pattern */
    for (i=2; i < str_len; i++) {
      if (pattern[i] != '_') {
        EFUN(merlin7_tsc_INTERNAL_compute_bin(sa__, pattern[i],bin));
        ENULL_STRNCAT(patt_mod, bin, SPC_LEFT(patt_mod));
        actual_patt_len = (uint8_t)(actual_patt_len + 4);
        if (actual_patt_len > 240) {
          EFUN_PRINTF(("ERROR: Pattern bigger than max pattern length\n"));
          return (merlin7_tsc_error(sa__, ERR_CODE_CFG_PATT_PATTERN_BIGGER_THAN_MAXLEN));
        }
      }
    }

    offset_len = (uint8_t)(actual_patt_len - patt_length_bits);
    if ((offset_len > 3)  || (actual_patt_len < patt_length_bits)) {
      EFUN_PRINTF(("ERROR: Pattern length provided does not match the hexadecimal pattern provided\n"));
      return (merlin7_tsc_error(sa__, ERR_CODE_CFG_PATT_LEN_MISMATCH));
    }
    else if (offset_len) {
      for (i=0; i < offset_len; i++) {
        if (patt_mod[i] != '0') {
          EFUN_PRINTF(("ERROR: Pattern length provided does not match the hexadecimal pattern provided\n"));
          return (merlin7_tsc_error(sa__, ERR_CODE_CFG_PATT_LEN_MISMATCH));
        }
      }
      for (i=offset_len; i <= actual_patt_len; i++) {
        patt_mod[i - offset_len] = patt_mod[i];
      }
    }
  }
  else {
    /* Binary Pattern */
    for (i=0; i < str_len; i++) {
      if ((pattern[i] == '0') || (pattern[i] == '1')) {
        bin[0] = pattern[i];
        bin[1] = '\0';
        ENULL_STRNCAT(patt_mod, bin, SPC_LEFT(patt_mod));
        actual_patt_len++;
        if (actual_patt_len > 240) {
          EFUN_PRINTF(("ERROR: Pattern bigger than max pattern length\n"));
          return (merlin7_tsc_error(sa__, ERR_CODE_CFG_PATT_PATTERN_BIGGER_THAN_MAXLEN));
        }
      }
      else if (pattern[i] != '_') {
        EFUN_PRINTF(("ERROR: Invalid input Pattern\n"));
        return (merlin7_tsc_error(sa__, ERR_CODE_CFG_PATT_INVALID_PATTERN));
      }
    }

    if (actual_patt_len != patt_length_bits) {
      EFUN_PRINTF(("ERROR: Pattern length provided does not match the binary pattern provided\n"));
      return (merlin7_tsc_error(sa__, ERR_CODE_CFG_PATT_LEN_MISMATCH));
    }
  }

  /* Zero padding upper bits and concatinating patt_mod to form patt_final */
  for (i=0; i < zero_pad_len; i++) {
    ENULL_STRNCAT(patt_final, "0", SPC_LEFT(patt_final));
    j++;
  }
  for (i=zero_pad_len; i + patt_length_bits < 241; i = (uint8_t)(i + patt_length_bits)) {
    ENULL_STRNCAT(patt_final, patt_mod, SPC_LEFT(patt_final));
    j++;
  }

  /* EFUN_PRINTF(("\nFinal Pattern = %s\n\n",patt_final));    */

  for (i=0; i < 15; i++) {

    for (j=0; j < 4; j++) {
      k = (uint8_t)(i*16 + j*4);
      bin[0] = patt_final[k];
      bin[1] = patt_final[k+1];
      bin[2] = patt_final[k+2];
      bin[3] = patt_final[k+3];
      bin[4] = '\0';
      EFUN(merlin7_tsc_INTERNAL_compute_hex(sa__,bin, &hex));
      patt_gen_wr_val = (uint16_t)((patt_gen_wr_val << 4) | hex);
    }
    /* EFUN_PRINTF(("patt_gen_wr_val[%d] = 0x%x\n",(14-i),patt_gen_wr_val)); */

    /* Writing to apprpriate patt_gen_seq Registers */
    switch (i) {
      case 0:  EFUN(wrc_patt_gen_seq_14(patt_gen_wr_val));
               break;
      case 1:  EFUN(wrc_patt_gen_seq_13(patt_gen_wr_val));
               break;
      case 2:  EFUN(wrc_patt_gen_seq_12(patt_gen_wr_val));
               break;
      case 3:  EFUN(wrc_patt_gen_seq_11(patt_gen_wr_val));
               break;
      case 4:  EFUN(wrc_patt_gen_seq_10(patt_gen_wr_val));
               break;
      case 5:  EFUN(wrc_patt_gen_seq_9(patt_gen_wr_val));
               break;
      case 6:  EFUN(wrc_patt_gen_seq_8(patt_gen_wr_val));
               break;
      case 7:  EFUN(wrc_patt_gen_seq_7(patt_gen_wr_val));
               break;
      case 8:  EFUN(wrc_patt_gen_seq_6(patt_gen_wr_val));
               break;
      case 9:  EFUN(wrc_patt_gen_seq_5(patt_gen_wr_val));
               break;
      case 10: EFUN(wrc_patt_gen_seq_4(patt_gen_wr_val));
               break;
      case 11: EFUN(wrc_patt_gen_seq_3(patt_gen_wr_val));
               break;
      case 12: EFUN(wrc_patt_gen_seq_2(patt_gen_wr_val));
               break;
      case 13: EFUN(wrc_patt_gen_seq_1(patt_gen_wr_val));
               break;
      case 14: EFUN(wrc_patt_gen_seq_0(patt_gen_wr_val));
               break;
      default: EFUN_PRINTF(("ERROR: Invalid write to patt_gen_seq register\n"));
               return (merlin7_tsc_error(sa__, ERR_CODE_CFG_PATT_INVALID_SEQ_WRITE));
    }
  }

  /* Pattern Generator Mode Select */
  /* EFUN(wr_patt_gen_mode_sel(mode_sel)); */
  /* EFUN_PRINTF(("Pattern gen Mode = %d\n",mode));    */

  /* Enable Fixed pattern Generation */
  /* EFUN(wr_patt_gen_en(0x1)); */
  return(ERR_CODE_NONE);
}


/* Enable/Disable Shared TX pattern generator */
err_code_t merlin7_tsc_tx_shared_patt_gen_en(srds_access_t *sa__, uint8_t enable, uint8_t patt_length_bits) {
    INIT_SRDS_ERR_CODE
  uint8_t zero_pad_len = 0; /* suppress warnings, changed by merlin7_tsc_INTERNAL_calc_patt_gen_mode_sel() */
  uint8_t mode_sel     = 0; /* suppress warnings, changed by merlin7_tsc_INTERNAL_calc_patt_gen_mode_sel() */

  EFUN(merlin7_tsc_INTERNAL_calc_patt_gen_mode_sel(sa__, &mode_sel,&zero_pad_len,patt_length_bits));

  if (enable) {
    if ((mode_sel < 1) || (mode_sel > 6)) {
      return (merlin7_tsc_error(sa__, ERR_CODE_PATT_GEN_INVALID_MODE_SEL));
    }
    mode_sel = (uint8_t)(12 - mode_sel);
    EFUN(wr_patt_gen_start_pos(mode_sel));            /* Start position for pattern */
    EFUN(wr_patt_gen_stop_pos(0x0));                  /* Stop position for pattern */
    EFUN(wr_patt_gen_en(0x1));                        /* Enable Fixed pattern Generation  */
  }
  else {
    EFUN(wr_patt_gen_en(0x0));                        /* Disable Fixed pattern Generation  */
  }
  return(ERR_CODE_NONE);
}


/**************************************/
/*  PRBS Generator/Checker Functions  */
/**************************************/

/* Configure PRBS Generator */
err_code_t merlin7_tsc_config_tx_prbs(srds_access_t *sa__, enum srds_prbs_polynomial_enum prbs_poly_mode, uint8_t prbs_inv) {
    INIT_SRDS_ERR_CODE
    if(prbs_poly_mode >= PRBS_49 && prbs_poly_mode <= PRBS_AUTO_DETECT) {
      return (ERR_CODE_BAD_PTR_OR_INVALID_INPUT);
    }
    if(prbs_poly_mode >= PCS_PRBS_7) {
      return (ERR_CODE_BAD_PTR_OR_INVALID_INPUT);
    }
    {
      uint8_t poly_mode_lsb;

      poly_mode_lsb = prbs_poly_mode & 0x7;

      EFUN(wr_prbs_gen_mode_sel((uint8_t)poly_mode_lsb));   /* PRBS Generator mode sel */
    }
    EFUN(wr_prbs_gen_inv(prbs_inv));                      /* PRBS Invert Enable/Disable */
    /* To enable PRBS Generator */
    /* EFUN(wr_prbs_gen_en(0x1)); */
    return (ERR_CODE_NONE);
}

err_code_t merlin7_tsc_get_tx_prbs_config(srds_access_t *sa__, enum srds_prbs_polynomial_enum *prbs_poly_mode, uint8_t *prbs_inv) {
    INIT_SRDS_ERR_CODE
    uint8_t val;

    ESTM(val = rd_prbs_gen_mode_sel());                   /* PRBS Generator mode sel */
    *prbs_poly_mode = (enum srds_prbs_polynomial_enum)val;
    ESTM(val = rd_prbs_gen_inv());                        /* PRBS Invert Enable/Disable */
    *prbs_inv = val;
  return (ERR_CODE_NONE);
}

/* PRBS Generator Enable/Disable */
err_code_t merlin7_tsc_tx_prbs_en(srds_access_t *sa__, uint8_t enable) {
    INIT_SRDS_ERR_CODE
    if (enable) {
        EFUN(wr_prbs_gen_en(0x1));                          /* Enable PRBS Generator */
    }
    else {
        EFUN(wr_prbs_gen_en(0x0));                          /* Disable PRBS Generator */
    }
    return (ERR_CODE_NONE);
}
/* Get PRBS Generator Enable/Disable */
err_code_t merlin7_tsc_get_tx_prbs_en(srds_access_t *sa__, uint8_t *enable) {
    INIT_SRDS_ERR_CODE
    if(!enable) {
        return(merlin7_tsc_error(sa__, ERR_CODE_BAD_PTR_OR_INVALID_INPUT));
    }
    ESTM(*enable = rd_prbs_gen_en());
    return (ERR_CODE_NONE);
}

/* PRBS 1-bit error injection */
err_code_t merlin7_tsc_tx_prbs_err_inject(srds_access_t *sa__, uint8_t enable) {
    INIT_SRDS_ERR_CODE
  /* PRBS Error Insert.
     0 to 1 transition on this signal will insert single bit error in the MSB bit of the data bus.
     Reset value is 0x0.
  */
    if(enable) {
      EFUN(wr_prbs_gen_err_ins(0x1));
    }
    EFUN(wr_prbs_gen_err_ins(0));
  return (ERR_CODE_NONE);
}

/* Configure PRBS Checker */
err_code_t merlin7_tsc_config_rx_prbs(srds_access_t *sa__, enum srds_prbs_polynomial_enum prbs_poly_mode, enum srds_prbs_checker_mode_enum prbs_checker_mode, uint8_t prbs_inv) {
    INIT_SRDS_ERR_CODE
  if(prbs_poly_mode >= PRBS_49 && prbs_poly_mode <= PRBS_AUTO_DETECT) {
    return (ERR_CODE_BAD_PTR_OR_INVALID_INPUT);
  }
  {
    uint8_t dig_lpbk = 0;
  if(prbs_poly_mode >= PCS_PRBS_7) {
    return (ERR_CODE_BAD_PTR_OR_INVALID_INPUT);
  }
      {  
        uint8_t poly_mode_lsb;

        poly_mode_lsb = prbs_poly_mode & 0x7;
        EFUN(wr_prbs_chk_mode_sel((uint8_t)poly_mode_lsb));  /* PRBS Checker Polynomial mode sel  */
      }
      EFUN(wr_prbs_chk_mode((uint8_t)prbs_checker_mode));  /* PRBS Checker mode sel (PRBS LOCK state machine select) */
      ESTM(dig_lpbk = rd_dig_lpbk_en());
      if(dig_lpbk == 0) {
        /* Only enable auto mode in non-digital loop-back mode */
        EFUN(wr_prbs_chk_en_auto_mode(0x1));             /* PRBS Checker enable control - rx_dsc_lock & prbs_chk_en */
      }
      EFUN(wr_prbs_chk_inv(prbs_inv));                     /* PRBS Invert Enable/Disable */
  }
  /* To enable PRBS Checker */
  /* EFUN(wr_prbs_chk_en(0x1)); */
  return (ERR_CODE_NONE);
}

/* get PRBS Checker */
err_code_t merlin7_tsc_get_rx_prbs_config(srds_access_t *sa__, enum srds_prbs_polynomial_enum *prbs_poly_mode, enum srds_prbs_checker_mode_enum *prbs_checker_mode, uint8_t *prbs_inv) {
    INIT_SRDS_ERR_CODE
    uint8_t val;

      ESTM(val = rd_prbs_chk_mode_sel());                 /* PRBS Checker Polynomial mode sel  */
      *prbs_poly_mode = (enum srds_prbs_polynomial_enum)val;

      ESTM(val = rd_prbs_chk_mode());                     /* PRBS Checker mode sel (PRBS LOCK state machine select) */
      *prbs_checker_mode = (enum srds_prbs_checker_mode_enum)val;
      ESTM(val = rd_prbs_chk_inv());                      /* PRBS Invert Enable/Disable */
      *prbs_inv = val;
  return (ERR_CODE_NONE);
}

/* PRBS Checker Enable/Disable */
err_code_t merlin7_tsc_rx_prbs_en(srds_access_t *sa__, uint8_t enable) {
    INIT_SRDS_ERR_CODE
    if (enable) {
        EFUN(wr_prbs_chk_burst_err_cnt_en(0x1));            /* Must be enabled before prbs_chk_en; Only enabled when NOT using HW_TIMERS */
        EFUN(wr_prbs_chk_en(0x1));                          /* Enable PRBS Checker */
    }
    else {
        EFUN(wr_prbs_chk_en(0x0));                          /* Disable PRBS Checker */
        EFUN(wr_prbs_chk_burst_err_cnt_en(0x0));
    }
    return (ERR_CODE_NONE);
}

err_code_t merlin7_tsc_get_rx_prbs_en(srds_access_t *sa__, uint8_t *enable) {
    INIT_SRDS_ERR_CODE
    if(!enable) {
        return(merlin7_tsc_error(sa__, ERR_CODE_BAD_PTR_OR_INVALID_INPUT));
    }
    ESTM(*enable = rd_prbs_chk_en());
    return (ERR_CODE_NONE);
}


/* PRBS Checker Lock State */
err_code_t merlin7_tsc_prbs_chk_lock_state(srds_access_t *sa__, uint8_t *chk_lock) {
    INIT_SRDS_ERR_CODE
  if(!chk_lock) {
    return(merlin7_tsc_error(sa__, ERR_CODE_BAD_PTR_OR_INVALID_INPUT));
  }
    ESTM(*chk_lock = rd_prbs_chk_lock());                  /* PRBS Checker Lock Indication 1 = Locked, 0 = Out of Lock */
  return (ERR_CODE_NONE);
}

/* PRBS Error Count and Lock Lost (bit 31 in lock lost) */
err_code_t merlin7_tsc_prbs_err_count_ll(srds_access_t *sa__, uint32_t *prbs_err_cnt) {
    INIT_SRDS_ERR_CODE
  uint16_t rddata;

  if(!prbs_err_cnt) {
    return(merlin7_tsc_error(sa__, ERR_CODE_BAD_PTR_OR_INVALID_INPUT));
  }
    ESTM(rddata = REG_RD_TLB_RX_PRBS_CHK_ERR_CNT_MSB_STATUS());
    *prbs_err_cnt = ((uint32_t) rddata)<<16;
    ESTM(*prbs_err_cnt = (*prbs_err_cnt | rd_prbs_chk_err_cnt_lsb()));
  return (ERR_CODE_NONE);
}

/* PRBS Error Count State  */
err_code_t merlin7_tsc_prbs_err_count_state(srds_access_t *sa__, uint32_t *prbs_err_cnt, uint8_t *lock_lost) {
    INIT_SRDS_ERR_CODE
  uint8_t dig_lpbk_enable = 0;
  uint8_t link_training_enable = 0;
  if(!prbs_err_cnt || !lock_lost) {
    return(merlin7_tsc_error(sa__, ERR_CODE_BAD_PTR_OR_INVALID_INPUT));
  }
    EFUN(merlin7_tsc_prbs_err_count_ll(sa__, prbs_err_cnt));
    {
      *lock_lost = (uint8_t)(*prbs_err_cnt >> 31);
    }
    *prbs_err_cnt = (*prbs_err_cnt & 0x7FFFFFFF);

    /* Check if Digital Loopback and LinkTrainig both are enabled */
    ESTM(dig_lpbk_enable = rd_dig_lpbk_en());
    ESTM(link_training_enable = rd_cl72_ieee_training_enable());

    if(dig_lpbk_enable && link_training_enable) {
      EFUN_PRINTF(("WARNING: PRBS Check Lock - Digital Loopback and Link Training both are enabled\n"));
    }
  return (ERR_CODE_NONE);
}


err_code_t merlin7_tsc_display_detailed_prbs_state_hdr(srds_access_t *sa__) {
    EFUN_PRINTF(("\nPRBS DETAILED DISPLAY :\n"));

/* Comment out display of PRBS burst error if BLACKHAWK7 & OSPREY7 */
    EFUN_PRINTF((" LN TX-Mode TX-PRBS-Inv TX-PMD-Inv RX-Mode RX-PRBS-Inv RX-PMD-Inv Lck LL PRBS-Err-Cnt Burst-Err"));
    EFUN_PRINTF(("     BER\n"));
    return (ERR_CODE_NONE);
}

  const char* merlin7_tsc_e2s_prbs_mode_enum[8] = {
    " PRBS_7",
    " PRBS_9",
    "PRBS_11",
    "PRBS_15",
    "PRBS_23",
    "PRBS_31",
    "PRBS_58",
    "  ERR  "
  };
err_code_t merlin7_tsc_display_detailed_prbs_state(srds_access_t *sa__) {
    INIT_SRDS_ERR_CODE
    uint32_t err_cnt = 0;
    uint8_t lock_lost = 0;
    uint8_t enabled;

    ESTM_PRINTF(("  %d ",merlin7_tsc_get_lane(sa__)));

    ESTM(enabled = rd_prbs_gen_en());
    if(enabled) {
        enum srds_prbs_polynomial_enum prbs_poly_mode = PRBS_7;
        uint8_t prbs_inv = 0;
        char *prbs_string;
        EFUN(merlin7_tsc_get_tx_prbs_config(sa__, &prbs_poly_mode, &prbs_inv));
        if(prbs_poly_mode == PRBS_UNKNOWN) {
            prbs_string = "UNKNOWN";
        }
        else {
            prbs_string =  (char *)merlin7_tsc_e2s_prbs_mode_enum[prbs_poly_mode];
        }
        ESTM_PRINTF(("%s",prbs_string));
        ESTM_PRINTF(("      %1d     ",prbs_inv));
    } else {
        EFUN_PRINTF(("  OFF  "));
        ESTM_PRINTF(("      -     "));
    }
    ESTM_PRINTF(("     %1d     ",rd_tx_pmd_dp_invert()));

    ESTM(enabled = rd_prbs_chk_en());
    if(enabled) {
        enum srds_prbs_polynomial_enum prbs_poly_mode = PRBS_7;
        enum srds_prbs_checker_mode_enum prbs_checker_mode;
        uint8_t prbs_inv = 0;
        char *prbs_string;
        EFUN(merlin7_tsc_get_rx_prbs_config(sa__, &prbs_poly_mode, &prbs_checker_mode, &prbs_inv));
        if(prbs_poly_mode == PRBS_UNKNOWN) {
            prbs_string = "UNKNOWN";
        }
        else {
            prbs_string =  (char *)merlin7_tsc_e2s_prbs_mode_enum[prbs_poly_mode];
        }
        ESTM_PRINTF((" %s",prbs_string));
        ESTM_PRINTF(("      %1d     ",prbs_inv));
    } else {
        EFUN_PRINTF(("   OFF  "));
        ESTM_PRINTF(("      -     "));
    }

    ESTM_PRINTF(("     %1d     ",rd_rx_pmd_dp_invert()));
    ESTM_PRINTF(("  %d ",rd_prbs_chk_lock()));
    EFUN(merlin7_tsc_prbs_err_count_state(sa__,&err_cnt,&lock_lost));
    EFUN_PRINTF(("  %d  %010d ",lock_lost,err_cnt));
    ESTM_PRINTF(("    %4d  ",rd_prbs_chk_burst_err_cnt()));
    EFUN(merlin7_tsc_INTERNAL_display_BER(sa__,100));
    EFUN_PRINTF(("\n"));

    return (ERR_CODE_NONE);
}




#endif /* SMALL_FOOTPRINT */




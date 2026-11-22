/*
 * File: berr.c
 *
 * Code generated for Simulink model 'berr'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Sat Aug 22 15:06:09 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "berr.h"
#include "rtwtypes.h"
#include "berr_private.h"

/* Exported block parameters */
uint8_T FRKAP = 1U;                    /* Variable: FRKAP
                                        * Referenced by: '<S2>/FRKAP'
                                        */

/* External inputs (root inport signals with default storage) */
ExtU_berr_T berr_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_berr_T berr_Y;

/* Real-time model */
static RT_MODEL_berr_T berr_M_;
RT_MODEL_berr_T *const berr_M = &berr_M_;

/* Model step function */
void berr_step(void)
{
  int64_T tmp;
  uint64_T tmp_1;
  uint32_T tmp_0;
  uint32_T tmp_2;

  /* Product: '<S1>/Product' incorporates:
   *  Inport: '<Root>/lamsol'
   *  Inport: '<Root>/rka_w'
   *  Product: '<S2>/Product'
   *  Sum: '<S1>/Add'
   */
  if (berr_U.lamsol == 0U) {
    tmp_2 = MAX_uint32_T;

    /* Divide by zero handler */
  } else {
    /* Product: '<S2>/Product1' incorporates:
     *  Constant: '<S2>/FRKAP'
     *  DataTypeConversion: '<S2>/Data Type Conversion'
     *  Inport: '<Root>/fnswl_w'
     *  Inport: '<Root>/fst_w'
     *  Inport: '<Root>/fwe'
     *  Product: '<S2>/Product2'
     *  Product: '<S2>/Product3'
     */
    tmp_2 = ((((((uint32_T)FRKAP * berr_U.fst_w) >> 10) * berr_U.fwe) >> 7) *
             berr_U.fnswl_w) >> 11;
    if (tmp_2 > 65535U) {
      tmp_2 = 65535U;
    }

    /* Product: '<S2>/Product' incorporates:
     *  Inport: '<Root>/rlp_w'
     *  Product: '<S2>/Product1'
     */
    tmp_2 = (berr_U.rlp_w * tmp_2) >> 1;
    if (tmp_2 > 65535U) {
      tmp_2 = 65535U;
    }

    tmp_2 = ((((tmp_2 * 3U) >> 6) + ((berr_U.rka_w * 3U) >> 6)) << 12) /
      berr_U.lamsol;
  }

  if (tmp_2 > 65535U) {
    tmp_2 = 65535U;
  }

  /* Product: '<S1>/Product1' incorporates:
   *  Inport: '<Root>/fr_w'
   *  Product: '<S1>/Product'
   */
  tmp_2 = (tmp_2 * berr_U.fr_w) >> 15;
  if (tmp_2 > 65535U) {
    tmp_2 = 65535U;
  }

  /* Product: '<S1>/Product2' incorporates:
   *  Inport: '<Root>/fra_w'
   *  Product: '<S1>/Product1'
   */
  tmp_0 = ((uint32_T)berr_U.fra_w * (uint16_T)tmp_2) >> 11;
  if (tmp_0 > 65535U) {
    tmp_0 = 65535U;
  }

  tmp_1 = (tmp_0 * 174763ULL) >> 17;
  if (tmp_1 > 65535ULL) {
    tmp_1 = 65535ULL;
  }

  /* Outport: '<Root>/rkoak_w' incorporates:
   *  Product: '<S1>/Product2'
   */
  berr_Y.rkoak_w = (uint16_T)tmp_1;

  /* Sum: '<S1>/Add1' incorporates:
   *  Inport: '<Root>/rkukg_w'
   *  Product: '<S1>/Product1'
   */
  tmp_2 = ((berr_U.rkukg_w * 3U) >> 6) + (uint16_T)tmp_2;
  if (tmp_2 > 65535U) {
    tmp_2 = 65535U;
  }

  /* Product: '<S1>/Product3' incorporates:
   *  Inport: '<Root>/fra_w'
   *  Sum: '<S1>/Add1'
   */
  tmp_2 = (tmp_2 * berr_U.fra_w) >> 15;
  if (tmp_2 > 65535U) {
    tmp_2 = 65535U;
  }

  /* Sum: '<S1>/Add2' incorporates:
   *  Inport: '<Root>/rkt_w'
   *  Product: '<S1>/Product3'
   */
  tmp = ((int64_T)((tmp_2 * 2863311531ULL) >> 16) - ((int64_T)berr_U.rkt_w << 11))
    >> 11;
  if (tmp < 0LL) {
    tmp = 0LL;
  } else if (tmp > 65535LL) {
    tmp = 65535LL;
  }

  /* Outport: '<Root>/rk_w' incorporates:
   *  Sum: '<S1>/Add2'
   */
  berr_Y.rk_w = (uint16_T)tmp;
}

/* Model initialize function */
void berr_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void berr_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

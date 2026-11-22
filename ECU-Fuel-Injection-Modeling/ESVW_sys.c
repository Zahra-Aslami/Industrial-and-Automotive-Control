
/*
 * File: test4.c
 *
 * Code generated for Simulink model 'test4'.
 *
 * Model version                  : 1.24
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Sat Sep 12 16:37:12 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "test4.h"
#include <math.h>
#include "rtwtypes.h"
#include "test4_private.h"

/* Exported block signals */
uint8_T wea;                           /* '<Root>/Add1' */
uint8_T weenst;                        /* '<Root>/Add' */
uint8_T weemrfa;                       /* '<S3>/WEEMRFAN' */
uint8_T weer;                          /* '<Root>/Merge' */
uint8_T wee;                           /* '<S6>/Switch2' */

/* Exported block parameters */
uint8_T DWEEMX = 1U;                   /* Variable: DWEEMX
                                        * Referenced by: '<S2>/DWEEMX'
                                        */

/* Block signals (default storage) */
B_T B;

/* External inputs (root inport signals with default storage) */
ExtU_T U;

/* Real-time model */
static RT_MODEL_T M_;
RT_MODEL_T *const M = &M_;
uint16_T plook_u16u16u32n31_binc_gf(uint16_T u, const uint16_T bp[], uint32_T
  maxIndex, uint32_T *fraction)
{
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;
  uint16_T bpIndex;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'on'
     Rounding mode: 'floor'
   */
  /* Binary Search */
  bpIdx = maxIndex >> 1U;
  iLeft = 0U;
  iRght = maxIndex;
  while (iRght - iLeft > 1U) {
    if (u < bp[bpIdx]) {
      iRght = bpIdx;
    } else {
      iLeft = bpIdx;
    }

    bpIdx = (iRght + iLeft) >> 1U;
  }

  uint16_T bpLeftVar;
  bpIndex = (uint16_T)iLeft;
  bpLeftVar = bp[(uint32_T)(uint16_T)iLeft];
  *fraction = (uint32_T)(((uint64_T)((uint32_T)u - bpLeftVar) << 31) /
    ((uint32_T)bp[(uint16_T)iLeft + 1U] - bpLeftVar));
  return bpIndex;
}

int16_T intrp1d_u8s16s16u16u32n31l_f(uint16_T bpIndex, uint32_T frac, const
  uint8_T table[])
{
  uint8_T yL_0d0;

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Rounding mode: 'floor'
     Overflow mode: 'wrapping'
   */
  yL_0d0 = table[(uint32_T)bpIndex];
  return (int16_T)((int16_T)(((int64_T)(int16_T)(table[bpIndex + 1U] - yL_0d0) *
    frac) >> 31) + yL_0d0);
}

uint8_T plook_u8u8u32n31_even0c_gf(uint8_T u, uint8_T bp0, uint32_T maxIndex,
  uint32_T *fraction)
{
  uint8_T bpIndex;

  /* Prelookup - Index and Fraction
     Index Search method: 'even'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'on'
     Rounding mode: 'floor'
   */
  bpIndex = (uint8_T)((uint32_T)u - bp0);
  if (bpIndex < maxIndex) {
    *fraction = 0U;
  } else {
    bpIndex = (uint8_T)(maxIndex - 1U);
    *fraction = 2147483648U;
  }

  return bpIndex;
}

uint8_T plook_u8u8u32n31_binc_gf(uint8_T u, const uint8_T bp[], uint32_T
  maxIndex, uint32_T *fraction)
{
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;
  uint8_T bpIndex;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'on'
     Rounding mode: 'floor'
   */
  /* Binary Search */
  bpIdx = maxIndex >> 1U;
  iLeft = 0U;
  iRght = maxIndex;
  while (iRght - iLeft > 1U) {
    if (u < bp[bpIdx]) {
      iRght = bpIdx;
    } else {
      iLeft = bpIdx;
    }

    bpIdx = (iRght + iLeft) >> 1U;
  }

  uint8_T bpLeftVar;
  bpIndex = (uint8_T)iLeft;
  bpLeftVar = bp[(uint32_T)(uint8_T)iLeft];
  *fraction = (uint32_T)(((uint64_T)((uint32_T)u - bpLeftVar) << 31) /
    ((uint32_T)bp[(uint8_T)iLeft + 1U] - bpLeftVar));
  return bpIndex;
}

int16_T intrp2d_u8s16s16u32u32n31l_f(const uint32_T bpIndex[], const uint32_T
  frac[], const uint8_T table[], const uint32_T stride)
{
  uint32_T offset_1d;
  int16_T yL_1d;
  uint8_T yL_0d0;

  /* Column-major Interpolation 2-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Rounding mode: 'floor'
     Overflow mode: 'wrapping'
   */
  offset_1d = bpIndex[1U] * stride + bpIndex[0U];
  yL_0d0 = table[offset_1d];
  yL_1d = (int16_T)((int16_T)(((int64_T)(int16_T)(table[offset_1d + 1U] - yL_0d0)
    * frac[0U]) >> 31) + yL_0d0);
  offset_1d += stride;
  yL_0d0 = table[offset_1d];
  return (int16_T)((int16_T)(((int64_T)(int16_T)((int16_T)((int16_T)(((int64_T)
    (int16_T)(table[offset_1d + 1U] - yL_0d0) * frac[0U]) >> 31) + yL_0d0) -
    yL_1d) * frac[1U]) >> 31) + yL_1d);
}

int16_T intrp2d_u8s16s16u8u32n31l_f(const uint8_T bpIndex[], const uint32_T
  frac[], const uint8_T table[], const uint32_T stride)
{
  uint32_T offset_1d;
  int16_T yL_1d;
  uint8_T yL_0d0;

  /* Column-major Interpolation 2-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Rounding mode: 'floor'
     Overflow mode: 'wrapping'
   */
  offset_1d = bpIndex[1U] * stride + bpIndex[0U];
  yL_0d0 = table[offset_1d];
  yL_1d = (int16_T)((int16_T)(((int64_T)(int16_T)(table[offset_1d + 1U] - yL_0d0)
    * frac[0U]) >> 31) + yL_0d0);
  offset_1d += stride;
  yL_0d0 = table[offset_1d];
  return (int16_T)((int16_T)(((int64_T)(int16_T)((int16_T)((int16_T)(((int64_T)
    (int16_T)(table[offset_1d + 1U] - yL_0d0) * frac[0U]) >> 31) + yL_0d0) -
    yL_1d) * frac[1U]) >> 31) + yL_1d);

}

int16_T intrp1d_u8s16s16u8u32n31l_f(uint8_T bpIndex, uint32_T frac, const
  uint8_T table[])
{
  uint8_T yL_0d0;

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Rounding mode: 'floor'
     Overflow mode: 'wrapping'
   */
  yL_0d0 = table[(uint32_T)bpIndex];
  return (int16_T)((int16_T)(((int64_T)(int16_T)(table[bpIndex + 1U] - yL_0d0) *
    frac) >> 31) + yL_0d0);
}

int32_T intrp1d_u16s32s32u16u32n31l_f(uint16_T bpIndex, uint32_T frac, const
  uint16_T table[])
{
  uint16_T yL_0d0;

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Rounding mode: 'floor'
     Overflow mode: 'wrapping'
   */
  yL_0d0 = table[(uint32_T)bpIndex];
  return (int32_T)(((int64_T)(table[bpIndex + 1U] - yL_0d0) * frac) >> 31) +
    yL_0d0;
}

/* Model step function */
void test4_step(void)
{
  int32_T tmp;
  int32_T tmp_2;
  uint32_T bpIndex[2];
  uint32_T frac[2];
  uint32_T frac_0[2];
  uint32_T frac_1[2];
  uint32_T Prelookup3_o2;
  uint32_T SNM08GKUW_o2;
  uint32_T SRL08GKUB_o2;
  uint32_T STM08FSUB_o2;
  uint32_T tmp_3;
  int16_T tmp_0;
  int16_T tmp_1;
  uint16_T SNM08GKUW_o1;
  uint16_T Switch1;
  uint8_T bpIndex_0[2];
  uint8_T bpIndex_1[2];
  uint8_T KFWEETM;
  uint8_T Prelookup3_o1;
  uint8_T STM08FSUB_o1;

  /* PreLookup: '<Root>/SNM08GKUW' incorporates:
   *  Inport: '<Root>/nmot_w'
   */
  SNM08GKUW_o1 = plook_u16u16u32n31_binc_gf(U.nmot_w,
    ConstP.SNM08GKUW_BreakpointsData, 7U, &SNM08GKUW_o2);

  /* Switch: '<Root>/Switch1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Inport: '<Root>/wnwve_w'
   */
  if (ConstB.RelationalOperator) {
    Switch1 = 0U;
  } else {
    tmp_2 = U.wnwve_w * 8000;
    if (tmp_2 < 0) {
      tmp_2 = 0;
    } else if (tmp_2 > 65535) {
      tmp_2 = 65535;
    }

    Switch1 = (uint16_T)tmp_2;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* Interpolation_n-D: '<Root>/WEAN' incorporates:
   *  PreLookup: '<Root>/SNM08GKUW'
   */
  tmp_1 = intrp1d_u8s16s16u16u32n31l_f(SNM08GKUW_o1, SNM08GKUW_o2,
    ConstP.WEAN_Table);
  if (tmp_1 < 0) {
    tmp_1 = 0;
  } else if (tmp_1 > 255) {
    tmp_1 = 255;
  }

  /* Sum: '<Root>/Add1' incorporates:
   *  Interpolation_n-D: '<Root>/WEAN'
   *  Sum: '<Root>/Add'
   *  Switch: '<Root>/Switch1'
   */
  tmp_3 = Switch1 * 44739U;
 tmp_2 = tmp_1 - (int32_T)(tmp_3 >> 24);
  if (tmp_2 < 0) {
    tmp_2 = 0;
  }

  /* Sum: '<Root>/Add1' */
  wea = (uint8_T)tmp_2;

  /* PreLookup: '<Root>/Prelookup3' incorporates:
   *  Inport: '<Root>/anztib'
   */
  Prelookup3_o1 = plook_u8u8u32n31_even0c_gf(U.anztib, 1U, 5U, &Prelookup3_o2);

  /* PreLookup: '<Root>/STM08FSUB' incorporates:
   *  Inport: '<Root>/tmot'
   */
  STM08FSUB_o1 = plook_u8u8u32n31_binc_gf(U.tmot,
    ConstP.STM08FSUB_BreakpointsData, 7U, &STM08FSUB_o2);

  /* PreLookup: '<Root>/SRL08GKUB' incorporates:
   *  Inport: '<Root>/rl'
   */
  KFWEETM = plook_u8u8u32n31_binc_gf(U.rl, ConstP.SRL08GKUB_BreakpointsData, 7U,
    &SRL08GKUB_o2);

  /* Interpolation_n-D: '<S1>/KFWEE' incorporates:
   *  PreLookup: '<Root>/SNM08GKUW'
   *  PreLookup: '<Root>/SRL08GKUB'
   */
  frac[0] = SRL08GKUB_o2;
  frac[1] = SNM08GKUW_o2;
  bpIndex[0] = KFWEETM;
  bpIndex[1] = SNM08GKUW_o1;

  /* Interpolation_n-D: '<S1>/KFWEETM' incorporates:
   *  PreLookup: '<Root>/SRL08GKUB'
   *  PreLookup: '<Root>/STM08FSUB'
   */
  frac_0[0] = SRL08GKUB_o2;
  frac_0[1] = STM08FSUB_o2;
  bpIndex_0[0] = KFWEETM;
  bpIndex_0[1] = STM08FSUB_o1;

  /* Interpolation_n-D: '<S1>/KFWEE' */
  tmp_1 = intrp2d_u8s16s16u32u32n31l_f(bpIndex, frac, ConstP.KFWEE_Table, 8U);
  if (tmp_1 < 0) {
    tmp_1 = 0;
  } else if (tmp_1 > 255) {
    tmp_1 = 255;
  }

  /* Interpolation_n-D: '<S1>/KFWEETM' */
  tmp_0 = intrp2d_u8s16s16u8u32n31l_f(bpIndex_0, frac_0, ConstP.KFWEETM_Table,
    8U);
  if (tmp_0 < 0) {
    tmp_0 = 0;
  } else if (tmp_0 > 255) {
    tmp_0 = 255;
  }

  /* Sum: '<S1>/Add' incorporates:
   *  Interpolation_n-D: '<S1>/KFWEE'
   *  Interpolation_n-D: '<S1>/KFWEETM'
   */
  tmp_2 = (int32_T)((uint32_T)tmp_1 + (uint32_T)tmp_0);
  if (tmp_2 > 255) {
    tmp_2 = 255;
  }

  /* MinMax: '<S1>/MinMax' incorporates:
   *  Sum: '<S1>/Add'
   */
  tmp_2 = (int32_T)floor((real_T)tmp_2 * 6.0 / 6.0);

  /* If: '<Root>/If1' incorporates:
   *  Inport: '<Root>/B_stends'
   */
  if (!U.B_stends) {
    /* Outputs for IfAction SubSystem: '<Root>/correction at full load' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Interpolation_n-D: '<S3>/WEEMRFAN' incorporates:
     *  PreLookup: '<Root>/SNM08GKUW'
     */
    Prelookup3_o2 = SNM08GKUW_o2;
    if (SNM08GKUW_o2 > 2147483648U) {
      Prelookup3_o2 = 2147483648U;
    }

    tmp_1 = intrp1d_u8s16s16u16u32n31l_f(SNM08GKUW_o1, Prelookup3_o2,
      ConstP.WEEMRFAN_Table);
    if (tmp_1 < 0) {
      tmp_1 = 0;
    } else if (tmp_1 > 255) {
      tmp_1 = 255;
    }

    /* Interpolation_n-D: '<S3>/WEEMRFAN' */
    weemrfa = (uint8_T)tmp_1;

 
    }

    /* Interpolation_n-D: '<S3>/FWEEMRFAM' */
    tmp_1 = intrp1d_u8s16s16u8u32n31l_f(STM08FSUB_o1, STM08FSUB_o2,
      ConstP.FWEEMRFAM_Table);
    if (tmp_1 < 0) {
      tmp_1 = 0;
    } else if (tmp_1 > 255) {
      tmp_1 = 255;
    }

    /* Product: '<S3>/Product' incorporates:
     *  Interpolation_n-D: '<S3>/FWEEMRFAM'
     *  Sum: '<S3>/Add1'
     */
    tmp = (int32_T)(((uint32_T)tmp * (uint32_T)tmp_1) >> 7);
    if (tmp > 255) {
      tmp = 255;
    }

    /* Sum: '<S3>/Add' incorporates:
     *  MinMax: '<S1>/MinMax'
     *  Product: '<S3>/Product'
     */
    tmp = tmp_2 - tmp;
    if (tmp < 0) {
      tmp = 0;
    }

    /* MinMax: '<S3>/MinMax' incorporates:
     *  Sum: '<S3>/Add'
     */
    B.MinMax_l = (uint8_T)floor((real_T)tmp * 6.0 / 6.0);

    /* Interpolation_n-D: '<S3>/MRFAVW' incorporates:
     *  PreLookup: '<Root>/SNM08GKUW'
     */
    if (SNM08GKUW_o2 > 2147483648U) {
      SNM08GKUW_o2 = 2147483648U;
    }

    tmp = intrp1d_u16s32s32u16u32n31l_f(SNM08GKUW_o1, SNM08GKUW_o2,
      ConstP.MRFAVW_Table);
    if (tmp < 0) {
      tmp = 0;
    } else if (tmp > 65535) {
      tmp = 65535;
    }

    /* RelationalOperator: '<S3>/Relational Operator' incorporates:
     *  Inport: '<Root>/mrfa_w'
     *  Interpolation_n-D: '<S3>/MRFAVW'
     */
    B.RelationalOperator = (tmp < U.mrfa_w);

    /* End of Outputs for SubSystem: '<Root>/correction at full load' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/correction at start' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Interpolation_n-D: '<S4>/KFWEEST' incorporates:
     *  PreLookup: '<Root>/Prelookup3'
     *  PreLookup: '<Root>/STM08FSUB'
     */
    frac_1[0] = Prelookup3_o2;
    if (Prelookup3_o2 > 2147483648U) {
      frac_1[0] = 2147483648U;
    }

    frac_1[1] = STM08FSUB_o2;
    if (STM08FSUB_o2 > 2147483648U) {
      frac_1[1] = 2147483648U;
    }

    bpIndex_1[0] = Prelookup3_o1;
    bpIndex_1[1] = STM08FSUB_o1;
    tmp_1 = intrp2d_u8s16s16u8u32n31l_f(bpIndex_1, frac_1, ConstP.KFWEEST_Table,
      6U);
    if (tmp_1 < 0) {
      tmp_1 = 0;
    } else if (tmp_1 > 255) {
      tmp_1 = 255;
    }

    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S4>/Constant'
     *  Interpolation_n-D: '<S4>/KFWEEST'
     *  RelationalOperator: '<S6>/LowerRelop1'
     */
    if ((real_T)tmp_1 * 2.8 > 0.0) {
      /* Switch: '<S6>/Switch2' */
      wee = 0U;
    } else {
      /* Switch: '<S6>/Switch' incorporates:
       *  Constant: '<S4>/Constant1'
       *  Switch: '<S6>/Switch2'
       */
      wee = 1U;
    }

    /* End of Switch: '<S6>/Switch2' */

    /* Merge: '<Root>/Merge' incorporates:
     *  DataTypeConversion: '<S4>/wee'
     *  Switch: '<S6>/Switch2'
     */
    weer = wee;

    /* End of Outputs for SubSystem: '<Root>/correction at start' */
  }

  /* End of If: '<Root>/If1' */

  /* Switch: '<Root>/Switch' incorporates:
   *  MinMax: '<S1>/MinMax'
   *  MinMax: '<S3>/MinMax'
   */
  if (B.RelationalOperator) {
    Prelookup3_o1 = B.MinMax_l;
  } else {
    Prelookup3_o1 = (uint8_T)tmp_2;
  }

  /* Sum: '<Root>/Add' incorporates:
   *  Switch: '<Root>/Switch'
   */
  weenst = (uint8_T)(((Prelookup3_o1 << 23) - (int32_T)(tmp_3 >> 1)) >> 23);
}

/* Model initialize function */
void test4_initialize(void)
{
  /* Registration code */

  /* external inputs */
  U.tmot = 64U;
}

/* Model terminate function */
void test4_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

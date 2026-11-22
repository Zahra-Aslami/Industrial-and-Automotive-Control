/*
 * File: eswe01.c
 *
 * Code generated for Simulink model 'eswe01'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Sep 16 16:33:17 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "eswe01.h"
#include "eswe01_private.h"
#include "rtwtypes.h"
#include "zero_crossing_types.h"

/* Block signals (default storage) */
B_eswe01_T eswe01_B;

/* Block states (default storage) */
DW_eswe01_T eswe01_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_eswe01_T eswe01_PrevZCX;

/* External inputs (root inport signals with default storage) */
ExtU_eswe01_T eswe01_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_eswe01_T eswe01_Y;

/* Real-time model */
static RT_MODEL_eswe01_T eswe01_M_;
RT_MODEL_eswe01_T *const eswe01_M = &eswe01_M_;
uint8_T look1_iu8bdlu32n24tu8_binlcse(uint8_T u0, const real_T bp0[], const
  uint8_T table[], uint32_T maxIndex)
{
  uint32_T frac;
  uint32_T iLeft;
  uint8_T y;
  uint8_T yL_0d0;
  uint8_T yR_0d0;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
     Rounding mode: 'simplest'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
     Rounding mode: 'simplest'
   */
  if (u0 < bp0[0U]) {
    iLeft = 0U;
    frac = 0U;
  } else if (u0 < bp0[maxIndex]) {
    uint32_T iRght;

    /* Binary Search */
    frac = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[frac]) {
        iRght = frac;
      } else {
        iLeft = frac;
      }

      frac = (iRght + iLeft) >> 1U;
    }

    frac = (uint32_T)(((real_T)u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft])
                      * 1.6777216E+7);
  } else {
    iLeft = maxIndex - 1U;
    frac = 16777216U;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Rounding mode: 'simplest'
     Overflow mode: 'wrapping'
   */
  yR_0d0 = table[iLeft + 1U];
  yL_0d0 = table[iLeft];
  if (yR_0d0 >= yL_0d0) {
    y = (uint8_T)((uint32_T)(uint8_T)(((uint8_T)((uint32_T)yR_0d0 - yL_0d0) *
      frac) >> 24) + yL_0d0);
  } else {
    y = (uint8_T)((uint32_T)yL_0d0 - (uint8_T)(((uint8_T)((uint32_T)yL_0d0 -
      yR_0d0) * frac) >> 24));
  }

  return y;
}

uint8_T look1_iu16lu32n16tu8_binlcse(uint16_T u0, const uint16_T bp0[], const
  uint8_T table[], uint32_T maxIndex)
{
  uint32_T frac;
  uint32_T iLeft;
  uint8_T y;
  uint8_T yL_0d0;
  uint8_T yR_0d0;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
     Rounding mode: 'simplest'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
     Rounding mode: 'simplest'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0U;
  } else if (u0 < bp0[maxIndex]) {
    uint32_T iRght;

    /* Binary Search */
    frac = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[frac]) {
        iRght = frac;
      } else {
        iLeft = frac;
      }

      frac = (iRght + iLeft) >> 1U;
    }

    uint16_T bpLeftVar;
    bpLeftVar = bp0[iLeft];
    frac = (((uint32_T)u0 - bpLeftVar) << 16) / ((uint32_T)bp0[iLeft + 1U] -
      bpLeftVar);
  } else {
    iLeft = maxIndex - 1U;
    frac = 65536U;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Rounding mode: 'simplest'
     Overflow mode: 'wrapping'
   */
  yR_0d0 = table[iLeft + 1U];
  yL_0d0 = table[iLeft];
  if (yR_0d0 >= yL_0d0) {
    y = (uint8_T)((uint32_T)(uint8_T)(((uint8_T)((uint32_T)yR_0d0 - yL_0d0) *
      frac) >> 16) + yL_0d0);
  } else {
    y = (uint8_T)((uint32_T)yL_0d0 - (uint8_T)(((uint8_T)((uint32_T)yL_0d0 -
      yR_0d0) * frac) >> 16));
  }

  return y;
}

uint8_T look1_tu8Dd_binlcpw(real_T u0, const real_T bp0[], const uint8_T table[],
  uint32_T maxIndex)
{
  real_T frac;
  uint32_T iLeft;
  uint8_T yL_0d0;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = 1.0;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  frac = trunc(((real_T)table[iLeft + 1U] - (real_T)yL_0d0) * frac);
  if (rtIsNaN(frac) || rtIsInf(frac)) {
    frac = 0.0;
  } else {
    frac = fmod(frac, 256.0);
  }

  return (uint8_T)((uint32_T)(uint8_T)(frac < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-frac : (int32_T)(uint8_T)frac) + yL_0d0);
}

uint32_T MWDSP_EPH_R_B(boolean_T evt, uint32_T *sta)
{
  int32_T curState;
  int32_T lastzcevent;
  int32_T newState;
  int32_T newStateR;
  uint32_T previousState;
  uint32_T retVal;

  /* S-Function (sdspcount2): '<Root>/Counter' */
  /* Detect rising edge events */
  previousState = *sta;
  retVal = 0U;
  lastzcevent = 0;
  newState = 5;
  newStateR = 5;
  if (evt) {
    curState = 2;
  } else {
    curState = 1;
  }

  if (*sta == 5U) {
    newStateR = curState;
  } else if ((uint32_T)curState != *sta) {
    if (*sta == 3U) {
      if (curState == 1) {
        newStateR = 1;
      } else {
        lastzcevent = 2;
        previousState = 1U;
      }
    }

    if (previousState == 4U) {
      if (curState == 1) {
        newStateR = 1;
      } else {
        lastzcevent = 3;
        previousState = 1U;
      }
    }

    if ((previousState == 1U) && (curState == 2)) {
      retVal = 2U;
    }

    if (previousState == 0U) {
      retVal = 2U;
    }

    if (retVal == (uint32_T)lastzcevent) {
      retVal = 0U;
    }

    if ((curState == 1) && (retVal == 2U)) {
      newState = 3;
    } else {
      newState = curState;
    }
  }

  if (newStateR != 5) {
    *sta = (uint32_T)newStateR;
    retVal = 0U;
  }

  if (newState != 5) {
    *sta = (uint32_T)newState;
  }

  /* End of S-Function (sdspcount2): '<Root>/Counter' */
  return retVal;
}

/* Model step function */
void eswe01_step(void)
{
  real_T tmp_1;
  int32_T tmp;
  int32_T tmp_0;
  uint32_T tmp_2;
  uint8_T rtb_IC1;
  uint8_T rtb_IC2;
  boolean_T LogicalOperator1;

  /* Outputs for Enabled SubSystem: '<S5>/POSITIVE Edge' incorporates:
   *  EnablePort: '<S8>/Enable'
   */
  if (eswe01_ConstB.MultiportSwitch[0] > 0.0) {
    /* RelationalOperator: '<S8>/Relational Operator1' incorporates:
     *  Inport: '<Root>/B_sa'
     *  Memory: '<S5>/Memory'
     */
    eswe01_B.RelationalOperator1 = ((int32_T)eswe01_DW.Memory_PreviousInput <
      (int32_T)eswe01_U.B_sa);
  }

  /* End of Outputs for SubSystem: '<S5>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S5>/NEGATIVE Edge' incorporates:
   *  EnablePort: '<S7>/Enable'
   */
  if (eswe01_ConstB.MultiportSwitch[1] > 0.0) {
    /* RelationalOperator: '<S7>/Relational Operator1' incorporates:
     *  Inport: '<Root>/B_sa'
     *  Memory: '<S5>/Memory'
     */
    eswe01_B.RelationalOperator1_l = ((int32_T)eswe01_DW.Memory_PreviousInput >
      (int32_T)eswe01_U.B_sa);
  }

  /* End of Outputs for SubSystem: '<S5>/NEGATIVE Edge' */

  /* Logic: '<S5>/Logical Operator1' */
  LogicalOperator1 = (eswe01_B.RelationalOperator1 ||
                      eswe01_B.RelationalOperator1_l);

  /* Switch: '<S10>/Switch' incorporates:
   *  Inport: '<Root>/B_sa'
   *  Logic: '<S10>/Logical Operator'
   *  Logic: '<S10>/Logical Operator4'
   *  Logic: '<S10>/Logical Operator5'
   *  UnitDelay: '<S10>/Unit Delay'
   */
  eswe01_B.Switch = (LogicalOperator1 || ((!eswe01_U.B_sa) &&
    eswe01_DW.UnitDelay_DSTATE_n));

  /* Logic: '<S1>/Logical Operator1' incorporates:
   *  Logic: '<S10>/Logical Operator3'
   */
  eswe01_B.LogicalOperator3 = !eswe01_B.Switch;

  /* Logic: '<S1>/Logical Operator' incorporates:
   *  Delay: '<S1>/Delay'
   *  Logic: '<S1>/Logical Operator1'
   */
  eswe01_B.LogicalOperator = (eswe01_B.LogicalOperator3 ||
    eswe01_DW.Delay_DSTATE);

  /* Switch: '<S1>/Switch1' */
  if (eswe01_B.Switch) {
    /* Switch: '<S1>/Switch1' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    eswe01_DW.Delay1_DSTATE = 1.0;
  }

  /* End of Switch: '<S1>/Switch1' */

  /* DiscreteIntegrator: '<S1>/Accumulator' */
  if (eswe01_DW.Accumulator_IC_LOADING != 0) {
    eswe01_DW.Accumulator_DSTATE = eswe01_DW.Delay1_DSTATE;
  }

  if (eswe01_B.LogicalOperator && (eswe01_DW.Accumulator_PrevResetState <= 0)) {
    eswe01_DW.Accumulator_DSTATE = eswe01_DW.Delay1_DSTATE;
  }

  /* RelationalOperator: '<S1>/Relational Operator1' incorporates:
   *  Constant: '<S1>/SY_ZYLZA'
   *  Delay: '<S1>/Delay'
   *  DiscreteIntegrator: '<S1>/Accumulator'
   */
  eswe01_DW.Delay_DSTATE = (eswe01_DW.Accumulator_DSTATE > 1.0);

  /* S-Function (sdspcount2): '<Root>/Counter' incorporates:
   *  Delay: '<S1>/Delay'
   */
  if (MWDSP_EPH_R_B(eswe01_B.LogicalOperator3, &eswe01_DW.Counter_RstEphState)
      != 0U) {
    eswe01_DW.Counter_Count = 0U;
  }

  if (MWDSP_EPH_R_B(eswe01_DW.Delay_DSTATE, &eswe01_DW.Counter_ClkEphState) !=
      0U) {
    if (eswe01_DW.Counter_Count < 255) {
      eswe01_DW.Counter_Count++;
    } else {
      eswe01_DW.Counter_Count = 0U;
    }
  }

  /* InitialCondition: '<Root>/IC1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion2'
   *  InitialCondition: '<Root>/IC'
   *  InitialCondition: '<Root>/IC2'
   *  Inport: '<Root>/mrped_w'
   *  Lookup_n-D: '<Root>/FWEMRFA'
   */
  tmp_1 = eswe01_M->Timing.t[0];
  if ((eswe01_DW.IC1_FirstOutputTime == (rtMinusInf)) ||
      (eswe01_DW.IC1_FirstOutputTime == tmp_1)) {
    eswe01_DW.IC1_FirstOutputTime = tmp_1;
    rtb_IC1 = 128U;
  } else {
    rtb_IC1 = look1_iu16lu32n16tu8_binlcse((uint16_T)(eswe01_U.mrped_w >> 15),
      eswe01_ConstP.FWEMRFA_bp01Data, eswe01_ConstP.FWEMRFA_tableData, 5U);
  }

  /* InitialCondition: '<Root>/IC2' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  InitialCondition: '<Root>/IC1'
   *  Inport: '<Root>/tmot'
   *  Lookup_n-D: '<Root>/FWET'
   */
  if ((eswe01_DW.IC2_FirstOutputTime == (rtMinusInf)) ||
      (eswe01_DW.IC2_FirstOutputTime == tmp_1)) {
    eswe01_DW.IC2_FirstOutputTime = tmp_1;
    rtb_IC2 = 128U;
  } else {
    rtb_IC2 = look1_tu8Dd_binlcpw((real_T)eswe01_U.tmot * 0.75 - 48.0,
      eswe01_ConstP.pooled2, eswe01_ConstP.pooled6, 8U);
  }

  /* Switch: '<Root>/Switch1' incorporates:
   *  Inport: '<Root>/B_ll'
   *  Switch: '<Root>/Switch'
   */
  if (eswe01_B.Switch) {
    /* Outport: '<Root>/fwe' incorporates:
     *  Constant: '<Root>/Constant2'
     */
    eswe01_Y.fwe = 128U;
  } else if (eswe01_U.B_ll) {
    /* Sum: '<Root>/Add1' incorporates:
     *  Constant: '<Root>/Constant'
     *  Lookup_n-D: '<Root>/FIMHU'
     *  S-Function (sdspcount2): '<Root>/Counter'
     */
    tmp = look1_iu8bdlu32n24tu8_binlcse(eswe01_DW.Counter_Count,
      eswe01_ConstP.pooled4, eswe01_ConstP.FIMHU_tableData, 15U) - 128;
    if (tmp < 0) {
      tmp = 0;
    }

    /* Product: '<Root>/Divide2' incorporates:
     *  DataTypeConversion: '<Root>/Data Type Conversion'
     *  InitialCondition: '<Root>/IC1'
     *  Inport: '<Root>/tmot'
     *  Lookup_n-D: '<Root>/FWEHT'
     *  Product: '<Root>/Divide'
     *  Sum: '<Root>/Add1'
     *  Switch: '<Root>/Switch'
     */
    tmp = (int32_T)((((look1_tu8Dd_binlcpw((real_T)eswe01_U.tmot * 0.75 - 48.0,
      eswe01_ConstP.pooled2, eswe01_ConstP.pooled6, 8U) * (uint32_T)tmp) >> 7) *
                     rtb_IC1) >> 7);
    if (tmp > 255) {
      tmp = 255;
    }

    /* Sum: '<Root>/Add2' incorporates:
     *  Constant: '<Root>/Constant'
     *  Product: '<Root>/Divide2'
     *  Switch: '<Root>/Switch'
     */
    tmp_0 = (int32_T)((uint32_T)tmp + 128U);
    if ((uint32_T)tmp + 128U > 255U) {
      tmp_0 = 255;
    }

    /* Outport: '<Root>/fwe' incorporates:
     *  InitialCondition: '<Root>/IC'
     *  Sum: '<Root>/Add2'
     *  Switch: '<Root>/Switch'
     */
    eswe01_Y.fwe = (uint8_T)tmp_0;
  } else {
    /* Sum: '<Root>/Add' incorporates:
     *  Constant: '<Root>/Constant1'
     *  Lookup_n-D: '<Root>/FIMWU'
     *  S-Function (sdspcount2): '<Root>/Counter'
     */
    tmp = look1_iu8bdlu32n24tu8_binlcse(eswe01_DW.Counter_Count,
      eswe01_ConstP.pooled4, eswe01_ConstP.FIMWU_tableData, 15U) - 128;
    if (tmp < 0) {
      tmp = 0;
    }

    /* Sum: '<Root>/Add3' incorporates:
     *  Constant: '<Root>/Constant1'
     *  InitialCondition: '<Root>/IC2'
     *  Product: '<Root>/Divide1'
     *  Sum: '<Root>/Add'
     *  Switch: '<Root>/Switch'
     */
    tmp_2 = (((uint32_T)tmp * rtb_IC2) >> 7) + 128U;
    tmp = (int32_T)tmp_2;
    if (tmp_2 > 255U) {
      tmp = 255;
    }

    /* Outport: '<Root>/fwe' incorporates:
     *  InitialCondition: '<Root>/IC'
     *  Sum: '<Root>/Add3'
     *  Switch: '<Root>/Switch'
     */
    eswe01_Y.fwe = (uint8_T)tmp;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* InitialCondition: '<Root>/IC' incorporates:
   *  InitialCondition: '<Root>/IC1'
   */
  if ((eswe01_DW.IC_FirstOutputTime == (rtMinusInf)) ||
      (eswe01_DW.IC_FirstOutputTime == tmp_1)) {
    eswe01_DW.IC_FirstOutputTime = tmp_1;

    /* Outport: '<Root>/fwe' */
    eswe01_Y.fwe = 128U;
  }

  /* Sum: '<S1>/Add2' incorporates:
   *  Constant: '<S1>/SY_ZYLZA'
   *  Delay: '<S1>/Delay1'
   *  DiscreteIntegrator: '<S1>/Accumulator'
   */
  eswe01_DW.Delay1_DSTATE = eswe01_DW.Accumulator_DSTATE - 1.0;

  /* Switch: '<S1>/Switch2' */
  if (eswe01_B.Switch) {
    /* Switch: '<S1>/Switch2' incorporates:
     *  Constant: '<S1>/Constant1'
     *  Inport: '<Root>/anzti'
     *  Sum: '<S1>/Add'
     *  Sum: '<S1>/Add1'
     *  Switch: '<S1>/Switch'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    eswe01_B.Switch2 = (real_T)(uint8_T)(eswe01_U.anzti -
      eswe01_DW.UnitDelay_DSTATE) + 256.0;
  } else {
    /* Switch: '<S1>/Switch2' incorporates:
     *  Constant: '<S1>/Constant3'
     */
    eswe01_B.Switch2 = 0.0;
  }

  /* End of Switch: '<S1>/Switch2' */

  /* Outputs for Triggered SubSystem: '<S6>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S9>/Trigger'
   */
  eswe01_PrevZCX.TriggeredSubsystem_Trig_ZCE = LogicalOperator1;

  /* End of Outputs for SubSystem: '<S6>/Triggered Subsystem' */

  /* Update for Memory: '<S5>/Memory' incorporates:
   *  Inport: '<Root>/B_sa'
   */
  eswe01_DW.Memory_PreviousInput = eswe01_U.B_sa;

  /* Update for UnitDelay: '<S10>/Unit Delay' */
  eswe01_DW.UnitDelay_DSTATE_n = eswe01_B.Switch;

  /* Update for DiscreteIntegrator: '<S1>/Accumulator' */
  eswe01_DW.Accumulator_IC_LOADING = 0U;
  eswe01_DW.Accumulator_DSTATE += eswe01_B.Switch2;
  eswe01_DW.Accumulator_PrevResetState = (int8_T)eswe01_B.LogicalOperator;

  /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
   *  Inport: '<Root>/anzti'
   */
  eswe01_DW.UnitDelay_DSTATE = eswe01_U.anzti;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  eswe01_M->Timing.t[0] =
    ((time_T)(++eswe01_M->Timing.clockTick0)) * eswe01_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.2s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.2, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    eswe01_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void eswe01_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&eswe01_M->solverInfo, &eswe01_M->Timing.simTimeStep);
    rtsiSetTPtr(&eswe01_M->solverInfo, &rtmGetTPtr(eswe01_M));
    rtsiSetStepSizePtr(&eswe01_M->solverInfo, &eswe01_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&eswe01_M->solverInfo, (&rtmGetErrorStatus(eswe01_M)));
    rtsiSetRTModelPtr(&eswe01_M->solverInfo, eswe01_M);
  }

  rtsiSetSimTimeStep(&eswe01_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&eswe01_M->solverInfo, false);
  rtsiSetIsContModeFrozen(&eswe01_M->solverInfo, false);
  rtsiSetSolverName(&eswe01_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(eswe01_M, &eswe01_M->Timing.tArray[0]);
  eswe01_M->Timing.stepSize0 = 0.2;

  /* external inputs */
  eswe01_U.tmot = 64U;

  /* Start for InitialCondition: '<Root>/IC1' */
  eswe01_DW.IC1_FirstOutputTime = (rtMinusInf);

  /* Start for InitialCondition: '<Root>/IC2' */
  eswe01_DW.IC2_FirstOutputTime = (rtMinusInf);

  /* Start for InitialCondition: '<Root>/IC' */
  eswe01_DW.IC_FirstOutputTime = (rtMinusInf);
  eswe01_PrevZCX.TriggeredSubsystem_Trig_ZCE = POS_ZCSIG;

  /* InitializeConditions for DiscreteIntegrator: '<S1>/Accumulator' */
  eswe01_DW.Accumulator_PrevResetState = 2;
  eswe01_DW.Accumulator_IC_LOADING = 1U;

  /* InitializeConditions for S-Function (sdspcount2): '<Root>/Counter' */
  eswe01_DW.Counter_ClkEphState = 5U;
  eswe01_DW.Counter_RstEphState = 5U;
}

/* Model terminate function */
void eswe01_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * test5.c
 *
 * Code generation for model "test5".
 *
 * Model version              : 1.1
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C source code generated on : Tue Sep  8 10:02:51 2026
 *
 * Target selection: rsim.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Debugging
 * Validation result: Not run
 */

#include "test5.h"
#include "rtwtypes.h"
#include <string.h>
#include "test5_private.h"
#include "test5_dt.h"

/* user code (top of parameter file) */
const int_T gblNumToFiles = 0;
const int_T gblNumFrFiles = 0;
const int_T gblNumFrWksBlocks = 0;
const char *gblSlvrJacPatternFileName = "test5_rsim_rtw\\test5_Jpattern.mat";

/* Root inports information  */
const int_T gblNumRootInportBlks = 3;
const int_T gblNumModelInputs = 3;
extern rtInportTUtable *gblInportTUtables;
extern const char *gblInportFileName;
const int_T gblInportDataTypeIdx[] = { 8, 17, 18 };

const int_T gblInportDims[] = { 1, 1, 1, 1, 1, 1 } ;

const int_T gblInportComplex[] = { 0, 0, 0 };

const int_T gblInportInterpoFlag[] = { 1, 1, 1 };

const int_T gblInportContinuous[] = { 0, 0, 0 };

#include "simstruc.h"
#include "fixedpoint.h"

/* Block signals (default storage) */
B rtB;

/* Block states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Parent Simstruct */
static SimStruct model_S;
SimStruct *const rtS = &model_S;
uint16_T look2_iu16bdlu32n16tu16_binlcse(uint16_T u0, uint16_T u1, const real_T
  bp0[], const real_T bp1[], const uint16_T table[], const uint32_T maxIndex[],
  uint32_T stride)
{
  uint32_T bpIndices[2];
  uint32_T fractions[2];
  uint32_T bpIdx;
  uint32_T frac;
  uint32_T iLeft;
  uint16_T y;
  uint16_T yL_0d0;
  uint16_T yL_1d;
  uint16_T yR_0d0;

  /* Column-major Lookup 2-D
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
  } else if (u0 < bp0[maxIndex[0U]]) {
    /* Binary Search */
    bpIdx = maxIndex[0U] >> 1U;
    iLeft = 0U;
    frac = maxIndex[0U];
    while (frac - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        frac = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (frac + iLeft) >> 1U;
    }

    frac = (uint32_T)(((real_T)u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft])
                      * 65536.0);
  } else {
    iLeft = maxIndex[0U] - 1U;
    frac = 65536U;
  }

  fractions[0U] = frac;
  bpIndices[0U] = iLeft;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
     Rounding mode: 'simplest'
   */
  if (u1 < bp1[0U]) {
    iLeft = 0U;
    frac = 0U;
  } else if (u1 < bp1[maxIndex[1U]]) {
    /* Binary Search */
    bpIdx = maxIndex[1U] >> 1U;
    iLeft = 0U;
    frac = maxIndex[1U];
    while (frac - iLeft > 1U) {
      if (u1 < bp1[bpIdx]) {
        frac = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (frac + iLeft) >> 1U;
    }

    frac = (uint32_T)(((real_T)u1 - bp1[iLeft]) / (bp1[iLeft + 1U] - bp1[iLeft])
                      * 65536.0);
  } else {
    iLeft = maxIndex[1U] - 1U;
    frac = 65536U;
  }

  /* Column-major Interpolation 2-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Rounding mode: 'simplest'
     Overflow mode: 'wrapping'
   */
  bpIdx = iLeft * stride + bpIndices[0U];
  yR_0d0 = table[bpIdx + 1U];
  yL_0d0 = table[bpIdx];
  if (yR_0d0 >= yL_0d0) {
    yL_1d = (uint16_T)((uint32_T)(uint16_T)(((uint16_T)((uint32_T)yR_0d0 -
      yL_0d0) * fractions[0U]) >> 16) + yL_0d0);
  } else {
    yL_1d = (uint16_T)((uint32_T)yL_0d0 - (uint16_T)(((uint16_T)((uint32_T)
      yL_0d0 - yR_0d0) * fractions[0U]) >> 16));
  }

  bpIdx += stride;
  yR_0d0 = table[bpIdx + 1U];
  yL_0d0 = table[bpIdx];
  if (yR_0d0 >= yL_0d0) {
    yR_0d0 = (uint16_T)((uint32_T)(uint16_T)(((uint16_T)((uint32_T)yR_0d0 -
      yL_0d0) * fractions[0U]) >> 16) + yL_0d0);
  } else {
    yR_0d0 = (uint16_T)((uint32_T)yL_0d0 - (uint16_T)(((uint16_T)((uint32_T)
      yL_0d0 - yR_0d0) * fractions[0U]) >> 16));
  }

  if (yR_0d0 >= yL_1d) {
    y = (uint16_T)((uint32_T)(uint16_T)(((uint16_T)((uint32_T)yR_0d0 - yL_1d) *
      frac) >> 16) + yL_1d);
  } else {
    y = (uint16_T)((uint32_T)yL_1d - (uint16_T)(((uint16_T)((uint32_T)yL_1d -
      yR_0d0) * frac) >> 16));
  }

  return y;
}

/* System initialize for root system: '<Root>' */
void MdlInitialize(void)
{
  /* SystemInitialize for IfAction SubSystem: '<Root>/NORMAL' */
  /* SystemInitialize for RelationalOperator: '<S1>/Relational Operator' incorporates:
   *  Outport: '<S1>/b_temin'
   */
  rtB.RelationalOperator = false;

  /* End of SystemInitialize for SubSystem: '<Root>/NORMAL' */
}

/* Start for root system: '<Root>' */
void MdlStart(void)
{
  MdlInitialize();
}

/* Outputs for root system: '<Root>' */
void MdlOutputs(int_T tid)
{
  real_T tmp;
  uint32_T RelationalOperator_tmp;
  uint16_T maxV;
  uint16_T y;

  /* Read data from the mat file of inport block */
  if (gblInportFileName != (NULL)) {
    real_T time = ssGetT(rtS);
    int_T currTimeIdx;
    int_T i;

    /*
     *  Read in data from mat file for root inport B_stend
     */
    if (gblInportTUtables[0].nTimePoints > 0) {
      {
        {
          int k = 1;
          if (gblInportTUtables[0].nTimePoints == 1) {
            k = 0;
          }

          currTimeIdx = rt_getTimeIdx(gblInportTUtables[0].time, time,
            gblInportTUtables[0].nTimePoints,
            *(gblInportTUtables[0].currTimeIdx),
            1,
            0);
          (*gblInportTUtables[0].currTimeIdx) = currTimeIdx;
          for (i = 0; i < 1; i++) {
            boolean_T* realPtr1 = (boolean_T*)gblInportTUtables[0].ur +
              i*gblInportTUtables[0].nTimePoints +currTimeIdx;
            boolean_T* realPtr2 = realPtr1 + 1*k;
            (void)rt_Interpolate_Datatype(
              realPtr1,
              realPtr2,
              &rtU.B_stend,
              time,
              gblInportTUtables[0].time[currTimeIdx],
              gblInportTUtables[0].time[currTimeIdx + k],
              gblInportTUtables[0].uDataType);
          }
        }
      }
    }

    /*
     *  Read in data from mat file for root inport rk_w
     */
    if (gblInportTUtables[1].nTimePoints > 0) {
      {
        {
          int k = 1;
          if (gblInportTUtables[1].nTimePoints == 1) {
            k = 0;
          }

          currTimeIdx = rt_getTimeIdx(gblInportTUtables[1].time, time,
            gblInportTUtables[1].nTimePoints,
            *(gblInportTUtables[1].currTimeIdx),
            1,
            0);
          (*gblInportTUtables[1].currTimeIdx) = currTimeIdx;
          for (i = 0; i < 1; i++) {
            uint16_T* realPtr1 = (uint16_T*)gblInportTUtables[1].ur +
              i*gblInportTUtables[1].nTimePoints +currTimeIdx;
            uint16_T* realPtr2 = realPtr1 + 1*k;
            (void)rt_Interpolate_Datatype(
              realPtr1,
              realPtr2,
              &rtU.rk_w,
              time,
              gblInportTUtables[1].time[currTimeIdx],
              gblInportTUtables[1].time[currTimeIdx + k],
              gblInportTUtables[1].uDataType);
          }
        }
      }
    }

    /*
     *  Read in data from mat file for root inport nmot
     */
    if (gblInportTUtables[2].nTimePoints > 0) {
      {
        {
          int k = 1;
          if (gblInportTUtables[2].nTimePoints == 1) {
            k = 0;
          }

          currTimeIdx = rt_getTimeIdx(gblInportTUtables[2].time, time,
            gblInportTUtables[2].nTimePoints,
            *(gblInportTUtables[2].currTimeIdx),
            1,
            0);
          (*gblInportTUtables[2].currTimeIdx) = currTimeIdx;
          for (i = 0; i < 1; i++) {
            uint8_T* realPtr1 = (uint8_T*)gblInportTUtables[2].ur +
              i*gblInportTUtables[2].nTimePoints +currTimeIdx;
            uint8_T* realPtr2 = realPtr1 + 1*k;
            (void)rt_Interpolate_Datatype(
              realPtr1,
              realPtr2,
              &rtU.nmot,
              time,
              gblInportTUtables[2].time[currTimeIdx],
              gblInportTUtables[2].time[currTimeIdx + k],
              gblInportTUtables[2].uDataType);
          }
        }
      }
    }
  }

  /* end read inport data from file */

  /* If: '<Root>/If' incorporates:
   *  Constant: '<S1>/TEMIN'
   *  Constant: '<S3>/TI_MAN_START_MX <0.0>'
   *  Inport: '<Root>/B_stend'
   */
  if (!rtU.B_stend) {
    /* Outputs for IfAction SubSystem: '<Root>/NORMAL' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/nmot'
     */
    rtB.DataTypeConversion = (uint16_T)(rtU.nmot * 40U);

    /* Product: '<S1>/Product' incorporates:
     *  Inport: '<Root>/rk_w'
     *  Product: '<S2>/Product'
     */
    RelationalOperator_tmp = ((uint32_T)rtU.rk_w * rtrtC.Product) >> 12;
    if (RelationalOperator_tmp > 65535U) {
      RelationalOperator_tmp = 65535U;
    }

    RelationalOperator_tmp = (RelationalOperator_tmp * 52429U) >> 15;
    if (RelationalOperator_tmp > 65535U) {
      RelationalOperator_tmp = 65535U;
    }

    /* Product: '<S1>/Product' */
    rtB.Product_a = (uint16_T)RelationalOperator_tmp;

    /* DataTypeConversion: '<S1>/Data Type Conversion1' incorporates:
     *  Product: '<S1>/Product'
     */
    rtB.DataTypeConversion1 = (uint16_T)((rtB.Product_a * 16777U) >> 20);

    /* Lookup_n-D: '<S1>/FKKVS' incorporates:
     *  DataTypeConversion: '<S1>/Data Type Conversion'
     *  DataTypeConversion: '<S1>/Data Type Conversion1'
     */
    rtB.FKKVS = look2_iu16bdlu32n16tu16_binlcse(rtB.DataTypeConversion,
      rtB.DataTypeConversion1, rtConstP.FKKVS_bp01Data, rtConstP.FKKVS_bp02Data,
      rtConstP.FKKVS_tableData, rtConstP.FKKVS_maxIndex, 20U);

    /* Product: '<S1>/Product1' incorporates:
     *  Lookup_n-D: '<S1>/FKKVS'
     *  Product: '<S1>/Product'
     */
    RelationalOperator_tmp = ((uint32_T)rtB.Product_a * rtB.FKKVS) >> 6;
    if (RelationalOperator_tmp > 65535U) {
      RelationalOperator_tmp = 65535U;
    }

    RelationalOperator_tmp = (RelationalOperator_tmp * 16777U) >> 14;
    if (RelationalOperator_tmp > 65535U) {
      RelationalOperator_tmp = 65535U;
    }

    /* Product: '<S1>/Product1' */
    rtB.Product1 = (uint16_T)RelationalOperator_tmp;
    y = rtP.TEMIN;
    RelationalOperator_tmp = y * 125U;
    RelationalOperator_tmp = (RelationalOperator_tmp + 1U) >> 1;
    if (RelationalOperator_tmp > 65535U) {
      RelationalOperator_tmp = 65535U;
    }

    maxV = (uint16_T)RelationalOperator_tmp;
    rtB.TEMIN = maxV;

    /* RelationalOperator: '<S1>/Relational Operator' incorporates:
     *  Constant: '<S1>/TEMIN'
     *  Product: '<S1>/Product1'
     *  Switch: '<S1>/Switch'
     */
    RelationalOperator_tmp = rtB.Product1 * 125U;

    /* RelationalOperator: '<S1>/Relational Operator' incorporates:
     *  Constant: '<S1>/TEMIN'
     */
    rtB.RelationalOperator = (RelationalOperator_tmp <= ((uint32_T)rtB.TEMIN <<
      16));

    /* Switch: '<S1>/Switch' */
    if (rtB.RelationalOperator) {
      /* Switch: '<S1>/Switch' */
      rtB.Switch = (uint16_T)(RelationalOperator_tmp >> 16);
    } else {
      /* Switch: '<S1>/Switch' incorporates:
       *  Constant: '<S1>/TEMIN'
       */
      rtB.Switch = rtB.TEMIN;
    }

    /* Product: '<S1>/Divide1' incorporates:
     *  Constant: '<S1>/Constant'
     *  Switch: '<S1>/Switch'
     */
    tmp = (real_T)rtB.Switch * 0.016 / 1000.0 / 1.6E-5;
    y = (uint16_T)tmp;

    /* Merge: '<Root>/Merge' incorporates:
     *  Product: '<S1>/Divide1'
     */
    rtB.Merge = y;

    /* Switch: '<S1>/Switch2' incorporates:
     *  Constant: '<S1>/B_TI_MAN1'
     *  Constant: '<S1>/TI_MAN1'
     */
    if (rtP.B_TI_MAN) {
      /* Sum: '<S1>/Sum' incorporates:
       *  Lookup_n-D: '<S4>/1-D Lookup Table'
       *  Switch: '<S1>/Switch'
       */
      RelationalOperator_tmp = (uint32_T)rtB.Switch + rtrtC.uDLookupTable;
      if (RelationalOperator_tmp > 65535U) {
        RelationalOperator_tmp = 65535U;
      }

      /* Sum: '<S1>/Sum' */
      rtB.Sum_h = (uint16_T)RelationalOperator_tmp;

      /* Merge: '<Root>/Merge1' incorporates:
       *  Sum: '<S1>/Sum'
       */
      rtB.Merge1 = rtB.Sum_h;
    } else {
      y = rtP.TI_MAN;
      RelationalOperator_tmp = y * 64001U;
      RelationalOperator_tmp = (uint32_T)((RelationalOperator_tmp & 512U) != 0U)
        + (RelationalOperator_tmp >> 10);
      if (RelationalOperator_tmp > 65535U) {
        RelationalOperator_tmp = 65535U;
      }

      y = (uint16_T)RelationalOperator_tmp;
      rtB.TI_MAN1 = y;

      /* Merge: '<Root>/Merge1' incorporates:
       *  Constant: '<S1>/TI_MAN1'
       */
      rtB.Merge1 = (uint16_T)((rtB.TI_MAN1 * 65535U) >> 16);
    }

    /* End of Switch: '<S1>/Switch2' */
    /* End of Outputs for SubSystem: '<Root>/NORMAL' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/START' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Product: '<S3>/Product' incorporates:
     *  Inport: '<Root>/rk_w'
     *  Product: '<S2>/Product'
     */
    RelationalOperator_tmp = ((uint32_T)rtU.rk_w * rtrtC.Product) >> 12;
    if (RelationalOperator_tmp > 65535U) {
      RelationalOperator_tmp = 65535U;
    }

    RelationalOperator_tmp = (RelationalOperator_tmp * 52429U) >> 15;
    if (RelationalOperator_tmp > 65535U) {
      RelationalOperator_tmp = 65535U;
    }

    /* Product: '<S3>/Product' */
    rtB.Product = (uint16_T)RelationalOperator_tmp;

    /* Product: '<S3>/Divide' incorporates:
     *  Constant: '<S3>/Constant1'
     *  Product: '<S3>/Product'
     */
    tmp = (real_T)rtB.Product * 0.016 / 1000.0 / 1.6E-5;
    y = (uint16_T)tmp;

    /* Merge: '<Root>/Merge' incorporates:
     *  Product: '<S3>/Divide'
     */
    rtB.Merge = y;

    /* Sum: '<S3>/Sum' incorporates:
     *  Lookup_n-D: '<S4>/1-D Lookup Table'
     *  Product: '<S3>/Product'
     */
    rtB.Sum = (uint16_T)(rtB.Product + rtrtC.uDLookupTable);
    y = rtP.TI_MAN_START_MX;
    RelationalOperator_tmp = y * 125U;
    RelationalOperator_tmp = (RelationalOperator_tmp + 1U) >> 1;
    if (RelationalOperator_tmp > 65535U) {
      RelationalOperator_tmp = 65535U;
    }

    maxV = (uint16_T)RelationalOperator_tmp;
    rtB.TI_MAN_START_MX00 = maxV;

    /* MinMax: '<S3>/MinMax' incorporates:
     *  Constant: '<S3>/TI_MAN_START_MX <0.0>'
     *  Sum: '<S3>/Sum'
     */
    maxV = rtB.Sum;
    y = rtB.TI_MAN_START_MX00;
    if (maxV < y) {
      maxV = y;
    }

    /* Merge: '<Root>/Merge1' incorporates:
     *  MinMax: '<S3>/MinMax'
     */
    rtB.Merge1 = maxV;

    /* End of Outputs for SubSystem: '<Root>/START' */
  }

  /* End of If: '<Root>/If' */

  /* Outport: '<Root>/tef_w' incorporates:
   *  Merge: '<Root>/Merge'
   */
  rtY.tef_w = rtB.Merge;

  /* Outport: '<Root>/ti_w' incorporates:
   *  Merge: '<Root>/Merge1'
   */
  rtY.ti_w = rtB.Merge1;

  /* Outport: '<Root>/b_temin' */
  rtY.b_temin = rtB.RelationalOperator;
  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
void MdlUpdate(int_T tid)
{
  UNUSED_PARAMETER(tid);
}

/* Termination for root system: '<Root>' */
void MdlTerminate(void)
{
}

/* Function to initialize sizes */
void MdlInitializeSizes(void)
{
  ssSetNumContStates(rtS, 0);          /* Number of continuous states */
  ssSetNumY(rtS, 3);                   /* Number of model outputs */
  ssSetNumU(rtS, 3);                   /* Number of model inputs */
  ssSetDirectFeedThrough(rtS, 1);      /* The model is direct feedthrough */
  ssSetNumSampleTimes(rtS, 1);         /* Number of sample times */
  ssSetNumBlocks(rtS, 35);             /* Number of blocks */
  ssSetNumBlockIO(rtS, 15);            /* Number of block outputs */
  ssSetNumBlockParams(rtS, 4);         /* Sum of parameter "widths" */
}

/* Function to initialize sample times. */
void MdlInitializeSampleTimes(void)
{
  /* task periods */
  ssSetSampleTime(rtS, 0, 0.2);

  /* task offsets */
  ssSetOffsetTime(rtS, 0, 0.0);
}

/* Function to register the model */
/* Turns off all optimizations on Windows because of issues with VC 2015 compiler.
   This function is not performance-critical, hence this is not a problem.
 */
#if defined(_MSC_VER)

#pragma optimize( "", off )

#endif

SimStruct * test5(void)
{
  static struct _ssMdlInfo mdlInfo;
  static struct _ssBlkInfo2 blkInfo2;
  static struct _ssBlkInfoSLSize blkInfoSLSize;
  (void) memset((char_T *)rtS, 0,
                sizeof(SimStruct));
  (void) memset((char_T *)&mdlInfo, 0,
                sizeof(struct _ssMdlInfo));
  (void) memset((char_T *)&blkInfo2, 0,
                sizeof(struct _ssBlkInfo2));
  (void) memset((char_T *)&blkInfoSLSize, 0,
                sizeof(struct _ssBlkInfoSLSize));
  ssSetBlkInfo2Ptr(rtS, &blkInfo2);
  ssSetBlkInfoSLSizePtr(rtS, &blkInfoSLSize);
  ssSetMdlInfoPtr(rtS, &mdlInfo);

  /* timing info */
  {
    static time_T mdlPeriod[NSAMPLE_TIMES];
    static time_T mdlOffset[NSAMPLE_TIMES];
    static time_T mdlTaskTimes[NSAMPLE_TIMES];
    static int_T mdlTsMap[NSAMPLE_TIMES];
    static int_T mdlSampleHits[NSAMPLE_TIMES];

    {
      int_T i;
      for (i = 0; i < NSAMPLE_TIMES; i++) {
        mdlPeriod[i] = 0.0;
        mdlOffset[i] = 0.0;
        mdlTaskTimes[i] = 0.0;
        mdlTsMap[i] = i;
        mdlSampleHits[i] = 1;
      }
    }

    ssSetSampleTimePtr(rtS, &mdlPeriod[0]);
    ssSetOffsetTimePtr(rtS, &mdlOffset[0]);
    ssSetSampleTimeTaskIDPtr(rtS, &mdlTsMap[0]);
    ssSetTPtr(rtS, &mdlTaskTimes[0]);
    ssSetSampleHitPtr(rtS, &mdlSampleHits[0]);
  }

  ssSetSolverMode(rtS, SOLVER_MODE_SINGLETASKING);

  /*
   * initialize model vectors and cache them in SimStruct
   */

  /* block I/O */
  {
    ssSetBlockIO(rtS, ((void *) &rtB));
    (void) memset(((void *) &rtB), 0,
                  sizeof(B));
  }

  /* external inputs */
  {
    ssSetU(rtS, ((void*) &rtU));
    (void)memset(&rtU, 0, sizeof(ExtU));
  }

  /* external outputs */
  {
    ssSetY(rtS, &rtY);
    (void)memset(&rtY, 0, sizeof(ExtY));
  }

  /* states (dwork) */
  {
    void *dwork = (void *) &rtDW;
    ssSetRootDWork(rtS, dwork);
    (void) memset(dwork, 0,
                  sizeof(DW));
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    ssSetModelMappingInfo(rtS, &dtInfo);
    dtInfo.numDataTypes = 36;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Model specific registration */
  ssSetRootSS(rtS, rtS);
  ssSetVersion(rtS, SIMSTRUCT_VERSION_LEVEL2);
  ssSetModelName(rtS, "test5");
  ssSetPath(rtS, "test5");
  ssSetTStart(rtS, 0.0);
  ssSetTFinal(rtS, 10.0);
  ssSetStepSize(rtS, 0.2);
  ssSetFixedStepSize(rtS, 0.2);

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    ssSetRTWLogInfo(rtS, &rt_DataLoggingInfo);
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogXSignalPtrs(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogT(ssGetRTWLogInfo(rtS), "tout");
    rtliSetLogX(ssGetRTWLogInfo(rtS), "");
    rtliSetLogXFinal(ssGetRTWLogInfo(rtS), "");
    rtliSetLogVarNameModifier(ssGetRTWLogInfo(rtS), "rt_");
    rtliSetLogFormat(ssGetRTWLogInfo(rtS), 4);
    rtliSetLogMaxRows(ssGetRTWLogInfo(rtS), 0);
    rtliSetLogDecimation(ssGetRTWLogInfo(rtS), 1);
    rtliSetLogY(ssGetRTWLogInfo(rtS), "");
    rtliSetLogYSignalInfo(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogYSignalPtrs(ssGetRTWLogInfo(rtS), (NULL));
  }

  ssSetChecksumVal(rtS, 0, 3274313170U);
  ssSetChecksumVal(rtS, 1, 1052398855U);
  ssSetChecksumVal(rtS, 2, 267329745U);
  ssSetChecksumVal(rtS, 3, 2567837006U);
  return rtS;
}

/* When you use the on parameter, it resets the optimizations to those that you
   specified with the /O compiler option. */
#if defined(_MSC_VER)

#pragma optimize( "", on )

#endif

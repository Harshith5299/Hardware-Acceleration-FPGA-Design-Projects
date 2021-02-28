/*
 * gm_tutorial1_1_ref.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "gm_tutorial1_1_ref".
 *
 * Model version              : 1.38
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Tue Feb  2 16:16:31 2021
 *
 * Target selection: systemverilog_dpi_grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ASIC/FPGA->ASIC/FPGA
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->Custom)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "gm_tutorial1_1_ref_capi.h"
#include "gm_tutorial1_1_ref.h"
#include "gm_tutorial1_1_ref_private.h"

const cint16_T gm_tutorial1_1_ref_sfix12_En8_GND_Complex = { 0, 0 };/* int16_T complex ground */

/* Model output function */
void gm_tutorial1_1_ref_output(RT_MODEL_gm_tutorial1_1_ref_T *const
  gm_tutorial1_1_ref_M)
{
  B_gm_tutorial1_1_ref_T *gm_tutorial1_1_ref_B = gm_tutorial1_1_ref_M->blockIO;
  DW_gm_tutorial1_1_ref_T *gm_tutorial1_1_ref_DW = gm_tutorial1_1_ref_M->dwork;
  ExtY_gm_tutorial1_1_ref_T *gm_tutorial1_1_ref_Y = (ExtY_gm_tutorial1_1_ref_T *)
    gm_tutorial1_1_ref_M->outputs;
  int32_T im;
  int32_T re;

  /* FromWorkspace: '<Root>/From Workspace' incorporates:
   *  Outport: '<Root>/dpi_1'
   */
  {
    real_T t = (((gm_tutorial1_1_ref_M->Timing.clockTick0+
                  gm_tutorial1_1_ref_M->Timing.clockTickH0* 4294967296.0)) *
                1.0E-6);
    real_T *pTimeValues = (real_T *)
      gm_tutorial1_1_ref_DW->FromWorkspace_PWORK.TimePtr;
    cint16_T *pDataValues = (cint16_T *)
      gm_tutorial1_1_ref_DW->FromWorkspace_PWORK.DataPtr;
    if (t < pTimeValues[0]) {
      gm_tutorial1_1_ref_Y->dpi_1 = gm_tutorial1_1_ref_sfix12_En8_GND_Complex;
    } else if (t == pTimeValues[49]) {
      gm_tutorial1_1_ref_Y->dpi_1 = pDataValues[49];
    } else if (t > pTimeValues[49]) {
      gm_tutorial1_1_ref_Y->dpi_1 = gm_tutorial1_1_ref_sfix12_En8_GND_Complex;
    } else {
      int_T currTimeIndex = gm_tutorial1_1_ref_DW->FromWorkspace_IWORK.PrevIndex;
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      gm_tutorial1_1_ref_Y->dpi_1 = pDataValues[currTimeIndex];
      gm_tutorial1_1_ref_DW->FromWorkspace_IWORK.PrevIndex = currTimeIndex;
    }
  }

  /* FromWorkspace: '<Root>/From Workspace1' incorporates:
   *  Outport: '<Root>/dpi_2'
   */
  {
    real_T t = (((gm_tutorial1_1_ref_M->Timing.clockTick0+
                  gm_tutorial1_1_ref_M->Timing.clockTickH0* 4294967296.0)) *
                1.0E-6);
    real_T *pTimeValues = (real_T *)
      gm_tutorial1_1_ref_DW->FromWorkspace1_PWORK.TimePtr;
    cint16_T *pDataValues = (cint16_T *)
      gm_tutorial1_1_ref_DW->FromWorkspace1_PWORK.DataPtr;
    if (t < pTimeValues[0]) {
      gm_tutorial1_1_ref_Y->dpi_2 = gm_tutorial1_1_ref_sfix12_En8_GND_Complex;
    } else if (t == pTimeValues[49]) {
      gm_tutorial1_1_ref_Y->dpi_2 = pDataValues[49];
    } else if (t > pTimeValues[49]) {
      gm_tutorial1_1_ref_Y->dpi_2 = gm_tutorial1_1_ref_sfix12_En8_GND_Complex;
    } else {
      int_T currTimeIndex =
        gm_tutorial1_1_ref_DW->FromWorkspace1_IWORK.PrevIndex;
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      gm_tutorial1_1_ref_Y->dpi_2 = pDataValues[currTimeIndex];
      gm_tutorial1_1_ref_DW->FromWorkspace1_IWORK.PrevIndex = currTimeIndex;
    }
  }

  /* Delay: '<S1>/Delay5' incorporates:
   *  Outport: '<Root>/dpi_3'
   */
  gm_tutorial1_1_ref_Y->dpi_3 = gm_tutorial1_1_ref_DW->Delay5_DSTATE;

  /* Delay: '<S2>/Delay2' */
  gm_tutorial1_1_ref_B->Delay2 = gm_tutorial1_1_ref_DW->Delay2_DSTATE[0];

  /* Delay: '<S1>/PipelineRegister1' */
  gm_tutorial1_1_ref_B->PipelineRegister1 =
    gm_tutorial1_1_ref_DW->PipelineRegister1_DSTATE;

  /* Delay: '<S1>/PipelineRegister' */
  gm_tutorial1_1_ref_B->PipelineRegister =
    gm_tutorial1_1_ref_DW->PipelineRegister_DSTATE;

  /* Sum: '<S1>/Add' incorporates:
   *  Delay: '<S1>/PipelineRegister'
   *  Delay: '<S1>/PipelineRegister1'
   */
  im = gm_tutorial1_1_ref_B->PipelineRegister1 -
    gm_tutorial1_1_ref_B->PipelineRegister;

  /* Sum: '<S1>/Add' */
  gm_tutorial1_1_ref_B->Add = (im & 16777216U) != 0U ? im | -16777216 : im &
    16777215;

  /* Delay: '<S1>/PipelineRegister2' */
  gm_tutorial1_1_ref_B->PipelineRegister2 =
    gm_tutorial1_1_ref_DW->PipelineRegister2_DSTATE;

  /* Delay: '<S1>/PipelineRegister3' */
  gm_tutorial1_1_ref_B->PipelineRegister3 =
    gm_tutorial1_1_ref_DW->PipelineRegister3_DSTATE;

  /* Sum: '<S1>/Add1' incorporates:
   *  Delay: '<S1>/PipelineRegister2'
   *  Delay: '<S1>/PipelineRegister3'
   */
  im = gm_tutorial1_1_ref_B->PipelineRegister2 +
    gm_tutorial1_1_ref_B->PipelineRegister3;

  /* Sum: '<S1>/Add1' */
  gm_tutorial1_1_ref_B->Add1 = (im & 16777216U) != 0U ? im | -16777216 : im &
    16777215;

  /* Delay: '<S1>/Delay' */
  gm_tutorial1_1_ref_B->Delay = gm_tutorial1_1_ref_DW->Delay_DSTATE;

  /* ComplexToRealImag: '<S1>/Complex to Real-Imag' incorporates:
   *  Delay: '<S1>/Delay'
   */
  gm_tutorial1_1_ref_B->ComplextoRealImag_o1 = gm_tutorial1_1_ref_B->Delay.re;

  /* ComplexToRealImag: '<S1>/Complex to Real-Imag' incorporates:
   *  Delay: '<S1>/Delay'
   */
  gm_tutorial1_1_ref_B->ComplextoRealImag_o2 = gm_tutorial1_1_ref_B->Delay.im;

  /* Delay: '<S1>/Delay1' */
  gm_tutorial1_1_ref_B->Delay1 = gm_tutorial1_1_ref_DW->Delay1_DSTATE;

  /* ComplexToRealImag: '<S1>/Complex to Real-Imag1' incorporates:
   *  Delay: '<S1>/Delay1'
   */
  gm_tutorial1_1_ref_B->ComplextoRealImag1_o1 = gm_tutorial1_1_ref_B->Delay1.re;

  /* ComplexToRealImag: '<S1>/Complex to Real-Imag1' incorporates:
   *  Delay: '<S1>/Delay1'
   */
  gm_tutorial1_1_ref_B->ComplextoRealImag1_o2 = gm_tutorial1_1_ref_B->Delay1.im;

  /* Delay: '<S1>/Delay8' */
  gm_tutorial1_1_ref_B->Delay8 = gm_tutorial1_1_ref_DW->Delay8_DSTATE;

  /* Delay: '<S1>/Delay9' */
  gm_tutorial1_1_ref_B->Delay9 = gm_tutorial1_1_ref_DW->Delay9_DSTATE;

  /* Delay: '<S1>/HwModeRegister' */
  gm_tutorial1_1_ref_B->HwModeRegister =
    gm_tutorial1_1_ref_DW->HwModeRegister_DSTATE;

  /* Delay: '<S1>/HwModeRegister1' */
  gm_tutorial1_1_ref_B->HwModeRegister1 =
    gm_tutorial1_1_ref_DW->HwModeRegister1_DSTATE;

  /* Delay: '<S1>/HwModeRegister2' */
  gm_tutorial1_1_ref_B->HwModeRegister2 =
    gm_tutorial1_1_ref_DW->HwModeRegister2_DSTATE;

  /* Delay: '<S1>/HwModeRegister3' */
  gm_tutorial1_1_ref_B->HwModeRegister3 =
    gm_tutorial1_1_ref_DW->HwModeRegister3_DSTATE;

  /* Delay: '<S1>/HwModeRegister4' */
  gm_tutorial1_1_ref_B->HwModeRegister4 =
    gm_tutorial1_1_ref_DW->HwModeRegister4_DSTATE;

  /* Delay: '<S1>/HwModeRegister5' */
  gm_tutorial1_1_ref_B->HwModeRegister5 =
    gm_tutorial1_1_ref_DW->HwModeRegister5_DSTATE;

  /* Delay: '<S1>/HwModeRegister6' */
  gm_tutorial1_1_ref_B->HwModeRegister6 =
    gm_tutorial1_1_ref_DW->HwModeRegister6_DSTATE;

  /* Delay: '<S1>/HwModeRegister7' */
  gm_tutorial1_1_ref_B->HwModeRegister7 =
    gm_tutorial1_1_ref_DW->HwModeRegister7_DSTATE;

  /* Product: '<S1>/Product' incorporates:
   *  Delay: '<S1>/HwModeRegister'
   *  Delay: '<S1>/HwModeRegister1'
   */
  gm_tutorial1_1_ref_B->Product = gm_tutorial1_1_ref_B->HwModeRegister *
    gm_tutorial1_1_ref_B->HwModeRegister1;

  /* Product: '<S1>/Product1' incorporates:
   *  Delay: '<S1>/HwModeRegister2'
   *  Delay: '<S1>/HwModeRegister3'
   */
  gm_tutorial1_1_ref_B->Product1 = gm_tutorial1_1_ref_B->HwModeRegister2 *
    gm_tutorial1_1_ref_B->HwModeRegister3;

  /* Product: '<S1>/Product2' incorporates:
   *  Delay: '<S1>/HwModeRegister4'
   *  Delay: '<S1>/HwModeRegister5'
   */
  gm_tutorial1_1_ref_B->Product2 = gm_tutorial1_1_ref_B->HwModeRegister4 *
    gm_tutorial1_1_ref_B->HwModeRegister5;

  /* Product: '<S1>/Product3' incorporates:
   *  Delay: '<S1>/HwModeRegister6'
   *  Delay: '<S1>/HwModeRegister7'
   */
  gm_tutorial1_1_ref_B->Product3 = gm_tutorial1_1_ref_B->HwModeRegister6 *
    gm_tutorial1_1_ref_B->HwModeRegister7;

  /* RealImagToComplex: '<S1>/Real-Imag to Complex' incorporates:
   *  Delay: '<S1>/Delay8'
   *  Delay: '<S1>/Delay9'
   */
  gm_tutorial1_1_ref_B->RealImagtoComplex.re = gm_tutorial1_1_ref_B->Delay9;
  gm_tutorial1_1_ref_B->RealImagtoComplex.im = gm_tutorial1_1_ref_B->Delay8;

  /* Delay: '<S2>/Delay' */
  gm_tutorial1_1_ref_B->Delay_e = gm_tutorial1_1_ref_DW->Delay_DSTATE_m;

  /* Delay: '<S2>/Delay1' */
  gm_tutorial1_1_ref_B->Delay1_e = gm_tutorial1_1_ref_DW->Delay1_DSTATE_j;

  /* Product: '<S2>/ComplexMultiply' incorporates:
   *  Delay: '<S2>/Delay'
   *  Delay: '<S2>/Delay1'
   */
  im = gm_tutorial1_1_ref_B->Delay_e.re * gm_tutorial1_1_ref_B->Delay1_e.re -
    gm_tutorial1_1_ref_B->Delay_e.im * gm_tutorial1_1_ref_B->Delay1_e.im;
  re = (im & 8388608U) != 0U ? im | -8388608 : im & 8388607;
  im = gm_tutorial1_1_ref_B->Delay_e.re * gm_tutorial1_1_ref_B->Delay1_e.im +
    gm_tutorial1_1_ref_B->Delay_e.im * gm_tutorial1_1_ref_B->Delay1_e.re;
  im = (im & 8388608U) != 0U ? im | -8388608 : im & 8388607;

  /* Product: '<S2>/ComplexMultiply' */
  gm_tutorial1_1_ref_B->ComplexMultiply.re = re;
  gm_tutorial1_1_ref_B->ComplexMultiply.im = im;
}

/* Model update function */
void gm_tutorial1_1_ref_update(RT_MODEL_gm_tutorial1_1_ref_T *const
  gm_tutorial1_1_ref_M)
{
  B_gm_tutorial1_1_ref_T *gm_tutorial1_1_ref_B = gm_tutorial1_1_ref_M->blockIO;
  DW_gm_tutorial1_1_ref_T *gm_tutorial1_1_ref_DW = gm_tutorial1_1_ref_M->dwork;
  ExtY_gm_tutorial1_1_ref_T *gm_tutorial1_1_ref_Y = (ExtY_gm_tutorial1_1_ref_T *)
    gm_tutorial1_1_ref_M->outputs;

  /* Update for Delay: '<S1>/Delay5' incorporates:
   *  RealImagToComplex: '<S1>/Real-Imag to Complex'
   */
  gm_tutorial1_1_ref_DW->Delay5_DSTATE = gm_tutorial1_1_ref_B->RealImagtoComplex;

  /* Update for Delay: '<S2>/Delay2' incorporates:
   *  Product: '<S2>/ComplexMultiply'
   */
  gm_tutorial1_1_ref_DW->Delay2_DSTATE[0] = gm_tutorial1_1_ref_DW->
    Delay2_DSTATE[1];
  gm_tutorial1_1_ref_DW->Delay2_DSTATE[1] = gm_tutorial1_1_ref_DW->
    Delay2_DSTATE[2];
  gm_tutorial1_1_ref_DW->Delay2_DSTATE[2] =
    gm_tutorial1_1_ref_B->ComplexMultiply;

  /* Update for Delay: '<S1>/PipelineRegister1' incorporates:
   *  Product: '<S1>/Product1'
   */
  gm_tutorial1_1_ref_DW->PipelineRegister1_DSTATE =
    gm_tutorial1_1_ref_B->Product1;

  /* Update for Delay: '<S1>/PipelineRegister' incorporates:
   *  Product: '<S1>/Product'
   */
  gm_tutorial1_1_ref_DW->PipelineRegister_DSTATE = gm_tutorial1_1_ref_B->Product;

  /* Update for Delay: '<S1>/PipelineRegister2' incorporates:
   *  Product: '<S1>/Product2'
   */
  gm_tutorial1_1_ref_DW->PipelineRegister2_DSTATE =
    gm_tutorial1_1_ref_B->Product2;

  /* Update for Delay: '<S1>/PipelineRegister3' incorporates:
   *  Product: '<S1>/Product3'
   */
  gm_tutorial1_1_ref_DW->PipelineRegister3_DSTATE =
    gm_tutorial1_1_ref_B->Product3;

  /* Update for Delay: '<S1>/Delay' incorporates:
   *  FromWorkspace: '<Root>/From Workspace'
   *  Outport: '<Root>/dpi_1'
   */
  gm_tutorial1_1_ref_DW->Delay_DSTATE = gm_tutorial1_1_ref_Y->dpi_1;

  /* Update for Delay: '<S1>/Delay1' incorporates:
   *  FromWorkspace: '<Root>/From Workspace1'
   *  Outport: '<Root>/dpi_2'
   */
  gm_tutorial1_1_ref_DW->Delay1_DSTATE = gm_tutorial1_1_ref_Y->dpi_2;

  /* Update for Delay: '<S1>/Delay8' incorporates:
   *  Sum: '<S1>/Add1'
   */
  gm_tutorial1_1_ref_DW->Delay8_DSTATE = gm_tutorial1_1_ref_B->Add1;

  /* Update for Delay: '<S1>/Delay9' incorporates:
   *  Sum: '<S1>/Add'
   */
  gm_tutorial1_1_ref_DW->Delay9_DSTATE = gm_tutorial1_1_ref_B->Add;

  /* Update for Delay: '<S1>/HwModeRegister' incorporates:
   *  ComplexToRealImag: '<S1>/Complex to Real-Imag'
   */
  gm_tutorial1_1_ref_DW->HwModeRegister_DSTATE =
    gm_tutorial1_1_ref_B->ComplextoRealImag_o2;

  /* Update for Delay: '<S1>/HwModeRegister1' incorporates:
   *  ComplexToRealImag: '<S1>/Complex to Real-Imag1'
   */
  gm_tutorial1_1_ref_DW->HwModeRegister1_DSTATE =
    gm_tutorial1_1_ref_B->ComplextoRealImag1_o2;

  /* Update for Delay: '<S1>/HwModeRegister2' incorporates:
   *  ComplexToRealImag: '<S1>/Complex to Real-Imag'
   */
  gm_tutorial1_1_ref_DW->HwModeRegister2_DSTATE =
    gm_tutorial1_1_ref_B->ComplextoRealImag_o1;

  /* Update for Delay: '<S1>/HwModeRegister3' incorporates:
   *  ComplexToRealImag: '<S1>/Complex to Real-Imag1'
   */
  gm_tutorial1_1_ref_DW->HwModeRegister3_DSTATE =
    gm_tutorial1_1_ref_B->ComplextoRealImag1_o1;

  /* Update for Delay: '<S1>/HwModeRegister4' incorporates:
   *  ComplexToRealImag: '<S1>/Complex to Real-Imag'
   */
  gm_tutorial1_1_ref_DW->HwModeRegister4_DSTATE =
    gm_tutorial1_1_ref_B->ComplextoRealImag_o1;

  /* Update for Delay: '<S1>/HwModeRegister5' incorporates:
   *  ComplexToRealImag: '<S1>/Complex to Real-Imag1'
   */
  gm_tutorial1_1_ref_DW->HwModeRegister5_DSTATE =
    gm_tutorial1_1_ref_B->ComplextoRealImag1_o2;

  /* Update for Delay: '<S1>/HwModeRegister6' incorporates:
   *  ComplexToRealImag: '<S1>/Complex to Real-Imag1'
   */
  gm_tutorial1_1_ref_DW->HwModeRegister6_DSTATE =
    gm_tutorial1_1_ref_B->ComplextoRealImag1_o1;

  /* Update for Delay: '<S1>/HwModeRegister7' incorporates:
   *  ComplexToRealImag: '<S1>/Complex to Real-Imag'
   */
  gm_tutorial1_1_ref_DW->HwModeRegister7_DSTATE =
    gm_tutorial1_1_ref_B->ComplextoRealImag_o2;

  /* Update for Delay: '<S2>/Delay' incorporates:
   *  FromWorkspace: '<Root>/From Workspace'
   *  Outport: '<Root>/dpi_1'
   */
  gm_tutorial1_1_ref_DW->Delay_DSTATE_m = gm_tutorial1_1_ref_Y->dpi_1;

  /* Update for Delay: '<S2>/Delay1' incorporates:
   *  FromWorkspace: '<Root>/From Workspace1'
   *  Outport: '<Root>/dpi_2'
   */
  gm_tutorial1_1_ref_DW->Delay1_DSTATE_j = gm_tutorial1_1_ref_Y->dpi_2;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 1.0E-6, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  gm_tutorial1_1_ref_M->Timing.clockTick0++;
  if (!gm_tutorial1_1_ref_M->Timing.clockTick0) {
    gm_tutorial1_1_ref_M->Timing.clockTickH0++;
  }
}

/* Model initialize function */
void gm_tutorial1_1_ref_initialize(RT_MODEL_gm_tutorial1_1_ref_T *const
  gm_tutorial1_1_ref_M)
{
  DW_gm_tutorial1_1_ref_T *gm_tutorial1_1_ref_DW = gm_tutorial1_1_ref_M->dwork;

  /* Start for FromWorkspace: '<Root>/From Workspace' incorporates:
   *  Outport: '<Root>/dpi_1'
   */
  {
    static real_T pTimeValues0[] = { 0.0, 1.0E-6, 2.0E-6, 3.0E-6, 4.0E-6,
      4.9999999999999996E-6, 6.0E-6, 7.0E-6, 8.0E-6, 9.0E-6,
      9.9999999999999991E-6, 1.1E-5, 1.2E-5, 1.3E-5, 1.4E-5,
      1.4999999999999999E-5, 1.6E-5, 1.7E-5, 1.8E-5, 1.8999999999999998E-5,
      1.9999999999999998E-5, 2.1E-5, 2.2E-5, 2.3E-5, 2.4E-5,
      2.4999999999999998E-5, 2.6E-5, 2.7E-5, 2.8E-5, 2.9E-5,
      2.9999999999999997E-5, 3.1E-5, 3.2E-5, 3.2999999999999996E-5, 3.4E-5,
      3.5E-5, 3.6E-5, 3.7E-5, 3.7999999999999995E-5, 3.9E-5,
      3.9999999999999996E-5, 4.1E-5, 4.2E-5, 4.2999999999999995E-5, 4.4E-5,
      4.4999999999999996E-5, 4.6E-5, 4.7E-5, 4.8E-5, 4.9E-5 } ;

    static cint16_T pDataValues0[] = { { 209, 71 }, { 232, 174 }, { 33, 168 }, {
        234, 42 }, { 162, 30 }, { 25, 128 }, { 71, 246 }, { 140, 87 }, { 245,
        150 }, { 247, 57 }, { 40, 192 }, { 248, 65 }, { 245, 130 }, { 124, 179 },
      { 205, 228 }, { 36, 246 }, { 108, 140 }, { 234, 35 }, { 203, 38 }, { 246,
        66 }, { 168, 215 }, { 9, 65 }, { 217, 208 }, { 239, 62 }, { 174, 238 },
        { 194, 90 }, { 190, 50 }, { 100, 64 }, { 168, 158 }, { 44, 121 }, { 181,
        90 }, { 8, 213 }, { 71, 150 }, { 12, 141 }, { 25, 235 }, { 211, 73 }, {
        178, 194 }, { 81, 193 }, { 243, 97 }, { 9, 145 }, { 112, 19 }, { 98, 14
      }, { 196, 136 }, { 204, 199 }, { 48, 239 }, { 125, 33 }, { 114, 146 }, {
        165, 120 }, { 182, 3 }, { 193, 86 } } ;

    gm_tutorial1_1_ref_DW->FromWorkspace_PWORK.TimePtr = (void *) pTimeValues0;
    gm_tutorial1_1_ref_DW->FromWorkspace_PWORK.DataPtr = (void *) pDataValues0;
    gm_tutorial1_1_ref_DW->FromWorkspace_IWORK.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<Root>/From Workspace1' incorporates:
   *  Outport: '<Root>/dpi_2'
   */
  {
    static real_T pTimeValues0[] = { 0.0, 1.0E-6, 2.0E-6, 3.0E-6, 4.0E-6,
      4.9999999999999996E-6, 6.0E-6, 7.0E-6, 8.0E-6, 9.0E-6,
      9.9999999999999991E-6, 1.1E-5, 1.2E-5, 1.3E-5, 1.4E-5,
      1.4999999999999999E-5, 1.6E-5, 1.7E-5, 1.8E-5, 1.8999999999999998E-5,
      1.9999999999999998E-5, 2.1E-5, 2.2E-5, 2.3E-5, 2.4E-5,
      2.4999999999999998E-5, 2.6E-5, 2.7E-5, 2.8E-5, 2.9E-5,
      2.9999999999999997E-5, 3.1E-5, 3.2E-5, 3.2999999999999996E-5, 3.4E-5,
      3.5E-5, 3.6E-5, 3.7E-5, 3.7999999999999995E-5, 3.9E-5,
      3.9999999999999996E-5, 4.1E-5, 4.2E-5, 4.2999999999999995E-5, 4.4E-5,
      4.4999999999999996E-5, 4.6E-5, 4.7E-5, 4.8E-5, 4.9E-5 } ;

    static cint16_T pDataValues0[] = { { 42, 107 }, { 203, 13 }, { 80, 231 }, {
        135, 242 }, { 42, 126 }, { 154, 125 }, { 67, 86 }, { 167, 230 }, { 176,
        95 }, { 192, 28 }, { 115, 200 }, { 21, 100 }, { 59, 62 }, { 234, 103 },
        { 39, 25 }, { 211, 34 }, { 138, 241 }, { 255, 245 }, { 20, 147 }, { 113,
        15 }, { 27, 60 }, { 246, 90 }, { 1, 210 }, { 198, 4 }, { 209, 11 }, {
        222, 43 }, { 22, 166 }, { 102, 187 }, { 67, 166 }, { 205, 115 }, { 110,
        140 }, { 233, 76 }, { 47, 191 }, { 68, 48 }, { 37, 176 }, { 35, 47 }, {
        223, 94 }, { 148, 160 }, { 141, 200 }, { 37, 21 }, { 218, 238 }, { 159,
        199 }, { 90, 125 }, { 131, 112 }, { 103, 114 }, { 19, 78 }, { 61, 130 },
      { 32, 131 }, { 47, 209 }, { 61, 203 } } ;

    gm_tutorial1_1_ref_DW->FromWorkspace1_PWORK.TimePtr = (void *) pTimeValues0;
    gm_tutorial1_1_ref_DW->FromWorkspace1_PWORK.DataPtr = (void *) pDataValues0;
    gm_tutorial1_1_ref_DW->FromWorkspace1_IWORK.PrevIndex = 0;
  }

  /* InitializeConditions for Delay: '<S1>/Delay5' */
  gm_tutorial1_1_ref_DW->Delay5_DSTATE.re = 0;
  gm_tutorial1_1_ref_DW->Delay5_DSTATE.im = 0;

  /* InitializeConditions for Delay: '<S2>/Delay2' */
  gm_tutorial1_1_ref_DW->Delay2_DSTATE[0].re = 0;
  gm_tutorial1_1_ref_DW->Delay2_DSTATE[0].im = 0;
  gm_tutorial1_1_ref_DW->Delay2_DSTATE[1].re = 0;
  gm_tutorial1_1_ref_DW->Delay2_DSTATE[1].im = 0;
  gm_tutorial1_1_ref_DW->Delay2_DSTATE[2].re = 0;
  gm_tutorial1_1_ref_DW->Delay2_DSTATE[2].im = 0;

  /* InitializeConditions for Delay: '<S1>/PipelineRegister1' */
  gm_tutorial1_1_ref_DW->PipelineRegister1_DSTATE = 0;

  /* InitializeConditions for Delay: '<S1>/PipelineRegister' */
  gm_tutorial1_1_ref_DW->PipelineRegister_DSTATE = 0;

  /* InitializeConditions for Delay: '<S1>/PipelineRegister2' */
  gm_tutorial1_1_ref_DW->PipelineRegister2_DSTATE = 0;

  /* InitializeConditions for Delay: '<S1>/PipelineRegister3' */
  gm_tutorial1_1_ref_DW->PipelineRegister3_DSTATE = 0;

  /* InitializeConditions for Delay: '<S1>/Delay' */
  gm_tutorial1_1_ref_DW->Delay_DSTATE.re = 0;
  gm_tutorial1_1_ref_DW->Delay_DSTATE.im = 0;

  /* InitializeConditions for Delay: '<S1>/Delay1' */
  gm_tutorial1_1_ref_DW->Delay1_DSTATE.re = 0;
  gm_tutorial1_1_ref_DW->Delay1_DSTATE.im = 0;

  /* InitializeConditions for Delay: '<S1>/Delay8' */
  gm_tutorial1_1_ref_DW->Delay8_DSTATE = 0;

  /* InitializeConditions for Delay: '<S1>/Delay9' */
  gm_tutorial1_1_ref_DW->Delay9_DSTATE = 0;

  /* InitializeConditions for Delay: '<S1>/HwModeRegister' */
  gm_tutorial1_1_ref_DW->HwModeRegister_DSTATE = 0;

  /* InitializeConditions for Delay: '<S1>/HwModeRegister1' */
  gm_tutorial1_1_ref_DW->HwModeRegister1_DSTATE = 0;

  /* InitializeConditions for Delay: '<S1>/HwModeRegister2' */
  gm_tutorial1_1_ref_DW->HwModeRegister2_DSTATE = 0;

  /* InitializeConditions for Delay: '<S1>/HwModeRegister3' */
  gm_tutorial1_1_ref_DW->HwModeRegister3_DSTATE = 0;

  /* InitializeConditions for Delay: '<S1>/HwModeRegister4' */
  gm_tutorial1_1_ref_DW->HwModeRegister4_DSTATE = 0;

  /* InitializeConditions for Delay: '<S1>/HwModeRegister5' */
  gm_tutorial1_1_ref_DW->HwModeRegister5_DSTATE = 0;

  /* InitializeConditions for Delay: '<S1>/HwModeRegister6' */
  gm_tutorial1_1_ref_DW->HwModeRegister6_DSTATE = 0;

  /* InitializeConditions for Delay: '<S1>/HwModeRegister7' */
  gm_tutorial1_1_ref_DW->HwModeRegister7_DSTATE = 0;

  /* InitializeConditions for Delay: '<S2>/Delay' */
  gm_tutorial1_1_ref_DW->Delay_DSTATE_m.re = 0;
  gm_tutorial1_1_ref_DW->Delay_DSTATE_m.im = 0;

  /* InitializeConditions for Delay: '<S2>/Delay1' */
  gm_tutorial1_1_ref_DW->Delay1_DSTATE_j.re = 0;
  gm_tutorial1_1_ref_DW->Delay1_DSTATE_j.im = 0;
}

/* Model terminate function */
void gm_tutorial1_1_ref_terminate(RT_MODEL_gm_tutorial1_1_ref_T
  * gm_tutorial1_1_ref_M)
{
  /* model code */
  rt_FREE(gm_tutorial1_1_ref_M->blockIO);
  rt_FREE(gm_tutorial1_1_ref_M->outputs);
  rt_FREE(gm_tutorial1_1_ref_M->dwork);
  rt_FREE(gm_tutorial1_1_ref_M);
}

/* Model data allocation function */
RT_MODEL_gm_tutorial1_1_ref_T *gm_tutorial1_1_ref(void)
{
  RT_MODEL_gm_tutorial1_1_ref_T *gm_tutorial1_1_ref_M;
  gm_tutorial1_1_ref_M = (RT_MODEL_gm_tutorial1_1_ref_T *) malloc(sizeof
    (RT_MODEL_gm_tutorial1_1_ref_T));
  if (gm_tutorial1_1_ref_M == NULL) {
    return NULL;
  }

  (void) memset((char *)gm_tutorial1_1_ref_M, 0,
                sizeof(RT_MODEL_gm_tutorial1_1_ref_T));

  /* block I/O */
  {
    B_gm_tutorial1_1_ref_T *b = (B_gm_tutorial1_1_ref_T *) malloc(sizeof
      (B_gm_tutorial1_1_ref_T));
    rt_VALIDATE_MEMORY(gm_tutorial1_1_ref_M,b);
    gm_tutorial1_1_ref_M->blockIO = (b);
  }

  /* states (dwork) */
  {
    DW_gm_tutorial1_1_ref_T *dwork = (DW_gm_tutorial1_1_ref_T *) malloc(sizeof
      (DW_gm_tutorial1_1_ref_T));
    rt_VALIDATE_MEMORY(gm_tutorial1_1_ref_M,dwork);
    gm_tutorial1_1_ref_M->dwork = (dwork);
  }

  /* external outputs */
  {
    ExtY_gm_tutorial1_1_ref_T *gm_tutorial1_1_ref_Y = (ExtY_gm_tutorial1_1_ref_T
      *) malloc(sizeof(ExtY_gm_tutorial1_1_ref_T));
    rt_VALIDATE_MEMORY(gm_tutorial1_1_ref_M,gm_tutorial1_1_ref_Y);
    gm_tutorial1_1_ref_M->outputs = (gm_tutorial1_1_ref_Y);
  }

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  gm_tutorial1_1_ref_InitializeDataMapInfo(gm_tutorial1_1_ref_M);

  {
    B_gm_tutorial1_1_ref_T *gm_tutorial1_1_ref_B = gm_tutorial1_1_ref_M->blockIO;
    DW_gm_tutorial1_1_ref_T *gm_tutorial1_1_ref_DW = gm_tutorial1_1_ref_M->dwork;
    ExtY_gm_tutorial1_1_ref_T *gm_tutorial1_1_ref_Y = (ExtY_gm_tutorial1_1_ref_T
      *) gm_tutorial1_1_ref_M->outputs;

    /* block I/O */
    (void) memset(((void *) gm_tutorial1_1_ref_B), 0,
                  sizeof(B_gm_tutorial1_1_ref_T));

    /* states (dwork) */
    (void) memset((void *)gm_tutorial1_1_ref_DW, 0,
                  sizeof(DW_gm_tutorial1_1_ref_T));

    /* external outputs */
    (void) memset((void *)gm_tutorial1_1_ref_Y, 0,
                  sizeof(ExtY_gm_tutorial1_1_ref_T));
  }

  return gm_tutorial1_1_ref_M;
}

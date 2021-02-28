/*
 * gm_homework1_ref.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "gm_homework1_ref".
 *
 * Model version              : 1.39
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Sat Feb 20 12:46:49 2021
 *
 * Target selection: systemverilog_dpi_grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ASIC/FPGA->ASIC/FPGA
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->Custom)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "gm_homework1_ref_capi.h"
#include "gm_homework1_ref.h"
#include "gm_homework1_ref_private.h"

int64_T MultiWord2sLong(const uint64_T u[])
{
  return (int64_T)u[0];
}

void MultiWordSignedWrap(const uint64_T u1[], int32_T n1, uint32_T n2, uint64_T
  y[])
{
  uint64_T mask;
  uint64_T ys;
  int32_T i;
  int32_T n1m1;
  n1m1 = n1 - 1;
  for (i = 0; i < n1m1; i++) {
    y[i] = u1[i];
  }

  mask = 1ULL << (63U - n2);
  ys = (u1[n1 - 1] & mask) != 0ULL ? MAX_uint64_T : 0ULL;
  mask = (mask << 1U) - 1ULL;
  y[n1 - 1] = (u1[n1 - 1] & mask) | (~mask & ys);
}

void MultiWordAdd(const uint64_T u1[], const uint64_T u2[], uint64_T y[],
                  int32_T n)
{
  uint64_T carry = 0ULL;
  uint64_T u1i;
  uint64_T yi;
  int32_T i;
  for (i = 0; i < n; i++) {
    u1i = u1[i];
    yi = (u1i + u2[i]) + carry;
    y[i] = yi;
    carry = carry != 0ULL ? (uint64_T)(yi <= u1i) : (uint64_T)(yi < u1i);
  }
}

void sLong2MultiWord(int64_T u, uint64_T y[], int32_T n)
{
  uint64_T yi;
  int32_T i;
  y[0] = (uint64_T)u;
  yi = u < 0LL ? MAX_uint64_T : 0ULL;
  for (i = 1; i < n; i++) {
    y[i] = yi;
  }
}

void uLong2MultiWord(uint64_T u, uint64_T y[], int32_T n)
{
  int32_T i;
  y[0] = u;
  for (i = 1; i < n; i++) {
    y[i] = 0ULL;
  }
}

void MultiWordUnsignedWrap(const uint64_T u1[], int32_T n1, uint32_T n2,
  uint64_T y[])
{
  int32_T i;
  int32_T n1m1;
  n1m1 = n1 - 1;
  for (i = 0; i < n1m1; i++) {
    y[i] = u1[i];
  }

  y[n1 - 1] = ((1ULL << (64U - n2)) - 1ULL) & u1[n1 - 1];
}

void MultiWordIor(const uint64_T u1[], const uint64_T u2[], uint64_T y[],
                  int32_T n)
{
  int32_T i;
  for (i = 0; i < n; i++) {
    y[i] = u1[i] | u2[i];
  }
}

void uMultiWordShl(const uint64_T u1[], int32_T n1, uint32_T n2, uint64_T y[],
                   int32_T n)
{
  uint64_T u1i;
  uint64_T yi;
  uint64_T ys;
  int32_T i;
  int32_T nb;
  int32_T nc;
  uint32_T nl;
  nb = (int32_T)(n2 >> 6);
  ys = (u1[n1 - 1] & 9223372036854775808ULL) != 0ULL ? MAX_uint64_T : 0ULL;
  nc = nb > n ? n : nb;
  u1i = 0ULL;
  for (i = 0; i < nc; i++) {
    y[i] = 0ULL;
  }

  if (nb < n) {
    nl = n2 - ((uint32_T)nb << 6);
    nb += n1;
    if (nb > n) {
      nb = n;
    }

    nb -= i;
    if (nl > 0U) {
      for (nc = 0; nc < nb; nc++) {
        yi = u1i >> (64U - nl);
        u1i = u1[nc];
        y[i] = u1i << nl | yi;
        i++;
      }

      if (i < n) {
        y[i] = u1i >> (64U - nl) | ys << nl;
        i++;
      }
    } else {
      for (nc = 0; nc < nb; nc++) {
        y[i] = u1[nc];
        i++;
      }
    }
  }

  while (i < n) {
    y[i] = ys;
    i++;
  }
}

/* Model output function */
void gm_homework1_ref_output(RT_MODEL_gm_homework1_ref_T *const
  gm_homework1_ref_M)
{
  B_gm_homework1_ref_T *gm_homework1_ref_B = gm_homework1_ref_M->blockIO;
  DW_gm_homework1_ref_T *gm_homework1_ref_DW = gm_homework1_ref_M->dwork;
  ExtY_gm_homework1_ref_T *gm_homework1_ref_Y = (ExtY_gm_homework1_ref_T *)
    gm_homework1_ref_M->outputs;
  int128m_T tmp;
  int128m_T tmp_0;
  int128m_T tmp_1;
  int128m_T tmp_2;
  int128m_T tmp_3;
  int128m_T tmp_4;
  int128m_T tmp_5;
  uint128m_T tmp_6;
  uint128m_T tmp_7;
  uint128m_T tmp_8;
  uint128m_T tmp_9;
  uint128m_T tmp_a;

  /* FromWorkspace: '<Root>/From Workspace' incorporates:
   *  Outport: '<Root>/dpi_1'
   */
  {
    real_T t = (((gm_homework1_ref_M->Timing.clockTick0+
                  gm_homework1_ref_M->Timing.clockTickH0* 4294967296.0)) *
                5.0E-8);
    real_T *pTimeValues = (real_T *)
      gm_homework1_ref_DW->FromWorkspace_PWORK.TimePtr;
    int64_T *pDataValues = (int64_T *)
      gm_homework1_ref_DW->FromWorkspace_PWORK.DataPtr;
    if (t < pTimeValues[0]) {
      gm_homework1_ref_Y->dpi_1 = (0LL);
    } else if (t == pTimeValues[49]) {
      gm_homework1_ref_Y->dpi_1 = pDataValues[49];
    } else if (t > pTimeValues[49]) {
      gm_homework1_ref_Y->dpi_1 = (0LL);
    } else {
      int_T currTimeIndex = gm_homework1_ref_DW->FromWorkspace_IWORK.PrevIndex;
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      gm_homework1_ref_Y->dpi_1 = pDataValues[currTimeIndex];
      gm_homework1_ref_DW->FromWorkspace_IWORK.PrevIndex = currTimeIndex;
    }
  }

  /* FromWorkspace: '<Root>/From Workspace1' incorporates:
   *  Outport: '<Root>/dpi_2'
   */
  {
    real_T t = (((gm_homework1_ref_M->Timing.clockTick0+
                  gm_homework1_ref_M->Timing.clockTickH0* 4294967296.0)) *
                5.0E-8);
    real_T *pTimeValues = (real_T *)
      gm_homework1_ref_DW->FromWorkspace1_PWORK.TimePtr;
    int64_T *pDataValues = (int64_T *)
      gm_homework1_ref_DW->FromWorkspace1_PWORK.DataPtr;
    if (t < pTimeValues[0]) {
      gm_homework1_ref_Y->dpi_2 = (0LL);
    } else if (t == pTimeValues[49]) {
      gm_homework1_ref_Y->dpi_2 = pDataValues[49];
    } else if (t > pTimeValues[49]) {
      gm_homework1_ref_Y->dpi_2 = (0LL);
    } else {
      int_T currTimeIndex = gm_homework1_ref_DW->FromWorkspace1_IWORK.PrevIndex;
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      gm_homework1_ref_Y->dpi_2 = pDataValues[currTimeIndex];
      gm_homework1_ref_DW->FromWorkspace1_IWORK.PrevIndex = currTimeIndex;
    }
  }

  /* FromWorkspace: '<Root>/From Workspace2' incorporates:
   *  Outport: '<Root>/dpi_3'
   */
  {
    real_T t = (((gm_homework1_ref_M->Timing.clockTick0+
                  gm_homework1_ref_M->Timing.clockTickH0* 4294967296.0)) *
                5.0E-8);
    real_T *pTimeValues = (real_T *)
      gm_homework1_ref_DW->FromWorkspace2_PWORK.TimePtr;
    uint8_T *pDataValues = (uint8_T *)
      gm_homework1_ref_DW->FromWorkspace2_PWORK.DataPtr;
    if (t < pTimeValues[0]) {
      gm_homework1_ref_Y->dpi_3 = 0U;
    } else if (t == pTimeValues[49]) {
      gm_homework1_ref_Y->dpi_3 = pDataValues[49];
    } else if (t > pTimeValues[49]) {
      gm_homework1_ref_Y->dpi_3 = 0U;
    } else {
      int_T currTimeIndex = gm_homework1_ref_DW->FromWorkspace2_IWORK.PrevIndex;
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      gm_homework1_ref_Y->dpi_3 = pDataValues[currTimeIndex];
      gm_homework1_ref_DW->FromWorkspace2_IWORK.PrevIndex = currTimeIndex;
    }
  }

  /* Outport: '<Root>/dpi_4' incorporates:
   *  Delay: '<S1>/Delay3'
   */
  gm_homework1_ref_Y->dpi_4 = gm_homework1_ref_DW->Delay3_DSTATE;

  /* Delay: '<S1>/Delay2' */
  gm_homework1_ref_B->Delay2 = gm_homework1_ref_DW->Delay2_DSTATE;

  /* Outputs for Atomic SubSystem: '<S1>/Bit Slice1' */
  /* DataTypeConversion: '<S4>/Reinterp_As_Unsigned_Integer' incorporates:
   *  Delay: '<S1>/Delay2'
   */
  gm_homework1_ref_B->Reinterp_As_Unsigned_Integer_l =
    gm_homework1_ref_B->Delay2;

  /* DataTypeConversion: '<S9>/Extract Desired Bits' incorporates:
   *  DataTypeConversion: '<S4>/Reinterp_As_Unsigned_Integer'
   */
  gm_homework1_ref_B->ExtractDesiredBits_f = (uint8_T)((uint32_T)
    gm_homework1_ref_B->Reinterp_As_Unsigned_Integer_l >> 2);

  /* DataTypeConversion: '<S9>/Modify Scaling Only' incorporates:
   *  DataTypeConversion: '<S9>/Extract Desired Bits'
   */
  gm_homework1_ref_B->ModifyScalingOnly_c =
    gm_homework1_ref_B->ExtractDesiredBits_f;

  /* End of Outputs for SubSystem: '<S1>/Bit Slice1' */

  /* Delay: '<S1>/Delay' */
  gm_homework1_ref_B->Delay = gm_homework1_ref_DW->Delay_DSTATE;

  /* S-Function (sfix_bitop): '<S1>/Bitwise Operator2' incorporates:
   *  Delay: '<S1>/Delay'
   */
  gm_homework1_ref_B->BitwiseOperator2 = ~gm_homework1_ref_B->Delay;

  /* MultiPortSwitch: '<S1>/Multiport Switch' incorporates:
   *  DataTypeConversion: '<S9>/Modify Scaling Only'
   */
  if (gm_homework1_ref_B->ModifyScalingOnly_c == 0) {
    /* MultiPortSwitch: '<S1>/Multiport Switch' incorporates:
     *  Delay: '<S1>/Delay'
     */
    gm_homework1_ref_B->MultiportSwitch = gm_homework1_ref_B->Delay;
  } else {
    /* MultiPortSwitch: '<S1>/Multiport Switch' incorporates:
     *  S-Function (sfix_bitop): '<S1>/Bitwise Operator2'
     */
    gm_homework1_ref_B->MultiportSwitch = gm_homework1_ref_B->BitwiseOperator2;
  }

  /* End of MultiPortSwitch: '<S1>/Multiport Switch' */

  /* Delay: '<S1>/Delay1' */
  gm_homework1_ref_B->Delay1 = gm_homework1_ref_DW->Delay1_DSTATE;

  /* Sum: '<S1>/Add' incorporates:
   *  DataTypeConversion: '<S9>/Modify Scaling Only'
   *  Delay: '<S1>/Delay1'
   *  MultiPortSwitch: '<S1>/Multiport Switch'
   */
  sLong2MultiWord(gm_homework1_ref_B->MultiportSwitch, &tmp_4.chunks[0U], 2);
  MultiWordSignedWrap(&tmp_4.chunks[0U], 2, 63U, &tmp_3.chunks[0U]);
  sLong2MultiWord(gm_homework1_ref_B->Delay1, &tmp_5.chunks[0U], 2);
  MultiWordSignedWrap(&tmp_5.chunks[0U], 2, 63U, &tmp_4.chunks[0U]);
  MultiWordAdd(&tmp_3.chunks[0U], &tmp_4.chunks[0U], &tmp_2.chunks[0U], 2);
  MultiWordSignedWrap(&tmp_2.chunks[0U], 2, 63U, &tmp_1.chunks[0U]);
  uLong2MultiWord(gm_homework1_ref_B->ModifyScalingOnly_c, &tmp_3.chunks[0U], 2);
  MultiWordSignedWrap(&tmp_3.chunks[0U], 2, 63U, &tmp_2.chunks[0U]);
  MultiWordAdd(&tmp_1.chunks[0U], &tmp_2.chunks[0U], &tmp_0.chunks[0U], 2);
  MultiWordSignedWrap(&tmp_0.chunks[0U], 2, 63U, &tmp.chunks[0U]);

  /* Sum: '<S1>/Add' */
  gm_homework1_ref_B->Add = MultiWord2sLong(&tmp.chunks[0U]);

  /* Outputs for Atomic SubSystem: '<S1>/Bit Slice2' */
  /* DataTypeConversion: '<S5>/Reinterp_As_Unsigned_Integer' incorporates:
   *  Sum: '<S1>/Add'
   */
  gm_homework1_ref_B->Reinterp_As_Unsigned_Integer = (uint64_T)
    gm_homework1_ref_B->Add;

  /* DataTypeConversion: '<S10>/Extract Desired Bits' incorporates:
   *  DataTypeConversion: '<S5>/Reinterp_As_Unsigned_Integer'
   */
  gm_homework1_ref_B->ExtractDesiredBits_e = (uint8_T)((uint8_T)
    (gm_homework1_ref_B->Reinterp_As_Unsigned_Integer >> 62) & 1);

  /* DataTypeConversion: '<S10>/Modify Scaling Only' incorporates:
   *  DataTypeConversion: '<S10>/Extract Desired Bits'
   */
  gm_homework1_ref_B->ModifyScalingOnly_p =
    gm_homework1_ref_B->ExtractDesiredBits_e;

  /* End of Outputs for SubSystem: '<S1>/Bit Slice2' */

  /* Outputs for Atomic SubSystem: '<S1>/Bit Concat' */
  /* Outputs for Atomic SubSystem: '<S2>/Bit Concat2' */
  /* MATLAB Function: '<S6>/bit_concat' incorporates:
   *  Constant: '<S1>/Constant'
   *  DataTypeConversion: '<S10>/Modify Scaling Only'
   */
  /* MATLAB Function 'Bit Concat2/bit_concat': '<S7>:1' */
  /* '<S7>:1:4' */
  uLong2MultiWord((0ULL), &tmp_a.chunks[0U], 2);
  MultiWordUnsignedWrap(&tmp_a.chunks[0U], 2, 63U, &tmp_9.chunks[0U]);
  uMultiWordShl(&tmp_9.chunks[0U], 2, 1U, &tmp_8.chunks[0U], 2);
  MultiWordUnsignedWrap(&tmp_8.chunks[0U], 2, 63U, &tmp_7.chunks[0U]);
  uLong2MultiWord(gm_homework1_ref_B->ModifyScalingOnly_p, &tmp_9.chunks[0U], 2);
  MultiWordUnsignedWrap(&tmp_9.chunks[0U], 2, 63U, &tmp_8.chunks[0U]);
  MultiWordIor(&tmp_7.chunks[0U], &tmp_8.chunks[0U], &tmp_6.chunks[0U], 2);
  MultiWordUnsignedWrap(&tmp_6.chunks[0U], 2, 63U, &tmp_7.chunks[0U]);
  gm_homework1_ref_B->y = tmp_7;

  /* End of Outputs for SubSystem: '<S2>/Bit Concat2' */
  /* End of Outputs for SubSystem: '<S1>/Bit Concat' */

  /* Outputs for Atomic SubSystem: '<S1>/Bit Slice' */
  /* DataTypeConversion: '<S3>/Reinterp_As_Unsigned_Integer' incorporates:
   *  Delay: '<S1>/Delay2'
   */
  gm_homework1_ref_B->Reinterp_As_Unsigned_Integer_c =
    gm_homework1_ref_B->Delay2;

  /* DataTypeConversion: '<S8>/Extract Desired Bits' incorporates:
   *  DataTypeConversion: '<S3>/Reinterp_As_Unsigned_Integer'
   */
  gm_homework1_ref_B->ExtractDesiredBits = (uint8_T)
    (gm_homework1_ref_B->Reinterp_As_Unsigned_Integer_c & 3);

  /* DataTypeConversion: '<S8>/Modify Scaling Only' incorporates:
   *  DataTypeConversion: '<S8>/Extract Desired Bits'
   */
  gm_homework1_ref_B->ModifyScalingOnly = gm_homework1_ref_B->ExtractDesiredBits;

  /* End of Outputs for SubSystem: '<S1>/Bit Slice' */

  /* S-Function (sfix_bitop): '<S1>/Bitwise Operator' incorporates:
   *  Delay: '<S1>/Delay1'
   *  MultiPortSwitch: '<S1>/Multiport Switch'
   */
  gm_homework1_ref_B->BitwiseOperator = gm_homework1_ref_B->MultiportSwitch &
    gm_homework1_ref_B->Delay1;

  /* S-Function (sfix_bitop): '<S1>/Bitwise Operator1' incorporates:
   *  Delay: '<S1>/Delay1'
   *  MultiPortSwitch: '<S1>/Multiport Switch'
   */
  gm_homework1_ref_B->BitwiseOperator1 = gm_homework1_ref_B->MultiportSwitch |
    gm_homework1_ref_B->Delay1;

  /* MultiPortSwitch: '<S1>/Multiport Switch1' incorporates:
   *  DataTypeConversion: '<S8>/Modify Scaling Only'
   */
  switch (gm_homework1_ref_B->ModifyScalingOnly) {
   case 0:
    /* MultiPortSwitch: '<S1>/Multiport Switch1' incorporates:
     *  S-Function (sfix_bitop): '<S1>/Bitwise Operator'
     */
    gm_homework1_ref_B->MultiportSwitch1 = gm_homework1_ref_B->BitwiseOperator;
    break;

   case 1:
    /* MultiPortSwitch: '<S1>/Multiport Switch1' incorporates:
     *  S-Function (sfix_bitop): '<S1>/Bitwise Operator1'
     */
    gm_homework1_ref_B->MultiportSwitch1 = gm_homework1_ref_B->BitwiseOperator1;
    break;

   case 2:
    /* MultiPortSwitch: '<S1>/Multiport Switch1' incorporates:
     *  Sum: '<S1>/Add'
     */
    gm_homework1_ref_B->MultiportSwitch1 = gm_homework1_ref_B->Add;
    break;

   default:
    tmp_6 = gm_homework1_ref_B->y;

    /* MultiPortSwitch: '<S1>/Multiport Switch1' */
    gm_homework1_ref_B->MultiportSwitch1 = MultiWord2sLong(&tmp_6.chunks[0U]);
    break;
  }

  /* End of MultiPortSwitch: '<S1>/Multiport Switch1' */
}

/* Model update function */
void gm_homework1_ref_update(RT_MODEL_gm_homework1_ref_T *const
  gm_homework1_ref_M)
{
  B_gm_homework1_ref_T *gm_homework1_ref_B = gm_homework1_ref_M->blockIO;
  DW_gm_homework1_ref_T *gm_homework1_ref_DW = gm_homework1_ref_M->dwork;
  ExtY_gm_homework1_ref_T *gm_homework1_ref_Y = (ExtY_gm_homework1_ref_T *)
    gm_homework1_ref_M->outputs;

  /* Update for Delay: '<S1>/Delay3' incorporates:
   *  MultiPortSwitch: '<S1>/Multiport Switch1'
   */
  gm_homework1_ref_DW->Delay3_DSTATE = gm_homework1_ref_B->MultiportSwitch1;

  /* Update for Delay: '<S1>/Delay2' incorporates:
   *  FromWorkspace: '<Root>/From Workspace2'
   *  Outport: '<Root>/dpi_3'
   */
  gm_homework1_ref_DW->Delay2_DSTATE = gm_homework1_ref_Y->dpi_3;

  /* Update for Delay: '<S1>/Delay' incorporates:
   *  FromWorkspace: '<Root>/From Workspace1'
   *  Outport: '<Root>/dpi_2'
   */
  gm_homework1_ref_DW->Delay_DSTATE = gm_homework1_ref_Y->dpi_2;

  /* Update for Delay: '<S1>/Delay1' incorporates:
   *  FromWorkspace: '<Root>/From Workspace'
   *  Outport: '<Root>/dpi_1'
   */
  gm_homework1_ref_DW->Delay1_DSTATE = gm_homework1_ref_Y->dpi_1;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 5.0E-8, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  gm_homework1_ref_M->Timing.clockTick0++;
  if (!gm_homework1_ref_M->Timing.clockTick0) {
    gm_homework1_ref_M->Timing.clockTickH0++;
  }
}

/* Model initialize function */
void gm_homework1_ref_initialize(RT_MODEL_gm_homework1_ref_T *const
  gm_homework1_ref_M)
{
  DW_gm_homework1_ref_T *gm_homework1_ref_DW = gm_homework1_ref_M->dwork;

  /* Start for FromWorkspace: '<Root>/From Workspace' incorporates:
   *  Outport: '<Root>/dpi_1'
   */
  {
    static real_T pTimeValues0[] = { 0.0, 5.0E-8, 1.0E-7, 1.5E-7, 2.0E-7, 2.5E-7,
      3.0E-7, 3.5E-7, 4.0E-7, 4.5E-7, 5.0E-7, 5.5E-7, 6.0E-7,
      6.4999999999999992E-7, 7.0E-7, 7.5E-7, 8.0E-7, 8.4999999999999991E-7,
      9.0E-7, 9.5E-7, 1.0E-6, 1.05E-6, 1.1E-6, 1.15E-6, 1.2E-6,
      1.2499999999999999E-6, 1.2999999999999998E-6, 1.35E-6, 1.4E-6,
      1.4499999999999999E-6, 1.5E-6, 1.55E-6, 1.6E-6, 1.6499999999999999E-6,
      1.6999999999999998E-6, 1.75E-6, 1.8E-6, 1.8499999999999999E-6, 1.9E-6,
      1.95E-6, 2.0E-6, 2.05E-6, 2.1E-6, 2.1499999999999997E-6, 2.2E-6, 2.25E-6,
      2.3E-6, 2.35E-6, 2.4E-6, 2.45E-6 } ;

    static int64_T pDataValues0[] = { (72LL), (18LL), (33LL), (18LL), (32LL),
      (40LL), (55LL), (4LL), (55LL), (27LL), (24LL), (24LL), (15LL), (96LL),
      (94LL), (82LL), (73LL), (17LL), (36LL), (19LL), (0LL), (31LL), (70LL),
      (63LL), (54LL), (44LL), (29LL), (50LL), (76LL), (77LL), (58LL), (75LL),
      (65LL), (12LL), (50LL), (35LL), (9LL), (14LL), (20LL), (67LL), (43LL),
      (70LL), (25LL), (0LL), (53LL), (28LL), (95LL), (91LL), (39LL), (2LL) };

    gm_homework1_ref_DW->FromWorkspace_PWORK.TimePtr = (void *) pTimeValues0;
    gm_homework1_ref_DW->FromWorkspace_PWORK.DataPtr = (void *) pDataValues0;
    gm_homework1_ref_DW->FromWorkspace_IWORK.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<Root>/From Workspace1' incorporates:
   *  Outport: '<Root>/dpi_2'
   */
  {
    static real_T pTimeValues0[] = { 0.0, 5.0E-8, 1.0E-7, 1.5E-7, 2.0E-7, 2.5E-7,
      3.0E-7, 3.5E-7, 4.0E-7, 4.5E-7, 5.0E-7, 5.5E-7, 6.0E-7,
      6.4999999999999992E-7, 7.0E-7, 7.5E-7, 8.0E-7, 8.4999999999999991E-7,
      9.0E-7, 9.5E-7, 1.0E-6, 1.05E-6, 1.1E-6, 1.15E-6, 1.2E-6,
      1.2499999999999999E-6, 1.2999999999999998E-6, 1.35E-6, 1.4E-6,
      1.4499999999999999E-6, 1.5E-6, 1.55E-6, 1.6E-6, 1.6499999999999999E-6,
      1.6999999999999998E-6, 1.75E-6, 1.8E-6, 1.8499999999999999E-6, 1.9E-6,
      1.95E-6, 2.0E-6, 2.05E-6, 2.1E-6, 2.1499999999999997E-6, 2.2E-6, 2.25E-6,
      2.3E-6, 2.35E-6, 2.4E-6, 2.45E-6 } ;

    static int64_T pDataValues0[] = { (67LL), (84LL), (98LL), (5LL), (45LL),
      (58LL), (69LL), (72LL), (65LL), (73LL), (37LL), (58LL), (11LL), (5LL),
      (98LL), (28LL), (60LL), (97LL), (18LL), (19LL), (34LL), (94LL), (39LL),
      (27LL), (15LL), (40LL), (37LL), (13LL), (43LL), (9LL), (62LL), (1LL),
      (57LL), (79LL), (23LL), (45LL), (57LL), (6LL), (50LL), (64LL), (22LL),
      (84LL), (98LL), (85LL), (51LL), (28LL), (75LL), (23LL), (96LL), (62LL) };

    gm_homework1_ref_DW->FromWorkspace1_PWORK.TimePtr = (void *) pTimeValues0;
    gm_homework1_ref_DW->FromWorkspace1_PWORK.DataPtr = (void *) pDataValues0;
    gm_homework1_ref_DW->FromWorkspace1_IWORK.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<Root>/From Workspace2' incorporates:
   *  Outport: '<Root>/dpi_3'
   */
  {
    static real_T pTimeValues0[] = { 0.0, 5.0E-8, 1.0E-7, 1.5E-7, 2.0E-7, 2.5E-7,
      3.0E-7, 3.5E-7, 4.0E-7, 4.5E-7, 5.0E-7, 5.5E-7, 6.0E-7,
      6.4999999999999992E-7, 7.0E-7, 7.5E-7, 8.0E-7, 8.4999999999999991E-7,
      9.0E-7, 9.5E-7, 1.0E-6, 1.05E-6, 1.1E-6, 1.15E-6, 1.2E-6,
      1.2499999999999999E-6, 1.2999999999999998E-6, 1.35E-6, 1.4E-6,
      1.4499999999999999E-6, 1.5E-6, 1.55E-6, 1.6E-6, 1.6499999999999999E-6,
      1.6999999999999998E-6, 1.75E-6, 1.8E-6, 1.8499999999999999E-6, 1.9E-6,
      1.95E-6, 2.0E-6, 2.05E-6, 2.1E-6, 2.1499999999999997E-6, 2.2E-6, 2.25E-6,
      2.3E-6, 2.35E-6, 2.4E-6, 2.45E-6 } ;

    static uint8_T pDataValues0[] = { 5U, 1U, 0U, 2U, 7U, 7U, 6U, 6U, 2U, 5U, 7U,
      3U, 7U, 0U, 2U, 4U, 0U, 6U, 5U, 4U, 7U, 7U, 7U, 2U, 4U, 6U, 0U, 0U, 2U, 4U,
      7U, 6U, 2U, 2U, 7U, 7U, 5U, 2U, 0U, 7U, 5U, 7U, 0U, 5U, 2U, 7U, 1U, 3U, 3U,
      7U } ;

    gm_homework1_ref_DW->FromWorkspace2_PWORK.TimePtr = (void *) pTimeValues0;
    gm_homework1_ref_DW->FromWorkspace2_PWORK.DataPtr = (void *) pDataValues0;
    gm_homework1_ref_DW->FromWorkspace2_IWORK.PrevIndex = 0;
  }

  /* InitializeConditions for Delay: '<S1>/Delay3' */
  gm_homework1_ref_DW->Delay3_DSTATE = (0LL);

  /* InitializeConditions for Delay: '<S1>/Delay2' */
  gm_homework1_ref_DW->Delay2_DSTATE = ((uint8_T)0U);

  /* InitializeConditions for Delay: '<S1>/Delay' */
  gm_homework1_ref_DW->Delay_DSTATE = (0LL);

  /* InitializeConditions for Delay: '<S1>/Delay1' */
  gm_homework1_ref_DW->Delay1_DSTATE = (0LL);
}

/* Model terminate function */
void gm_homework1_ref_terminate(RT_MODEL_gm_homework1_ref_T * gm_homework1_ref_M)
{
  /* model code */
  rt_FREE(gm_homework1_ref_M->blockIO);
  rt_FREE(gm_homework1_ref_M->outputs);
  rt_FREE(gm_homework1_ref_M->dwork);
  rt_FREE(gm_homework1_ref_M);
}

/* Model data allocation function */
RT_MODEL_gm_homework1_ref_T *gm_homework1_ref(void)
{
  RT_MODEL_gm_homework1_ref_T *gm_homework1_ref_M;
  gm_homework1_ref_M = (RT_MODEL_gm_homework1_ref_T *) malloc(sizeof
    (RT_MODEL_gm_homework1_ref_T));
  if (gm_homework1_ref_M == NULL) {
    return NULL;
  }

  (void) memset((char *)gm_homework1_ref_M, 0,
                sizeof(RT_MODEL_gm_homework1_ref_T));

  /* block I/O */
  {
    B_gm_homework1_ref_T *b = (B_gm_homework1_ref_T *) malloc(sizeof
      (B_gm_homework1_ref_T));
    rt_VALIDATE_MEMORY(gm_homework1_ref_M,b);
    gm_homework1_ref_M->blockIO = (b);
  }

  /* states (dwork) */
  {
    DW_gm_homework1_ref_T *dwork = (DW_gm_homework1_ref_T *) malloc(sizeof
      (DW_gm_homework1_ref_T));
    rt_VALIDATE_MEMORY(gm_homework1_ref_M,dwork);
    gm_homework1_ref_M->dwork = (dwork);
  }

  /* external outputs */
  {
    ExtY_gm_homework1_ref_T *gm_homework1_ref_Y = (ExtY_gm_homework1_ref_T *)
      malloc(sizeof(ExtY_gm_homework1_ref_T));
    rt_VALIDATE_MEMORY(gm_homework1_ref_M,gm_homework1_ref_Y);
    gm_homework1_ref_M->outputs = (gm_homework1_ref_Y);
  }

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  gm_homework1_ref_InitializeDataMapInfo(gm_homework1_ref_M);

  {
    B_gm_homework1_ref_T *gm_homework1_ref_B = gm_homework1_ref_M->blockIO;
    DW_gm_homework1_ref_T *gm_homework1_ref_DW = gm_homework1_ref_M->dwork;
    ExtY_gm_homework1_ref_T *gm_homework1_ref_Y = (ExtY_gm_homework1_ref_T *)
      gm_homework1_ref_M->outputs;

    /* block I/O */
    (void) memset(((void *) gm_homework1_ref_B), 0,
                  sizeof(B_gm_homework1_ref_T));

    {
      gm_homework1_ref_B->Reinterp_As_Unsigned_Integer = (0ULL);
      gm_homework1_ref_B->Delay = (0LL);
      gm_homework1_ref_B->BitwiseOperator2 = (0LL);
      gm_homework1_ref_B->MultiportSwitch = (0LL);
      gm_homework1_ref_B->Delay1 = (0LL);
      gm_homework1_ref_B->Add = (0LL);
      gm_homework1_ref_B->BitwiseOperator = (0LL);
      gm_homework1_ref_B->BitwiseOperator1 = (0LL);
      gm_homework1_ref_B->MultiportSwitch1 = (0LL);
    }

    /* states (dwork) */
    (void) memset((void *)gm_homework1_ref_DW, 0,
                  sizeof(DW_gm_homework1_ref_T));

    /* external outputs */
    (void) memset((void *)gm_homework1_ref_Y, 0,
                  sizeof(ExtY_gm_homework1_ref_T));
    gm_homework1_ref_Y->dpi_1 = (0LL);
    gm_homework1_ref_Y->dpi_2 = (0LL);
    gm_homework1_ref_Y->dpi_4 = (0LL);
  }

  return gm_homework1_ref_M;
}

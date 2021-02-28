/*
 * gm_homework1_ref.h
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

#ifndef RTW_HEADER_gm_homework1_ref_h_
#define RTW_HEADER_gm_homework1_ref_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef gm_homework1_ref_COMMON_INCLUDES_
#define gm_homework1_ref_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* gm_homework1_ref_COMMON_INCLUDES_ */

#include "gm_homework1_ref_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#define gm_homework1_ref_M_TYPE        RT_MODEL_gm_homework1_ref_T

/* Block signals (default storage) */
typedef struct {
  uint128m_T y;                        /* '<S6>/bit_concat' */
  uint64_T Reinterp_As_Unsigned_Integer;/* '<S5>/Reinterp_As_Unsigned_Integer' */
  int64_T Delay;                       /* '<S1>/Delay' */
  int64_T BitwiseOperator2;            /* '<S1>/Bitwise Operator2' */
  int64_T MultiportSwitch;             /* '<S1>/Multiport Switch' */
  int64_T Delay1;                      /* '<S1>/Delay1' */
  int64_T Add;                         /* '<S1>/Add' */
  int64_T BitwiseOperator;             /* '<S1>/Bitwise Operator' */
  int64_T BitwiseOperator1;            /* '<S1>/Bitwise Operator1' */
  int64_T MultiportSwitch1;            /* '<S1>/Multiport Switch1' */
  uint8_T Delay2;                      /* '<S1>/Delay2' */
  uint8_T Reinterp_As_Unsigned_Integer_l;/* '<S4>/Reinterp_As_Unsigned_Integer' */
  uint8_T Reinterp_As_Unsigned_Integer_c;/* '<S3>/Reinterp_As_Unsigned_Integer' */
  uint8_T ExtractDesiredBits;          /* '<S8>/Extract Desired Bits' */
  uint8_T ModifyScalingOnly;           /* '<S8>/Modify Scaling Only' */
  uint8_T ExtractDesiredBits_e;        /* '<S10>/Extract Desired Bits' */
  uint8_T ExtractDesiredBits_f;        /* '<S9>/Extract Desired Bits' */
  uint8_T ModifyScalingOnly_p;         /* '<S10>/Modify Scaling Only' */
  uint8_T ModifyScalingOnly_c;         /* '<S9>/Modify Scaling Only' */
} B_gm_homework1_ref_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int128m_T Add_DWORK1;                /* '<S1>/Add' */
  int64_T Delay3_DSTATE;               /* '<S1>/Delay3' */
  int64_T Delay_DSTATE;                /* '<S1>/Delay' */
  int64_T Delay1_DSTATE;               /* '<S1>/Delay1' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK;               /* '<Root>/From Workspace' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace1_PWORK;              /* '<Root>/From Workspace1' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace2_PWORK;              /* '<Root>/From Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<Root>/To Workspace1' */

  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK;               /* '<Root>/From Workspace' */

  struct {
    int_T PrevIndex;
  } FromWorkspace1_IWORK;              /* '<Root>/From Workspace1' */

  struct {
    int_T PrevIndex;
  } FromWorkspace2_IWORK;              /* '<Root>/From Workspace2' */

  uint8_T Delay2_DSTATE;               /* '<S1>/Delay2' */
} DW_gm_homework1_ref_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int64_T dpi_1;                       /* '<Root>/dpi_1' */
  int64_T dpi_2;                       /* '<Root>/dpi_2' */
  uint8_T dpi_3;                       /* '<Root>/dpi_3' */
  int64_T dpi_4;                       /* '<Root>/dpi_4' */
} ExtY_gm_homework1_ref_T;

/* Real-time Model Data Structure */
struct tag_RTM_gm_homework1_ref_T {
  const char_T *errorStatus;
  B_gm_homework1_ref_T *blockIO;
  ExtY_gm_homework1_ref_T *outputs;
  DW_gm_homework1_ref_T *dwork;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
  } Timing;
};

/* External data declarations for dependent source files */
extern const char *RT_MEMORY_ALLOCATION_ERROR;

/* Model entry point functions */
extern RT_MODEL_gm_homework1_ref_T *gm_homework1_ref(void);
extern void gm_homework1_ref_initialize(RT_MODEL_gm_homework1_ref_T *const
  gm_homework1_ref_M);
extern void gm_homework1_ref_output(RT_MODEL_gm_homework1_ref_T *const
  gm_homework1_ref_M);
extern void gm_homework1_ref_update(RT_MODEL_gm_homework1_ref_T *const
  gm_homework1_ref_M);
extern void gm_homework1_ref_terminate(RT_MODEL_gm_homework1_ref_T
  * gm_homework1_ref_M);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  gm_homework1_ref_GetCAPIStaticMap(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'gm_homework1_ref'
 * '<S1>'   : 'gm_homework1_ref/HDL_Complex_Multiplier'
 * '<S2>'   : 'gm_homework1_ref/HDL_Complex_Multiplier/Bit Concat'
 * '<S3>'   : 'gm_homework1_ref/HDL_Complex_Multiplier/Bit Slice'
 * '<S4>'   : 'gm_homework1_ref/HDL_Complex_Multiplier/Bit Slice1'
 * '<S5>'   : 'gm_homework1_ref/HDL_Complex_Multiplier/Bit Slice2'
 * '<S6>'   : 'gm_homework1_ref/HDL_Complex_Multiplier/Bit Concat/Bit Concat2'
 * '<S7>'   : 'gm_homework1_ref/HDL_Complex_Multiplier/Bit Concat/Bit Concat2/bit_concat'
 * '<S8>'   : 'gm_homework1_ref/HDL_Complex_Multiplier/Bit Slice/Extract Bits'
 * '<S9>'   : 'gm_homework1_ref/HDL_Complex_Multiplier/Bit Slice1/Extract Bits'
 * '<S10>'  : 'gm_homework1_ref/HDL_Complex_Multiplier/Bit Slice2/Extract Bits'
 */
#endif                                 /* RTW_HEADER_gm_homework1_ref_h_ */

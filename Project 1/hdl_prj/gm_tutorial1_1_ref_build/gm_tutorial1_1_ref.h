/*
 * gm_tutorial1_1_ref.h
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

#ifndef RTW_HEADER_gm_tutorial1_1_ref_h_
#define RTW_HEADER_gm_tutorial1_1_ref_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef gm_tutorial1_1_ref_COMMON_INCLUDES_
#define gm_tutorial1_1_ref_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* gm_tutorial1_1_ref_COMMON_INCLUDES_ */

#include "gm_tutorial1_1_ref_types.h"

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

#define gm_tutorial1_1_ref_M_TYPE      RT_MODEL_gm_tutorial1_1_ref_T

/* Block signals (default storage) */
typedef struct {
  cint32_T RealImagtoComplex;          /* '<S1>/Real-Imag to Complex' */
  int32_T Add;                         /* '<S1>/Add' */
  int32_T Add1;                        /* '<S1>/Add1' */
  int32_T Delay8;                      /* '<S1>/Delay8' */
  int32_T Delay9;                      /* '<S1>/Delay9' */
  cint32_T Delay2;                     /* '<S2>/Delay2' */
  cint32_T ComplexMultiply;            /* '<S2>/ComplexMultiply' */
  int32_T PipelineRegister1;           /* '<S1>/PipelineRegister1' */
  int32_T PipelineRegister;            /* '<S1>/PipelineRegister' */
  int32_T PipelineRegister2;           /* '<S1>/PipelineRegister2' */
  int32_T PipelineRegister3;           /* '<S1>/PipelineRegister3' */
  int32_T Product;                     /* '<S1>/Product' */
  int32_T Product1;                    /* '<S1>/Product1' */
  int32_T Product2;                    /* '<S1>/Product2' */
  int32_T Product3;                    /* '<S1>/Product3' */
  cint16_T Delay;                      /* '<S1>/Delay' */
  cint16_T Delay1;                     /* '<S1>/Delay1' */
  cint16_T Delay_e;                    /* '<S2>/Delay' */
  cint16_T Delay1_e;                   /* '<S2>/Delay1' */
  int16_T ComplextoRealImag_o1;        /* '<S1>/Complex to Real-Imag' */
  int16_T ComplextoRealImag_o2;        /* '<S1>/Complex to Real-Imag' */
  int16_T ComplextoRealImag1_o1;       /* '<S1>/Complex to Real-Imag1' */
  int16_T ComplextoRealImag1_o2;       /* '<S1>/Complex to Real-Imag1' */
  int16_T HwModeRegister;              /* '<S1>/HwModeRegister' */
  int16_T HwModeRegister1;             /* '<S1>/HwModeRegister1' */
  int16_T HwModeRegister2;             /* '<S1>/HwModeRegister2' */
  int16_T HwModeRegister3;             /* '<S1>/HwModeRegister3' */
  int16_T HwModeRegister4;             /* '<S1>/HwModeRegister4' */
  int16_T HwModeRegister5;             /* '<S1>/HwModeRegister5' */
  int16_T HwModeRegister6;             /* '<S1>/HwModeRegister6' */
  int16_T HwModeRegister7;             /* '<S1>/HwModeRegister7' */
} B_gm_tutorial1_1_ref_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
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
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<Root>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<Root>/To Workspace1' */

  cint32_T Delay5_DSTATE;              /* '<S1>/Delay5' */
  int32_T Delay8_DSTATE;               /* '<S1>/Delay8' */
  int32_T Delay9_DSTATE;               /* '<S1>/Delay9' */
  cint32_T Delay2_DSTATE[3];           /* '<S2>/Delay2' */
  int32_T PipelineRegister1_DSTATE;    /* '<S1>/PipelineRegister1' */
  int32_T PipelineRegister_DSTATE;     /* '<S1>/PipelineRegister' */
  int32_T PipelineRegister2_DSTATE;    /* '<S1>/PipelineRegister2' */
  int32_T PipelineRegister3_DSTATE;    /* '<S1>/PipelineRegister3' */
  int32_T Add_DWORK1;                  /* '<S1>/Add' */
  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK;               /* '<Root>/From Workspace' */

  struct {
    int_T PrevIndex;
  } FromWorkspace1_IWORK;              /* '<Root>/From Workspace1' */

  cint16_T Delay_DSTATE;               /* '<S1>/Delay' */
  cint16_T Delay1_DSTATE;              /* '<S1>/Delay1' */
  cint16_T Delay_DSTATE_m;             /* '<S2>/Delay' */
  cint16_T Delay1_DSTATE_j;            /* '<S2>/Delay1' */
  int16_T HwModeRegister_DSTATE;       /* '<S1>/HwModeRegister' */
  int16_T HwModeRegister1_DSTATE;      /* '<S1>/HwModeRegister1' */
  int16_T HwModeRegister2_DSTATE;      /* '<S1>/HwModeRegister2' */
  int16_T HwModeRegister3_DSTATE;      /* '<S1>/HwModeRegister3' */
  int16_T HwModeRegister4_DSTATE;      /* '<S1>/HwModeRegister4' */
  int16_T HwModeRegister5_DSTATE;      /* '<S1>/HwModeRegister5' */
  int16_T HwModeRegister6_DSTATE;      /* '<S1>/HwModeRegister6' */
  int16_T HwModeRegister7_DSTATE;      /* '<S1>/HwModeRegister7' */
} DW_gm_tutorial1_1_ref_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  cint16_T dpi_1;                      /* '<Root>/dpi_1' */
  cint16_T dpi_2;                      /* '<Root>/dpi_2' */
  cint32_T dpi_3;                      /* '<Root>/dpi_3' */
} ExtY_gm_tutorial1_1_ref_T;

/* Real-time Model Data Structure */
struct tag_RTM_gm_tutorial1_1_ref_T {
  const char_T *errorStatus;
  B_gm_tutorial1_1_ref_T *blockIO;
  ExtY_gm_tutorial1_1_ref_T *outputs;
  DW_gm_tutorial1_1_ref_T *dwork;

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
extern const cint16_T gm_tutorial1_1_ref_sfix12_En8_GND_Complex;/* int16_T complex ground */
extern const char *RT_MEMORY_ALLOCATION_ERROR;

/* Model entry point functions */
extern RT_MODEL_gm_tutorial1_1_ref_T *gm_tutorial1_1_ref(void);
extern void gm_tutorial1_1_ref_initialize(RT_MODEL_gm_tutorial1_1_ref_T *const
  gm_tutorial1_1_ref_M);
extern void gm_tutorial1_1_ref_output(RT_MODEL_gm_tutorial1_1_ref_T *const
  gm_tutorial1_1_ref_M);
extern void gm_tutorial1_1_ref_update(RT_MODEL_gm_tutorial1_1_ref_T *const
  gm_tutorial1_1_ref_M);
extern void gm_tutorial1_1_ref_terminate(RT_MODEL_gm_tutorial1_1_ref_T
  * gm_tutorial1_1_ref_M);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  gm_tutorial1_1_ref_GetCAPIStaticMap(void);

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
 * '<Root>' : 'gm_tutorial1_1_ref'
 * '<S1>'   : 'gm_tutorial1_1_ref/HDL_Complex_Multiplier'
 * '<S2>'   : 'gm_tutorial1_1_ref/SL_Complex_Multiplier'
 */
#endif                                 /* RTW_HEADER_gm_tutorial1_1_ref_h_ */

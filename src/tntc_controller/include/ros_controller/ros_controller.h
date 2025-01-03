/*
 * ros_controller.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ros_controller".
 *
 * Model version              : 1.6
 * Simulink Coder version : 24.1 (R2024a) 19-Nov-2023
 * C++ source code generated on : Thu Oct 24 12:21:30 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef ros_controller_h_
#define ros_controller_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "ros_controller_types.h"
#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
struct B_ros_controller_T {
  SL_Bus_ros_controller_std_msgs_Float64 In1;/* '<S5>/In1' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_ros_controller_T {
  ros_slroscpp_internal_block_P_T obj; /* '<S3>/SinkBlock' */
  ros_slroscpp_internal_block_S_T obj_l;/* '<S4>/SourceBlock' */
  boolean_T objisempty;                /* '<S4>/SourceBlock' */
  boolean_T objisempty_i;              /* '<S3>/SinkBlock' */
};

/* Parameters (default storage) */
struct P_ros_controller_T_ {
  SL_Bus_ros_controller_std_msgs_Float64 Constant_Value;/* Computed Parameter: Constant_Value
                                                         * Referenced by: '<S1>/Constant'
                                                         */
  SL_Bus_ros_controller_std_msgs_Float64 Out1_Y0;/* Computed Parameter: Out1_Y0
                                                  * Referenced by: '<S5>/Out1'
                                                  */
  SL_Bus_ros_controller_std_msgs_Float64 Constant_Value_e;/* Computed Parameter: Constant_Value_e
                                                           * Referenced by: '<S4>/Constant'
                                                           */
};

/* Real-time Model Data Structure */
struct tag_RTM_ros_controller_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_ros_controller_T ros_controller_P;

#ifdef __cplusplus

}

#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_ros_controller_T ros_controller_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_ros_controller_T ros_controller_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void ros_controller_initialize(void);
  extern void ros_controller_step(void);
  extern void ros_controller_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_ros_controller_T *const ros_controller_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
 * '<Root>' : 'ros_controller'
 * '<S1>'   : 'ros_controller/Blank Message1'
 * '<S2>'   : 'ros_controller/MATLAB Function1'
 * '<S3>'   : 'ros_controller/Publish'
 * '<S4>'   : 'ros_controller/Subscribe'
 * '<S5>'   : 'ros_controller/Subscribe/Enabled Subsystem'
 */
#endif                                 /* ros_controller_h_ */

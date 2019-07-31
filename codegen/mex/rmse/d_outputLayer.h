/*
 * d_outputLayer.h
 *
 * Code generation for function 'd_outputLayer'
 *
 */

#ifndef D_OUTPUTLAYER_H
#define D_OUTPUTLAYER_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "rmse_types.h"

/* Function Declarations */
extern void d_outputLayer(const emlrtStack *sp, const emxArray_real_T *d, const
  emxArray_real_T *H, emxArray_real_T *W, real_T q, emxArray_real_T *dH,
  emxArray_real_T *dW);

#endif

/* End of code generation (d_outputLayer.h) */

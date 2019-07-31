/*
 * d_inputLayer.h
 *
 * Code generation for function 'd_inputLayer'
 *
 */

#ifndef D_INPUTLAYER_H
#define D_INPUTLAYER_H

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
extern void d_inputLayer(const emlrtStack *sp, emxArray_real_T *dF, const
  emxArray_real_T *X, real_T m, real_T p, emxArray_real_T *dW, emxArray_real_T
  *dC);

#endif

/* End of code generation (d_inputLayer.h) */

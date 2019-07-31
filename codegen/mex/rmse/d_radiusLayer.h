/*
 * d_radiusLayer.h
 *
 * Code generation for function 'd_radiusLayer'
 *
 */

#ifndef D_RADIUSLAYER_H
#define D_RADIUSLAYER_H

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
extern void d_radiusLayer(const emlrtStack *sp, const emxArray_real_T *dF,
  emxArray_real_T *V, const emxArray_real_T *W, real_T m, real_T p,
  emxArray_real_T *dV, emxArray_real_T *dW);

#endif

/* End of code generation (d_radiusLayer.h) */

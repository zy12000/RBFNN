/*
 * feedForward.h
 *
 * Code generation for function 'feedForward'
 *
 */

#ifndef FEEDFORWARD_H
#define FEEDFORWARD_H

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
extern void feedForward(const emlrtStack *sp, real_T m, real_T p, real_T q,
  const emxArray_real_T *W1, const emxArray_real_T *W2, const emxArray_real_T
  *W3, const emxArray_real_T *C, const emxArray_real_T *X, emxArray_real_T *y,
  emxArray_real_T *V, emxArray_real_T *R2, emxArray_real_T *H);

#endif

/* End of code generation (feedForward.h) */

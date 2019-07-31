/*
 * inputLayer.h
 *
 * Code generation for function 'inputLayer'
 *
 */

#ifndef INPUTLAYER_H
#define INPUTLAYER_H

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
extern void inputLayer(const emlrtStack *sp, const emxArray_real_T *X,
  emxArray_real_T *W, emxArray_real_T *C, real_T m, real_T p, emxArray_real_T *V);

#endif

/* End of code generation (inputLayer.h) */

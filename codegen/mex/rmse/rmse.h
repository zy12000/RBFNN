/*
 * rmse.h
 *
 * Code generation for function 'rmse'
 *
 */

#ifndef RMSE_H
#define RMSE_H

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
extern void rmse(const emlrtStack *sp, const emxArray_real_T *X, const
                 emxArray_real_T *input, const emxArray_real_T *output, real_T m,
                 real_T n, real_T p, real_T q, real_T *e, emxArray_real_T *de);

#endif

/* End of code generation (rmse.h) */

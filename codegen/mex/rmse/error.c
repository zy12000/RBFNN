/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rmse.h"
#include "error.h"

/* Variable Definitions */
static emlrtRTEInfo uc_emlrtRTEI = { 19,/* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\error.m"/* pName */
};

/* Function Definitions */
void b_error(const emlrtStack *sp)
{
  static const char_T varargin_1[4] = { 's', 'q', 'r', 't' };

  emlrtErrorWithMessageIdR2018a(sp, &uc_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4, 4,
    varargin_1);
}

void error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &uc_emlrtRTEI,
    "Coder:toolbox:reshape_emptyReshapeLimit",
    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
}

/* End of code generation (error.c) */

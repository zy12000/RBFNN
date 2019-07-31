/*
 * diag.c
 *
 * Code generation for function 'diag'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rmse.h"
#include "diag.h"
#include "rmse_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "rmse_data.h"

/* Variable Definitions */
static emlrtRSInfo u_emlrtRSI = { 90,  /* lineNo */
  "diag",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pathName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 82,/* lineNo */
  5,                                   /* colNo */
  "diag",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pName */
};

/* Function Definitions */
void diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  int32_T unnamed_idx_0;
  int32_T unnamed_idx_1;
  int32_T i12;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  unnamed_idx_0 = v->size[1];
  unnamed_idx_1 = v->size[1];
  i12 = d->size[0] * d->size[1];
  d->size[0] = unnamed_idx_0;
  d->size[1] = unnamed_idx_1;
  emxEnsureCapacity_real_T1(sp, d, i12, &ob_emlrtRTEI);
  unnamed_idx_0 *= unnamed_idx_1;
  for (i12 = 0; i12 < unnamed_idx_0; i12++) {
    d->data[i12] = 0.0;
  }

  st.site = &u_emlrtRSI;
  overflow = ((!(1 > v->size[1])) && (v->size[1] > 2147483646));
  if (overflow) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (unnamed_idx_0 = 0; unnamed_idx_0 < v->size[1]; unnamed_idx_0++) {
    d->data[unnamed_idx_0 + d->size[0] * unnamed_idx_0] = v->data[unnamed_idx_0];
  }
}

/* End of code generation (diag.c) */

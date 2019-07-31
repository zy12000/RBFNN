/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rmse.h"
#include "power.h"
#include "rmse_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "scalexpAlloc.h"
#include "rmse_data.h"

/* Variable Definitions */
static emlrtRTEInfo ub_emlrtRTEI = { 35,/* lineNo */
  9,                                   /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

/* Function Definitions */
void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  emxArray_real_T *z;
  int32_T nx;
  emxArray_real_T *ztemp;
  uint32_T uv0[2];
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &z, 2, &i_emlrtRTEI, true);
  st.site = &eb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  for (nx = 0; nx < 2; nx++) {
    uv0[nx] = (uint32_T)a->size[nx];
  }

  emxInit_real_T(&c_st, &ztemp, 2, &ub_emlrtRTEI, true);
  nx = ztemp->size[0] * ztemp->size[1];
  ztemp->size[0] = (int32_T)uv0[0];
  ztemp->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity_real_T1(&c_st, ztemp, nx, &h_emlrtRTEI);
  nx = z->size[0] * z->size[1];
  z->size[0] = (int32_T)uv0[0];
  z->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity_real_T1(&c_st, z, nx, &i_emlrtRTEI);
  if (!dimagree(z, a)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nc_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  emxFree_real_T(&c_st, &z);
  nx = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity_real_T1(&b_st, y, nx, &j_emlrtRTEI);
  c_st.site = &hb_emlrtRSI;
  nx = ztemp->size[0] * ztemp->size[1];
  d_st.site = &ib_emlrtRSI;
  emxFree_real_T(&d_st, &ztemp);
  if ((!(1 > nx)) && (nx > 2147483646)) {
    e_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (k = 0; k < nx; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (power.c) */

/*
 * radiusLayer.c
 *
 * Code generation for function 'radiusLayer'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "rmse.h"
#include "radiusLayer.h"
#include "rmse_emxutil.h"
#include "power.h"
#include "error.h"
#include "assertValidSizeArg.h"
#include "rmse_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo bb_emlrtRSI = { 2,  /* lineNo */
  "radiusLayer",                       /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\radiusLayer.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 3,  /* lineNo */
  "radiusLayer",                       /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\radiusLayer.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 4,  /* lineNo */
  "radiusLayer",                       /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\radiusLayer.m"/* pathName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 2,/* lineNo */
  1,                                   /* colNo */
  "radiusLayer",                       /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\radiusLayer.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 3,/* lineNo */
  1,                                   /* colNo */
  "radiusLayer",                       /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\radiusLayer.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 4,/* lineNo */
  1,                                   /* colNo */
  "radiusLayer",                       /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\radiusLayer.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 1,/* lineNo */
  27,                                  /* colNo */
  "radiusLayer",                       /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\radiusLayer.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 4,/* lineNo */
  4,                                   /* colNo */
  "radiusLayer",                       /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\radiusLayer.m"/* pName */
};

/* Function Definitions */
void radiusLayer(const emlrtStack *sp, emxArray_real_T *V, const emxArray_real_T
                 *W, real_T m, real_T p, emxArray_real_T *R2)
{
  int32_T nx;
  int32_T maxdimlen;
  boolean_T out;
  int32_T loop_ub;
  int32_T i13;
  emxArray_real_T *b_W;
  emxArray_real_T *a;
  char_T TRANSA;
  char_T TRANSB;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emlrtMEXProfilingFunctionEntry(radiusLayer_complete_name, isMexOutdated);
  emlrtMEXProfilingStatement(1, isMexOutdated);
  st.site = &bb_emlrtRSI;
  nx = V->size[0] * V->size[1];
  b_st.site = &s_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  assertValidSizeArg(&c_st, m);
  c_st.site = &t_emlrtRSI;
  assertValidSizeArg(&c_st, p);
  maxdimlen = V->size[0];
  if (V->size[1] > V->size[0]) {
    maxdimlen = V->size[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if ((int32_T)m > maxdimlen) {
    b_st.site = &j_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)p > maxdimlen) {
    b_st.site = &j_emlrtRSI;
    error(&b_st);
  }

  out = ((int32_T)m >= 0);
  if (out && ((int32_T)p >= 0)) {
  } else {
    out = false;
  }

  if (!out) {
    emlrtErrorWithMessageIdR2018a(&st, &rc_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if ((int32_T)m * (int32_T)p != nx) {
    emlrtErrorWithMessageIdR2018a(&st, &qc_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  maxdimlen = V->size[0] * V->size[1];
  V->size[0] = (int32_T)m;
  V->size[1] = (int32_T)p;
  emxEnsureCapacity_real_T1(&st, V, maxdimlen, &pb_emlrtRTEI);
  nx = (int32_T)p;
  for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
    loop_ub = (int32_T)m;
    for (i13 = 0; i13 < loop_ub; i13++) {
      V->data[i13 + V->size[0] * maxdimlen] = V->data[i13 + (int32_T)m *
        maxdimlen];
    }
  }

  emlrtMEXProfilingStatement(2, isMexOutdated);
  st.site = &cb_emlrtRSI;
  nx = W->size[0];
  b_st.site = &s_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  assertValidSizeArg(&c_st, p);
  maxdimlen = W->size[0];
  if (1 > W->size[0]) {
    maxdimlen = 1;
  }

  if ((int32_T)p > muIntScalarMax_sint32(nx, maxdimlen)) {
    b_st.site = &j_emlrtRSI;
    error(&b_st);
  }

  if (!((int32_T)p >= 0)) {
    emlrtErrorWithMessageIdR2018a(&st, &rc_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if ((int32_T)p != W->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &qc_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emxInit_real_T1(&st, &b_W, 1, &sb_emlrtRTEI, true);
  maxdimlen = b_W->size[0];
  b_W->size[0] = (int32_T)p;
  emxEnsureCapacity_real_T(&st, b_W, maxdimlen, &qb_emlrtRTEI);
  nx = (int32_T)p;
  for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
    b_W->data[maxdimlen] = W->data[maxdimlen];
  }

  emxInit_real_T(&st, &a, 2, &tb_emlrtRTEI, true);
  emlrtMEXProfilingStatement(3, isMexOutdated);
  st.site = &db_emlrtRSI;
  power(&st, V, a);
  st.site = &db_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  if (!(a->size[1] == (int32_T)p)) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((int32_T)p == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &vc_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &wc_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((a->size[1] == 1) || ((int32_T)p == 1)) {
    maxdimlen = R2->size[0];
    R2->size[0] = a->size[0];
    emxEnsureCapacity_real_T(&st, R2, maxdimlen, &rb_emlrtRTEI);
    nx = a->size[0];
    for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
      R2->data[maxdimlen] = 0.0;
      loop_ub = a->size[1];
      for (i13 = 0; i13 < loop_ub; i13++) {
        R2->data[maxdimlen] += a->data[maxdimlen + a->size[0] * i13] * W->
          data[i13];
      }
    }
  } else {
    b_st.site = &w_emlrtRSI;
    if ((a->size[0] == 0) || (a->size[1] == 0) || ((int32_T)p == 0)) {
      maxdimlen = R2->size[0];
      R2->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&b_st, R2, maxdimlen, &rb_emlrtRTEI);
      nx = a->size[0];
      for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
        R2->data[maxdimlen] = 0.0;
      }
    } else {
      c_st.site = &ab_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)a->size[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)a->size[1];
      lda_t = (ptrdiff_t)a->size[0];
      ldb_t = (ptrdiff_t)a->size[1];
      ldc_t = (ptrdiff_t)a->size[0];
      maxdimlen = R2->size[0];
      R2->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&c_st, R2, maxdimlen, &hb_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &b_W->data[0], &ldb_t, &beta1, &R2->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&st, &a);
  emxFree_real_T(&st, &b_W);
  emlrtMEXProfilingFunctionExit(isMexOutdated);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (radiusLayer.c) */

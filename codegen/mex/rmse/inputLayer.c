/*
 * inputLayer.c
 *
 * Code generation for function 'inputLayer'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "rmse.h"
#include "inputLayer.h"
#include "rmse_emxutil.h"
#include "diag.h"
#include "error.h"
#include "assertValidSizeArg.h"
#include "rmse_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo o_emlrtRSI = { 2,   /* lineNo */
  "inputLayer",                        /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\inputLayer.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 3,   /* lineNo */
  "inputLayer",                        /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\inputLayer.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 4,   /* lineNo */
  "inputLayer",                        /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\inputLayer.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 5,   /* lineNo */
  "inputLayer",                        /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\inputLayer.m"/* pathName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 2,/* lineNo */
  1,                                   /* colNo */
  "inputLayer",                        /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\inputLayer.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 3,/* lineNo */
  1,                                   /* colNo */
  "inputLayer",                        /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\inputLayer.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 5,/* lineNo */
  3,                                   /* colNo */
  "inputLayer",                        /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\inputLayer.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 5,/* lineNo */
  1,                                   /* colNo */
  "inputLayer",                        /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\inputLayer.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 1,/* lineNo */
  23,                                  /* colNo */
  "inputLayer",                        /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\inputLayer.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { 2,   /* nDims */
  5,                                   /* lineNo */
  3,                                   /* colNo */
  "inputLayer",                        /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\inputLayer.m"/* pName */
};

/* Function Definitions */
void inputLayer(const emlrtStack *sp, const emxArray_real_T *X, emxArray_real_T *
                W, emxArray_real_T *C, real_T m, real_T p, emxArray_real_T *V)
{
  int32_T nx;
  int32_T maxdimlen;
  boolean_T out;
  int32_T loop_ub;
  int32_T i10;
  emxArray_real_T *b_X;
  char_T TRANSA;
  char_T TRANSB;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  int32_T b_loop_ub;
  ptrdiff_t k_t;
  int32_T b_V[2];
  int32_T i11;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  int32_T b_C[2];
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
  emlrtMEXProfilingFunctionEntry(inputLayer_complete_name, isMexOutdated);
  emlrtMEXProfilingStatement(1, isMexOutdated);
  st.site = &o_emlrtRSI;
  nx = W->size[0] * W->size[1];
  b_st.site = &s_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  assertValidSizeArg(&c_st, m);
  c_st.site = &t_emlrtRSI;
  assertValidSizeArg(&c_st, p);
  maxdimlen = W->size[0];
  if (W->size[1] > W->size[0]) {
    maxdimlen = W->size[1];
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

  maxdimlen = W->size[0] * W->size[1];
  W->size[0] = (int32_T)m;
  W->size[1] = (int32_T)p;
  emxEnsureCapacity_real_T1(&st, W, maxdimlen, &jb_emlrtRTEI);
  nx = (int32_T)p;
  for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
    loop_ub = (int32_T)m;
    for (i10 = 0; i10 < loop_ub; i10++) {
      W->data[i10 + W->size[0] * maxdimlen] = W->data[i10 + (int32_T)m *
        maxdimlen];
    }
  }

  emlrtMEXProfilingStatement(2, isMexOutdated);
  st.site = &p_emlrtRSI;
  nx = C->size[0] * C->size[1];
  b_st.site = &s_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  assertValidSizeArg(&c_st, m);
  c_st.site = &t_emlrtRSI;
  assertValidSizeArg(&c_st, p);
  maxdimlen = C->size[0];
  if (C->size[1] > C->size[0]) {
    maxdimlen = C->size[1];
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

  maxdimlen = C->size[0] * C->size[1];
  C->size[0] = (int32_T)m;
  C->size[1] = (int32_T)p;
  emxEnsureCapacity_real_T1(&st, C, maxdimlen, &kb_emlrtRTEI);
  nx = (int32_T)p;
  for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
    loop_ub = (int32_T)m;
    for (i10 = 0; i10 < loop_ub; i10++) {
      C->data[i10 + C->size[0] * maxdimlen] = C->data[i10 + (int32_T)m *
        maxdimlen];
    }
  }

  emxInit_real_T(&st, &b_X, 2, &nb_emlrtRTEI, true);
  emlrtMEXProfilingStatement(3, isMexOutdated);
  st.site = &q_emlrtRSI;
  diag(&st, X, b_X);
  emlrtMEXProfilingStatement(4, isMexOutdated);
  st.site = &r_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  if (!(W->size[1] == b_X->size[0])) {
    if (((W->size[0] == 1) && (W->size[1] == 1)) || ((b_X->size[0] == 1) &&
         (b_X->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &vc_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &wc_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((W->size[1] == 1) || (b_X->size[0] == 1)) {
    maxdimlen = V->size[0] * V->size[1];
    V->size[0] = W->size[0];
    V->size[1] = b_X->size[1];
    emxEnsureCapacity_real_T1(&st, V, maxdimlen, &lb_emlrtRTEI);
    nx = W->size[0];
    for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
      loop_ub = b_X->size[1];
      for (i10 = 0; i10 < loop_ub; i10++) {
        V->data[maxdimlen + V->size[0] * i10] = 0.0;
        b_loop_ub = W->size[1];
        for (i11 = 0; i11 < b_loop_ub; i11++) {
          V->data[maxdimlen + V->size[0] * i10] += W->data[maxdimlen + W->size[0]
            * i11] * b_X->data[i11 + b_X->size[0] * i10];
        }
      }
    }
  } else {
    b_st.site = &w_emlrtRSI;
    if ((W->size[0] == 0) || (W->size[1] == 0) || (b_X->size[0] == 0) ||
        (b_X->size[1] == 0)) {
      maxdimlen = V->size[0] * V->size[1];
      V->size[0] = W->size[0];
      V->size[1] = b_X->size[1];
      emxEnsureCapacity_real_T1(&b_st, V, maxdimlen, &lb_emlrtRTEI);
      nx = W->size[0] * b_X->size[1];
      for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
        V->data[maxdimlen] = 0.0;
      }
    } else {
      c_st.site = &ab_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)W->size[0];
      n_t = (ptrdiff_t)b_X->size[1];
      k_t = (ptrdiff_t)W->size[1];
      lda_t = (ptrdiff_t)W->size[0];
      ldb_t = (ptrdiff_t)W->size[1];
      ldc_t = (ptrdiff_t)W->size[0];
      maxdimlen = V->size[0] * V->size[1];
      V->size[0] = W->size[0];
      V->size[1] = b_X->size[1];
      emxEnsureCapacity_real_T1(&c_st, V, maxdimlen, &hb_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &W->data[0], &lda_t,
            &b_X->data[0], &ldb_t, &beta1, &V->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&st, &b_X);
  for (maxdimlen = 0; maxdimlen < 2; maxdimlen++) {
    b_V[maxdimlen] = V->size[maxdimlen];
  }

  for (maxdimlen = 0; maxdimlen < 2; maxdimlen++) {
    b_C[maxdimlen] = C->size[maxdimlen];
  }

  if ((b_V[0] != b_C[0]) || (b_V[1] != b_C[1])) {
    emlrtSizeEqCheckNDR2012b(&b_V[0], &b_C[0], &e_emlrtECI, sp);
  }

  nx = V->size[0] * V->size[1] - 1;
  maxdimlen = V->size[0] * V->size[1];
  emxEnsureCapacity_real_T1(sp, V, maxdimlen, &mb_emlrtRTEI);
  for (maxdimlen = 0; maxdimlen <= nx; maxdimlen++) {
    V->data[maxdimlen] -= C->data[maxdimlen];
  }

  emlrtMEXProfilingFunctionExit(isMexOutdated);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (inputLayer.c) */

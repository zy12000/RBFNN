/*
 * d_outputLayer.c
 *
 * Code generation for function 'd_outputLayer'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "rmse.h"
#include "d_outputLayer.h"
#include "rmse_emxutil.h"
#include "error.h"
#include "assertValidSizeArg.h"
#include "rmse_mexutil.h"
#include "rmse_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo sb_emlrtRSI = { 2,  /* lineNo */
  "d_outputLayer",                     /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_outputLayer.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 3,  /* lineNo */
  "d_outputLayer",                     /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_outputLayer.m"/* pathName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 2,/* lineNo */
  1,                                   /* colNo */
  "d_outputLayer",                     /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_outputLayer.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 3,/* lineNo */
  6,                                   /* colNo */
  "d_outputLayer",                     /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_outputLayer.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 3,/* lineNo */
  1,                                   /* colNo */
  "d_outputLayer",                     /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_outputLayer.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 4,/* lineNo */
  1,                                   /* colNo */
  "d_outputLayer",                     /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_outputLayer.m"/* pName */
};

/* Function Definitions */
void d_outputLayer(const emlrtStack *sp, const emxArray_real_T *d, const
                   emxArray_real_T *H, emxArray_real_T *W, real_T q,
                   emxArray_real_T *dH, emxArray_real_T *dW)
{
  int32_T nx;
  int32_T calclen;
  int32_T maxdimlen;
  boolean_T out;
  int32_T loop_ub;
  emxArray_real_T *b;
  int32_T i14;
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
  emlrtMEXProfilingFunctionEntry(d_outputLayer_complete_name, isMexOutdated);
  emlrtMEXProfilingStatement(1, isMexOutdated);
  st.site = &sb_emlrtRSI;
  nx = W->size[0] * W->size[1];
  b_st.site = &s_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  assertValidSizeArg(&c_st, q);
  if ((int32_T)q > 0) {
    c_st.site = &hc_emlrtRSI;
    calclen = div_s32(&c_st, nx, (int32_T)q);
    if (!(calclen <= nx)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &xc_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }
  } else {
    calclen = 0;
  }

  maxdimlen = W->size[0];
  if (W->size[1] > W->size[0]) {
    maxdimlen = W->size[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (calclen > maxdimlen) {
    b_st.site = &j_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)q > maxdimlen) {
    b_st.site = &j_emlrtRSI;
    error(&b_st);
  }

  out = (calclen >= 0);
  if (out && ((int32_T)q >= 0)) {
  } else {
    out = false;
  }

  if (!out) {
    emlrtErrorWithMessageIdR2018a(&st, &rc_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if (calclen * (int32_T)q != nx) {
    emlrtErrorWithMessageIdR2018a(&st, &qc_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  nx = W->size[0] * W->size[1];
  W->size[0] = calclen;
  W->size[1] = (int32_T)q;
  emxEnsureCapacity_real_T1(&st, W, nx, &vb_emlrtRTEI);
  loop_ub = (int32_T)q;
  for (nx = 0; nx < loop_ub; nx++) {
    for (i14 = 0; i14 < calclen; i14++) {
      W->data[i14 + W->size[0] * nx] = W->data[i14 + calclen * nx];
    }
  }

  emxInit_real_T(&st, &b, 2, &wb_emlrtRTEI, true);
  emlrtMEXProfilingStatement(2, isMexOutdated);
  st.site = &tb_emlrtRSI;
  nx = b->size[0] * b->size[1];
  b->size[0] = W->size[1];
  b->size[1] = W->size[0];
  emxEnsureCapacity_real_T1(&st, b, nx, &wb_emlrtRTEI);
  loop_ub = W->size[0];
  for (nx = 0; nx < loop_ub; nx++) {
    maxdimlen = W->size[1];
    for (i14 = 0; i14 < maxdimlen; i14++) {
      b->data[i14 + b->size[0] * nx] = W->data[nx + W->size[0] * i14];
    }
  }

  b_st.site = &x_emlrtRSI;
  if (!(d->size[1] == b->size[0])) {
    if ((d->size[1] == 1) || ((b->size[0] == 1) && (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &vc_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &wc_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((d->size[1] == 1) || (b->size[0] == 1)) {
    nx = dH->size[0] * dH->size[1];
    dH->size[0] = 1;
    dH->size[1] = b->size[1];
    emxEnsureCapacity_real_T1(&st, dH, nx, &xb_emlrtRTEI);
    loop_ub = b->size[1];
    for (nx = 0; nx < loop_ub; nx++) {
      dH->data[dH->size[0] * nx] = 0.0;
      maxdimlen = d->size[1];
      for (i14 = 0; i14 < maxdimlen; i14++) {
        dH->data[dH->size[0] * nx] += d->data[d->size[0] * i14] * b->data[i14 +
          b->size[0] * nx];
      }
    }
  } else {
    b_st.site = &w_emlrtRSI;
    if ((d->size[1] == 0) || (b->size[0] == 0) || (b->size[1] == 0)) {
      nx = dH->size[0] * dH->size[1];
      dH->size[0] = 1;
      dH->size[1] = b->size[1];
      emxEnsureCapacity_real_T1(&b_st, dH, nx, &xb_emlrtRTEI);
      loop_ub = b->size[1];
      for (nx = 0; nx < loop_ub; nx++) {
        dH->data[nx] = 0.0;
      }
    } else {
      c_st.site = &ab_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)1;
      n_t = (ptrdiff_t)b->size[1];
      k_t = (ptrdiff_t)d->size[1];
      lda_t = (ptrdiff_t)1;
      ldb_t = (ptrdiff_t)d->size[1];
      ldc_t = (ptrdiff_t)1;
      nx = dH->size[0] * dH->size[1];
      dH->size[0] = 1;
      dH->size[1] = b->size[1];
      emxEnsureCapacity_real_T1(&c_st, dH, nx, &hb_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &d->data[0], &lda_t,
            &b->data[0], &ldb_t, &beta1, &dH->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&st, &b);
  emlrtMEXProfilingStatement(3, isMexOutdated);
  maxdimlen = H->size[0];
  nx = dW->size[0] * dW->size[1];
  dW->size[0] = maxdimlen;
  dW->size[1] = d->size[1];
  emxEnsureCapacity_real_T1(sp, dW, nx, &yb_emlrtRTEI);
  for (nx = 0; nx < maxdimlen; nx++) {
    loop_ub = d->size[1];
    for (i14 = 0; i14 < loop_ub; i14++) {
      dW->data[nx + dW->size[0] * i14] = H->data[nx] * d->data[d->size[0] * i14];
    }
  }

  emlrtMEXProfilingFunctionExit(isMexOutdated);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (d_outputLayer.c) */

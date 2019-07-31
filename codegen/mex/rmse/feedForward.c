/*
 * feedForward.c
 *
 * Code generation for function 'feedForward'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "rmse.h"
#include "feedForward.h"
#include "d_outputLayer.h"
#include "rmse_emxutil.h"
#include "error.h"
#include "assertValidSizeArg.h"
#include "exp.h"
#include "radiusLayer.h"
#include "inputLayer.h"
#include "rmse_mexutil.h"
#include "rmse_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo k_emlrtRSI = { 2,   /* lineNo */
  "feedForward",                       /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\feedForward.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 3,   /* lineNo */
  "feedForward",                       /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\feedForward.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 4,   /* lineNo */
  "feedForward",                       /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\feedForward.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 5,   /* lineNo */
  "feedForward",                       /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\feedForward.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 2,  /* lineNo */
  "kenalLayer_Gauss",                  /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\kenalLayer_Gauss.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 2,  /* lineNo */
  "outputLayer",                       /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\outputLayer.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 3,  /* lineNo */
  "outputLayer",                       /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\outputLayer.m"/* pathName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 2,/* lineNo */
  16,                                  /* colNo */
  "feedForward",                       /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\feedForward.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 2,/* lineNo */
  19,                                  /* colNo */
  "feedForward",                       /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\feedForward.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 3,/* lineNo */
  16,                                  /* colNo */
  "feedForward",                       /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\feedForward.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 4,/* lineNo */
  1,                                   /* colNo */
  "feedForward",                       /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\feedForward.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 2,/* lineNo */
  1,                                   /* colNo */
  "outputLayer",                       /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\outputLayer.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 3,/* lineNo */
  3,                                   /* colNo */
  "outputLayer",                       /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\outputLayer.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 5,/* lineNo */
  1,                                   /* colNo */
  "feedForward",                       /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\feedForward.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 5,/* lineNo */
  17,                                  /* colNo */
  "feedForward",                       /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\feedForward.m"/* pName */
};

/* Function Definitions */
void feedForward(const emlrtStack *sp, real_T m, real_T p, real_T q, const
                 emxArray_real_T *W1, const emxArray_real_T *W2, const
                 emxArray_real_T *W3, const emxArray_real_T *C, const
                 emxArray_real_T *X, emxArray_real_T *y, emxArray_real_T *V,
                 emxArray_real_T *R2, emxArray_real_T *H)
{
  emxArray_real_T *b_W1;
  int32_T i8;
  int32_T maxdimlen;
  emxArray_real_T *b_C;
  int32_T nx;
  int32_T calclen;
  boolean_T out;
  emxArray_real_T *W;
  emxArray_real_T *a;
  char_T TRANSA;
  char_T TRANSB;
  real_T alpha1;
  real_T beta1;
  int32_T i9;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_W1, 2, &ab_emlrtRTEI, true);
  emlrtMEXProfilingFunctionEntry(feedForward_complete_name, isMexOutdated);
  emlrtMEXProfilingStatement(1, isMexOutdated);
  i8 = b_W1->size[0] * b_W1->size[1];
  b_W1->size[0] = W1->size[0];
  b_W1->size[1] = W1->size[1];
  emxEnsureCapacity_real_T1(sp, b_W1, i8, &ab_emlrtRTEI);
  maxdimlen = W1->size[0] * W1->size[1];
  for (i8 = 0; i8 < maxdimlen; i8++) {
    b_W1->data[i8] = W1->data[i8];
  }

  emxInit_real_T(sp, &b_C, 2, &bb_emlrtRTEI, true);
  i8 = b_C->size[0] * b_C->size[1];
  b_C->size[0] = C->size[0];
  b_C->size[1] = C->size[1];
  emxEnsureCapacity_real_T1(sp, b_C, i8, &bb_emlrtRTEI);
  maxdimlen = C->size[0] * C->size[1];
  for (i8 = 0; i8 < maxdimlen; i8++) {
    b_C->data[i8] = C->data[i8];
  }

  st.site = &k_emlrtRSI;
  inputLayer(&st, X, b_W1, b_C, m, p, V);
  emlrtMEXProfilingStatement(2, isMexOutdated);
  i8 = b_W1->size[0] * b_W1->size[1];
  b_W1->size[0] = V->size[0];
  b_W1->size[1] = V->size[1];
  emxEnsureCapacity_real_T1(sp, b_W1, i8, &cb_emlrtRTEI);
  maxdimlen = V->size[0] * V->size[1];
  emxFree_real_T(sp, &b_C);
  for (i8 = 0; i8 < maxdimlen; i8++) {
    b_W1->data[i8] = V->data[i8];
  }

  st.site = &l_emlrtRSI;
  radiusLayer(&st, b_W1, W2, m, p, R2);
  emlrtMEXProfilingStatement(3, isMexOutdated);
  st.site = &m_emlrtRSI;
  emlrtMEXProfilingFunctionEntry(kenalLayer_Gauss_complete_name, isMexOutdated);
  emlrtMEXProfilingStatement(1, isMexOutdated);
  i8 = H->size[0];
  H->size[0] = R2->size[0];
  emxEnsureCapacity_real_T(&st, H, i8, &db_emlrtRTEI);
  maxdimlen = R2->size[0];
  emxFree_real_T(&st, &b_W1);
  for (i8 = 0; i8 < maxdimlen; i8++) {
    H->data[i8] = -R2->data[i8];
  }

  b_st.site = &jb_emlrtRSI;
  b_exp(&b_st, H);
  emlrtMEXProfilingFunctionExit(isMexOutdated);
  emlrtMEXProfilingStatement(4, isMexOutdated);
  st.site = &n_emlrtRSI;
  emlrtMEXProfilingFunctionEntry(outputLayer_complete_name, isMexOutdated);
  emlrtMEXProfilingStatement(1, isMexOutdated);
  b_st.site = &mb_emlrtRSI;
  nx = W3->size[0] * W3->size[1];
  c_st.site = &s_emlrtRSI;
  d_st.site = &t_emlrtRSI;
  assertValidSizeArg(&d_st, q);
  if ((int32_T)q > 0) {
    d_st.site = &hc_emlrtRSI;
    calclen = div_s32(&d_st, nx, (int32_T)q);
    if (!(calclen <= nx)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &xc_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }
  } else {
    calclen = 0;
  }

  maxdimlen = W3->size[0];
  if (W3->size[1] > W3->size[0]) {
    maxdimlen = W3->size[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (calclen > maxdimlen) {
    c_st.site = &j_emlrtRSI;
    error(&c_st);
  }

  if ((int32_T)q > maxdimlen) {
    c_st.site = &j_emlrtRSI;
    error(&c_st);
  }

  out = (calclen >= 0);
  if (out && ((int32_T)q >= 0)) {
  } else {
    out = false;
  }

  if (!out) {
    emlrtErrorWithMessageIdR2018a(&b_st, &rc_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if (calclen * (int32_T)q != nx) {
    emlrtErrorWithMessageIdR2018a(&b_st, &qc_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emxInit_real_T(&b_st, &W, 2, &ib_emlrtRTEI, true);
  i8 = W->size[0] * W->size[1];
  W->size[0] = calclen;
  W->size[1] = (int32_T)q;
  emxEnsureCapacity_real_T1(&b_st, W, i8, &eb_emlrtRTEI);
  maxdimlen = calclen * (int32_T)q;
  for (i8 = 0; i8 < maxdimlen; i8++) {
    W->data[i8] = W3->data[i8];
  }

  emxInit_real_T(&b_st, &a, 2, &fb_emlrtRTEI, true);
  emlrtMEXProfilingStatement(2, isMexOutdated);
  b_st.site = &nb_emlrtRSI;
  maxdimlen = H->size[0];
  i8 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = maxdimlen;
  emxEnsureCapacity_real_T1(&b_st, a, i8, &fb_emlrtRTEI);
  for (i8 = 0; i8 < maxdimlen; i8++) {
    a->data[a->size[0] * i8] = H->data[i8];
  }

  c_st.site = &x_emlrtRSI;
  if (!(a->size[1] == calclen)) {
    if ((a->size[1] == 1) || ((calclen == 1) && ((int32_T)q == 1))) {
      emlrtErrorWithMessageIdR2018a(&c_st, &vc_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &wc_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((a->size[1] == 1) || (calclen == 1)) {
    i8 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = (int32_T)q;
    emxEnsureCapacity_real_T1(&b_st, y, i8, &gb_emlrtRTEI);
    maxdimlen = (int32_T)q;
    for (i8 = 0; i8 < maxdimlen; i8++) {
      y->data[y->size[0] * i8] = 0.0;
      nx = a->size[1];
      for (i9 = 0; i9 < nx; i9++) {
        y->data[y->size[0] * i8] += a->data[a->size[0] * i9] * W3->data[i9 +
          calclen * i8];
      }
    }
  } else {
    c_st.site = &w_emlrtRSI;
    if ((a->size[1] == 0) || (calclen == 0) || ((int32_T)q == 0)) {
      i8 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = (int32_T)q;
      emxEnsureCapacity_real_T1(&c_st, y, i8, &gb_emlrtRTEI);
      maxdimlen = (int32_T)q;
      for (i8 = 0; i8 < maxdimlen; i8++) {
        y->data[i8] = 0.0;
      }
    } else {
      d_st.site = &ab_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)1;
      n_t = (ptrdiff_t)(int32_T)q;
      k_t = (ptrdiff_t)a->size[1];
      lda_t = (ptrdiff_t)1;
      ldb_t = (ptrdiff_t)a->size[1];
      ldc_t = (ptrdiff_t)1;
      i8 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = (int32_T)q;
      emxEnsureCapacity_real_T1(&d_st, y, i8, &hb_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &W->data[0], &ldb_t, &beta1, &y->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&b_st, &a);
  emxFree_real_T(&b_st, &W);
  emlrtMEXProfilingFunctionExit(isMexOutdated);
  emlrtMEXProfilingFunctionExit(isMexOutdated);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (feedForward.c) */

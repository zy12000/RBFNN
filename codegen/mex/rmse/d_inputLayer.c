/*
 * d_inputLayer.c
 *
 * Code generation for function 'd_inputLayer'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "rmse.h"
#include "d_inputLayer.h"
#include "rmse_emxutil.h"
#include "diag.h"
#include "error.h"
#include "assertValidSizeArg.h"
#include "rmse_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo yb_emlrtRSI = { 2,  /* lineNo */
  "d_inputLayer",                      /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_inputLayer.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 3,  /* lineNo */
  "d_inputLayer",                      /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_inputLayer.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 4,  /* lineNo */
  "d_inputLayer",                      /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_inputLayer.m"/* pathName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 2,/* lineNo */
  1,                                   /* colNo */
  "d_inputLayer",                      /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_inputLayer.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 4,/* lineNo */
  7,                                   /* colNo */
  "d_inputLayer",                      /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_inputLayer.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 4,/* lineNo */
  1,                                   /* colNo */
  "d_inputLayer",                      /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_inputLayer.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 5,/* lineNo */
  1,                                   /* colNo */
  "d_inputLayer",                      /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_inputLayer.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 1,/* lineNo */
  34,                                  /* colNo */
  "d_inputLayer",                      /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_inputLayer.m"/* pName */
};

/* Function Definitions */
void d_inputLayer(const emlrtStack *sp, emxArray_real_T *dF, const
                  emxArray_real_T *X, real_T m, real_T p, emxArray_real_T *dW,
                  emxArray_real_T *dC)
{
  int32_T nx;
  int32_T maxdimlen;
  boolean_T out;
  emxArray_real_T *b_X;
  int32_T loop_ub;
  emxArray_real_T *b;
  int32_T i16;
  char_T TRANSA;
  char_T TRANSB;
  real_T alpha1;
  real_T beta1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  int32_T b_loop_ub;
  ptrdiff_t k_t;
  int32_T i17;
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
  emlrtMEXProfilingFunctionEntry(d_inputLayer_complete_name, isMexOutdated);
  emlrtMEXProfilingStatement(1, isMexOutdated);
  st.site = &yb_emlrtRSI;
  nx = dF->size[0] * dF->size[1];
  b_st.site = &s_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  assertValidSizeArg(&c_st, m);
  c_st.site = &t_emlrtRSI;
  assertValidSizeArg(&c_st, p);
  maxdimlen = dF->size[0];
  if (dF->size[1] > dF->size[0]) {
    maxdimlen = dF->size[1];
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

  maxdimlen = dF->size[0] * dF->size[1];
  dF->size[0] = (int32_T)m;
  dF->size[1] = (int32_T)p;
  emxEnsureCapacity_real_T1(&st, dF, maxdimlen, &gc_emlrtRTEI);
  nx = (int32_T)p;
  for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
    loop_ub = (int32_T)m;
    for (i16 = 0; i16 < loop_ub; i16++) {
      dF->data[i16 + dF->size[0] * maxdimlen] = dF->data[i16 + (int32_T)m *
        maxdimlen];
    }
  }

  emxInit_real_T(&st, &b_X, 2, &kc_emlrtRTEI, true);
  emxInit_real_T(&st, &b, 2, &hc_emlrtRTEI, true);
  emlrtMEXProfilingStatement(2, isMexOutdated);
  st.site = &ac_emlrtRSI;
  diag(&st, X, b_X);
  emlrtMEXProfilingStatement(3, isMexOutdated);
  st.site = &bc_emlrtRSI;
  maxdimlen = b->size[0] * b->size[1];
  b->size[0] = b_X->size[1];
  b->size[1] = b_X->size[0];
  emxEnsureCapacity_real_T1(&st, b, maxdimlen, &hc_emlrtRTEI);
  nx = b_X->size[0];
  for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
    loop_ub = b_X->size[1];
    for (i16 = 0; i16 < loop_ub; i16++) {
      b->data[i16 + b->size[0] * maxdimlen] = b_X->data[maxdimlen + b_X->size[0]
        * i16];
    }
  }

  emxFree_real_T(&st, &b_X);
  b_st.site = &x_emlrtRSI;
  if (!(dF->size[1] == b->size[0])) {
    if (((dF->size[0] == 1) && (dF->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtErrorWithMessageIdR2018a(&b_st, &vc_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &wc_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((dF->size[1] == 1) || (b->size[0] == 1)) {
    maxdimlen = dW->size[0] * dW->size[1];
    dW->size[0] = dF->size[0];
    dW->size[1] = b->size[1];
    emxEnsureCapacity_real_T1(&st, dW, maxdimlen, &ic_emlrtRTEI);
    nx = dF->size[0];
    for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
      loop_ub = b->size[1];
      for (i16 = 0; i16 < loop_ub; i16++) {
        dW->data[maxdimlen + dW->size[0] * i16] = 0.0;
        b_loop_ub = dF->size[1];
        for (i17 = 0; i17 < b_loop_ub; i17++) {
          dW->data[maxdimlen + dW->size[0] * i16] += dF->data[maxdimlen +
            dF->size[0] * i17] * b->data[i17 + b->size[0] * i16];
        }
      }
    }
  } else {
    b_st.site = &w_emlrtRSI;
    if ((dF->size[0] == 0) || (dF->size[1] == 0) || (b->size[0] == 0) ||
        (b->size[1] == 0)) {
      maxdimlen = dW->size[0] * dW->size[1];
      dW->size[0] = dF->size[0];
      dW->size[1] = b->size[1];
      emxEnsureCapacity_real_T1(&b_st, dW, maxdimlen, &ic_emlrtRTEI);
      nx = dF->size[0] * b->size[1];
      for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
        dW->data[maxdimlen] = 0.0;
      }
    } else {
      c_st.site = &ab_emlrtRSI;
      TRANSA = 'N';
      TRANSB = 'N';
      alpha1 = 1.0;
      beta1 = 0.0;
      m_t = (ptrdiff_t)dF->size[0];
      n_t = (ptrdiff_t)b->size[1];
      k_t = (ptrdiff_t)dF->size[1];
      lda_t = (ptrdiff_t)dF->size[0];
      ldb_t = (ptrdiff_t)dF->size[1];
      ldc_t = (ptrdiff_t)dF->size[0];
      maxdimlen = dW->size[0] * dW->size[1];
      dW->size[0] = dF->size[0];
      dW->size[1] = b->size[1];
      emxEnsureCapacity_real_T1(&c_st, dW, maxdimlen, &hb_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &dF->data[0], &lda_t,
            &b->data[0], &ldb_t, &beta1, &dW->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&st, &b);
  emlrtMEXProfilingStatement(4, isMexOutdated);
  maxdimlen = dC->size[0] * dC->size[1];
  dC->size[0] = dF->size[0];
  dC->size[1] = dF->size[1];
  emxEnsureCapacity_real_T1(sp, dC, maxdimlen, &jc_emlrtRTEI);
  nx = dF->size[0] * dF->size[1];
  for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
    dC->data[maxdimlen] = -dF->data[maxdimlen];
  }

  emlrtMEXProfilingFunctionExit(isMexOutdated);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (d_inputLayer.c) */

/*
 * d_radiusLayer.c
 *
 * Code generation for function 'd_radiusLayer'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "rmse.h"
#include "d_radiusLayer.h"
#include "rmse_emxutil.h"
#include "power.h"
#include "error.h"
#include "assertValidSizeArg.h"
#include "rmse_data.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo vb_emlrtRSI = { 2,  /* lineNo */
  "d_radiusLayer",                     /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_radiusLayer.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 3,  /* lineNo */
  "d_radiusLayer",                     /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_radiusLayer.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 5,  /* lineNo */
  "d_radiusLayer",                     /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_radiusLayer.m"/* pathName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 2,/* lineNo */
  1,                                   /* colNo */
  "d_radiusLayer",                     /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_radiusLayer.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 4,/* lineNo */
  4,                                   /* colNo */
  "d_radiusLayer",                     /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_radiusLayer.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 4,/* lineNo */
  1,                                   /* colNo */
  "d_radiusLayer",                     /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_radiusLayer.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 5,/* lineNo */
  4,                                   /* colNo */
  "d_radiusLayer",                     /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_radiusLayer.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 5,/* lineNo */
  1,                                   /* colNo */
  "d_radiusLayer",                     /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_radiusLayer.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 5,/* lineNo */
  5,                                   /* colNo */
  "d_radiusLayer",                     /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_radiusLayer.m"/* pName */
};

static emlrtECInfo f_emlrtECI = { 2,   /* nDims */
  4,                                   /* lineNo */
  4,                                   /* colNo */
  "d_radiusLayer",                     /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_radiusLayer.m"/* pName */
};

/* Function Definitions */
void d_radiusLayer(const emlrtStack *sp, const emxArray_real_T *dF,
                   emxArray_real_T *V, const emxArray_real_T *W, real_T m,
                   real_T p, emxArray_real_T *dV, emxArray_real_T *dW)
{
  int32_T nx;
  int32_T maxdimlen;
  boolean_T out;
  int32_T loop_ub;
  int32_T i15;
  int32_T b_dV[2];
  int32_T b_V[2];
  emxArray_real_T *a;
  emxArray_real_T *r1;
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
  emlrtMEXProfilingFunctionEntry(d_radiusLayer_complete_name, isMexOutdated);
  emlrtMEXProfilingStatement(1, isMexOutdated);
  st.site = &vb_emlrtRSI;
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
  emxEnsureCapacity_real_T1(&st, V, maxdimlen, &ac_emlrtRTEI);
  nx = (int32_T)p;
  for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
    loop_ub = (int32_T)m;
    for (i15 = 0; i15 < loop_ub; i15++) {
      V->data[i15 + V->size[0] * maxdimlen] = V->data[i15 + (int32_T)m *
        maxdimlen];
    }
  }

  emlrtMEXProfilingStatement(2, isMexOutdated);
  st.site = &wb_emlrtRSI;
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

  emlrtMEXProfilingStatement(3, isMexOutdated);
  maxdimlen = dV->size[0] * dV->size[1];
  dV->size[0] = dF->size[0];
  dV->size[1] = (int32_T)p;
  emxEnsureCapacity_real_T1(sp, dV, maxdimlen, &bc_emlrtRTEI);
  nx = dF->size[0];
  for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
    loop_ub = (int32_T)p;
    for (i15 = 0; i15 < loop_ub; i15++) {
      dV->data[maxdimlen + dV->size[0] * i15] = dF->data[maxdimlen] * W->
        data[i15];
    }
  }

  for (maxdimlen = 0; maxdimlen < 2; maxdimlen++) {
    b_dV[maxdimlen] = dV->size[maxdimlen];
  }

  for (maxdimlen = 0; maxdimlen < 2; maxdimlen++) {
    b_V[maxdimlen] = V->size[maxdimlen];
  }

  if ((b_dV[0] != b_V[0]) || (b_dV[1] != b_V[1])) {
    emlrtSizeEqCheckNDR2012b(&b_dV[0], &b_V[0], &f_emlrtECI, sp);
  }

  nx = dV->size[0] * dV->size[1] - 1;
  maxdimlen = dV->size[0] * dV->size[1];
  emxEnsureCapacity_real_T1(sp, dV, maxdimlen, &cc_emlrtRTEI);
  for (maxdimlen = 0; maxdimlen <= nx; maxdimlen++) {
    dV->data[maxdimlen] = dV->data[maxdimlen] * V->data[maxdimlen] * 2.0;
  }

  emxInit_real_T(sp, &a, 2, &dc_emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 2, &fc_emlrtRTEI, true);
  emlrtMEXProfilingStatement(4, isMexOutdated);
  st.site = &xb_emlrtRSI;
  b_st.site = &xb_emlrtRSI;
  power(&b_st, V, r1);
  maxdimlen = a->size[0] * a->size[1];
  a->size[0] = r1->size[1];
  a->size[1] = r1->size[0];
  emxEnsureCapacity_real_T1(&st, a, maxdimlen, &dc_emlrtRTEI);
  nx = r1->size[0];
  for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
    loop_ub = r1->size[1];
    for (i15 = 0; i15 < loop_ub; i15++) {
      a->data[i15 + a->size[0] * maxdimlen] = r1->data[maxdimlen + r1->size[0] *
        i15];
    }
  }

  emxFree_real_T(&st, &r1);
  b_st.site = &x_emlrtRSI;
  if (!(a->size[1] == dF->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (dF->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &vc_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &wc_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  if ((a->size[1] == 1) || (dF->size[0] == 1)) {
    maxdimlen = dW->size[0];
    dW->size[0] = a->size[0];
    emxEnsureCapacity_real_T(&st, dW, maxdimlen, &ec_emlrtRTEI);
    nx = a->size[0];
    for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
      dW->data[maxdimlen] = 0.0;
      loop_ub = a->size[1];
      for (i15 = 0; i15 < loop_ub; i15++) {
        dW->data[maxdimlen] += a->data[maxdimlen + a->size[0] * i15] * dF->
          data[i15];
      }
    }
  } else {
    b_st.site = &w_emlrtRSI;
    if ((a->size[0] == 0) || (a->size[1] == 0) || (dF->size[0] == 0)) {
      maxdimlen = dW->size[0];
      dW->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&b_st, dW, maxdimlen, &ec_emlrtRTEI);
      nx = a->size[0];
      for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
        dW->data[maxdimlen] = 0.0;
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
      maxdimlen = dW->size[0];
      dW->size[0] = a->size[0];
      emxEnsureCapacity_real_T(&c_st, dW, maxdimlen, &hb_emlrtRTEI);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a->data[0], &lda_t,
            &dF->data[0], &ldb_t, &beta1, &dW->data[0], &ldc_t);
    }
  }

  emxFree_real_T(&st, &a);
  emlrtMEXProfilingFunctionExit(isMexOutdated);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (d_radiusLayer.c) */

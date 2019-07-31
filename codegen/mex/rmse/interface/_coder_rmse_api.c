/*
 * _coder_rmse_api.c
 *
 * Code generation for function '_coder_rmse_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rmse.h"
#include "_coder_rmse_api.h"
#include "rmse_emxutil.h"
#include "rmse_data.h"

/* Variable Definitions */
static emlrtRTEInfo lc_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_rmse_api",                   /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *input, const
  char_T *identifier, emxArray_real_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *m, const
  char_T *identifier);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *X, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const real_T u);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv5[1] = { 0 };

  y = NULL;
  m1 = emlrtCreateNumericArray(1, iv5, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m1, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)m1, u->size, 1);
  emlrtAssign(&y, m1);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *input, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(input), &thisId, y);
  emlrtDestroyArray(&input);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *m, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(m), &thisId);
  emlrtDestroyArray(&m);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *X, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(X), &thisId, y);
  emlrtDestroyArray(&X);
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m0);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  const boolean_T bv0[1] = { true };

  int32_T iv6[1];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv0[0],
    iv6);
  ret->size[0] = iv6[0];
  ret->allocatedSize = ret->size[0];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  const boolean_T bv1[2] = { true, true };

  int32_T iv7[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv1[0],
    iv7);
  ret->size[0] = iv7[0];
  ret->size[1] = iv7[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void rmse_api(const mxArray * const prhs[7], int32_T nlhs, const mxArray *plhs[2])
{
  emxArray_real_T *X;
  emxArray_real_T *input;
  emxArray_real_T *output;
  emxArray_real_T *de;
  real_T m;
  real_T n;
  real_T p;
  real_T q;
  real_T e;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T1(&st, &X, 1, &lc_emlrtRTEI, true);
  emxInit_real_T(&st, &input, 2, &lc_emlrtRTEI, true);
  emxInit_real_T(&st, &output, 2, &lc_emlrtRTEI, true);
  emxInit_real_T1(&st, &de, 1, &lc_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "X", X);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "input", input);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "output", output);
  m = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "m");
  n = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "n");
  p = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "p");
  q = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "q");

  /* Invoke the target function */
  rmse(&st, X, input, output, m, n, p, q, &e, de);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(e);
  output->canFreeData = false;
  emxFree_real_T(&st, &output);
  input->canFreeData = false;
  emxFree_real_T(&st, &input);
  X->canFreeData = false;
  emxFree_real_T(&st, &X);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(de);
  }

  de->canFreeData = false;
  emxFree_real_T(&st, &de);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_rmse_api.c) */

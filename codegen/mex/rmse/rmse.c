/*
 * rmse.c
 *
 * Code generation for function 'rmse'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "rmse.h"
#include "rmse_emxutil.h"
#include "d_inputLayer.h"
#include "d_radiusLayer.h"
#include "exp.h"
#include "d_outputLayer.h"
#include "feedForward.h"
#include "error.h"
#include "eml_int_forloop_overflow_check.h"
#include "scalexpAlloc.h"
#include "indexShapeCheck.h"
#include "rmse_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 7,     /* lineNo */
  "rmse",                              /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 8,   /* lineNo */
  "rmse",                              /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 9,   /* lineNo */
  "rmse",                              /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 10,  /* lineNo */
  "rmse",                              /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 14,  /* lineNo */
  "rmse",                              /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 17,  /* lineNo */
  "rmse",                              /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 21,  /* lineNo */
  "rmse",                              /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 22,  /* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 2,  /* lineNo */
  "backPropagation",                   /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\backPropagation.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 3,  /* lineNo */
  "backPropagation",                   /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\backPropagation.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 4,  /* lineNo */
  "backPropagation",                   /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\backPropagation.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 5,  /* lineNo */
  "backPropagation",                   /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\backPropagation.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 2,  /* lineNo */
  "d_kenalLayer_Gauss",                /* fcnName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_kenalLayer_Gauss.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 9,  /* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 64, /* lineNo */
  "sumprod",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 134,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 193,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 12, /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 7,   /* lineNo */
  12,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 8, /* lineNo */
  12,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 9, /* lineNo */
  12,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 10,/* lineNo */
  11,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 12,/* lineNo */
  1,                                   /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 11,/* lineNo */
  5,                                   /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 14,/* lineNo */
  45,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 15,/* lineNo */
  16,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 15,/* lineNo */
  11,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 17,/* lineNo */
  42,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 23,/* lineNo */
  5,                                   /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 82,/* lineNo */
  9,                                   /* colNo */
  "reshape",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 2, /* lineNo */
  14,                                  /* colNo */
  "d_kenalLayer_Gauss",                /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_kenalLayer_Gauss.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 2, /* lineNo */
  13,                                  /* colNo */
  "d_kenalLayer_Gauss",                /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_kenalLayer_Gauss.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 2, /* lineNo */
  5,                                   /* colNo */
  "d_kenalLayer_Gauss",                /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_kenalLayer_Gauss.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 17,/* lineNo */
  70,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 18,/* lineNo */
  15,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 18,/* lineNo */
  9,                                   /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 11,/* lineNo */
  1,                                   /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 2, /* lineNo */
  2,                                   /* colNo */
  "backPropagation",                   /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\backPropagation.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 14,/* lineNo */
  8,                                   /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 1, /* lineNo */
  17,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  2,                                   /* lineNo */
  5,                                   /* colNo */
  "d_kenalLayer_Gauss",                /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_kenalLayer_Gauss.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 22,/* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 46,/* lineNo */
  19,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  18,                                  /* lineNo */
  12,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  76,                                  /* colNo */
  "input",                             /* aName */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  46,                                  /* colNo */
  "y_e",                               /* aName */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  15,                                  /* lineNo */
  5,                                   /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  9,                                   /* colNo */
  "y_e",                               /* aName */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  15,                                  /* lineNo */
  14,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  23,                                  /* colNo */
  "output",                            /* aName */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  51,                                  /* colNo */
  "input",                             /* aName */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo sc_emlrtRTEI = { 13,/* lineNo */
  7,                                   /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 11,    /* lineNo */
  13,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 11,  /* lineNo */
  13,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 11,  /* lineNo */
  11,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 11,  /* lineNo */
  11,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  22,                                  /* colNo */
  "X",                                 /* aName */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  13,                                  /* colNo */
  "X",                                 /* aName */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 10,  /* lineNo */
  13,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  23,                                  /* colNo */
  "X",                                 /* aName */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 9,   /* lineNo */
  23,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  9,                                   /* lineNo */
  14,                                  /* colNo */
  "X",                                 /* aName */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 9,   /* lineNo */
  14,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  8,                                   /* lineNo */
  23,                                  /* colNo */
  "X",                                 /* aName */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 8,   /* lineNo */
  23,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  8,                                   /* lineNo */
  14,                                  /* colNo */
  "X",                                 /* aName */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 8,   /* lineNo */
  14,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  23,                                  /* colNo */
  "X",                                 /* aName */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 7,   /* lineNo */
  23,                                  /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  14,                                  /* colNo */
  "X",                                 /* aName */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 12,  /* lineNo */
  1,                                   /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 12,  /* lineNo */
  1,                                   /* colNo */
  "rmse",                              /* fName */
  "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m",/* pName */
  4                                    /* checkKind */
};

/* Function Definitions */
void rmse(const emlrtStack *sp, const emxArray_real_T *X, const emxArray_real_T *
          input, const emxArray_real_T *output, real_T m, real_T n, real_T p,
          real_T q, real_T *e, emxArray_real_T *de)
{
  real_T W1_size[2];
  real_T W2_size[2];
  real_T W3_size[2];
  real_T C_size[2];
  real_T index_idx_1;
  real_T index_idx_2;
  real_T index_idx_3;
  int32_T i1;
  int32_T loop_ub;
  emxArray_real_T *x;
  int32_T y[2];
  real_T b_n;
  int32_T maxdimlen;
  boolean_T guard1 = false;
  int32_T exitg2;
  boolean_T exitg1;
  int32_T num[2];
  boolean_T overflow;
  int32_T i;
  emxArray_real_T *b_x;
  int32_T b_num[2];
  int32_T i2;
  int32_T i3;
  emxArray_real_T *c_x;
  int32_T sz_idx_0;
  int32_T c_num[2];
  int32_T sz_idx_1;
  int32_T i4;
  int32_T i5;
  emxArray_real_T *d_x;
  int32_T i6;
  int32_T i7;
  emxArray_real_T *y_e;
  emxArray_real_T *b_y;
  emxArray_real_T *V;
  emxArray_int32_T *r0;
  emxArray_real_T *z;
  emxArray_real_T *b_z;
  emxArray_real_T *dW3;
  emxArray_real_T *dC;
  emxArray_real_T *c_y;
  emxArray_real_T *e_x;
  emxArray_real_T *b_input;
  int32_T d_num[2];
  int32_T e_num[2];
  int32_T sz[2];
  uint32_T y_e_idx_0;
  int32_T f_num[2];
  emxArray_real_T b_y_e;
  uint32_T b_y_e_idx_0;
  emxArray_real_T f_x;
  int32_T c_y_e[1];
  emxArray_real_T g_x;
  emxArray_real_T h_x;
  int32_T b_output[2];
  int32_T g_num[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emlrtMEXProfilingFunctionEntry(rmse_complete_name, isMexOutdated);
  emlrtMEXProfilingStatement(1, isMexOutdated);
  W1_size[0] = m;
  W1_size[1] = p;
  emlrtMEXProfilingStatement(2, isMexOutdated);
  W2_size[0] = p;
  W2_size[1] = 1.0;
  emlrtMEXProfilingStatement(3, isMexOutdated);
  W3_size[0] = m;
  W3_size[1] = q;
  emlrtMEXProfilingStatement(4, isMexOutdated);
  C_size[0] = m;
  C_size[1] = p;
  emlrtMEXProfilingStatement(5, isMexOutdated);
  index_idx_1 = m * p + 1.0;
  index_idx_2 = (m * p + p) + 1.0;
  index_idx_3 = ((m * p + p) + m * q) + 1.0;
  emlrtMEXProfilingStatement(0, isMexOutdated);
  emlrtMEXProfilingStatement(6, isMexOutdated);
  if (1.0 > index_idx_1 - 1.0) {
    loop_ub = 0;
  } else {
    i1 = X->size[0];
    if (!(1 <= i1)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i1, &m_emlrtBCI, sp);
    }

    i1 = X->size[0];
    b_n = index_idx_1 - 1.0;
    if (b_n != (int32_T)muDoubleScalarFloor(b_n)) {
      emlrtIntegerCheckR2012b(b_n, &j_emlrtDCI, sp);
    }

    loop_ub = (int32_T)b_n;
    if (!((loop_ub >= 1) && (loop_ub <= i1))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &l_emlrtBCI, sp);
    }
  }

  emxInit_real_T1(sp, &x, 1, &emlrtRTEI, true);
  y[0] = 1;
  y[1] = loop_ub;
  st.site = &emlrtRSI;
  indexShapeCheck(&st, X->size[0], y);
  st.site = &emlrtRSI;
  i1 = x->size[0];
  x->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, x, i1, &emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    x->data[i1] = X->data[i1];
  }

  b_st.site = &i_emlrtRSI;
  maxdimlen = 0;
  guard1 = false;
  do {
    exitg2 = 0;
    if (maxdimlen < 2) {
      if ((W1_size[maxdimlen] != muDoubleScalarFloor(W1_size[maxdimlen])) ||
          muDoubleScalarIsInf(W1_size[maxdimlen])) {
        guard1 = true;
        exitg2 = 1;
      } else {
        maxdimlen++;
        guard1 = false;
      }
    } else {
      maxdimlen = 0;
      exitg2 = 2;
    }
  } while (exitg2 == 0);

  if (exitg2 == 1) {
  } else {
    exitg1 = false;
    while ((!exitg1) && (maxdimlen < 2)) {
      if ((W1_size[maxdimlen] < -2.147483648E+9) || (W1_size[maxdimlen] >
           2.147483647E+9)) {
        guard1 = true;
        exitg1 = true;
      } else {
        maxdimlen++;
      }
    }
  }

  if (guard1) {
    emlrtErrorWithMessageIdR2018a(&b_st, &pc_emlrtRTEI,
      "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector",
      "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector", 4, 12,
      MIN_int32_T, 12, MAX_int32_T);
  }

  b_n = 1.0;
  for (maxdimlen = 0; maxdimlen < 2; maxdimlen++) {
    if (W1_size[maxdimlen] <= 0.0) {
      b_n = 0.0;
    } else {
      b_n *= W1_size[maxdimlen];
    }
  }

  if (!(b_n <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &oc_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      "Coder:MATLAB:pmaxsize", 0);
  }

  for (i1 = 0; i1 < 2; i1++) {
    num[i1] = (int32_T)W1_size[i1];
  }

  maxdimlen = loop_ub;
  if (1 > loop_ub) {
    maxdimlen = 1;
  }

  maxdimlen = muIntScalarMax_sint32(loop_ub, maxdimlen);
  if (num[0] > maxdimlen) {
    b_st.site = &j_emlrtRSI;
    error(&b_st);
  }

  if (num[1] > maxdimlen) {
    b_st.site = &j_emlrtRSI;
    error(&b_st);
  }

  overflow = (num[0] >= 0);
  if (overflow && (num[1] >= 0)) {
  } else {
    overflow = false;
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2018a(&st, &rc_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if (num[0] * num[1] != loop_ub) {
    emlrtErrorWithMessageIdR2018a(&st, &qc_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emlrtMEXProfilingStatement(7, isMexOutdated);
  if (index_idx_1 > index_idx_2 - 1.0) {
    i1 = 0;
    i = 0;
  } else {
    i1 = X->size[0];
    if (index_idx_1 != (int32_T)muDoubleScalarFloor(index_idx_1)) {
      emlrtIntegerCheckR2012b(index_idx_1, &i_emlrtDCI, sp);
    }

    maxdimlen = (int32_T)index_idx_1;
    if (!((maxdimlen >= 1) && (maxdimlen <= i1))) {
      emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i1, &k_emlrtBCI, sp);
    }

    i1 = maxdimlen - 1;
    maxdimlen = X->size[0];
    b_n = index_idx_2 - 1.0;
    if (b_n != (int32_T)muDoubleScalarFloor(b_n)) {
      emlrtIntegerCheckR2012b(b_n, &h_emlrtDCI, sp);
    }

    i = (int32_T)b_n;
    if (!((i >= 1) && (i <= maxdimlen))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, maxdimlen, &j_emlrtBCI, sp);
    }
  }

  emxInit_real_T1(sp, &b_x, 1, &b_emlrtRTEI, true);
  y[0] = 1;
  y[1] = i - i1;
  st.site = &b_emlrtRSI;
  indexShapeCheck(&st, X->size[0], y);
  st.site = &b_emlrtRSI;
  maxdimlen = b_x->size[0];
  b_x->size[0] = i - i1;
  emxEnsureCapacity_real_T(&st, b_x, maxdimlen, &b_emlrtRTEI);
  loop_ub = i - i1;
  for (maxdimlen = 0; maxdimlen < loop_ub; maxdimlen++) {
    b_x->data[maxdimlen] = X->data[i1 + maxdimlen];
  }

  b_st.site = &i_emlrtRSI;
  maxdimlen = 0;
  guard1 = false;
  do {
    exitg2 = 0;
    if (maxdimlen < 2) {
      if ((W2_size[maxdimlen] != muDoubleScalarFloor(W2_size[maxdimlen])) ||
          muDoubleScalarIsInf(W2_size[maxdimlen])) {
        guard1 = true;
        exitg2 = 1;
      } else {
        maxdimlen++;
        guard1 = false;
      }
    } else {
      maxdimlen = 0;
      exitg2 = 2;
    }
  } while (exitg2 == 0);

  if (exitg2 == 1) {
  } else {
    exitg1 = false;
    while ((!exitg1) && (maxdimlen < 2)) {
      if ((W2_size[maxdimlen] < -2.147483648E+9) || (W2_size[maxdimlen] >
           2.147483647E+9)) {
        guard1 = true;
        exitg1 = true;
      } else {
        maxdimlen++;
      }
    }
  }

  if (guard1) {
    emlrtErrorWithMessageIdR2018a(&b_st, &pc_emlrtRTEI,
      "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector",
      "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector", 4, 12,
      MIN_int32_T, 12, MAX_int32_T);
  }

  b_n = 1.0;
  for (maxdimlen = 0; maxdimlen < 2; maxdimlen++) {
    if (W2_size[maxdimlen] <= 0.0) {
      b_n = 0.0;
    } else {
      b_n *= W2_size[maxdimlen];
    }
  }

  if (!(b_n <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &oc_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      "Coder:MATLAB:pmaxsize", 0);
  }

  for (maxdimlen = 0; maxdimlen < 2; maxdimlen++) {
    b_num[maxdimlen] = (int32_T)W2_size[maxdimlen];
  }

  maxdimlen = (i - i1) - 1;
  if (1 > i - i1) {
    maxdimlen = 0;
  }

  i2 = i - i1;
  i3 = maxdimlen + 1;
  maxdimlen = muIntScalarMax_sint32(i2, i3);
  if (b_num[0] > maxdimlen) {
    b_st.site = &j_emlrtRSI;
    error(&b_st);
  }

  if (1 > maxdimlen) {
    b_st.site = &j_emlrtRSI;
    error(&b_st);
  }

  overflow = (b_num[0] >= 0);
  if (!overflow) {
    emlrtErrorWithMessageIdR2018a(&st, &rc_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if (b_num[0] != i - i1) {
    emlrtErrorWithMessageIdR2018a(&st, &qc_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emlrtMEXProfilingStatement(8, isMexOutdated);
  if (index_idx_2 > index_idx_3 - 1.0) {
    i1 = 0;
    i = 0;
  } else {
    i1 = X->size[0];
    if (index_idx_2 != (int32_T)muDoubleScalarFloor(index_idx_2)) {
      emlrtIntegerCheckR2012b(index_idx_2, &g_emlrtDCI, sp);
    }

    maxdimlen = (int32_T)index_idx_2;
    if (!((maxdimlen >= 1) && (maxdimlen <= i1))) {
      emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i1, &i_emlrtBCI, sp);
    }

    i1 = maxdimlen - 1;
    maxdimlen = X->size[0];
    b_n = index_idx_3 - 1.0;
    if (b_n != (int32_T)muDoubleScalarFloor(b_n)) {
      emlrtIntegerCheckR2012b(b_n, &f_emlrtDCI, sp);
    }

    i = (int32_T)b_n;
    if (!((i >= 1) && (i <= maxdimlen))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, maxdimlen, &h_emlrtBCI, sp);
    }
  }

  emxInit_real_T1(sp, &c_x, 1, &c_emlrtRTEI, true);
  y[0] = 1;
  y[1] = i - i1;
  st.site = &c_emlrtRSI;
  indexShapeCheck(&st, X->size[0], y);
  st.site = &c_emlrtRSI;
  maxdimlen = c_x->size[0];
  c_x->size[0] = i - i1;
  emxEnsureCapacity_real_T(&st, c_x, maxdimlen, &c_emlrtRTEI);
  loop_ub = i - i1;
  for (maxdimlen = 0; maxdimlen < loop_ub; maxdimlen++) {
    c_x->data[maxdimlen] = X->data[i1 + maxdimlen];
  }

  b_st.site = &i_emlrtRSI;
  maxdimlen = 0;
  guard1 = false;
  do {
    exitg2 = 0;
    if (maxdimlen < 2) {
      if ((W3_size[maxdimlen] != muDoubleScalarFloor(W3_size[maxdimlen])) ||
          muDoubleScalarIsInf(W3_size[maxdimlen])) {
        guard1 = true;
        exitg2 = 1;
      } else {
        maxdimlen++;
        guard1 = false;
      }
    } else {
      maxdimlen = 0;
      exitg2 = 2;
    }
  } while (exitg2 == 0);

  if (exitg2 == 1) {
  } else {
    exitg1 = false;
    while ((!exitg1) && (maxdimlen < 2)) {
      if ((W3_size[maxdimlen] < -2.147483648E+9) || (W3_size[maxdimlen] >
           2.147483647E+9)) {
        guard1 = true;
        exitg1 = true;
      } else {
        maxdimlen++;
      }
    }
  }

  if (guard1) {
    emlrtErrorWithMessageIdR2018a(&b_st, &pc_emlrtRTEI,
      "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector",
      "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector", 4, 12,
      MIN_int32_T, 12, MAX_int32_T);
  }

  b_n = 1.0;
  for (maxdimlen = 0; maxdimlen < 2; maxdimlen++) {
    if (W3_size[maxdimlen] <= 0.0) {
      b_n = 0.0;
    } else {
      b_n *= W3_size[maxdimlen];
    }
  }

  if (!(b_n <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &oc_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      "Coder:MATLAB:pmaxsize", 0);
  }

  for (maxdimlen = 0; maxdimlen < 2; maxdimlen++) {
    c_num[maxdimlen] = (int32_T)W3_size[maxdimlen];
  }

  sz_idx_0 = c_num[0];
  sz_idx_1 = c_num[1];
  maxdimlen = (i - i1) - 1;
  if (1 > i - i1) {
    maxdimlen = 0;
  }

  i4 = i - i1;
  i5 = maxdimlen + 1;
  maxdimlen = muIntScalarMax_sint32(i4, i5);
  if (c_num[0] > maxdimlen) {
    b_st.site = &j_emlrtRSI;
    error(&b_st);
  }

  if (c_num[1] > maxdimlen) {
    b_st.site = &j_emlrtRSI;
    error(&b_st);
  }

  overflow = (c_num[0] >= 0);
  if (overflow && (c_num[1] >= 0)) {
  } else {
    overflow = false;
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2018a(&st, &rc_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if (c_num[0] * c_num[1] != i - i1) {
    emlrtErrorWithMessageIdR2018a(&st, &qc_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emlrtMEXProfilingStatement(9, isMexOutdated);
  if (index_idx_3 > X->size[0]) {
    i1 = 0;
    i = 0;
  } else {
    i1 = X->size[0];
    if (index_idx_3 != (int32_T)muDoubleScalarFloor(index_idx_3)) {
      emlrtIntegerCheckR2012b(index_idx_3, &e_emlrtDCI, sp);
    }

    maxdimlen = (int32_T)index_idx_3;
    if (!((maxdimlen >= 1) && (maxdimlen <= i1))) {
      emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i1, &g_emlrtBCI, sp);
    }

    i1 = maxdimlen - 1;
    maxdimlen = X->size[0];
    i = X->size[0];
    if (!((i >= 1) && (i <= maxdimlen))) {
      emlrtDynamicBoundsCheckR2012b(i, 1, maxdimlen, &f_emlrtBCI, sp);
    }
  }

  emxInit_real_T1(sp, &d_x, 1, &d_emlrtRTEI, true);
  y[0] = 1;
  y[1] = i - i1;
  st.site = &d_emlrtRSI;
  indexShapeCheck(&st, X->size[0], y);
  st.site = &d_emlrtRSI;
  maxdimlen = d_x->size[0];
  d_x->size[0] = i - i1;
  emxEnsureCapacity_real_T(&st, d_x, maxdimlen, &d_emlrtRTEI);
  loop_ub = i - i1;
  for (maxdimlen = 0; maxdimlen < loop_ub; maxdimlen++) {
    d_x->data[maxdimlen] = X->data[i1 + maxdimlen];
  }

  b_st.site = &i_emlrtRSI;
  maxdimlen = 0;
  guard1 = false;
  do {
    exitg2 = 0;
    if (maxdimlen < 2) {
      if ((C_size[maxdimlen] != muDoubleScalarFloor(C_size[maxdimlen])) ||
          muDoubleScalarIsInf(C_size[maxdimlen])) {
        guard1 = true;
        exitg2 = 1;
      } else {
        maxdimlen++;
        guard1 = false;
      }
    } else {
      maxdimlen = 0;
      exitg2 = 2;
    }
  } while (exitg2 == 0);

  if (exitg2 == 1) {
  } else {
    exitg1 = false;
    while ((!exitg1) && (maxdimlen < 2)) {
      if ((C_size[maxdimlen] < -2.147483648E+9) || (C_size[maxdimlen] >
           2.147483647E+9)) {
        guard1 = true;
        exitg1 = true;
      } else {
        maxdimlen++;
      }
    }
  }

  if (guard1) {
    emlrtErrorWithMessageIdR2018a(&b_st, &pc_emlrtRTEI,
      "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector",
      "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector", 4, 12,
      MIN_int32_T, 12, MAX_int32_T);
  }

  b_n = 1.0;
  for (maxdimlen = 0; maxdimlen < 2; maxdimlen++) {
    if (C_size[maxdimlen] <= 0.0) {
      b_n = 0.0;
    } else {
      b_n *= C_size[maxdimlen];
    }
  }

  if (!(b_n <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &oc_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      "Coder:MATLAB:pmaxsize", 0);
  }

  for (maxdimlen = 0; maxdimlen < 2; maxdimlen++) {
    c_num[maxdimlen] = (int32_T)C_size[maxdimlen];
  }

  maxdimlen = (i - i1) - 1;
  if (1 > i - i1) {
    maxdimlen = 0;
  }

  i6 = i - i1;
  i7 = maxdimlen + 1;
  maxdimlen = muIntScalarMax_sint32(i6, i7);
  if (c_num[0] > maxdimlen) {
    b_st.site = &j_emlrtRSI;
    error(&b_st);
  }

  if (c_num[1] > maxdimlen) {
    b_st.site = &j_emlrtRSI;
    error(&b_st);
  }

  overflow = (c_num[0] >= 0);
  if (overflow && (c_num[1] >= 0)) {
  } else {
    overflow = false;
  }

  if (!overflow) {
    emlrtErrorWithMessageIdR2018a(&st, &rc_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if (c_num[0] * c_num[1] != i - i1) {
    emlrtErrorWithMessageIdR2018a(&st, &qc_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emlrtMEXProfilingStatement(10, isMexOutdated);
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &d_emlrtDCI, sp);
  }

  if (n != (int32_T)muDoubleScalarFloor(n)) {
    emlrtIntegerCheckR2012b(n, &c_emlrtDCI, sp);
  }

  if (!(q >= 0.0)) {
    emlrtNonNegativeCheckR2012b(q, &b_emlrtDCI, sp);
  }

  if (q != (int32_T)muDoubleScalarFloor(q)) {
    emlrtIntegerCheckR2012b(q, &emlrtDCI, sp);
  }

  emlrtMEXProfilingStatement(11, isMexOutdated);
  i1 = de->size[0];
  b_n = (m * p * 2.0 + m * q) + p;
  if (!(b_n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(b_n, &l_emlrtDCI, sp);
  }

  if (b_n != (int32_T)muDoubleScalarFloor(b_n)) {
    emlrtIntegerCheckR2012b(b_n, &k_emlrtDCI, sp);
  }

  de->size[0] = (int32_T)b_n;
  emxEnsureCapacity_real_T(sp, de, i1, &e_emlrtRTEI);
  b_n = (m * p * 2.0 + m * q) + p;
  if (!(b_n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(b_n, &l_emlrtDCI, sp);
  }

  if (b_n != (int32_T)muDoubleScalarFloor(b_n)) {
    emlrtIntegerCheckR2012b(b_n, &k_emlrtDCI, sp);
  }

  loop_ub = (int32_T)b_n;
  for (i1 = 0; i1 < loop_ub; i1++) {
    de->data[i1] = 0.0;
  }

  emxInit_real_T(sp, &y_e, 2, &v_emlrtRTEI, true);
  emlrtMEXProfilingStatement(12, isMexOutdated);
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, n, mxDOUBLE_CLASS, (int32_T)n,
    &sc_emlrtRTEI, sp);
  i1 = y_e->size[0] * y_e->size[1];
  y_e->size[0] = (int32_T)n;
  y_e->size[1] = (int32_T)q;
  emxEnsureCapacity_real_T1(sp, y_e, i1, &f_emlrtRTEI);
  i = 0;
  emxInit_real_T(sp, &b_y, 2, &w_emlrtRTEI, true);
  emxInit_real_T(sp, &V, 2, &x_emlrtRTEI, true);
  emxInit_int32_T(sp, &r0, 1, &y_emlrtRTEI, true);
  emxInit_real_T1(sp, &z, 1, &i_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_z, 1, &h_emlrtRTEI, true);
  emxInit_real_T(sp, &dW3, 2, &y_emlrtRTEI, true);
  emxInit_real_T(sp, &dC, 2, &y_emlrtRTEI, true);
  emxInit_real_T1(sp, &c_y, 1, &r_emlrtRTEI, true);
  emxInit_real_T(sp, &e_x, 2, &o_emlrtRTEI, true);
  emxInit_real_T(sp, &b_input, 2, &g_emlrtRTEI, true);
  while (i <= (int32_T)n - 1) {
    emlrtMEXProfilingStatement(13, isMexOutdated);
    loop_ub = input->size[1];
    i1 = input->size[0];
    if (!((i + 1 >= 1) && (i + 1 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, i1, &e_emlrtBCI, sp);
    }

    maxdimlen = i + 1;
    i1 = b_input->size[0] * b_input->size[1];
    b_input->size[0] = 1;
    b_input->size[1] = loop_ub;
    emxEnsureCapacity_real_T1(sp, b_input, i1, &g_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_input->data[b_input->size[0] * i1] = input->data[(maxdimlen +
        input->size[0] * i1) - 1];
    }

    d_num[0] = num[0];
    d_num[1] = num[1];
    e_num[0] = b_num[0];
    e_num[1] = 1;
    sz[0] = sz_idx_0;
    sz[1] = sz_idx_1;
    f_num[0] = c_num[0];
    f_num[1] = c_num[1];
    b_y_e = *x;
    b_y_e.size = (int32_T *)&d_num;
    b_y_e.numDimensions = 1;
    f_x = *b_x;
    f_x.size = (int32_T *)&e_num;
    f_x.numDimensions = 1;
    g_x = *c_x;
    g_x.size = (int32_T *)&sz;
    g_x.numDimensions = 1;
    h_x = *d_x;
    h_x.size = (int32_T *)&f_num;
    h_x.numDimensions = 1;
    st.site = &e_emlrtRSI;
    feedForward(&st, m, p, q, &b_y_e, &f_x, &g_x, &h_x, b_input, b_y, V, z, b_z);
    emlrtMEXProfilingStatement(14, isMexOutdated);
    i1 = output->size[0];
    maxdimlen = i + 1;
    if (!((maxdimlen >= 1) && (maxdimlen <= i1))) {
      emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i1, &d_emlrtBCI, sp);
    }

    for (i1 = 0; i1 < 2; i1++) {
      y[i1] = b_y->size[i1];
    }

    loop_ub = output->size[1];
    i1 = b_input->size[0] * b_input->size[1];
    b_input->size[0] = 1;
    b_input->size[1] = loop_ub;
    emxEnsureCapacity_real_T1(sp, b_input, i1, &k_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_input->data[b_input->size[0] * i1] = output->data[i + output->size[0] *
        i1];
    }

    for (i1 = 0; i1 < 2; i1++) {
      b_output[i1] = b_input->size[i1];
    }

    if ((y[0] != b_output[0]) || (y[1] != b_output[1])) {
      emlrtSizeEqCheckNDR2012b(&y[0], &b_output[0], &d_emlrtECI, sp);
    }

    i1 = y_e->size[0];
    maxdimlen = i + 1;
    if (!((maxdimlen >= 1) && (maxdimlen <= i1))) {
      emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i1, &c_emlrtBCI, sp);
    }

    loop_ub = y_e->size[1];
    i1 = r0->size[0];
    r0->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r0, i1, &l_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      r0->data[i1] = i1;
    }

    y[0] = 1;
    y[1] = r0->size[0];
    emlrtSubAssignSizeCheckR2012b(&y[0], 2, &(*(int32_T (*)[2])b_y->size)[0], 2,
      &c_emlrtECI, sp);
    loop_ub = b_y->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      y_e->data[i + y_e->size[0] * r0->data[i1]] = b_y->data[b_y->size[0] * i1]
        - output->data[i + output->size[0] * i1];
    }

    emlrtMEXProfilingStatement(15, isMexOutdated);
    emlrtMEXProfilingStatement(16, isMexOutdated);
    st.site = &f_emlrtRSI;
    i1 = y_e->size[0];
    maxdimlen = i + 1;
    if (!((maxdimlen >= 1) && (maxdimlen <= i1))) {
      emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i1, &b_emlrtBCI, &st);
    }

    i1 = input->size[0];
    maxdimlen = i + 1;
    if (!((maxdimlen >= 1) && (maxdimlen <= i1))) {
      emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i1, &emlrtBCI, &st);
    }

    emlrtMEXProfilingFunctionEntry(backPropagation_complete_name, isMexOutdated);
    emlrtMEXProfilingStatement(1, isMexOutdated);
    loop_ub = y_e->size[1];
    i1 = b_input->size[0] * b_input->size[1];
    b_input->size[0] = 1;
    b_input->size[1] = loop_ub;
    emxEnsureCapacity_real_T1(&st, b_input, i1, &m_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_input->data[b_input->size[0] * i1] = y_e->data[i + y_e->size[0] * i1];
    }

    i1 = e_x->size[0] * e_x->size[1];
    e_x->size[0] = sz_idx_0;
    e_x->size[1] = sz_idx_1;
    emxEnsureCapacity_real_T1(&st, e_x, i1, &o_emlrtRTEI);
    loop_ub = sz_idx_0 * sz_idx_1;
    for (i1 = 0; i1 < loop_ub; i1++) {
      e_x->data[i1] = c_x->data[i1];
    }

    b_st.site = &ob_emlrtRSI;
    d_outputLayer(&b_st, b_input, b_z, e_x, q, b_y, dW3);
    emlrtMEXProfilingStatement(2, isMexOutdated);
    b_st.site = &pb_emlrtRSI;
    emlrtMEXProfilingFunctionEntry(c_d_kenalLayer_Gauss_complete_n,
      isMexOutdated);
    emlrtMEXProfilingStatement(1, isMexOutdated);
    i1 = z->size[0];
    emxEnsureCapacity_real_T(&b_st, z, i1, &p_emlrtRTEI);
    loop_ub = z->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      z->data[i1] = -z->data[i1];
    }

    c_st.site = &ub_emlrtRSI;
    b_exp(&c_st, z);
    i1 = z->size[0];
    emxEnsureCapacity_real_T(&b_st, z, i1, &q_emlrtRTEI);
    loop_ub = z->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      z->data[i1] = -z->data[i1];
    }

    i1 = b_y->size[1];
    maxdimlen = z->size[0];
    if (i1 != maxdimlen) {
      emlrtSizeEqCheck1DR2012b(i1, maxdimlen, &emlrtECI, &b_st);
    }

    emlrtMEXProfilingFunctionExit(isMexOutdated);
    emlrtMEXProfilingStatement(3, isMexOutdated);
    i1 = c_y->size[0];
    c_y->size[0] = b_y->size[1];
    emxEnsureCapacity_real_T(&st, c_y, i1, &r_emlrtRTEI);
    loop_ub = b_y->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      c_y->data[i1] = b_y->data[i1] * z->data[i1];
    }

    g_num[0] = b_num[0];
    g_num[1] = 1;
    b_y_e = *b_x;
    b_y_e.size = (int32_T *)&g_num;
    b_y_e.numDimensions = 1;
    b_st.site = &qb_emlrtRSI;
    d_radiusLayer(&b_st, c_y, V, &b_y_e, m, p, e_x, z);
    emlrtMEXProfilingStatement(4, isMexOutdated);
    loop_ub = input->size[1];
    i1 = b_input->size[0] * b_input->size[1];
    b_input->size[0] = 1;
    b_input->size[1] = loop_ub;
    emxEnsureCapacity_real_T1(&st, b_input, i1, &s_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_input->data[b_input->size[0] * i1] = input->data[i + input->size[0] * i1];
    }

    b_st.site = &rb_emlrtRSI;
    d_inputLayer(&b_st, e_x, b_input, m, p, V, dC);
    emlrtMEXProfilingFunctionExit(isMexOutdated);
    emlrtMEXProfilingStatement(17, isMexOutdated);
    i1 = b_z->size[0];
    b_z->size[0] = ((V->size[0] * V->size[1] + z->size[0]) + dW3->size[0] *
                    dW3->size[1]) + dC->size[0] * dC->size[1];
    emxEnsureCapacity_real_T(sp, b_z, i1, &t_emlrtRTEI);
    loop_ub = V->size[0] * V->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_z->data[i1] = V->data[i1] / n / q;
    }

    loop_ub = z->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_z->data[i1 + V->size[0] * V->size[1]] = z->data[i1] / n / q;
    }

    loop_ub = dW3->size[0] * dW3->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_z->data[(i1 + V->size[0] * V->size[1]) + z->size[0]] = dW3->data[i1] / n
        / q;
    }

    loop_ub = dC->size[0] * dC->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_z->data[((i1 + V->size[0] * V->size[1]) + z->size[0]) + dW3->size[0] *
        dW3->size[1]] = dC->data[i1] / n / q;
    }

    i1 = de->size[0];
    maxdimlen = b_z->size[0];
    if (i1 != maxdimlen) {
      emlrtSizeEqCheck1DR2012b(i1, maxdimlen, &b_emlrtECI, sp);
    }

    i1 = de->size[0];
    emxEnsureCapacity_real_T(sp, de, i1, &u_emlrtRTEI);
    loop_ub = de->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      de->data[i1] += b_z->data[i1];
    }

    emlrtMEXProfilingStatement(18, isMexOutdated);
    emlrtMEXProfilingStatement(19, isMexOutdated);
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(sp, &b_input);
  emxFree_real_T(sp, &e_x);
  emxFree_real_T(sp, &c_y);
  emxFree_real_T(sp, &dC);
  emxFree_real_T(sp, &dW3);
  emxFree_real_T(sp, &d_x);
  emxFree_real_T(sp, &c_x);
  emxFree_real_T(sp, &b_x);
  emxFree_real_T(sp, &x);
  emxFree_int32_T(sp, &r0);
  emxFree_real_T(sp, &V);
  emxFree_real_T(sp, &b_y);
  emlrtMEXProfilingStatement(20, isMexOutdated);
  st.site = &g_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  d_st.site = &gb_emlrtRSI;
  y_e_idx_0 = (uint32_T)(y_e->size[0] * y_e->size[1]);
  i1 = b_z->size[0];
  b_z->size[0] = (int32_T)y_e_idx_0;
  emxEnsureCapacity_real_T(&d_st, b_z, i1, &h_emlrtRTEI);
  y_e_idx_0 = (uint32_T)(y_e->size[0] * y_e->size[1]);
  b_y_e_idx_0 = (uint32_T)(y_e->size[0] * y_e->size[1]);
  i1 = z->size[0];
  z->size[0] = (int32_T)b_y_e_idx_0;
  emxEnsureCapacity_real_T(&d_st, z, i1, &i_emlrtRTEI);
  c_y_e[0] = y_e->size[0] * y_e->size[1];
  b_y_e = *y_e;
  b_y_e.size = (int32_T *)&c_y_e;
  b_y_e.numDimensions = 1;
  if (!b_dimagree(z, &b_y_e)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &nc_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  b_y_e_idx_0 = (uint32_T)(y_e->size[0] * y_e->size[1]);
  i1 = z->size[0];
  z->size[0] = (int32_T)b_y_e_idx_0;
  emxEnsureCapacity_real_T(&c_st, z, i1, &j_emlrtRTEI);
  d_st.site = &hb_emlrtRSI;
  e_st.site = &ib_emlrtRSI;
  overflow = ((!(1 > b_z->size[0])) && (b_z->size[0] > 2147483646));
  emxFree_real_T(&e_st, &b_z);
  if (overflow) {
    f_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }

  for (maxdimlen = 0; maxdimlen < (int32_T)y_e_idx_0; maxdimlen++) {
    z->data[maxdimlen] = y_e->data[maxdimlen] * y_e->data[maxdimlen];
  }

  emxFree_real_T(&d_st, &y_e);
  st.site = &g_emlrtRSI;
  b_st.site = &cc_emlrtRSI;
  if ((z->size[0] == 1) || (z->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&b_st, &mc_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  c_st.site = &dc_emlrtRSI;
  if (z->size[0] == 0) {
    b_n = 0.0;
  } else {
    d_st.site = &ec_emlrtRSI;
    b_n = z->data[0];
    e_st.site = &fc_emlrtRSI;
    overflow = ((!(2 > z->size[0])) && (z->size[0] > 2147483646));
    if (overflow) {
      f_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }

    for (maxdimlen = 2; maxdimlen <= z->size[0]; maxdimlen++) {
      b_n += z->data[maxdimlen - 1];
    }
  }

  emxFree_real_T(&c_st, &z);
  b_n = b_n / n / q;
  st.site = &g_emlrtRSI;
  if (b_n < 0.0) {
    b_st.site = &gc_emlrtRSI;
    b_error(&b_st);
  }

  *e = muDoubleScalarSqrt(b_n);
  emlrtMEXProfilingStatement(21, isMexOutdated);
  emlrtMEXProfilingStatement(22, isMexOutdated);
  i1 = de->size[0];
  emxEnsureCapacity_real_T(sp, de, i1, &n_emlrtRTEI);
  loop_ub = de->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    de->data[i1] /= *e;
  }

  emlrtMEXProfilingStatement(23, isMexOutdated);
  emlrtMEXProfilingFunctionExit(isMexOutdated);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (rmse.c) */

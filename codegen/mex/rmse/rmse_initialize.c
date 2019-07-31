/*
 * rmse_initialize.c
 *
 * Code generation for function 'rmse_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rmse.h"
#include "rmse_initialize.h"
#include "_coder_rmse_mex.h"
#include "rmse_data.h"

/* Function Declarations */
static void rmse_once(void);

/* Function Definitions */
static void rmse_once(void)
{
  int32_T i0;
  int32_T iv0[23];
  int32_T iv1[4];
  int32_T iv2[3];
  int32_T iv3[1];
  int32_T iv4[2];
  d_inputLayer_complete_name =
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_inputLayer.m>d_inputLayer(codegen)";
  d_radiusLayer_complete_name =
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_radiusLayer.m>d_radiusLayer(codegen)";
  c_d_kenalLayer_Gauss_complete_n =
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_kenalLayer_Gauss.m>d_kenalLayer_Gauss(codegen)";
  d_outputLayer_complete_name =
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_outputLayer.m>d_outputLayer(codegen)";
  backPropagation_complete_name =
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\backPropagation.m>backPropagation(codegen)";
  outputLayer_complete_name =
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\outputLayer.m>outputLayer(codegen)";
  kenalLayer_Gauss_complete_name =
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\kenalLayer_Gauss.m>kenalLayer_Gauss(codegen)";
  radiusLayer_complete_name =
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\radiusLayer.m>radiusLayer(codegen)";
  inputLayer_complete_name =
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\inputLayer.m>inputLayer(codegen)";
  feedForward_complete_name =
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\feedForward.m>feedForward(codegen)";
  rmse_complete_name =
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m>rmse(codegen)";
  isMexOutdated = emlrtProfilerCheckMEXOutdated();
  for (i0 = 0; i0 < 23; i0++) {
    iv0[i0] = 2 + i0;
  }

  emlrtProfilerRegisterMEXFcn(rmse_complete_name,
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\rmse.m", "rmse", 23, iv0,
    isMexOutdated);
  for (i0 = 0; i0 < 4; i0++) {
    iv1[i0] = 2 + i0;
  }

  emlrtProfilerRegisterMEXFcn(feedForward_complete_name,
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\feedForward.m", "feedForward", 4,
    iv1, isMexOutdated);
  for (i0 = 0; i0 < 4; i0++) {
    iv1[i0] = 2 + i0;
  }

  emlrtProfilerRegisterMEXFcn(inputLayer_complete_name,
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\inputLayer.m", "inputLayer", 4,
    iv1, isMexOutdated);
  for (i0 = 0; i0 < 3; i0++) {
    iv2[i0] = 2 + i0;
  }

  emlrtProfilerRegisterMEXFcn(radiusLayer_complete_name,
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\radiusLayer.m", "radiusLayer", 3,
    iv2, isMexOutdated);
  iv3[0] = 2;
  emlrtProfilerRegisterMEXFcn(kenalLayer_Gauss_complete_name,
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\kenalLayer_Gauss.m",
    "kenalLayer_Gauss", 1, iv3, isMexOutdated);
  for (i0 = 0; i0 < 2; i0++) {
    iv4[i0] = 2 + i0;
  }

  emlrtProfilerRegisterMEXFcn(outputLayer_complete_name,
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\outputLayer.m", "outputLayer", 2,
    iv4, isMexOutdated);
  for (i0 = 0; i0 < 4; i0++) {
    iv1[i0] = 2 + i0;
  }

  emlrtProfilerRegisterMEXFcn(backPropagation_complete_name,
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\backPropagation.m",
    "backPropagation", 4, iv1, isMexOutdated);
  for (i0 = 0; i0 < 3; i0++) {
    iv2[i0] = 2 + i0;
  }

  emlrtProfilerRegisterMEXFcn(d_outputLayer_complete_name,
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_outputLayer.m",
    "d_outputLayer", 3, iv2, isMexOutdated);
  iv3[0] = 2;
  emlrtProfilerRegisterMEXFcn(c_d_kenalLayer_Gauss_complete_n,
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_kenalLayer_Gauss.m",
    "d_kenalLayer_Gauss", 1, iv3, isMexOutdated);
  for (i0 = 0; i0 < 4; i0++) {
    iv1[i0] = 2 + i0;
  }

  emlrtProfilerRegisterMEXFcn(d_radiusLayer_complete_name,
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_radiusLayer.m",
    "d_radiusLayer", 4, iv1, isMexOutdated);
  for (i0 = 0; i0 < 4; i0++) {
    iv1[i0] = 2 + i0;
  }

  emlrtProfilerRegisterMEXFcn(d_inputLayer_complete_name,
    "D:\\MATLAB\\machinelearning\\rbfnn\\RBFNN\\d_inputLayer.m", "d_inputLayer",
    4, iv1, isMexOutdated);
}

void rmse_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    rmse_once();
  }
}

/* End of code generation (rmse_initialize.c) */

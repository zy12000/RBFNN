/*
 * rmse_terminate.c
 *
 * Code generation for function 'rmse_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rmse.h"
#include "rmse_terminate.h"
#include "_coder_rmse_mex.h"
#include "rmse_data.h"

/* Function Definitions */
void rmse_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtProfilerUnregisterMEXFcn(rmse_complete_name, isMexOutdated);
  emlrtProfilerUnregisterMEXFcn(feedForward_complete_name, isMexOutdated);
  emlrtProfilerUnregisterMEXFcn(inputLayer_complete_name, isMexOutdated);
  emlrtProfilerUnregisterMEXFcn(radiusLayer_complete_name, isMexOutdated);
  emlrtProfilerUnregisterMEXFcn(kenalLayer_Gauss_complete_name, isMexOutdated);
  emlrtProfilerUnregisterMEXFcn(outputLayer_complete_name, isMexOutdated);
  emlrtProfilerUnregisterMEXFcn(backPropagation_complete_name, isMexOutdated);
  emlrtProfilerUnregisterMEXFcn(d_outputLayer_complete_name, isMexOutdated);
  emlrtProfilerUnregisterMEXFcn(c_d_kenalLayer_Gauss_complete_n, isMexOutdated);
  emlrtProfilerUnregisterMEXFcn(d_radiusLayer_complete_name, isMexOutdated);
  emlrtProfilerUnregisterMEXFcn(d_inputLayer_complete_name, isMexOutdated);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void rmse_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (rmse_terminate.c) */

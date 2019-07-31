/*
 * _coder_rmse_mex.c
 *
 * Code generation for function '_coder_rmse_mex'
 *
 */

/* Include files */
#include "rmse.h"
#include "_coder_rmse_mex.h"
#include "rmse_terminate.h"
#include "_coder_rmse_api.h"
#include "rmse_initialize.h"
#include "rmse_data.h"

/* Function Declarations */
static void rmse_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs, const
  mxArray *prhs[7]);

/* Function Definitions */
static void rmse_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs, const
  mxArray *prhs[7])
{
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 7) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 7, 4, 4,
                        "rmse");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 4,
                        "rmse");
  }

  /* Call the function. */
  rmse_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  rmse_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(rmse_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  rmse_initialize();

  /* Dispatch the entry-point. */
  rmse_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_rmse_mex.c) */

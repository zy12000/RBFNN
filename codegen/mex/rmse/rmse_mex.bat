@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2018a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2018a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=rmse_mex
set MEX_NAME=rmse_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for rmse > rmse_mex.mki
echo COMPILER=%COMPILER%>> rmse_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> rmse_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> rmse_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> rmse_mex.mki
echo LINKER=%LINKER%>> rmse_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> rmse_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> rmse_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> rmse_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> rmse_mex.mki
echo OMPFLAGS= >> rmse_mex.mki
echo OMPLINKFLAGS= >> rmse_mex.mki
echo EMC_COMPILER=msvc150>> rmse_mex.mki
echo EMC_CONFIG=optim>> rmse_mex.mki
"C:\Program Files\MATLAB\R2018a\bin\win64\gmake" -j 1 -B -f rmse_mex.mk

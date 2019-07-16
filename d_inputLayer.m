function [dW,dC]=d_inputLayer(dF,X,m,p)
dF=reshape(dF,m,p);
X=diag(X);
dW=dF*X';
dC=-dF;
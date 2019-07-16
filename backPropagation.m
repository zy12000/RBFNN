function [dW1,dW2,dW3,dC]=backPropagation(V,R2,H,m,p,W2,W3,X)
[dH,dW3]=d_outputLayer(H,W3);
dR2=d_kenalLayer_Gauss(dH,R2);
[dV,dW2]=d_radiusLayer(dR2,V,W2,m,p);
[dW1,dC]=d_inputLayer(dV,X,m,p);

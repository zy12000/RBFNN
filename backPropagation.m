function [dW1,dW2,dW3,dC]=backPropagation(d,V,R2,H,m,p,q,W2,W3,X)
[dH,dW3]=d_outputLayer(d,H,W3,q);
dR2=d_kenalLayer_Gauss(dH,R2);
[dV,dW2]=d_radiusLayer(dR2,V,W2,m,p);
[dW1,dC]=d_inputLayer(dV,X,m,p);

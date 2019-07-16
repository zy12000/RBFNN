function [y,V,R2,H]=feedForward(m,p,W1,W2,W3,C,X)
V=inputLayer(X,W1,C,m,p);
R2=radiusLayer(V,W2,m,p);
H=kenalLayer_Gauss(R2);
y=outputLayer(H,W3);
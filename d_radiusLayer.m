function [dV,dW]=d_radiusLayer(dF,V,W,m,p)
V=reshape(V,m,p);
W=reshape(W,p,1);
dV=dF*W'.*V*2;
dW=(V.^2)'*dF;
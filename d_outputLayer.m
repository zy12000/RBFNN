function [dH,dW]=d_outputLayer(d,H,W,q)
W=reshape(W,[],q);
dH=d*W';
dW=H(:)*d;
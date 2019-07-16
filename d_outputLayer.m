function [dH,dW]=d_outputLayer(H,W)
dH=W(:);
dW=H(:);
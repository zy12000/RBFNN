function y=outputLayer(H,W,q)
W=reshape(W,[],q);
y=H(:)'*W;
function R2=radiusLayer(V,W,m,p)
V=reshape(V,m,p);
W=reshape(W,p,1);
R2=V.^2*W;
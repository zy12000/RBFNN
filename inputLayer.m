function V=inputLayer(X,W,C,m,p)
W=reshape(W,m,p);
C=reshape(C,m,p);
X=diag(X);
V=W*X-C;
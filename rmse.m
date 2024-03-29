function [e,de]=rmse(X,input,output,m,n,p)
W1_size=[m,p];
W2_size=[p,1];
W3_size=[m,1];
C_size=[m,p];
index=[1,m*p+1,m*p+p+1,m*p+p+m+1];
W1=reshape(X(index(1):index(2)-1),W1_size);
W2=reshape(X(index(2):index(3)-1),W2_size);
W3=reshape(X(index(3):index(4)-1),W3_size);
C=reshape(X(index(4):end),C_size);
y_e=zeros(n,1);
de=zeros(m*p*2+m+p,1);
for i=1:n
    [y,V,R2,H]=feedForward(m,p,W1,W2,W3,C,input(i,:));
    y_e(i)=y-output(i);
    if nargout > 1
        [dW1,dW2,dW3,dC]=backPropagation(V,R2,H,m,p,W2,W3,input(i,:));
        de=de+[dW1(:);dW2(:);dW3(:);dC(:)]*y_e(i)/n;
    end
end
e=sqrt(sum(y_e.^2)/n);
if nargout > 1
    de=de/e;
end
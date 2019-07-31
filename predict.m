function y=predict(X,input,m,p,q)
W1_size=[m,p];
W2_size=[p,1];
W3_size=[m,q];
C_size=[m,p];
n=size(input,1);
index=[1,m*p+1,m*p+p+1,m*p+p+m*q+1];
W1=reshape(X(index(1):index(2)-1),W1_size);
W2=reshape(X(index(2):index(3)-1),W2_size);
W3=reshape(X(index(3):index(4)-1),W3_size);
C=reshape(X(index(4):end),C_size);
y=zeros(n,1);
for i=1:n
    y(i)=feedForward(m,p,q,W1,W2,W3,C,input(i,:));
end

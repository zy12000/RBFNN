function X=trainnet(input,output,m,n,p,q)
f=@(x)rmse_mex(x,input,output,m,n,p,q);
options.Algorithm='quasi-newton';
options.MaxIter=200;
options.TolFun=1e-6;
options.Display='iter-detailed';
options.GradObj='on';
options.HessUpdate='bfgs';
% x0=zeros(m*p*2+m+p,1);
%x0=rand(m*p*2+m+p,1)*10-5;
W1=ones(m*p,1);
c=mean(input,1);
v=input-c;
S=v'*v/length(input);
S=diag(S);
W2=1./S;
% W2=ones(p,1);
W3=zeros(m,q);
idx=kmeans(input,m);
C=zeros(m,p);
for i=1:m
    C(i,:)=mean(input(idx==i,:),1);
end
x0=[W1(:);W2(:);W3(:);C(:)];
X = fminunc(f,x0,options);
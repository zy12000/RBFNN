function X=trainnet(input,output,m,n,p)
f=@(x)rmse(x,input,output,m,n,p);
options.Algorithm='quasi-newton';
options.MaxIter=1000;
options.TolFun=1e-15;
options.Display='iter-detailed';
options.GradObj='on';
options.HessUpdate='bfgs';
% x0=zeros(m*p*2+m+p,1);
x0=rand(m*p*2+m+p,1)*10-5;
W1=ones(m*p,1);
W2=ones(p,1);
W3=zeros(m,1);
idx=kmeans(input,m);
C=zeros(m,p);
for i=1:m
    C(i,:)=mean(input(idx==i,:),1);
end
x0=[W1(:);W2(:);W3(:);C(:)];
X = fminunc(f,x0,options);
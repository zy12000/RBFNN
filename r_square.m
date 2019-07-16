function r2 = r_square(y,y_p,adjusted)
if nargin < 3
    adjusted = 0;
end
ym=mean(y);
r2=1-sum((y-y_p).^2)/sum((y-ym).^2);
if adjusted ~= 0
    n=length(y);
    p=adjusted;
    r2=1-(1-r2)*(n-1)/(n-p-1);
end
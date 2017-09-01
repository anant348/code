#include<simplecpp>
main_program
{
cout<<"enter number of points:-";
int n;cin>>n;
double p=0,q=0,r=0,s=0;long v;
initCanvas("best_fit",600,500);
repeat(n)
{v=getClick();
long x,y;x=v/65536;y=v%65536;
Circle ci(x,y,5);
ci.imprint();
p+=x*x;q+=x;s+=y;r+=x*y;
}
double m=(n*r-q*s)/(n*p-q*q),c=(p*s-q*r)/(n*p-q*q);
Line l(0,c,600,m*600+c);
getClick();
}

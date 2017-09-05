#include <simplecpp>
main_program{
	initCanvas("q7",500,500);
	cout<<"enter number of points:-";
	int n;
	cin>>n;
	double a=0,b=0,c=0,d=0,e=0,f=0;
	Circle p(0,0,0);
	repeat(n){
		int getxy=getClick();
		double x=getxy/65536,y=getxy%65536;
        p.reset(x,y,5);
        p.imprint();
        a+=x;
        e+=(y*x);
        b+=x*x;
        f+=y*x*x;
        c+=x*x*x;
        d+=x*x*x*x;
    }
	double B=((b*(f-500*b))-(c*(e-500*a)))/(b*d-c*c),A=(-(c*(f-500*b))+(d*(e-500*a)))/(b*d-c*c);
    cout<<"A="<<A<<endl<<"B="<<B<<endl;
    double accl=.1,vx=sqrt(.5*accl/B),vy=A*vx;
    cout<<"vx="<<vx<<endl<<"vy="<<vy<<endl;
    p.reset(0,500,5);
    p.penDown();
    repeat(100){
       p.move(vx,vy);
       vy+=accl;
       wait(.1);
    }
    getClick();
}
#include <simplecpp>
main_program{
	initCanvas("q8",500,500);
	int getxy=getClick();
	double x1=getxy/65536;
	double y1=getxy%65536;
	Circle c(x1,y1,5);
	c.imprint();
	getxy=getClick();
	double x2=getxy/65536;
	double y2=getxy%65536;
	c.moveTo(x2,y2);
	c.imprint();
	getxy=getClick();
	double x3=getxy/65536;
	double y3=getxy%65536;
	c.moveTo(x3,y3);
	c.imprint();
	double x1c=(x1+x2)/2,y1c=(y1+y2)/2,x2c=(x1+x3)/2,y2c=(y1+y3)/2;
	double m1=(x1-x2)/(y2-y1),m2=(x1-x3)/(y3-y1);
	double a1=m1,b1=-1,c1=m1*x1c-y1c;
	double a2=m2,b2=-1,c2=m2*x2c-y2c;
    double x=(c1*b2-c2*b1)/(a1*b2-b1*a2),y=(a1*c2-c1*a2)/(a1*b2-b1*a2);
    double r=sqrt(pow(x1-x,2)+pow(y1-y,2));
    Circle cir(x,y,r);
    getClick();
}	
	
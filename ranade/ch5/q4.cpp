#include <simplecpp>
main_program{
	initCanvas("q4",500,500);
	int getxy=getClick();
	int originx=getxy/65536;
	int originy=getxy%65536;
	Circle c(originx,originy,5);
	getxy=getClick();
	int secx=getxy/65536;
	int secy=getxy%65536;
    Circle c2(secx,secy,5);
	c.penDown();
	double accl=.2,vy=-sqrt((-secy+originy)*2*accl),vx=-((secx-originx)*accl)/vy;
	repeat(100){
		c.move(vx,vy);
		vy+=accl;
		wait(.1);
	}
    getClick();
}
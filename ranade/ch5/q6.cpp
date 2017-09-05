#include <simplecpp>
main_program{
	initCanvas("q6",500,500);
	Rectangle r(250,250,250,250);
	double ra=0;
	Circle c(250,250,ra);
	repeat(125){
          c.reset(250,250,ra);
          ra+=1;
          wait(.1);
	}
	double l=250;
	repeat(250){
       c.reset(250,250,ra);
       ra-=.5;
       r.reset(250,250,l,l);
       l--;
       wait(.1);
	}
	getClick();
}
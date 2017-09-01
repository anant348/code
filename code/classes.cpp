#include <iostream>
using namespace std;
struct vector{
   
   double x,y,z;
   vector(double a=-1,double b=0,double c=0):x(a),y(b),z(c){
   	  
   }
   ~vector();//{
   	 // cout<<"Vector is being destroyed\n";
   	//}
   	vector operator+(vector &a){
   		return vector(x+a.x,y+a.y,z+a.z);
   	}
   	vector operator*(double t){
   		return vector(x*t,y*t,z*t);
   	}
};
struct point{
   
 	double x,y;
    point(double a=0,double b=0){
         x=a;y=b;
    }
    point(const point &source){
      
      x=source.x;y=-10;
    }
    

};
struct disk{
    point center;
	double radius;
	disk(double x=0,double y=0,double r=0):center(x,y),radius(r)
	{   }
};
int main(){
   point b(6,6);
   point a=b;
   b.x=5;
   cout<<b.x<<" "<<b.y;
} 
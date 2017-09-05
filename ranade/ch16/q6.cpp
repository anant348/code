#include <simplecpp>
void B(int i,int j,float px[],float py[],int n,float t,float &x,float &y){
   if(i-j==0) {
      x = px[i];
      y = py[i];
      return;
   }
   B(i,j-1,px,py,n,t,x,y);
   float x1,y1,x2,y2;
   x1=(1-t)*x;
   y1=(1-t)*y;
   B(i+1,j,px,py,n,t,x,y);
   x2=t*x;
   y2=t*y;
   x=x1+x2;y=y1+y2;
}
void constructCurve(float px[],float py[],int n,float delta){
   float x1,y1;
   B(0,n-1,px,py,n,0,x1,y1);
   //x1=px[0];y1=py[0];
   float t;
   for(t=delta;t<=1;t+=delta){
      float x2,y2;
      B(0,n-1,px,py,n,t,x2,y2);
      Line l(x1,y1,x2,y2);l.imprint();
      x1=x2;y1=y2;
   }
}
int main(){
   initCanvas("beizer curve",700,700);
   int n;float delta;
   cin >> n >> delta;
   float px[n],py[n];
   for(int i=0;i<n;i++){
      int z = getClick();
      px[i] = z/65536;py[i] = z%65536; 
      Circle c(z/65536,z%65536,2);c.imprint();
   }
   constructCurve(px,py,n,delta);
   getClick();
}

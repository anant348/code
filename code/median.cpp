
#include <iostream>
#include <cstdlib>
#include<algorithm>
using namespace std;

int finder(int a[],int b[],int n1,int n2,int k){
	//cout<<n1<<" "<<n2<<" "<<k<<" "<<a[0]<<" "<<b[0]<<endl;
	if(n1<=0) {return b[k-1];}
	if(n2<=0) {return a[k-1];}
	if(k<(n1/2+n2/2+2)){
    if(a[n1/2]<=b[n2/2])
        n2=n2/2;
    else
      n1=n1/2;
    return finder(a,b,n1,n2,k);
	}
	else{
    if(a[n1/2]<=b[n2/2]){
    k=k-(n1/2+1+n2/2);int temp1=n1/2,temp2=n2/2;n1=n1-(n1/2+1);n2=n2-n2/2;return finder(&a[temp1+1],&b[temp2],n1,n2,k);
    }
    else{
    k=k-(n2/2+1+n1/2);int temp1=n2/2,temp2=n1/2;n2=n2-(n2/2+1);n1=n1-n1/2;return finder(&a[temp2],&b[temp1+1],n1,n2,k);
    }
	}
}

int main(){
	int x=10,y=5,k=3;
   int a[x],b[y];
   for(int i=0;i<x;i++)
   	a[i]=rand()%10;
   for(int i=0;i<y;i++)
   	b[i]=rand()%10;
   	sort(a,a+x);sort(b,b+y);
  for(int i=0;i<x;i++)
    cout<<a[i]<<" ";
   	cout<<endl;
  for(int i=0;i<y;i++)
  cout<<b[i]<<" "; cout<<endl;
   for(int i=1;i<=x+y;i++)
   cout<<finder(a,b,x,y,i)<<" ";

}

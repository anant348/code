
#include<iostream>
using namespace std;
int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}
int min(int a,int b){
	if(a<b)
		return a;
	else return b;
}
int main(){
	int t;
	cin>>t;
	for(int k=0;k<t;k++){
        int x1,y1,x2,y2,c=0,m;
         cin>>x1>>y1>>x2>>y2;
         if(x2-x1==0){
		if(y2-y1==0)
		cout<<0<<endl;
		else
		cout<<(max(y2,y1)-min(y2,y1)-1)<<endl;
		}
		else if(y2-y1==0){
		if(x2-x1==0)
		cout<<0<<endl;
		else
		cout<<(max(x2,x1)-min(x2,x1)-1)<<endl;
		}
		else{
		for(int x=min(x1,x2)+1;x<max(x1,x2);x++)
		for(int y=min(y1,y2)+1;y<max(y1,y2);y++)
		{

                 if((x2-x1)*(y-y1)==((y2-y1)*(x-x1)))
                 c++;
        }
		cout<<c<<endl;
	}
	}
}

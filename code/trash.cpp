#include<vector>
#include<iostream>
using namespace std;
struct v{
	int a,b;
	v(){a=b=0;}
	v(int a,int b){
		cout<<a<<" "<<b<<endl;
		this->a=a;this->b=b;//cout<<"yes";
	    cout<<a<<" "<<b<<endl;
	}
	v(int c,double d){
		a=c;b=d;
	}
};
int main(){
	v v1,v2(2,3),v3(2,(float)4.5);
   cout<<v2.b<<" "<<v3.b;
}
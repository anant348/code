#include<iostream>
using namespace std;
void hanoi(int n,char a,char b,char c){
	if(n==1)
		cout<<"move from "<<a<<" to "<<c<<"\n";
	else{
		hanoi(n-1,a,c,b);
		cout<<"move from "<<a<<" to "<<c<<"\n";
		hanoi(n-1,b,a,c);
	}
}

int main(){
hanoi(3,'a','b','c');
}
#include <iostream>
using namespace std;long long int c=0;
bool check(int a[],int n);
void permutation(int n,int r,int a[],int l);
bool check2(int a[]);bool check1(int a[],int n);
void permutation(int n,int r,int a[],int l){
	if(l==r)
		{ c++;
		if(check(a,8))
			{
				for(int i=0;i<r;i++)
					cout<<a[i]<<" ";
				cout<<endl;

			}
			return;
		}
	for(int i=0;i<=n;i++){
		a[l]=i;
		permutation(n,r,a,l+1);
	}

}
bool check(int a[],int n){
   if(check1(a,n) && check2(a))
   	return true;
   else  false;

}
bool check2(int a[]){
	if(1000*(a[4]+a[0])+100*(a[1]+a[5])+10*(a[2]+a[6])+a[3]+a[1]==
	                  1000*(a[5])+100*(a[2])+10*(a[1])+a[7]+10000*(a[4]))
		return true;
	else
		return false;
}
bool check1(int a[],int n){
	for(int i=0;i<8;i++)
		for(int j=i+1;j<8;j++){
			if(a[i]==a[j])
				return false;
		}
		return true;
}


int main(){
   int a[8];
   permutation(9,8,a,0);cout<<c;

}


#include <iostream>
using namespace std;
unsigned long long int c=1000003;
unsigned long long int ncr(unsigned long long int n,unsigned long long int r){
	unsigned long long int ans1=1,ans2=1;
	for(unsigned long long int i=0;i<r;i++)
		ans1*=n-i;
	for(unsigned long long int i=1;i<=r;i++){
		ans2*=i;
	}
	ans1/=ans2;
	return ans1%c;

}
int main(){
   unsigned long long int t;
   cin>>t;
   while(t--){
    unsigned long long int no,l,r,n,ans=0;
   	cin>>no>>l>>r;n=r-l+1;
   	for(unsigned long long int i=1;i<=no;i++){
        ans+=ncr(n+i-1,i);
        ans=ans%c;
     }
     cout<<ans<<endl;
   	}
   }


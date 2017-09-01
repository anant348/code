#include<iostream>
#include<cmath>
using namespace std;
unsigned long long int num[100000000], fact[10000000];
void primegenerator(unsigned long int n,bool sieve[]){
  unsigned long int s=sqrt(n);
  for(unsigned long int i=2;i<=s;i++){
    if(sieve[i]==true){
       for(unsigned long int j=i*i;j<=n;j+=i){
         sieve[j]=false;
      }
    }
  }
}
int main(){
  bool sieve[1000002];
//unsigned long long int num[1000000], fact[1000000];
  for(unsigned long int i=2;i<=1000001;i++)
     sieve[i]=true;
  primegenerator(1000000,sieve);

  int t=1;
  //cin>>t;
  while(t--){
    unsigned long long int l=99999911111,r=99999999999;//cin>>l>>r;
    for(unsigned long long int i=l;i<=r;i++){
     num[i-l]=i;fact[i-l]=1;
    }
  //for(int i=0;i<9;i++)cout<<num[9]<<" ";
  for(int i=2;i<=1000000;i++)
  if(sieve[i])
  {
    int c,j;
    if(l%i==0)
    j=0;
    else
    j=((l)/i)*i+i-l;
    for(;j<=r-l;j+=i){
      c=0;
      while(num[j]%i==0){
          c++;num[j]/=i;
      }
      fact[j]*=c+1;

    }
  }
  //for(int i=0;i<=r-l;i++)cout<<fact[i]<<" ";
  for(int i=0;i<=r-l;i++)
  {if(num[i]>1)
     fact[i]*=2;
    //cout<<fact[i];
  }
  //for(int i=0;i<=r-l;i++)cout<<fact[i]<<" ";
  int c=0;
  for(int i=0;i<=r-l;i++){
   if(sieve[fact[i]])
     c++;
  }
  cout<<c<<endl;

  }
}

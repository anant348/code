#include<iostream>
#include<cmath>
using namespace std;
unsigned long int p[1000001],k=1;
void primegenerator(unsigned long int n,bool sieve[]){
  unsigned long int s=sqrt(n);
  for(unsigned long int i=3;i<=s;i++){
    if(sieve[i]==true){
      p[k++]=i;
       for(unsigned long int j=i*i;j<=n;j+=2*i){
         sieve[j]=false;
      }
    }
  }
  for(int i=s+1;i<=n;i++)
  {if(sieve[i]==true)
    p[k++]=i;
  }
}

unsigned long int primefactors(long long int n){
  if(n==1)
  return 1;
  unsigned long int i=0,nfactors=1,c=0,prime=2;
  long long int q=n/prime,r=n%prime;

  while(q>=prime){
    if(r==0)
      {c++;
        n=q;
      }
    else{
      c++;nfactors*=c;
      c=0;
      i++;
      //while(sieve[i]!=true) i++
      prime=p[i];
    }
    q=n/prime;r=n%prime;
  }
  if(n==prime)
  c=c+2;
  else{
  if(c==0)
   c=2;
  else {c++;nfactors*=c;c=2;}
  }
  nfactors*=c;
  //cout<<nfactors<<endl;
 return nfactors;
 //cout<<endl<<nfactors<<endl;
}

 int main(){
  bool sieve[1000002];
  for(unsigned long int i=3;i<=1000002;i+=2)
     sieve[i]=true;
     p[0]=2;
     sieve[2]=true;
  primegenerator(1000000,sieve);
 // cout<<primefactors(99999999999);
  //cout<<primefactors(5,sieve);
  //cout<<primefactors(4321800);
  int t=1;
  //cin>>t;
  for(int j=0;j<t;j++){
     unsigned long long int l=99999911111,r=99999999999;
    int c=0;
    //cin>>l>>r;
    for(long long int i=l;i<=r;i++){
      if(sieve[primefactors(i)])
        c++;
    }
    cout<<c<<endl;
  }
}



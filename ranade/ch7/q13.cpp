#include <iostream>
using namespace std;
typedef long long int ll;
int main(){
   int n;
   cin>>n;
   int x,max,maxatend=0;
   for(int i=0;i<n;i++){
      cin>>x;
      if(maxatend>0)
         maxatend+=x;
      else
         maxatend=x;
      if(max<maxatend || i==0)
         max=maxatend;

   }
   cout<<max<<endl;
}

#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int c=0;
bool check(int q[],int n)
{
   int i=n-1;
   for(int j=i-1;j>=0;j--)
   {
       if((q[i]==q[j])||(abs(i-j)==abs(q[i]-q[j])))
        return false;
   }
   return true;
}
void generate(int q[],int level,int n)
{
    if(level==n)
        {
             c++;
            return;
        }
    for(int i=0;i<n;i++)
    {
        q[level]=i;
        if(check(q,level+1))
        generate(q,level+1,n);
    }
}
int main()
{
    int n;
    cin>>n;
    int q[n];
    generate(q,0,n);
    cout<<c;
}

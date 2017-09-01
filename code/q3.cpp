#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
    int a[10],b[10],i;
    for(i=0;i<10;i++)
        a[i]=rand()%10;
    for(i=0;i<10;i++)
        b[i]=rand()%10;
        sort(a,a+10);
        sort(b,b+10);
    for(i=0;i<10;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    for(i=0;i<10;i++)
        cout<<b[i]<<" ";

}

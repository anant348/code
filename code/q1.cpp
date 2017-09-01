#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;long no,max,min,b,c;char na[40],nb[20];
    FILE *a;
    a=fopen("q1.bin","w+");
     cout<<sizeof(int)<<sizeof(char);
    cout<<"enter no of numbers to be entered:-";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>no;
        if(i==1)
        {max=no;min=no;}
        if(no>=max)
            max=no;
        if(no<=min)
        min=no;

        fprintf(a,"%ld\t\n",no);
    }
    fprintf(a,"%s   %ld %s %ld","max=",max,"min=",min);
    fseek(a,6,0);
    fscanf(a,"%s%ld",na,&b);
    cout<<na<<"\n"<<b;
    fclose(a);
    return 0;
}

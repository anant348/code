#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int c=0;
void flip(char a[],int i){
  if(a[i]=='1')
    a[i]='0';
  else
    a[i]='1';
}
void fun(char a[],int k){
    int count=1;
    for(int i=1;a[i]!='\0';i++){
      if(a[i-1]==a[i]){
        count++;
        if(count==k+1){
           flip(a,i);c++;
           count=1;
        }
      }
      else
        count=1;
    }
}
void fun1(char a[],int k){
    int count=1;
    for(int i=1;a[i]!='\0';i++){
      if(a[i-1]==a[i]){
        count++;
        if(count==k+1){
           if(a[i+1]==a[i])
           flip(a,i);
          else
            flip(a,i-1);
           count=1;c++;
        }
      }
      else
        count=1;
    }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    c=0;
    int n,k;scanf("%d%d",&n,&k);
    char a[n+1];scanf("%s",a);
    if(k!=1){
      fun1(a,k);
      printf("%d\n%s\n",c,a);
    }
  else{
    char b[n+1];strcpy(b,a);
    fun(a,k);int c1=c;c=0;
    flip(b,0);c++;
    fun(b,k);
    if(c1<=c)
      printf("%d\n%s\n",c1,a);
    else
      printf("%d\n%s\n",c,b);
  }
}
}


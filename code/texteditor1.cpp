#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int word(char a[],FILE *in){
   	fscanf(in,"%s",a);
   	int l=strlen(a);
   	a[l]=32;a[l+1]='\0';
   	return l+1;
}
int main(){
	FILE *in,*out;
	in=fopen("inputtext.txt","r+");
	out=fopen("outtext.txt","w+");
	int n=40;
	int count=0;
	while(!feof(in)){
        char a[100];a[0]='\0';
		int length=word(a,in);
	    if(count+length<=n+1){
				count+=length;
				fputs(a,out);
		}
		else{
                fprintf(out,"\n%s",a);
                count=length;
                     
		}
	}
}

#include <iostream>
#include <unistd.h>
using namespace std;
int main(){
   int pid;
   cout<<"hello \n"<<getpid()<<endl;
   pid=fork();
   cout<<"after\n";
   if(pid==0)cout<<"child "<<getpid()<<endl;
   else
      cout<<"parent "<<getpid()<<endl;
   wait();
}

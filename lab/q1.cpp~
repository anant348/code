#include <iostream>
using namespace std;
struct node{
   char a;
   node *left,*right;
};
void construct(char inOrder[],char preOrder[],node* &root,
      int n,int &s){
   if(n<=0)return;
   root = new node;
   root->right = root->left = NULL;
   root->a = preOrder[s];
   char temp = preOrder[s];
   int middle;
   for(int i=0;i<n;i++){
      if(inOrder[i]==preOrder[s]){
         middle = i;s++;
         break;
      }
   }
   char a[middle];
   for(int i=0;i<middle;i++)
      a[i]=inOrder[i];
   char b[n-middle-1];
   for(int i=middle+1,j=0;i<n;i++,j++)
      b[j] = inOrder[i];
   construct(a,preOrder,root->left,middle,s);
   construct(b,preOrder,root->right,n-middle-1,s);
}
void traverse(node *root){
   if(root==NULL)return;
   cout << root->a <<" ";
   traverse(root->left);
   traverse(root->right);
}
int main(){
   char inOrder[13],preOrder[13];
   cin >> inOrder >> preOrder;
   node *root;
   int s = 0;
   int i;
   for(i=0;inOrder[i]!='\0';i++);
   construct(inOrder,preOrder,root,i,s);
   traverse(root);
}

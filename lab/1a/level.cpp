#include <bits/stdc++.h>
using namespace std;
struct node{
  int a;
  node *left,*right;
};
void insert(node* &root,int value){
   if(root == NULL){
      root = new node;
      root->a = value;
      root->left = root->right = NULL;
   }
   else if(value < root->left)
      insert(root->left,value);
   else
      insert(root->right,value);
}
void traverse(node* &root){
   node* queue[1000];
   int start=0,count=0;
   while(start<=count)
   cout << root->a << endl;
   start++;
   if(root->left!=NULL)
      queue[count++] = root->left;
   if(root->left!=NULL)
      queue[count++] = root->right;
}
int main(){
   
}

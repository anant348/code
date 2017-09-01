#include <iostream>
#include <cstring>
using namespace std;
struct node{
   char value;
   node *left,*right;
};
int search(char a[],int low,int high,char key){
  for(int i=low;i<=high;i++){
    if(a[i]==key)
       return i;
  }
  return -1;
}
void build(node* &parent,char preorder[],char inorder[],int i,int j){
	static int k=0;
	if(i<=j){
		parent=new node;
	    parent->value=preorder[k];parent->left=parent->right=NULL;
	    int p=search(inorder,i,j,preorder[k]);k++;
	    if(p!=-1){
         build(parent->left,preorder,inorder,i,p-1);
         build(parent->right,preorder,inorder,p+1,j);
	    }
	    else{
		cout<<"wrong data\n";return;
	    }
    }
    else{
         return;
    }
}
void inprint(node *parent){
  if(parent==NULL)
    return;
  inprint(parent->left);
  cout<<parent->value<<" ";
  inprint(parent->right);
}
int main(){
	char preorder[100],inorder[100];
	cin>>preorder>>inorder;
    node *s=NULL;
	build(s,preorder,inorder,0,strlen(inorder)-1);
	inprint(s);
}

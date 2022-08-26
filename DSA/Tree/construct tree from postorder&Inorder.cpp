#include<iostream>
#include<queue>
using namespace std;
class node
{
public:
  int data;
  node* left;
  node* right;
  
  node(int d)  
  {
      data=d;
      left=NULL;
      right=NULL;
  }
};
node* buildtree(int *in,int s,int e,int *po,int &i)
{ 
    int x=-1;
    if(s>e)
    {
        return NULL;
    }
    int d=po[i];
    i--;
    node* root=new node(d);
    for(int j=s;j<=e;j++)
    {
        if(in[j]==d)
        {
         x=j;
         break;
        }
    }
   root->right=buildtree(in,x+1,e,po,i);
   root->left=buildtree(in,s,x-1,po,i);
   return root;

}

void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
   
int main() 
{
    int m;
    cin>>m;
 for(int j=0;j<m;j++)
 {
    int n;
    cin>>n;
    int in[100];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        in[i]=x;
    }
    int po[100];
     for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        po[i]=x;
    } 
    int i=n-1;
    node* root=buildtree(in,0,n-1,po,i);
    preorder(root);
  }
	return 0;
}


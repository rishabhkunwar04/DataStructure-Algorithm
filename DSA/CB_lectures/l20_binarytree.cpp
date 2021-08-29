#include<iostream>
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
node* createtree()
{
	int data;
	cin>>data;
	if(data==-1)
	{
		return NULL;
	}
	node* root=new node(data);
	root->left=createtree();
	root->right=createtree();
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
void inorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
	                                
	                                              
}
void postorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
int count(node* root)
{
	if(root==NULL)
	{
		return 0;	
	}
	int left=count(root->left);
	int right=count(root->right);
	return 1+left+right;
}
int height(node* root)
{
	if(root==NULL)
	{
	  return 0;
	}
	 int leftheight=height(root->left);
	int rightheight=height(root->right);
	
	return 1+max(leftheight,rightheight);  //inbuilt max funcn
}
int diameter(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	int op1=height(root->left)+height(root->right);
   int op2=diameter(root->left);
	int op3=diameter(root->right);
	return max(op1,max(op2,op3));
}

int main()
{
	node* root=createtree();
	cout<<"preorder is"<<endl;
	preorder(root);
	cout<<endl;
	cout<<"inorder is"<<endl;
	inorder(root);
	cout<<endl;
	cout<<"postorder is"<<endl;
	postorder(root);
	cout<<endl;
	cout<<"count of node"<<endl;
	cout<<count(root);
	cout<<endl;
	cout<<"height of tree"<<endl;
	cout<<height(root);
	cout<<endl;
	cout<<"diameter"<<endl;
	cout<<diameter(root)<<" ";
	
	
	return 0;
}



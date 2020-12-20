#include<iostream>
using namespace std;
class node
{
 public:
 node* left;
 node* right;
 int data;
 node(int d)
 {
 	data=d;
 	left=NULL;
 	right=NULL;
 	
	 }	
};

node* arrtobst(int *a,int j)
{
//	if(root==NULL)
//	{
//		return NULL;
//	}
	node* root=new node(a[j]);
	for(int i=1;i<m;i++)
	{
		if(a[i]<=root)
		{
			root->left=arrtobst(a,j);
		}
		
		else
		{
			root->right=arrtobst(a,j);
		}
	}
	return root;	
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        int x,y;
        cin>>x>>y;
        buildbst(a,0);
        preorder(root);
        print(root);
    }
	return 0;
}

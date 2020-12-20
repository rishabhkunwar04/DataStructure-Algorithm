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
node* createtree(int *pr,int i,int *in,int s,int e)
{
	int k;
	if(s>e)
	{
		return NULL;
	}
	int d=pr[i];
	node* root=new node(d);

	for(int j=s;j<=e;j++)
	{
		
		if(in[j]==d)
		{
			k=j;
			break;
		}
	}
	root->left=createtree(pr,i+1,in,s,k-1);
	root->right=createtree(pr,i+1,in,k+1,e);
	return root;
}
void display(node* root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* top=q.front();
        q.pop();
        if(top==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        
         else if(top->left==NULL && top->right==NULL)
        {
            cout<<"END "<<"=> "<<top->data<<" <="<<" END";
        }
        else  
        {
           
            if(top->left)
            {
                cout<<top->left->data<<"=> "<<top->data<<" <="<<" END";
                
            }
            if(top->right)
            {
            cout<<top->left->data<<"=> "<<top->data<<" <="<<" END";

                
            }
        }
       
    }
	
	
}
int main()
{
	int n;
	cin>>n;
	int pr[100];
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		pr[i]=x;
	}
	int m;
	cin>>m;
	int in[100];
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		in[i]=x;
	}
	node* root=createtree(pr,0,in,0,m-1);
	display(root);
	
	return 0;
}

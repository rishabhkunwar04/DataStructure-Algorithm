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
node* preorderin()
{
    int data;
    cin>>data;
     node* root=new node(data);

    if(data==false)
    {
        return NULL;
    }
    if(data==true)
    {
    root->left=preorderin();
    root->right=preorderin();
    }
  return root;
    
}
void levelor(node* root)
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
        else
        {
            cout<<top->data<<" ";
            if(top->left)
            {
        
                q.push(top->left);
            }
             if(top->right)
            {
                q.push(top->right);
            }
        }
       
    }
}
int main()
{
    node* root=preorderin();
  //  preorderin(root);
    levelor(root);
	return 0;
}

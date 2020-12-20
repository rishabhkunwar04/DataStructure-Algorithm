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
    /*if(s==e){
        return root;
    }*/
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
void print(node* root)
{
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* top=q.front();
        q.pop();
            if(top->left)
            {
                cout<<(top->left)->data<<" => ";
                q.push(top->left);
            }
            else
            {
                cout<<"END "<<"=> ";
            }
            cout<<top->data;
            if(top->right)
            {
             cout<<" <= "<<(top->right)->data;
             q.push(top->right);
            }
            else
            {
                cout<<" <= END";
            }
        cout<<endl;
    }
         
}
int main() 
{
    int n,m;
    cin>>n;
    int po[100];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        po[i]=x;
    }
    cin>>m; 
    int in[100];
     for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        in[i]=x;
    }
    int i=n-1;
    node* root=buildtree(in,0,m-1,po,i);
    print(root);
	return 0;
}


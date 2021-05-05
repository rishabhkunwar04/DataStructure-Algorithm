#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node* next;
	
	node(int d)
	{
		data=d;
		next=NULL;
	}

};
 void insertatend(node* &head,node* &tail,int d)
{
	if(head==NULL)
	{
		node* n=new node(d);
		head=n;
		tail=n;
	}
	else
	{
		node* n=new node(d);
		tail->next=n;
		tail=n;
	}
}

void insertatend1(node* &head1,node* &tail1,int d)
{
	if(head1==NULL)
	{
		node* n=new node(d);
		head1=n;
		tail1=n;
	}
	else
	{
		node* n=new node(d);
		tail1->next=n;
		tail1=n;
	}
}
	int intersect(node* head,node* head1)
	{
		node* m=head;
		while(m!=NULL)
		{
			node* n=head1;
			while(n!=NULL)
			{
				if(m->data==n->data)
				{
					return m->data;  //return instead of printing here
					//break;
				}
				n=n->next;
			}
			m=m->next;	
		}
		return -1;
	}
			

int main()
{
	node* head=NULL;
    node* tail=NULL;
    node* head1=NULL;
    node* tail1=NULL;
  //  node* m=NULL;
    int n1;
    cin>>n1;
    for(int i=0;i<n1;i++)
    {
        int x;
        cin>>x;
        insertatend(head,tail,x);     
    }
    int n2;
    cin>>n2;
    
    for(int i=0;i<n2;i++)
    {
        int x;
        cin>>x;
        insertatend1(head1,tail1,x);
        
    }
    cout<<intersect(head,head1);   //Print the value returned
   // cout<<m->data;
	return 0;
}

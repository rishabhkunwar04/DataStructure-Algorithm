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


void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

node* merge(node* &head,node* &head1)
{
    if(head==NULL)
    {
        return head1;
    }
     else if(head1==NULL)
    {
        
        return head;
    }
    node* nhead;
    if(head->data>head1->data)
    {
        nhead=head1;
        nhead->next=merge(head,head1->next);
        
    }
     else
    {
        nhead=head;
        nhead->next=merge(head->next,head1);
        
    }
    return nhead;
}
int main() 
{
    node* head=NULL;
    node* tail=NULL;
    node* head1=NULL;
    node* tail1=NULL;
    node* nhead=NULL;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        insertatend(head,tail,x);
        
    }
     for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        insertatend1(head1,tail1,x);
    }
    merge(head,head1);
    print(head);
	return 0;
}

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
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}



node* mid(node* head)
{
	if(head==NULL)
	{
		return NULL;
	}

	node* slow=head;
	node* fast=head->next;

	while(fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}

node* merge(node* head,node* head1)
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
	if(head->data<head1->data)
	{
		nhead=head;
		nhead->next=merge(head->next,head1);
	}
	else
	{
		nhead=head1;
		nhead->next=merge(head,head1->next);
	}

	return nhead;
}

node* mergesort(node* head)
{
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	node* m=mid(head);
	node* a=head;
	node* b=m->next;
	m->next=NULL;
	a=mergesort(a);
	b=mergesort(b);
	node* nhead=merge(a,b);
	return nhead;
}
int main() 
{
    node* head=NULL;
    node* tail=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        insertatend(head,tail,x);
        
    }
    mergesort(head);
    print(head);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node *next;
	
	node(int d)
	{
		data=d;
		next=NULL;	
	}
	

};
void insertionatfront(node* &head,node* &tail,int d)
	{ 
		if(head==NULL)
		{
			node *n=new node(d);
			head=n;
			tail=n;
		}
		else
		{
		  node *n=new node(d);
		  n->next=head;
		  head=n;
		  	
		}	
	}
	
	void insertionatend(node* &head,node* &tail,int d)
	{
		if(head==NULL)
		{
			node *n=new node(d);
			head=n;
			tail=n;
		}
		else
		{
		  node *n=new node(d);
		  tail->next=n;
		  tail=n;
		  	
		}
		
	}
	
	
	int len(node* head)
	{
		int len=0;
		if(head!=NULL)
		{
			len++;
			head=head->next;	
		}
		return len;
	}
	void insertpos(node* &head,node* &tail,int data,int pos)
	{
	
		if (pos==0)
		{
		insertionatfront(head,tail,data);	
		}
		else if(pos>=len(head))
		{
			insertionatend(head,tail,data);
		}
		else
		{
			int p=1;
			node* temp=head;
			while(p<pos)
			{
				temp=temp->next;
				p++;
			}
			node* n=new node(data);
			n->next=temp->next;
			temp->next=n;
		}
	}
	void print(node* head)
	{
		while(head!=NULL)
		{
			cout<<head->data<<" ";
			head=head->next;
		}
		cout<<endl;
		
	}
	
	void deleteatfront(node* &head,node* &tail)
	{
		if(head==NULL)
		{
			return;
		}
		else if(head==tail)
		{
			delete head;
			head=NULL;
			tail=NULL;
			return;
			
		}
		else
		{
			node* temp=head;
			head->next=head;
			delete temp;
		}
	}

	node* mid(node* head)
	{
		while(head!=NULL)
		{
			node* s=head;
			node* f=head->next;
			while(f!=NULL)
			{
				s=s->next;
				f=f->next->next;	
			}
			return s;	
		}
		return NULL;
	}
	node* merge(node* head1,node* head2)
	{
		node* h1=head1->data;
		node* h2=head2->data;
		if(h1<h2)
		{
		  node* newhead=h1;	
		}
	}
	void createcycle(node* &head)
	{
		node* temp=head;
		while(temp!=NULL)
		{
			temp=temp->next;
		}
		tail->next=head->next->next;
	}
	bool detctcycle(node* head)
	{
		node*slow=head;
		node*fast=head;
		if(slow==fast)
		{
			return true;	
		}
		slow=slow->next;
		fast=fast->next->next;
	}

		
int main()
{
	node* head=NULL;
	node* tail=NULL;
	node* head1=NULL;
  	insertionatfront(head,tail,5);
    insertionatfront(head,tail,4);
    insertionatfront(head,tail,3);
	insertionatfront(head,tail,2);
 	insertionatend(head,tail,6);
 	insertionatend(head,tail,7);
	print(head);
	cout<<len(head)<<endl;
	merge(head,head1);
	mergesort(head,head1);
 return 0;	
}


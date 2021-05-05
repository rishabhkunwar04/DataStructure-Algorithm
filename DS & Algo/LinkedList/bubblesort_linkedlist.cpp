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
int length(node* head)
{
	int len=0;
	while(head!=NULL)
	{
		len++;
		head=head->next;
	}
	return len;
	
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
void bubblesort(node* &head,int i)
{
	node* prev;
	node* curr;
	node* n;
	int len=length(head);
	if(i==len-1)
	{
		return;
	}
		prev=NULL;
		curr=head;
		while(curr&&curr->next)
		{
			n=curr->next;
			if(n->data<curr->data)
			{
				if(prev==NULL)
				{
					curr->next=n->next;
					n->next=curr;
					prev=n;
					head=n;
					
					
				}
				else
				{
					curr->next=n->next;
					n->next=curr;
					prev->next=n;
					prev=n;
				}	
			}
			else
			{
				prev=curr;
				curr=curr->next;
			}
		}
		bubblesort(head,i+1);
	

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
		insertionatfront(head,tail,x);
	}
	
	bubblesort(head,0);
	print(head);
	return 0;
}

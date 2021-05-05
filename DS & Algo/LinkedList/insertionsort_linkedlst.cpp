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

void insertatfront(node* &head,node* &tail,int d)
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
		n->next=head;
		head=n;
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
void insertionsort(node* &head)
{
	node* curr=head;
	node* prev=head;
	curr=curr->next;
	while(curr!=NULL)
	{
		node*prev=head;
		while(prev->next!=curr)
		{
			if(prev->data>curr->data)
			{
				prev->next=curr->next;
				curr->next=prev;
				prev=curr;
			}
		}
		curr=curr->next;
	}

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
		insertatfront(head,tail,x);
	}
	insertionsort(head);
	print(head);
	return 0;
	
}

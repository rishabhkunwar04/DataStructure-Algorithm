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
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
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
void insert(node* &head,node* &tail,int d)
{
	node* n=new node(d);
	if(head==NULL)
	{
		head=n;
		tail=n;
		
	}
	else
	{
		n->next=head;
		head=n;
	}
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
		head=head->next;
		delete temp;
		return;
	}
}
void deleteatend(node* &head,node* &tail)
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
		node* n=head;
		while(n->next!=tail)
		{
		   n=n->next;	
		}
		delete tail;
		n->next=NULL;
		tail=n;
	}
}
	void deletepos(node* &head,node* &tail,int pos)
	{
		if(pos==0)
		{
		 deleteatfront(head,tail);
		 return;
		}
		else if(pos==length(head)-1)
		{
		 deleteatend(head,tail);
		 return;
		}
		else if(pos>=length(head))
		{
			return;
		}
		else
		{
			node* prev=head;
			int p=1;
			while(p<pos)
			{
				prev=prev->next;
			}
			
		node* n=prev->next;
		prev->next=n->next;
		delete n;
			
		}
	}

int main()
{
	node* head=NULL;
	node*tail=NULL;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		insert (head,tail,x);
	}
	for(int i=0;i<m;i++)
	{
		int pos;
		cin>>pos;
		deletepos(head,tail,pos);
		prin(head);
	}
	
	return 0;
}

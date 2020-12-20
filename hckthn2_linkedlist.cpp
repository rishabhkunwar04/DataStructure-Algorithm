#include<bits/stdc++.h>
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
node* reverse(node* head,int len,int i,int k,node* prev)
{
	if(i==len)
	{
		return head;
   }
		node* curr=head;
		node* n;
	
		int p=0;
		while(p<k)
		{
			n=curr->next;
			curr->next=prev;
			prev=curr;
			curr=n;
			p++;
		}
		head=prev;
		prev=curr;
	reverse(head,len,i+3,k,prev);
}

int main()
{
	node* head=NULL;
	node* tail=NULL;
	node* prev=NULL;
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		insertatend(head,tail,x);
	} 
	int len=length(head);
	node* nhead=reverse(head,len,0,k,prev);
	print(nhead);
	return 0;
}

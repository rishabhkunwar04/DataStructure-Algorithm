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
node* reverse(node* &head)
{
	node* prev=NULL;
	node* curr=head;
	node* n;
	while(curr)
	{
		n=curr->next;
		curr->next=prev;
		prev=curr;
		curr=n;
	}
	head=prev;
}
 int fromlast(node* head,int pos)
 {
 	node* nhead=reverse(head);
 	int p=1;
 	while(p<=pos)
 	{
 		nhead=nhead->next;
 		p++;
	 }
	 return nhead->data;
 }
int main() 
{
    node* head=NULL;
    node* tail=NULL;
    int x;
       while(x!=-1)
       {
       	
        cin>>x;
        insertatend(head,tail,x);
        
	   }

    int pos;
    cin>>pos;
    cout<<fromlast(head,pos);
	return 0;
}

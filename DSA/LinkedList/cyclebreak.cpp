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
	cout<<endl;
}


void cyclebreak(node *head)
{
	node* slow=head;
	node* fast=head;

	while(fast)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow)
		{
			break;
		}

	}

	node* prev=head;
	while(prev->next!=fast)
	{
		prev=prev->next;
	}

	slow=head;   
	while(slow!=fast)
	{
		prev=fast;
		fast=fast->next;
		slow=slow->next;
	}

	prev->next=NULL;
   

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
	   cyclebreak(head);
	   print(head);
	return 0;
}

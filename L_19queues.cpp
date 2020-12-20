#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node* next;
	
	node(int d):data(d),next(NULL)
	{
		}	
};
class queues  //FIFO first in first out
{
	public:
	node* head;
	node* tail;
	
	queues()
	{
		head=NULL;
		tail=NULL;
	}
	void push(int d)
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
	void pop()
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
		}
		else 
		{
			node*temp=head;
			head=head->next;
			delete temp;
		}
		
	}
     int front()
     {
     	return head->data;
	 }
	 bool empty()
	 {
	 	return head==NULL;
	 }
	
};
int main()
{
		queues q;
	for(int i=0;i<9;i++)
	{
		q.push(i);
	}
	while(!q.empty())  //output
	{
		cout<<q.front()<<" ";
		q.pop();
		
	}
	return 0;
}

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
//this is actually insertion at end
void insertionAtEnd(node* &head,node* &tail,int d)
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
void CreateCycle(node* &head)
{
    node* flag;
    node* temp;
    node* prev;
flag=head;
while(flag->next!=NULL)
	{  temp=flag->next; 
        	prev=flag;
    
        while(temp->next!=NULL)                  //while temp!=NULL instead of temp->next!=NULL
        {                                  //if you are unable to understand why this condition is necessary then try the test case 1 2 3 4 5 5 -1
            if(flag->data==temp->data)
            {
                prev->next=flag;
                return;
            }
        temp=temp->next;
        prev=prev->next;
     }
            flag=flag->next;
	}

}
void BreakCycle(node* &head2){

	node* slow=head2;
	node* fast=head2;
	
	while(fast)
	{	fast=fast->next->next;
			slow=slow->next;
			if(fast==slow)
			{
				break;
			}
	}
	node* prev=head2;
   while(prev->next!=fast){
	prev=prev->next;
  }
    slow=head2;
    while(slow!=fast){
	prev=prev->next;
	slow=slow->next;
	fast=fast->next;
    }
   prev->next=NULL;
}

int main(){
    int a;
     cin>>a;
    node* head=NULL;
    node* tail=NULL;
   while(a!=-1){  
     insertionAtEnd(head,tail,a);
     cin>>a;   
    }
  CreateCycle(head);
  
   // BreakCycle(head);

    print(head);
    
    
	return 0;
}






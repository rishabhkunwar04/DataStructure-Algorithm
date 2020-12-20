//#include<iostream>
//using namespace std;
//
//class node
//{
//public:
//	int data;
//	node* next;
//
//	node(int d)
//	{
//		data=d;
//		next=NULL;
//	}
//};
//
//
//
//void insertionAtFront(node* &head,node* &tail,int d)
//{
//	if(head==NULL)
//	{
//		node *n=new node(d);
//		head=n;
//		tail=n;
//	}
//	else
//	{
//		node* n=new node(d);
//		n->next=head;
//		head=n;
//	}
//}
//
//
//void insertionAtEnd(node* &head,node* &tail,int d)
//{
//	if(head==NULL)
//	{
//		node* n=new node(d);
//		head=n;
//		tail=n;
//	}
//	else
//	{
//		node* n=new node(d);
//		tail->next=n;
//		tail=n;
//	}
//}
//
//int length(node* head)
//{
//	int len=0;
//	while(head!=NULL)
//	{
//		len++;
//		head=head->next;
//	}
//
//	return len;
//}
//
//
//void insertionAtPos(node* &head,node* &tail,int data,int pos)
//{
//	if(pos==0)
//	{
//		insertionAtFront(head,tail,data);
//	}
//
//	else if(pos>=length(head))
//	{
//		insertionAtEnd(head,tail,data);
//	}
//	else
//	{
//		int p=1;
//		node* temp=head;
//		while(p<pos)
//		{
//			temp=temp->next;
//			p++;
//		}
//
//		node* n=new node(data);
//		n->next=temp->next;
//		temp->next=n;
//	}
//}
//
//
//void print(node* head)
//{
//	while(head!=NULL)
//	{
//		cout<<head->data<<"-> ";
//		head=head->next;
//	}
//	cout<<endl;
//}
//
//
//
//
//void deleteAtFront(node* &head,node* &tail)
//{
//	if(head==NULL)
//	{
//		return;
//	}
//
//	else if(head==tail)
//	{
//		delete head;
//		head=NULL;
//		tail=NULL;
//		return;
//	}
//
//
//	else
//	{
//		node* temp=head;
//		head=head->next;
//		delete temp;
//	}
//
//}
//
//
//void deleteAtEnd(node* &head,node* &tail)
//{
//	if(head==NULL)
//	{
//		return;
//	}
//
//	else if(head==tail)
//	{
//		delete head;
//		head=NULL;
//		tail=NULL;
//	}
//
//	else
//	{
//		node* n=head;
//		while(n->next!=tail)
//		{
//			n=n->next;
//		}
//
//		delete tail;
//		n->next=NULL;
//		tail=n;
//	}
//}
//
//
//void deleteAtPos(node* &head,node* &tail,int pos)
//{
//	if(pos==0)
//	{
//		deleteAtFront(head,tail);
//		return;
//	}
//
//	else if(pos==length(head)-1)
//	{
//		deleteAtEnd(head,tail);
//		return;
//	} 
//
//	else if(pos>=length(head))
//	{
//		return;
//	}
//
//	else
//	{
//		int p=1;
//		node* prev=head;
//		while(p<pos)
//		{
//			prev=prev->next;
//			p++;
//		}
//
//		node* n=prev->next;
//		prev->next=n->next;
//		delete n;
//	}
//}
//
//
//node* search(node* head,int d)
//{
//	while(head!=NULL)
//	{
//		if(head->data==d)
//		{
//			return head;
//		}
//		head=head->next;
//	}
//
//	return NULL;
//}
//
//node* searchRec(node* head,int d)
//{
//	if(head==NULL)
//	{
//		return NULL;
//	}
//	else if(head->data==d)
//	{
//		return head;
//	}
//	else
//	{
//		return searchRec(head->next,d);
//	}
//
//}
//
//
//node* mid(node* head)
//{
//	if(head==NULL)
//	{
//		return NULL;
//	}
//
//	node* slow=head;
//	node* fast=head->next;
//
//	while(fast!=NULL && fast->next!=NULL)
//	{
//		slow=slow->next;
//		fast=fast->next->next;
//	}
//
//	return slow;
//}
//
//void buildList(node* &head,node* &tail)
//{
//	int data;
//	cin>>data;
//	while(data!=-1)
//	{
//		insertionAtEnd(head,tail,data);
//		cin>>data;
//	}
//}
//int main()
//{
//
//	node* head=NULL;
//	node* tail=NULL;
//
////	insertionAtFront(head,tail,7);
////	insertionAtFront(head,tail,6);
//	buildList(head,tail);
//print(head);
//
//	return 0;
//}
//
//{
//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//int count(struct node* head, int search_for);
///* Link list node */
//struct node
//{
//    int data;
//    struct node* next;
//    
//    node(int x){
//        data = x;
//        next = NULL;
//    }
//}*head;
//void insert()
//{
//    int n,i,value;
//    struct node *temp;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&value);
//        if(i==0)
//        {
//            head=new node(value);
//            head->next=NULL;
//            temp=head;
//            continue;
//        }
//        else
//        {
//            temp->next= new node(value);
//            temp=temp->next;
//            temp->next=NULL;
//        }
//    }
//}
///* Function to print linked list */
//void printList(struct node *node)
//{
//    while (node != NULL)
//    {
//        printf("%d ", node->data);
//        node = node->next;
//    }
//    printf("
//");
//}
///* Drier program to test above function*/
//int main(void)
//{
//    /* Start with the empty list */
//    int t,k,n,value;
//     /* Created Linked list is 1->2->3->4->5->6->7->8->9 */
//     scanf("%d",&t);
//     while(t--)
//     {
//     insert();
//     scanf("%d",&k);
//     value=count(head, k);
//     printf("%d
//",value);
//     }
//     return(0);
//}
//}
// COUNT FREQUENCY OF INT
/*#include<iostream>
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
node* head=NULL;
node* tail=NULL;
int count=0;


void insertAtEnd(node* &head,node* &tail,int elem)
{
    node*new_n=new node(elem);
    if(head==NULL)
    {
        head=new_n;
        tail=new_n;
    }
    else
    {
        tail->next=new_n;
        tail=new_n;
    }
    tail->next=NULL;
}


int freq_no(node* &head,int key)
{
    node*temp=head;
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                count++;
            }
            temp=temp->next;
        }
    }
    return count;
    
}
int main()
{
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        while(n>0)
        {
            int elem;
            cin>>elem;
            insertAtEnd(head,tail,elem);
            n--;
        }
        int key;
        cin>>key;
        cout<<freq_no(head,key);
    }
    return 0;
}*/

/*//SWAP OF FIRST AND LAST NODE
#include<iostream>
using namespace std;
typedef uintptr_t ut; 


class node
{
	public:
	node* next;
	int data;
	 
	 node(int d)  //constructor
	 {
	 	data=d;
	 	next=NULL;
		 }			
};

void insertAtTail(node* &head,node* &tail,int data)
{
	node*temp=new node(data);
	if(head==NULL){
		head=temp;
		tail=temp;
		tail->next=NULL;
	}
	else
	{
		tail->next=temp;
		tail=temp;
		tail->next=NULL;
	}

}

void print(node* head)
{
	node* temp=head;
	while(temp)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}*/
 
 
 /*void swap_last_first(node* &head,node* &tail)
 {
 	node*ptr=head;
 	while(ptr->next->next!=NULL)
 	{
 		ptr=ptr->next;
	 }
	 node*temp=ptr->next;
	 ptr->next->next=head->next;
	 ptr->next=head;
	 head->next=NULL;
	 head=temp;
	 
	 
 }
 
 void reverse(node* &head,node* &tail)
 {
 	node*curr=head;
 	node*prev=NULL;
 	while(curr)
 	{
 	  curr=(node*)((ut)prev ^(ut)curr^(ut)curr->next^(ut)(curr->next=prev)^(ut)(prev=curr));	
	 }
	 head=prev;
 }
	
node* pairwiseswap(node*&head,node*&tail)
{
	node*remain=head->next->next;
	node*newhead=head->next;
	head->next->next=head;
	head->next=pairwiseswap(remain,tail);
	return newhead;
		 }		 


void reverse_k_elem(node*&head,node* &tail,int pos)
{
  node* curr=head;
  node*prev=NULL;
  node*n;
  int c=1;
  while(c<pos)
  {
  	curr=curr->next;
  	c++; 
  	
	  }	
	  node*joint=curr->next;
	  curr->next=NULL;
	  curr=head;
	  while(curr)
	  {
	  	n=curr->next;
	  	curr->next=prev;
	  	prev=curr;
	  	curr=n;
	  	
	  }
	  head=prev;
	  node*temp=head;
	  while(temp->next!=NULL)
	  {
	  	temp=temp->next;
	  }
	  temp->next=joint;
	  
}
int main()
{
	node* head=NULL;
	node* tail=NULL;
	int data;
	cin>>data;
	
	while(data!=-1)
	{
		insertAtTail(head,tail,data);
		cin>>data;
	}
	print(head);
	cout<<endl;
	swap_last_first(head,tail);
	cout<<"swap =";
	print(head);
	cout<<endl;
	cout<<"reverse =";
	reverse(head,tail);
	print(head);
	cout<<endl;
	 node* nhead=pairwiseswap(head,tail);
	cout<<"pairwiseswap=";
	print(nhead);
	cout<<"reverse upto K elrment = ";
	reverse_k_elem(head,tail,4);
	print(head);
	return 0;
}*/

/*#include<iostream>
using namespace std;
//CIRCULAR LINKED LIST
class CQ_node
{
	public:
	int data;
	CQ_node* next;
	
	CQ_node(int d)
	{
		data=d;
		next=NULL;
		}	
};

void insert(CQ_node*&head,CQ_node*&tail,int data)
{
	CQ_node*n=new CQ_node(data);
	if(head==NULL)
	{
		head=n;
		tail=n;
	}
	else
	{
		tail->next=n;
		tail=n;
	}
	tail->next=head;
 } 

   
 void print(CQ_node*head)
 {
 	CQ_node*temp=head;
 	while(temp->next!=head)
 	{
 		cout<<temp->data<<"->";
 		temp=temp->next;
 	   	
	 }
 }
int main()
{
	CQ_node* head=NULL;
	CQ_node* tail=NULL;

	
	int n;
	cin>>n;
	int c=1;
	while(c<n)
	{
		int data;
		cin>>data;
		insert(head,tail,data);
		c++;
	}
	print(head);
	return 0;
}*/

//DOUBLY LINKED LIST
#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node* next=NULL;
	node* prev=NULL;
		
	node(int d)//constructor
	{
		data=d;
		next=prev=NULL;
	}
};

void insert(node*&head,node*&tail,int data)
{
	node* n=new node(data);
	if(head==NULL)
	{
		n->prev=NULL;
		head=n;
		tail=n;
		tail->next=NULL;
	}
	else
	{
		tail->next=n;
		n->prev=tail;
		tail=n;
		tail->next=NULL;
	}
}
 void print(node*head)
 {
 	node*temp=head;
 	while(temp->next!=head)
 	{
 		cout<<temp->data<<"-><-";
 		temp=temp->next;
 	   	
	 }
 }
int main()
{
	node* head=NULL;
	node* tail=NULL;

	
	int n;
	cin>>n;
	int c=1;
	while(c<=n)
	{
		int data;
		cin>>data;
		insert(head,tail,data);
		c++;
	}
	print(head);
	return 0;
}

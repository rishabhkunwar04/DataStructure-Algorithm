
#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  node* next;
  node(int d)
  {
    data=d;
    next=NULL;
  }
};
void append(node* &head,node* &tail,int data)
{
  node* n=new node(data);

  if(head==NULL)
  {
    head=n;
    tail=n;
  }else{
    tail->next=n;
    tail=n;
  }

}

node* mid(node* &head)
{
  node * fast=head,* slow=head;

  while(fast->next!=NULL &&fast->next->next!=NULL)
  {
    fast=fast->next->next;
    slow=slow->next;
  }
  return slow;
 
}

void reverse(node* &head)
{
  node* prev=NULL,*curr=head;

  while(curr!=NULL)
  {
    node *n=curr->next;
    curr->next=prev;
    prev=curr;
    curr=n;
  }
  head=prev;
}

void palindrome(node* &head,node* &tail)
{

  node *ptr1=mid(head);
  node* head1=ptr1->next;
  ptr1->next=NULL;
  reverse(head);

  bool flag=1;
  if(head1==NULL)
  {
    cout<<"Palindrome";
  }
  while(head!=NULL && head1!=NULL)
  {
    if(head->data==head1->data)
    {
      head=head->next; 
      head1=head1->next;
    }else{
        flag=0;
        break;
    }
    
  }
  if(head!=NULL || head1!=NULL)
  {
    flag=0;
  }

 if(flag)
 {
  cout<<"palindrome";
 }else{
    cout<<"not palindrome";
 }

}

int main()
{
  node *head=NULL,*tail=NULL;

  append(head,tail,1);
  append(head,tail,2);
  append(head,tail,3);
  append(head,tail,3);
  append(head,tail,2);
  append(head,tail,1);

 palindrome(head,tail);

  return 0;
}




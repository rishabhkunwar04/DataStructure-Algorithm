#include <bits/stdc++.h>
using namespace std;
 

struct Node {
    int data;
    struct Node* next;
};
 

 
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = new Node();
 
   
    new_node->data = new_data;
 
    
    new_node->next = (*head_ref);
 
    
    (*head_ref) = new_node;
}
void print(struct Node* head)
{
  while(head)
  {
    cout<<head->data<<" ";
    head=head->next;
  }
}

struct Node* merge(struct Node* head,struct Node* head1,bool flag=1)
{

    if(head==NULL)
    {
        return head1;
    }
    else if(head1==NULL)
    {
        return head;
    }

   struct Node* nhead;
    if(flag)
    {
        
        nhead=head;
        nhead->next=merge(head->next,head1,!flag);
    }else{
           
            nhead=head1;
        nhead->next=merge(head,head1->next,!flag);
       }
    return nhead;


}

    struct Node* reorderList(struct Node *head) {
    if (!head || !head->next) return head;
    
    // find the middle node
    struct Node *p1 = head, *p2 = head->next;
    while (p2 && p2->next) {
        p1 = p1->next;
        p2 = p2->next->next;
    }
    
    // cut from the middle 
    struct Node *head2 = p1->next;
    p1->next = NULL;
    
       // reverse the second half
        
        struct Node* pre=NULL,*curr=head2;
        while(curr!=NULL)
        {
            struct Node* n=curr->next;
            curr->next=pre;
            pre=curr;
            curr=n;
        }
        head2=pre;
    
        
        //merging two lists
        // struct Node* newhead=head2;
        //    while(head!=NULL&&head2!=NULL)
        // {
        //    struct Node* temp = head2->next;
        //     head2->next=head;
        //     head=head->next;
        //     head2->next->next=temp;
        //     head2 = temp;
        // }
        struct Node* newhead=merge(head2,head);
    
   return newhead;
    }
 

int main()
{
  
    struct Node* head = NULL;
 
   
    push(&head, 8);
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    //
    print(head);
    cout<<'\n';
    reorderList(head);
    print(head);

 

    return 0;
}
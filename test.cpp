    struct Node* reorderList(struct Node *head) {
    if (!head || !head->next) return;
    
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
        struct Node* newhead=head2;
           while(head!=NULL&&head2!=NULL)
        {
           struct Node* temp = head2->next;
            head2->next=head;
            head=head->next;
            head2->next->next=temp;
            head2 = temp;
        }
    
   return newhead;
    }
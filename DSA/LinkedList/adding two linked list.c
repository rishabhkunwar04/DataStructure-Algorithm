#include <bits/stdc++.h>
#define ll long long int
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

void print(node* root)
{
    while(root!=NULL)
    {
        cout<<root->data<<" ";
        root=root->next;
    }
}


void append(node* &root,node* &tail,int data)
{
    node* n=new node(data);
    if(root==NULL)
    {
      root=n;
      tail=n;
    }else{
        tail->next=n;
        tail=n;

    }
}

void reverse(node* &head)
{
    node*curr=head,*prev=NULL;
    while(curr!=NULL)
    {
      node* n=curr->next;
         curr->next=prev;
         prev=curr;
         curr=n;
    }
    head=prev; //updated


}

void add(node* &head1,node* &head2)
{
    reverse(head1);
    reverse(head2);

    // print(head1);
    // cout<<endl;
    // print(head2);
    // cout<<endl;

   

        
       node *nhead= new node(0);
        node *temp=nhead;

        int carry=0;
        while( head1 && head2){

          

            int sum=head1->data+head2->data+carry;

             carry = sum / 10;
             int rem= sum % 10;
            
            node *n= new node(rem);
            temp->next=n;
            temp=temp->next;
            
            
            head1=head1->next;
            head2=head2->next;
        }
        if(carry>0){
           node *n= new node(carry);
            temp->next=n;
            temp=temp->next;
        }
       

        while(head1!=NULL)
        {
           node *n= new node(head1->data);
            temp->next=n;
            temp=temp->next; 
            head1=head1->next;
        }
        while(head2!=NULL)
        {
           node *n= new node(head2->data);
            temp->next=n;
            temp=temp->next; 
            head2=head2->next;
        }


    reverse(nhead->next);

    print(nhead->next);
}



int main(){

    node* head1=NULL,*tail1=NULL;
    node* head2=NULL,*tail2=NULL;
  


    append(head1,tail1,3);
    append(head1,tail1,1);
    append(head1,tail1,4);
    append(head2,tail2,2);
    append(head2,tail2,3);
    append(head2,tail2,4);

    // print(head1);
    // cout<<endl;
    // print(head2);
    // cout<<endl;


    add(head1,head2);
 return 0;

}

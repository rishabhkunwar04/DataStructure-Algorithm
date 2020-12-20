#include<iostream>
using namespace std;
class node 
{
    public:
    int data;
    node *next;
    node *prev;
    node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
    }
};
void insertion(node *&head,node *&tail,int d)
{
    node *ptr=new node(d);
    if(head==NULL)
    {
        head=ptr;
        tail=ptr;
    }
    else
    {
        tail->next=ptr;
        ptr->prev=tail;
        tail=ptr;
    }
}
void print(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }

}
void insertion_sort(node *&head,node *&tail)
{
    node *c=head->next;
    //node *c1=head->next;
    while(c!=NULL)
    {
        node *temp=c->prev;
        node *temp1=c;
        node *ptr=temp;
        c=c->next;
        node *temp2=c;
        int flag=0;
        while(temp!=NULL)
        {
            //c=c->next;
            if(temp->data>temp1->data)
            {
                if(temp2==NULL)
                {
                    tail=temp;
                    temp->next=temp2;
                    temp2=temp;
                    ptr=temp;
                }
                else
                {
                    temp2->prev=temp;
                    temp->next=temp2;
                    ptr=temp;
                    temp2=temp2->prev;
                }
                flag=1;
            }
            else
            {   if(flag==1)    //You have to execute these statements only when you've swapped at least 1 element
                {
                    temp1->next=temp->next;
                    temp->next->prev=temp1;
                    temp->next=temp1;
                    temp1->prev=temp;
                }
                //If just the immediate previous element is smaller then normally break
                break;
            }
            temp=temp->prev;
        }
        if(temp==NULL)
        {
            head=temp1;
            head->next=ptr;
            ptr->prev=head;
            head->prev=NULL;
        }
    }
    //tail=c->prev;
}
int main() {
    int n;
    cin>>n;
    node *head=NULL;
    node *tail=NULL;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        insertion(head,tail,d);
    }
    insertion_sort(head,tail);
    print(head);
    //cout<<tail->data;
	return 0;
}


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


void insertionatback(node* &head,node* &tail,int d)
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

void insertionatfront(node* &head,int d)
{
    
    if(head==NULL)
    {
        node* n=new node(d);
        head=n;
    }
    else
    {
        node* n=new node(d);
        n->next=head;
        head=n;
    }
}

void deletefromend(node* &head,node* &tail)
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
        node* n=head;
        while(n->next!=tail)
        {
            n=n->next;
        }
        delete tail;
        n->next=NULL;
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


void sum(node* head1,node* tail1,node* head2,node* tail2,int i,node* &nhead)  //So we'll pass nhead by reference
{
    //This will form local variables at each recursive call and new LL will be formed
    // node* nhead=NULL;
    // node* ntail=NULL;

    if(head1==NULL && head2==NULL)
    {
        while(i!=0)
        {
            insertionatfront(nhead,i%10);
            i=i/10;
        }
        return;
        //return nhead;
    }
    int k;

    if(head1!=NULL && head2!=NULL)
    {
        k=tail1->data+tail2->data+i;
        deletefromend(head1,tail1);
        deletefromend(head2,tail2);
    }
    else if(head1==NULL && head2!=NULL)
    {
        k=tail2->data+i;
        deletefromend(head2,tail2);
    }
    else if(head1!=NULL && head2==NULL)
    {
        k=tail1->data+i;
        deletefromend(head1,tail1);
    }

        insertionatfront(nhead,k%10);
        sum(head1,tail1,head2,tail2,k/10,nhead);




}




int main() {

    node* head1=NULL;
    node* tail1=NULL;

    node* head2=NULL;
    node* tail2=NULL;

    int n,m,d;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>d;
        insertionatback(head1,tail1,d);
    }

    for(int i=0;i<m;i++)
    {
        cin>>d;
        insertionatback(head2,tail2,d);
    }

    node* nhead=NULL;
    sum(head1,tail1,head2,tail2,0,nhead);
    print(nhead);


	return 0;
}


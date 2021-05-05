
void createCycle(node* &head)
{
	node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}

	temp->next=head->next->next;
}


bool cycleDetect(node* head)
{
	node* slow=head;
	node* fast=head;

	while(fast)
	{
		fast=fast->next;
		if(fast)
		{
			fast=fast->next;
			slow=slow->next;
			if(fast==slow)
			{
				return true;
			}
		}
	}

	return false;

}


void cycleBreak(node *head)
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

	node* head1=NULL;
	node* tail1=NULL;



	insertionAtFront(head,tail,7);
	insertionAtFront(head,tail,6);
	insertionAtFront(head,tail,5);
	insertionAtFront(head,tail,4);
	insertionAtFront(head,tail,3);
	insertionAtFront(head,tail,2);
	insertionAtFront(head,tail,1);

	createCycle(head);

	// tail->next=head;

	// if(cycleDetect(head))
	// {
	// 	cout<<"true"<<endl;
	// }
	// else
	// {
	// 	cout<<"No cycle found"<<endl;
	// }


	if(cycleDetect(head))
	{
		cycleBreak(head);
	}

	print(head);

	// insertionAtFront(head,tail,9);
	// insertionAtFront(head,tail,4);
	// insertionAtFront(head,tail,29);
	// insertionAtFront(head,tail,100);

	// print(head);
	// reverseLL(head);
	// print(head);
	// node* nhead=mergeSort(head);
	// print(nhead);

	// bubbleSort(head);
	// print(head);
	// insertionAtFront(head1,tail1,8);
	// insertionAtFront(head1,tail1,5);
	// insertionAtFront(head1,tail1,3);
	// insertionAtFront(head1,tail1,1);


	// insertionAtEnd(head,tail,6);
	// insertionAtEnd(head,tail,7);


	// insertionAtPos(head,tail,1,0);
	// insertionAtPos(head,tail,8,7);
	// insertionAtPos(head,tail,99,1);

	
	// print(head1);

	// node* m=mid(head);
	// if(m!=NULL)
	// {
	// 	cout<<m->data<<endl;	
	// }
	
	// int data;
	// cin>>data;
	// node* s=search(head,data);
	// if(s!=NULL)
	// {
	// 	cout<<"data found"<<endl;
	// }
	// else
	// {
	// 	cout<<"data not found"<<endl;
	// }

	// node* s1=searchRec(head,data);
	// if(s1!=NULL)
	// {
	// 	cout<<"data found"<<endl;
	// }
	// else
	// {
	// 	cout<<"data not found"<<endl;
	// }

	// deleteAtFront(head,tail);
	// deleteAtEnd(head,tail);

	// print(head);

	// deleteAtPos(head,tail,0);
	// print(head);
	// deleteAtPos(head,tail,2);

	// print(head);

	// cout<<length(head)<<endl;

	// node *newHead=merge(head,head1);

	// print(newHead);
	return 0;
}	
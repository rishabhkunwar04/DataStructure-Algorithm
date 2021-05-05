
node* merge(node* head,node* head1)
{

	if(head==NULL)
	{
		return head1;
	}
	else if(head1==NULL)
	{
		return head;
	}

	node* nhead;
	if(head->data<head1->data)
	{
		nhead=head;
		nhead->next=merge(head->next,head1);
	}
	else
	{
		nhead=head1;
		nhead->next=merge(head,head1->next);
	}

	return nhead;


}


node* mergeSort(node* head)
{
	if(head==NULL || head->next==NULL)
	{
		return head;
	}

	node* m=mid(head);
	node* a=head;
	node* b=m->next;
	m->next=NULL;

	a=mergeSort(a);
	b=mergeSort(b);

	node* nhead=merge(a,b);
	return nhead;

}

//***** FLATTENING A TREE INTO LINKEDLIST ******

class linkedlist
{
	public:
	linkedlist* head;
	linkedlist* tail;	
};

linkedlist flattening(node* root)
{
	linkedlist l;
	if(root==NULL)// base case
	{
		l.head=l.tail=NULL;
		return l;
	}
	//leaf node
	if(root->left==NULL && root->right==NULL)
	{
		l.head=l.tail=root;
		return l;	
	}
	//only left subtree present
	if(root->left!=NULL && root->right==NULL)
	{
	  linkedlist leftL=flattening(root->left);
	  leftL.tail->right=root;
	  l.head=leftL.head;
	  l.tail=root;
	  return l;	
	}
	//only right subtree present
	if(root->right!=NULL && root->left==NULL)
	{
		linkedlist rightL=flatenning(root->right);
		root->right=rightL.head;
		l.head=root;
		l.tail=rightL.tail;
		return l;
	}
	//both subtree present
	else
	{
	linkedlist leftL=flattening(root->left);
	linkedlist rightL=flatenning(root->right);
    l.head=leftL.head;
    leftl.tail->right=root;
    root->right=rightL.head;
    l.tail=rightL.tail;
    return l;
		
	}
}

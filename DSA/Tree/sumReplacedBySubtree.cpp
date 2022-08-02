
 //****** SUM REPLACED BY SUM OF SUBTREE *****

 int SumReplaced(node* root)
 {
 	if(root==NULL)
 	{
 	 return 0;	
	 }
	 if(root->left==NULL &&root->right==NULL)
	 {
	 	return root->data;
	 }
	 int leftsum=SumReplaced(root->left);
	 int rightsum=SumReplaced(root->right);
	 int temp=root->data;
	 root->data=leftsum+rightsum;
	 return temp+root->data;
 	
 }
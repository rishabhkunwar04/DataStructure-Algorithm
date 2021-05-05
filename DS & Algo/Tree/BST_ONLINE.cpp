/*
 // ****BINARY TREE******

#include<iostream>
#include<queue>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;

	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};

 class Pair
 {
 	public:
 		int height;
 		int diameter;
 };
  Pair fastdiameter(node* root)
  {
  	Pair p;
  	if(root==NULL)
  	{
  		p.height=p.diameter=0;
  		return p;
	  }
	  Pair left=fastdiameter(root->left);
	  Pair right=fastdiameter(root->right);
	  p.height=max(left.height,right.height)+1;
	  p.diameter=max(left.height+right.height,max(left.diameter,right.diameter));
	  return p;
  }

node* createTree()
{
	int data;
	cin>>data;

	if(data==-1)
	{
		return NULL;
	}

	node* root=new node(data);
	root->left=createTree();
	root->right=createTree();
	return root;
}

void preoder(node* root)
{
	if(root==NULL)
	{
		return;
	}

	cout<<root->data<<" ";
	preoder(root->left);
	preoder(root->right);
}

void preorder(node* root)
{
	if(root==NULL)
	{
		return;
	}

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}


void inorder(node* root)
{
	if(root==NULL)
	{
		return;
	}

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void postorder(node* root)
{
	if(root==NULL)
	{
		return;
	}

	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

int count(node* root)
{
	if(root==NULL)
	{
		return 0;
	}

	int left=count(root->left);
	int right=count(root->right);

	int ans=1+left+right;
	return ans;
}

int height(node* root)
{
	if(root==NULL)
	{
		return 0;
	}

	int leftHeight=height(root->left);
	int rightHeight=height(root->right);
	int ans=max(leftHeight,rightHeight)+1;
	return ans;
}


int diameter(node* root)
{
	if(root==NULL)
	{
		return 0;
	}

	int op1=height(root->left)+height(root->right);
	int op2=diameter(root->left);
	int op3=diameter(root->right);

	int ans=max(op1,max(op2,op3));
	return ans;

}

//****** LEVEL ORDER TRAVERSAL OR BFS ******

void levelorder(node* root)
{
	queue<node*>q;
	q.push(root);
	q.push(NULL);

	while(!q.empty())
	{
		node* top=q.front();
		q.pop();

		if(top==NULL)
		{
			cout<<endl;
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
			cout<<top->data<<" ";
			if(top->left)
			{
				q.push(top->left);
			}
			if(top->right)
			{
				q.push(top->right);
			}
		}

	}
}

//***** MIRROR IMAGE ****

 void mirrorimage(node*root)
 {
 	if(root==NULL)
 	{
 		return;
    }
	 node* temp=root->left;
	 root->left=root->right;
	 root->right=temp;
	 mirrorimage(root->left);
	 mirrorimage(root->right);
 }

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
int main()
{

	node* root=createTree();
	cout<<"preoder traversal :";
	preorder(root);
	cout<<endl;
	cout<<"inorder traversal :";
	inorder(root);
	cout<<endl;
	cout<<"postorder traversal :";
	postorder(root);
	cout<<endl;
	cout<<"No of nodes are :";
	cout<<count(root)<<endl;
	cout<<"Height of the tree :";
	cout<<height(root)<<endl;
	cout<<"Diameter of tree :";
	cout<<diameter(root)<<endl;
	cout<<endl;
	//cout<<"by fast diameter meathod :";
//	Pair result=fastdiameter(root);
	///cout<<result;
	cout<<"level order :"<<endl;
	levelorder(root);
	cout<<endl;
	cout<<"mirror image"<<endl;
	mirrorimage(root);
	levelorder(root);
	cout<<endl<<"sumreplaced"<<endl;
    SumReplaced(root);
	levelorder(root);

	cout<<endl;
	return 0;
}*/



// ***********BINARY SEARCH TREE********


#include<iostream>
#include<queue>
#include<climits>
#include<cmath>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;

	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};



void levelOrderTraversal(node* root)
{
	queue<node*>q;
	q.push(root);
	q.push(NULL);

	while(!q.empty())
	{
		node* top=q.front();
		q.pop();

		if(top==NULL)
		{
			cout<<endl;
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
			cout<<top->data<<" ";
			if(top->left)
			{
				q.push(top->left);
			}
			if(top->right)
			{
				q.push(top->right);
			}
		}

	}
}



node* insertInBST(node* root,int d)
{
	if(root==NULL)
	{
		root=new node(d);
		return root;
	}

	if(d<=root->data)
	{
		root->left=insertInBST(root->left,d);
	}
	else
	{
		root->right=insertInBST(root->right,d);
	}
	return root;
}


node* arrToBST(int *arr,int s,int e)
{
	if(s>e)
	{
		return NULL;
	}

	int mid=(s+e)/2;
    node* root=new node(arr[mid]);
    root->left=arrToBST(arr,s,mid-1);
    root->right=arrToBST(arr,mid+1,e);

    return root;

}





node* buildBST()
{
	int data;
	cin>>data;
	node* root=NULL;
	while(data!=-1)
	{
		root=insertInBST(root,data);
		cin>>data;
	}

	return root;
}


bool isBST(node* root,int min=INT_MIN,int max=INT_MAX)
{
	if(root==NULL)
	{
		return true;
	}

	if(min<=root->data && root->data<max && isBST(root->left,min,root->data) && isBST(root->right,root->data,max))
	{
		return true;
	}
	return false;
}


class Pair
{
	public:
		bool balanced;
		int height;
};


Pair isBalanced(node* root)
{
	Pair p;
	if(root==NULL)
	{
		p.balanced=true;
		p.height=0;
		return p;
	}

	Pair left=isBalanced(root->left);
	Pair right=isBalanced(root->right);

	p.height=max(left.height,right.height)+1;
	if(left.balanced && right.balanced && abs(left.height-right.height)<=1)
	{
		p.balanced=true;
	}
	else
	{
		p.balanced=false;
	}

	return p;

}

//***** FLATTENING A TREE INTO LINKEDLIST ******

/*class linkedlist
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
}*/



int main()
{
	// node* root=buildBST();
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(int);
	node* root=arrToBST(arr,0,n-1);
	cout<<"levelOrderTraversal :"<<endl;
	levelOrderTraversal(root);
//	if(isBST(root))
//	{
//		cout<<"yes it is BST"<<endl;
//	}
//	else
//	{
//		cout<<"No"<<endl;
//	}
//	if(isBalanced(root).balanced)
//	{
//		cout<<"balanced"<<endl;
//	}
//	else
//	{
//		cout<<"unbalanced"<<endl;
//	}
//	linkedlist nroot=flattening( root);
//	node* temp=nroot.head;
//	while(temp!=NULL)
//	{
//		cout<<temp->data<<"->";
//		temp=temp->right;
//		}	
	return 0;
}




//LEFT VIEW by recursion
void leftview_helper(Node* root,vector<int>&v,int cl,int *maxm)
{
    if(root==nullptr)return;
    if(*maxm<cl)
    {
        *maxm=cl;
        v.push_back(root->data);
    }
    leftview_helper(root->left,v,cl+1,maxm);
    leftview_helper(root->right,v,cl+1,maxm);
}
vector<int> leftView(Node *root)
{
    vector<int>v;
    int maxm=-1;
    leftview_helper(root,v,0,&maxm);

	return v;
}

//LEFT VIEW by levelorder traversal

vector<int> leftView(Node *root)
{
    
    vector<int>v;
    
    if(root==nullptr)return v;
  queue<Node*>q;
	q.push(root);
	q.push(NULL);
	bool flag=0;
	v.push_back(root->data);

	while(!q.empty())
	{
		Node* top=q.front();
		q.pop();
		if(flag)
		{
		    flag=0;
		    v.push_back(top->data);
		}

		if(top==NULL)
		{
			flag=1;
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
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

//RIGHT VIEW BY RECURSION
class Solution {
public:
    void helper_fun(TreeNode* root,vector<int>&v,int cl,int *maxm)
  {
    if(root==nullptr)return;
    if(*maxm<cl)
    {
        *maxm=cl;
        v.push_back(root->val);
    }
    helper_fun(root->right,v,cl+1,maxm);
    helper_fun(root->left,v,cl+1,maxm);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        int maxm=-1;
        helper_fun(root,v,0,&maxm);
        return v;
        
    }
};
//RIGHT VIEW BY LEVELORDER TRAVERSAL
vector<int> rightSideView(TreeNode* root) {
        if(!root) {
            return {};
        }
        vector<int> v; //store values of nodes in the rightmost
        queue<TreeNode*> Q; //store node type values in queue 
        Q.push(root); //push root
        while(!Q.empty()) { //repeat steps until queue is not empty
            
            int size = Q.size();  // current size of queue
            for(int i = 0; i < size; i++) {
              TreeNode* t = Q.front(); //declare a temp node and put front node of queue
                Q.pop(); 
                if(i==size-1) {   //if node is rightmost 
                    v.push_back(t->val); //push the value of rightmost node into vector
                }
                if(t->left) {   //if temp->left != NULL then push into queue
                    Q.push(t->left);
                }
                if(t->right) { //if temp->right != NULL then push into queue
                    Q.push(t->right);
                }
            }  
        }
        return v; //finally we have all values
    }

//BOTTOM VIEW recursion

void bottom_fun(Node* root,int depth,int cl,  map<int,pair<int,int>>&mp)
{
    if(root==NULL)return;
    
      if(mp.find(cl)==mp.end())
    {
        mp[cl]=make_pair(root->data,depth);
    }
    else{
        pair<int,int>p=mp[cl];
        if(p.second<=depth)
        {
            mp[cl].first=root->data;
            mp[cl].second=depth;
        }
    }
    bottom_fun(root->left,depth+1,cl-1,mp);
    bottom_fun(root->right,depth+1,cl+1,mp);
    
  
    
}
vector <int> bottomView(Node *root)
{
   vector<int>v;
   map<int,pair<int,int>>mp;
   bottom_fun(root,0,0,mp);
   
   for(auto x:mp)
   {
      // pair<int,int>p1=x;
       v.push_back(x.second.first);
   }
   
   return v;
}

//TOP VIEW recursion

void vertical_level(Node* root,int cl,int depth,map<int,pair<int,int>>&mp)
{
 if(root==NULL)return;
 
 if(mp.find(cl)==mp.end())
 {
     mp[cl]=make_pair(root->data,depth);
 }
 else{
     pair<int,int>p=mp[cl];
     if(p.second>depth)
     {
         mp[cl].first=root->data;
         mp[cl].second=depth;
     }
 }
 
 vertical_level(root->left,cl-1,depth+1,mp);
  vertical_level(root->right,cl+1,depth+1,mp);

}

    vector<int> topView(Node *root)
    {
            map<int,pair<int,int>>mp;
            vertical_level(root,0,0,mp);
          
            vector<int>ans;
            
             for(auto x:mp)
            {
              ans.push_back(x.second.first); 
            }
     return ans;

    }

};


//24 APRIL webinar(array+string)
//1.max no of occurance in O(n) time and O(1) space
/*#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElements(vector<int> v){

	int element1 = v[0];
	int count1 = 1;

	int element2 = 0;
	int count2= 0;

	for(int i=1;i<v.size();i++){
		if(element1 == v[i]){
			count1++;
		}
		else if(element2 == v[i]){
			count2++;
		}
		else if(count1 == 0){
			element1 = v[i];
			count1 = 1;
		}
		else if(count2 == 0){
			element2 = v[i];
			count2 = 1;
		}
		else{
			count1--;
			count2--;
		}
	}

	// Iterate and find that element1 and element2 ka count n/3 se jyada hai ya nahi
	count1 = count2 = 0;
	for(int i=0;i<v.size();i++){
		if(v[i] == element1) count1++;
		else if(v[i] == element2) count2++;
	}
	vector<int> ans;
	if(count1>v.size()/3){
		ans.push_back(element1);
	}
	if(count2>v.size()/3){
		ans.push_back(element2);
	}
	return ans;
}


int main(){
	int n;
	cin>>n;

	vector<int> v;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;

		v.push_back(x);
	}

	vector<int> ans;

	ans = majorityElements(v);

	if(ans.size() == 0){
		cout<<"No Majority Elements";
	}
	else{
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<' ';
		}
	}


	cout<<endl;
	return 0;
}*/

//2.max water stored betwen two pole
/*#include<bits/stdc++.h>
#include<vector>
using namespace std;

int max_water(int v[],int n)
{

  int i=0;
  int j=n-1;
  int area=0;
  while(i<j)
  {
   area=max(area,(min(v[i],v[j])*(j-i)));
   if(v[i]<v[j]){
     i++;
   }
   else{
     j--;
   }
  }
return area;
}

int main()
{
  int n;cin>>n;
  int *v=new int[n+1];
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
int ans;
ans=max_water(v,n);
cout<<ans<<"\n";
  return 0;
}*/

//3.unique string
/*#include <iostream>
#include <vector>
#include <climits>
#include <cstring>
using namespace std;

int Fun(vector<string> v,int i,string s){
	// Base case
	if(i == v.size()){

		if(s.length()>26){
			return 0;
		}

		int freq[26] = {0};

		for(int k=0;k<s.length();k++){
			if(freq[s[k]-'a'] == 1) return 0;

			freq[s[k]-'a']++;
		}
		return s.length();
	}

	// We can include the ith string
	int op1,op2;
	op1 = op2 = INT_MIN;
	if(s.length()+v[i].length()<=26){
		op1 = Fun(v,i+1,s+v[i]);
	}
	// We can exclude it
	op2 = Fun(v,i+1,s);
	return max(op1,op2);
}

int UniqueString(vector<string> &v){
	return Fun(v,0,"");
}

int main(){
	vector<string> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		v.push_back(s);
	}

	cout<<UniqueString(v)<<endl;

	return 0;
}*/

//4.circular loop in array
// Test.cpp
/*#include <iostream>
#include <vector>
using namespace std;
int next(vector<int> a,int i){
	return (i+a[i]+a.size())%a.size();
}

bool CircularLoop(vector<int> v){
	int n = v.size();
	for(int i=0;i<n;i++){
		int slow = i, fast = i;
		if(v[i] == 0){
			continue;
		}

		while(v[slow]*v[next(v,slow)]>0 &&
			  v[fast]*v[next(v,fast)]>0 &&
			  v[fast]*v[next(v,next(v,fast))]>0){
			slow = next(v,slow);
			fast = next(v,next(v,fast));

			if(slow == fast){
				// That means cycle is present, but cycle length should be >1
				if(slow == next(v,slow)){
					break;
				}
				return true;
			}
		}

		slow = i;
		int val = v[slow];
		while(val*v[slow]>0){
			int x = slow;
			slow = next(v,slow);
			v[x]=0;
		}
	}
	return false;
}

int main(){
	int n;
	cin>>n;

	vector<int> v;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		v.push_back(x);
	}
	cout<<CircularLoop(v)<<endl;

	cout<<endl;
	return 0;
}*/


/*#include<iostream>
#include<cstring>
using namespace std;

bool kyaAagemila(char in[],char ch,int k)
{
	for(int i=k;in[i]!='\0';i++)
	{
		if(ch==in[i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
  char in[1000],out[1000];
   cin>>in;
   int j=0;
   for(int i=0;in[i]!='\0';i++)
   {
   	char ch=in[i];
   	if(kyaAagemila(in,ch,i+1))
   	{
   		out[j++]=ch;
	   }
   }
   out[j]='\0';
   cout<<out;
	return 0;
}*/

//30 APRIL webinar(STACK+QUEUE)
//1.minm subray sum equal notequal to k
/*#include<iostream>
#include<climits>
#include<deque>
using namespace std;

int minm_subarray(int *a,int n,int k)
{
	deque< pair<int,int> >dq;
	dq.push_back({0,-1});
	int *sum=new int[n+1];//dynamic array
	int x=0;
	for(int i=0;i<n;i++)
	{
		int x=x+a[i];
		sum[i]=x;
	}
	int ans=INT_MAX;
	for(int i=0;i<n;i++)
	{

		while(!dq.empty()&&sum[i]-dq.front().first>=k) //if sum equal to the k then check for anthr subarray
		{
			//we are calculating ans here
			ans=min(ans,i-dq.front().second);
			dq.pop_front();
		 }
		while(!dq.empty() && sum[i]<=dq.back().first)
		{
		  dq.pop_back();
	   	}


	     dq.push_back({sum[i],i});
	}
	if(ans==INT_MAX)
	{
    	return -1;}
	}
	else
	{
     	return ans;
    }
}

int main()
{
	int n;cin>>n;
	int *a=new int[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k; cin>>k;
	cout<<minm_subarray(a,n,k)<<endl;
	return 0;
}*/

/*//2.sliding window
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int n;cin>>n;
	queue<int>q;
	int sum=0;
	int x;cin>>x;
	while(x!=-1)
	{
		q.push(x);
		sum+=x;
		if(q.size()>n)
		{
			sum-=q.front();
			q.pop();
		}
	cout<<(double)(sum)/q.size()<<" ";
	cin>>x;
	}
	cout<<endl;
	return 0;
}*/
//3.sheldon unique string
/*#include<iostream>
#include<stack>
using namespace std;

void unique_string()
{
	char a[1000001];
	cin>>a;
	int last_index[26]={0};
	bool presence[26]={0};
	for(int i=0;a[i]!='\0';i++)
	{
		last_index[a[i]-'a']=i;
	}
	stack<char>s;
	for(int i=0;a[i]!='\0';i++)
	{
		if(!presence[a[i]-'a'])
		{

		while(!s.empty() &&s.top()>a[i]&& last_index[s.top()-'a']>i)
		{
			presence[s.top()-'a']=false;
			s.pop();
		}
		s.push(a[i]);
		presence[a[i]-'a']=true;
     	}
    }
  int k=s.size();
  char b[k];
  b[k--]=NULL;
  //copying the stack element in array
  for(int i=k;i>=0;i--)
  {
  	b[i]=s.top();
  	s.pop();
  }
  //printing ans
  cout<<b<<endl;
}
int main()
{
	unique_string();
	return 0;
}*/


/*#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void ram_arrw(vector<int>a)
{
	stack<int>s;
	s.push(a[0]);
	for(int i=1;i<a.size();i++)
	{
		if(s.top()+a[i]==0)
		{
			s.pop();
		}

		if((s.top()<0 ||s.top()>0) && a[i]>0)
		{
			s.push(a[i]);
		}

		if(s.top()>0 && a[i]<0)
		{
			while(s.top()+a[i]<0)
			{
				s.pop();
			}
			if(s.top()+a[i]>0)
			{
				continue;
			}
			s.push(a[i]);
		}

	}
	//vector<int>vt;
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();	}


}

int main()
{
	int n;cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int x;cin>>x;
		v.push_back(x);
	}
//	vector<int>ans;
//	ans=ram_arrw(v);
//	for(int i=0;i<ans.size();i++)
//	{
//		cout<<ans[i]<<" ";
//	}
	return 0;
}*/


//3RD WEBINAR(TREE)

//1.modify bst with sum greater than nodes

/*#include<iostream>
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

 node* create_tree()
{
	int d;cin>>d;

	if(d==-1)
	return NULL;

	node* root=new node(d);//first input will be made root node
	root->left=create_tree();
	root->right=create_tree();
	return root;

}


void modify_bst(node* root,int &sum)
{
	if(root==NULL)//base case
	{
		return;
	}
	modify_bst(root->right,sum);
	sum+=root->data;
	root->data=sum;
	modify_bst(root->left,sum);
}

 int main()
 {
 	node* root=NULL;
 	root=create_tree();
 	int sum=0;//since we are referencing sum in above bst_modify funcn so its needed to create a bucket for it,we cant simply just pass 0 in plca e of sum
 	modify_bst(root,sum);

 	preorder(root);

 	return 0;
 }*/
 //2.special tree

 /*#include<bits/stdc++.h>
 using namespace std;
 class node
 {
 public:
    int data;
    node *left,*right;

    node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
 };

  int max_elem(int arr[],int s,int e)
 {
     int ans=s;


     for(int i=s+1;i<e;i++)
     {
         if(arr[i]>arr[ans])
         {
            ans=i;
         }

     }


     return ans;
 }

 node* create_tree(int arr[],int &s,int &e)
 {
     if(s>e) return NULL;

   int k=max_elem(arr,s,e);

   node* root=new node(arr[k]);
   int i=s;
   int j=k-1;
   root->left=create_tree(arr,i,j);
   int n=k+1;
   int m=e;
   root->right= create_tree(arr,n,m);
   return root;

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


 int main()
 {
     int arr[10000];
     int n;cin>>n;
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];

     }
     int s=0;
     int e=n-1;
     node* root=create_tree(arr,s,e);
     inorder(root);

     return 0;
 }*/
 //TOTAL SUBTREE WITH GIVEN SUM

 /*#include<bits/stdc++.h>
 #include<queue>
 using namespace std;

 vector<int>v;
char ch[10000];


 class node
 {
 public:
    int data;
    node *left,*right;

    node(int data)
    {

        this->data=data;
        left=right=NULL;
    }
 };

  void string_to_int()
 {
     char *ans=strtok(ch," ");
     while(ans!=NULL)
     {
        v.push_back(stoi(ans));
         ans=strtok(NULL," ");

     }
 }
 node *create_tree()  //creating tree with the string input
 {
     if (strlen(ch)==0 || v.size()==0 )
        return NULL;

     queue<node*> q;
     int i=1;

     int no=v[0];
     node* root=new node(no);
     q.push(root);
     while(!q.empty()&&i<v.size() )
     {
         node *temp=q.front();
         q.pop();
         no=v[i++];
         temp->left=new node(no);
         q.push(temp->left);

         if(i>=v.size())break;
         no=v[i++];
         temp->right=new node(no);
         q.push(temp->right);

         if(i>=v.size())break;

     }
     return root;
 }
 int sum(node *root)
 {

     if (root==NULL)return 0;
     int left_sum=sum(root->left);
     int right_sum=sum(root->right);
     return root->data+left_sum+right_sum;
 }

 int count_sum(node* root,int x)
 {
     if (root==NULL)return 0;
     int ans=0;
     if(sum(root)==x)
     {
         ans=1;
     }
     int left_subtree=count_sum(root->left,x);
     int right_subtree=count_sum(root->left,x);
     return ans+left_subtree+right_subtree;


 }


 int main()
 {
     int t;cin>>t;
     while(t--)
     {
        cin.ignore();
        cin.getline(ch,10000);
        string_to_int();
        node* root=create_tree();
        int x;cin>>x;
        cout<<count_sum(root,x)<<endl;

     }


     return 0;
 }*/


 //BIG BANG THEORY
/* #include<iostream>
 using namespace std;

 class node{
 public:
    int data;
    node*left,*right;

    node(int data)
    {

        this->data=data;
        left=right=NULL;
    }

 };

 node* createtree()
 {

     int data;cin>>data;
     if(data==-1)return NULL;
     node* root=new node(data);
     root->left=createtree();
     root->right=createtree();
     return root;
 }

 node* findnode(node* root,int x)
 {
   if(root==NULL)return NULL;//base case
   //recursive case
   if(root->data==x)return root;
   node* left=findnode(root->left,x);
   node* right=findnode(root->right,x);

  // return (left==NULL?right:left ;
  if (left==NULL)return right;
  else return left;

 }

 int count_node(node* root)
 {

     if(root==NULL)return 0;
     int left_count=count_node(root->left);
    int right_count=count_node(root->right);

    return 1+left_count+right_count;

 }

 int bigbang(node* root,int n,int x)
 {
     node* t=findnode(root,x);

     int left=count_node(t->left);
    int right=count_node(t->right);

    int rem = n-(left+right)-1;

    if(left>right+rem)return 1;
    if(right>left+rem)return 1;
    if(rem>left+right)return 1;

    return 0;



 }

 int main()
 {
    int N,n,x;
    cin>>N>>n>>x;
    node* root=createtree ();
    cout<<bigbang(root,n,x)<<endl;


     return 0;

 }





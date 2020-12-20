#include<iostream>
using namespace std;
class node
{
	public:
	string key;
	int value;
	node* next;
	node(string key,int value)
	{
		this->key=key; //[this->] denote variable (key) is of class member
		this->value=value;
		next=NULL;
	}
	
};
class hashmap
{
	
	void rehash()
	{
	  node** oldbucket=bucket;
	  int oldsize=ms;
	  ms=2*ms;
	  bucket=new node*[ms];
	  for(int i=0;i<oldsize;i++)
	  {
	  	node* temp=bucket[i];
	  	while(temp)
	  	{
	  		insert(temp->key,temp->value);
	  		temp=temp->next;
		}
		  if(oldbucket[i])
		  {
		  	delete oldbucket[i];
		  }
		  
	  }
		  delete oldbucket;	
	}
	public:
	int cs;
	int ms;	
	node** bucket;	
			
	hashmap(int n)
	{
		ms=n;
		cs=0;
		bucket=new node*[ms];
		for(int i=0;i<ms;i++)
		{
			bucket[i]=NULL;
			
		}
		
	}
	
	int hashfn(string key)
	{
		int ans=0;
		int mult=37;
		for(int i=0;key[i]!='\0';i++)
		{
			int data=key[i]*mult;
			ans+=data;
			mult*=37;
			ans%=ms;
			mult%=ms;
			
		}
		return ans;
	}
	void insert(string key,int value)
	{
		int index=hashfn(key);
		node* n=new node(key,value);
		n->next=bucket[index];
		bucket[index]=n;
		cs++;
		float loadfactor=cs/1(1.0*ms)
		{
			if(loadfactor>0.7)
			{
				rehash();
			}
		}
	}
	node* search(string key)
	{
		
	
	}
	
	void print()
	{
		for(int i=0;i<ms;i++)
		{
			cout<<i<<"--";
			node* temp=bucket[i];
			while(temp)
			{
				cout<<temp->key<<" "<<temp->value;
				temp=temp->next;
			}
			
		}
	}	
};
int main()
{
	hashmap h(5);
	 h.insert("apple",200);
	 h.insert("orange",300);
	 
	h.print();	
	return 0;
}

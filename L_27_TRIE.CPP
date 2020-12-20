#include<iostream>
#include<map>
using namespace std;
 class node
 {
 	public:
 	char ch;
	 bool isterminal;
	 unordered_map<char,node>*h;
	 node(char c)
	 {
	 	ch=c;
	 	isterminal=false;
		 }	
 };
 class trie
 {
 	public:
 	node* root;
	 
	 trie()
	 {
	  root=new node('\0');	
		 }
		 void addword( char *word)
		 {
		 	node* temp=root;
		 	for(int i=0;word[i]!='\0';i++)
		 	{
		 		char c=word[i];
		 		if(temp->h.count(c)==0)
		 		{
		 			node* n=new node(c);
		 			temp->h[c]=n;
		 			temp=temp->h[c];
				 }
				 else
				 {
		        	temp=temp->h[c];
	
				 }
		 		
			 }
			 temp->isterminal=true;
		 	
			 }
			 bool search(char *word)
			 {
			 	node* temp=root;
			 	for(int i=0;word[i]!'\0';i++)
			 	{
			 		char c=word[i];
			 		if(temp->h.find(c)==0)
			 		{
			 			return false;
					 }
					 else
					 {
					 temp=temp->h[c];	
					 }
			 		
				 }
				 
		     	 return temp->isterminal;
	 	
			 }
			 	
 };
 
 int main()
 {
 	trie t;
 	t.addword("hey");
 	while(1)
 	{
 		char ch[100];
 		cin>>ch;
 		if(t.search())
 		{
 			cout<<"exists";
		 }
	 }
 	return 0;
 }

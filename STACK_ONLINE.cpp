/*#include<iostream>
#include<stack>
using namespace std;

int main()
{
	// stack<int>s;
	// for(int i=0;i<9;i++)
	// {
	// 	s.push(i);
	// }

	stack<char>s;
	s.push(char(65+5));
	//s.push('B');
	s.push(char(97));

	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}*/

//OOPS OF STACK
/*#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL)
	{}

};


class stack
{
public:
	node* head;
	int cs;

	stack()
	{
		head=NULL;
		cs=0;
	}

	void push(int d)
	{
		if(head==NULL)
		{
			node* n=new node(d);
			head=n;
			cs++;
		}
		else
		{
			node* n =new node(d);
			n->next=head;
			head=n;
			cs++;
		}
	}

	void pop()
	{
		if(cs>0)
		{
			node* temp=head;
			head=head->next;
			delete temp;
			cs--;
		}

	}


	int top()
	{
		// if(cs>0)
		// {
			return head->data;
		// }
		
	}

	bool empty()
	{
		return cs==0;
	}

};

int main()
{
	stack s;
	for(int i=0;i<9;i++)
	{
		s.push(i);
	}

	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}*/
//REVERSE OF STACK BY USING ANOTHER STACK
/*#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int>s;
	stack<int>s1;
	for(int i=1;i<=9;i++)
	{
		s.push(i);
	}
	for(int i=1;i<=9;i++)
	{
		int c=s.top();
		s1.push(c);
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl<<"reverse =";
	for(int i=1;i<=9;i++)
	{
		cout<<s1.top()<<" ";
		s1.pop();
	}
	return 0;
}*/
//REVERSE STACK WITHOUT USING ANY OTHER DATA STRUCTURE
/*#include<iostream>
#include<stack>
using namespace std;
 
 void pushatbottom(stack<int>& s,int t)
 {
 	if(s.empty())
 	{
 		s.push(t);
 		return;
	 }
	 int ele=s.top();
	 s.pop();
	 pushatbottom(s,t);
	 s.push(ele);
 }
void reverse(stack<int> &s)//passing by reference to reflect change in main
{
	if(s.empty()) //base case
	{
		return;
	}
	int t=s.top();
	s.pop();
	reverse(s); //this hold reverse value in call stack expect top which is to push at bottom so again we call another funcn
	pushatbottom(s,t);	
	}
	

void print(stack<int>s)
{
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
	cout<<"AFTER REVERSE"<<"\n";
	
}
int main()
{
	stack<int>s;
	for(int i=1;i<=9;i++)
	{
		s.push(i);
	}
	print(s);
	reverse(s);
	print(s);
	return 0;
}*/

//IMPLEMETING STACK USING TWO QUEUE
/*#include<iostream>
#include<queue>
using namespace std;

class stack
{
	public:
	queue<int>q1;
	queue<int>q2;
	
	void push(int d)
	{
		if(q1.empty()&&q2.empty())
		{
		  q1.push(d);	
		}
		else if(!q1.empty())
		{
		  q1.push(d);	
		}
		else{
			q2.push(d);
		}
	}
	
	void pop()
	{
		if(q1.empty()&&q2.empty())
		{
			return;
		}
		else if(!q1.empty()) 
		{
			while(q1.size()>1)
			{
				int ele=q1.front();
				q1.pop();
				q2.push(ele);
			}
			q1.pop();
		}
		else{
			while(q2.size()>1)
			{
				int ele=q2.front();
				q2.pop();
				q1.push(ele);
			}
			q2.pop();
			
		}
		}
		
		int top(){
		
		 if(!q1.empty()) 
		{
			while(q1.size()>1)
			{
				int ele=q1.front();
				q1.pop();
				q2.push(ele);
			}
			int ans=q1.front();
			q1.pop();
			q2.push(ans);
					return ans;
		}
		else{
				while(q2.size()>1)
			{
				int ele=q2.front();
				q2.pop();
				q1.push(ele);
			}
			int ans=q2.front();
			q2.pop();
			q1.push(ans);
			return ans;
			
		}
			
		}
		
	bool empty()
 	{
 		if(q1.empty() && q2.empty())
 		{
 			return true;
 		}
 		else
 		{
 			return false;
 		}
 	}



};

int main()
{
	stack s;
	for(int i=0;i<6;i++)
	{
		s.push(i);
	}
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}*/
//EVALUATION OF POSTFIX NO
/*#include<iostream>
#include<stack>
using namespace std;

stack<int>s;
int postfix(char* ch)
{
  for(int i=0;ch[i]!='\0';i++)
  {
     	int x,y,z;

     switch(ch[i])
     {
         case '*':  y=s.top();
                       s.pop();
                        x=s.top();
                       s.pop();
                        z=x*y;
                       s.push(z);
                       break;
        case '+':  y=s.top();
                       s.pop();
                        x=s.top();
                       s.pop();
                        z=x+y;
                       s.push(z);
                       break;
           case '-':  y=s.top();
                       s.pop();
                        x=s.top();
                       s.pop();
                        z=x-y;
                       s.push(z);
                       break;
			 case '/':  y=s.top();
                       s.pop();
                        x=s.top();
                       s.pop();
                        z=x/y;
                       s.push(z);
                       break;		                
         default : s.push(ch[i]-'0');
                   break;
     }
  }
  return s.top();
}

int main()
{
	int n;
	cin>>n;
	while(n>0)
	{
	    char ch[100];
	    cin>>ch;
	   cout<<postfix(ch)<<endl;
	    n--;
	}
	return 0;
}*/
//NEXT LARGER ELEMENT
#include <iostream>
#include<stack>
using namespace std;

void nextLargeElem(long long int a[100000],int n)
{
    stack<long long int>s;
    for(int i=0;i<n;i++)
    {
        int elem=a[i];
        s.push(elem);
        int flag=0;
        for(int j=i+1;j<n;j++){
            int d=a[j];
            s.push(d);
            if(s.top()>elem)
            {
                flag=1;
                cout<<s.top()<<" ";
                while(s.top()!=elem)
                {
                    s.pop();
                }
                break;
            }
        }
        if(flag==0)
        {
            cout<<"-1"<<" ";
        }
    }
}

int main() {
    
	//code
	int  t;
	cin>>t;
	while(t>0)
	{
	    long long int a[100000];
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	   nextLargeElem(a,n);
	   cout<<endl;
	    t--;
	}
	return 0;
}

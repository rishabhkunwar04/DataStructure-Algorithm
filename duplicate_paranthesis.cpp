#include<iostream>
#include<stack>
using namespace std;
bool doublebrac(char *ch)
{
	stack<char>s;
	for(int i=0;ch[i]!='\0';i++)
	{
	    if(ch[i]==')')
	    {
	        char temp=s.top();
	        s.pop();
	        int i=0;
	        while(temp!='(')
	        {
	            i++;
	            temp=s.top();
	            s.pop();
	        }
	        if(i<1)
	        {
	            return true;
	        }
	        
	    }
	    else
	    {
	        s.push(ch[i]);
	    }
	}
	return false;
	
}		
int main()
{
	stack<char>s;
	int n;
	cin>>n;
		char ch[1000];
	for(int i=1;i<=n;i++)
	{
	
		cin>>ch;
		s.push(ch);
		doublebrac(ch);
	

	if(doublebrac(ch))
	{
	    cout<<"Duplicate Found"<<endl;
	}
	else
	{
	    cout<<"NO Duplicate Found"<<endl;
	}
   }
	return 0;
}

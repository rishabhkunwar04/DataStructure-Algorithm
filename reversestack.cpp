#include<iostream>
#include<stack>
using namespace std;

void pushatbottom(stack<int> &s,int t)
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
void reverse(stack<int> &s)
{
	if(s.empty())
	{
		return;
	}
	int t=s.top();
	s.pop();
	reverse(s);
	pushatbottom(s,t)
}
int main()
{
	stack<int>s;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		
		s.push(i);	
	}
	reverse(s);
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
    }
	return 0;
}

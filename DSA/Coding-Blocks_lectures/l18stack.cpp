    
#include<iostream>
#include "stack.h"



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
	s.push('B');

	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;

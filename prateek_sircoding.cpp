#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>s;
	int q,type,cost;
	cin>>q;
	int a[100000];
	for(int i=0;i<q;i++)
	{
		if(type==2)
		{
			cin>>cost;
			s.push(cost);
		}
		if(type==1)
		{
			if(!s.empty())
			{
			//	a[i]=s.top();
			cout<<s.top()<<endl;
				s.pop();
				
			}
			else
			{
				cout<<"No Codes"<<endl;
			}
		}
	}
//	for(int i=0;i<q;i++)
//	{
//		cout<<a[i]<<endl;
//	}
//	
	return 0;
}

#include<iostream>
#include<climits>
using namespace std;
int minstep(int n)
{
	if(n==1)
	{
		return 0;
	}
	int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
	op1=1+minstep(n-1);
	if(n%2==0)
	{
		op2=1+minstep(n/2);
	}
		if(n%3==0)
	{
		op3=1+minstep(n/3);
	}
	int ans=min(op1,min(op2,op3));
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<minstep(n)<<endl;

	return 0;
}

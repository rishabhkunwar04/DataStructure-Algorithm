#include<iostream>
using namespace std;
int staircase(int n)
{
	//base case
	if(n==0)
	{
		return 1;
	}
	if(n<0)
	{
		return 0;
	}
	//recursive case
	int ans=staircase(n-1)+staircase(n-2)+staircase(n-3);
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<staircase(n);
	return 0;
}

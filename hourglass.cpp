#include<iostream>
using namespace std;
int main()
{
	int n,l,i,s;
	cin>>n;
	int a=0;
	for(l=n;l>=1;l--)
	{
		for(s=n-l;s>=1;s--)
		{
			cout<<" ";
		}
		for(i=l;i>=0;i--)
		{
			cout<<i;
		}
		for(i=1;i<=l;i++)
		{
			cout<<i;
		}
		cout<<endl;
	}
	for(s=1;s<=n;s++)
	{
	    cout<<" ";
	}
	cout<<a<<endl;
	for(l=1;l<=n;l++)
	{
		for(s=1;s<=n-l;s++)
		{
			cout<<" ";
		}
		for(i=l;i>=0;i--)
		{
			cout<<i;
		}
		for(i=1;i<=l;i++)
		{
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}

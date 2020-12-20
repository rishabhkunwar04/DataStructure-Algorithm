#include<iostream>
using namespace std;
bool issorted(int *a,int n)
{
	//base case
	if(n==0||n==1)
	{
		return true;
	}
	bool kyaaagesesortedmila=issorted(a+1,n-1);
	if(a[0]<=a[1]&&kyaaagesesortedmila)
	{
		return true;
	}
	return false;
}

int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    if(issorted(a,n))
	{
		cout<<"sorted";
	}
	else
	{
		cout<<"not sorted";
	}
	return 0;
}

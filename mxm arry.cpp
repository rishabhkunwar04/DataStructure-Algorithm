#include<iostream>
#include<climits>
using namespace std;
int max(int a[],int n)
{
	int max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		
	}
	return max;
}
int main()
{
	int a[1000000],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int z=max(a,n);
	cout<<z;
	return 0;
}

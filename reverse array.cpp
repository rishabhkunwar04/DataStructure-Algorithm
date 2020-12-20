#include<iostream>
using namespace std;
int rev(int a[],int n)
{
	
	for(int i=n-1;i>=0;i--)
	{
	 cout<<a[i]<<endl;   
		
	}
	return 1;
}
int main()
{
	int a[1000000],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int z=rev(a,n);
	cout<<z;
	return 0;
}

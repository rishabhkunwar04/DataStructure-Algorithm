//KADANES ALGORITHM
//maxm subarray sum
#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int n;
	cin>>n;
	int cs=0,ms=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<n;j++)
	{
		cs+=arr[j];
		if(cs<0)
		{
			cs=0;
		}
		else if(cs>=0)
		{
			ms=max(ms,cs);
		}
		  
	}
	cout<<ms;
	return 0;
}

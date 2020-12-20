#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		
		for(int j=n-1;j>0;j--)
		{
			while(i<=j)
			{
				swap(a[i],a[j]);
			}
		}
		for(i=i;i<n;i++)
		{
			cout<<a[i]<<endl;
		}
  
	}

	return 0;
}

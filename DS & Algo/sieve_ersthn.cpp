#include<iostream>
using namespace std;
//SIEVE OF ERASTThn"
int main()
{
	int n;
	cin>>n;
	int p=2;
	int a[100]={0};
	while(p*p<=n)
	{
		for(int i=2;i*p<=n;i++)
		{
		  a[i*p]=1;	
		}
		for(int i=p+1;i<=n;i++)
		{
			if(a[i]==0)
			{
				p=i;
				break;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(a[i]==0)
		{
		 cout<<i<<" ";
		}
	}
	return 0;
}

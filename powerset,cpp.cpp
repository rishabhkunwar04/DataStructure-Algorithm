#include<iostream>
using namespace std;

void powerset(int a[],int n)
{
	int s=a[1],e=a[n];
	while(s<=e)
	{
		cout<<" set  with only 2 elem and sum"<<" "<<e<<": ";
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(a[i]+a[j]==e)
				{
					cout<<"{"<<a[i]<<","<<a[j]<<"}"<<" ";
					break;
				}
			}
			
		}
		cout<<endl;
		e--;
	}
	
}


int main()
{
	int a[100];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	powerset(a,n);
	return 0;
}

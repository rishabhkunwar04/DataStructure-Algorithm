
#include<bits/stdc++.h>
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
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	int b[100];
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
    cout<<"[";
    //Just corrected the output format
    int flag=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
                if(flag==0)
                {
				    cout<<b[j];    //Sirf first number ko normally cout karaenge
                    flag=1;
                }
                else
                {
                    cout<<", "<<b[j];    //Aage vale sare numbers ko , ke sath print karaenge
                }
				b[j]=99999;
				break;
			}
		}
	}
    cout<<"]";
	return 0;
}

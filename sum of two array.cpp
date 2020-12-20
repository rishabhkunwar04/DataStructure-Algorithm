#include<iostream>
using namespace std;
void sumarr(int a[],int n,int b[],int m)
{
	int r=0;
	int c[10000];
	int i=n-1;
	int j=m-1;
	if(i>=j)
	{
		while(i>=0)
		{
			c[i]=a[i]+b[j]+r;
			r=c[i]/10;
			c[i]=c[i]%10;
			i--;
			j--;
			
		}
		for(i=0;i<n;i++)
		{
			cout<<c[i]<<","<<" ";
		}
		cout<<"END";
	}
	if(j>=i)
	{
		while(j>=0)
		{
			c[j]=a[i]+b[j]+r;
			r=c[j]/10;
			c[j]=c[j]%10;
			i--;
			j--;
			
		}
		for(j=0;j<m;j++)
		{
			cout<<c[j]<<","<<" ";
		}
		cout<<"END";
		
	}
	return;
	
	
	
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m;
	cin>>m;
	int b[m];
	for(int j=0;j<m;j++)
	{
	    cin>>b[j];
	}
	sumarr(a,n,b,m);
	return 0;
}

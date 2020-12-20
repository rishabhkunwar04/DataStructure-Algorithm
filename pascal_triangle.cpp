#include<iostream>
using namespace std;

//PASCAL TRIANGLE
int main()
{
	int n;
	cin>>n;
	int a[100][100];
	for(int l=1;l<=n;l++)
	{
		for(int i=1;i<=l;i++)
		{
			if(i==1 || i==l)
			{
				a[l][i]=1;
			}
			else
			{
				a[l][i]=a[l-1][i-1]+a[l-1][i];
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}


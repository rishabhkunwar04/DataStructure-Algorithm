#include<iostream>
using namespace std;
int main()
{
	int a[100][100];
	int r,c;
	cin>>r>>c;
	int val=1;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		//	cin>>a[i][j];
		a[i][j]=val;
		val++;
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	for(int i=0;i<r;i++)   //TRANSPOSE 
	{
		for(int j=0;j<c;j++)
		{
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
		cout<<endl<<endl;
	for(int i=0;i<r;i++)   //imAGE ROTATION
	{
		for(int j=c-1;j>=0;j--)
		{
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

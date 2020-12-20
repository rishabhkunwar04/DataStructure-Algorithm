#include<iostream>
using namespace std;
int main()
{
	int a[100][100];
	int r,c;
	cin>>r>>c;
   	int val=1;
	for(int row=0;row<r;row++)
	{
		for(int col=0;col<c;col++)
		{
			a[row][col]=val;
			val++;
		}
		cout<<endl;
	}
	for(int row=0;row<r;row++)
	{
		for(int col=0;col<c;col++)
		{
			cin>>a[row][col];
		}
		cout<<endl;
	}
	cout<<endl<<endl; 
	for(int row=0;row<r;row++)
	{
		for(int col=0;col<c;col++)
		{
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}
	cout<<"transpose"<<endl;
	for(int col=0;col<c;col++)
	{
		for(int row=0;row<r;row++)
		{
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}
	
	
	
return 0;	
}

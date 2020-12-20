#include<iostream>
#include<climits>
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
   /*	for(int row=0;row<r;row++)
	{
		for(int col=0;col<c;col++)
		{
			cin>>a[row][col];
		}
		cout<<endl;
	}
	cout<<endl<<endl;*/ 
	for(int row=0;row<r;row++)
	{
		for(int col=0;col<c;col++)
		{
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}
	for(int row=0;row<r;row++)
	{
		int sum=0;
		for(int col=0;col<c;col++)
		{
			sum=sum+a[row][col];
		}
		cout<<sum<<endl;
	
	}
	    int sum;
		int max=INT_MIN;
		for(int i=0;i<r;i++)
		{
			if(max<sum)
			{
			  max=sum;
			}
		}
		cout<<endl;
		cout<<"maxm sum in row"<<" "<<r;
		cout<<endl;
		for(int col=0;col<c;col++)
		{
			sum=0;
			for(int row=0;row<r;row++)
			{
				sum=sum+a[row][col];
			}
			cout<<sum<<" ";
		}
			for(int i=0;i<c;i++)
		{
			if(max<sum)
			{
			  max=sum;
			}
		}
		cout<<endl;
		cout<<"maxm sum in column"<<" "<<c;
		
		
	return 0;
}

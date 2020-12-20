#include<iostream>
using namespace std;
bool ratinmaze(char maze[10][10],int sol[10][10],int i,int j,int n,int m)
{
	if(i==n-1&&j==m-1)//base case
	{
		sol[i][j]=1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<sol[i][j]<<" ";
	     	}
	     	cout<<endl;
		}
		cout<<endl;
		return true;	
	}
	sol[i][j]=1;
	if(j+1<m&&maze[i][j+1]!='X')
	{
		bool kyaagerastamila=ratinmaze(maze,sol,i,j+1,n,m);
		if(kyaagerastamila)
		{
			return true;
		}
		
		
	}
	if(i+1<n&&maze[i+1][j]!='X')
	{
	  bool kyanicherastamila=ratinmaze(maze,sol,i+1,j,n,m);
		if(kyanicherastamila)
		{
			return true;
		}
	}
	sol[i][j]=0;
	return false;
	
}

int main()
{
	char maze[10][10]={"0000","00XX","0000","XX00"};
	int sol[10][10]={0};
	ratinmaze(maze,sol,0,0,4,4);
		
	return 0;
}

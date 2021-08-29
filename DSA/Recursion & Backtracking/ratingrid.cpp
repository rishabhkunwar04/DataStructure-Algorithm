#include<iostream>
using namespace std;
bool ratingrid(char maze[10][10],int sol[10][10],int n,int m,int i,int j)
{
	if(i==n-1&&j==m-1)
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
		return true;
		
	}
	sol[i][j]=1;
	if(j+1<m&&maze[i][j+1]!='X')
	{
	  bool kyaagerastamila=ratingrid(maze,sol,n,m,i,j+1);
	 if(kyaagerastamila)
	 {
		return true;
	 }
		
	}
	
	if(i+1<n&&maze[i+1][j]!='X')
	{
	 bool kyanicherastamila=ratingrid(maze,sol,n,m,i+1,j);
	 if(kyanicherastamila)
	 {
		return true;
	 }
	 sol[i][j]=0;
	 return false;
		
	}

}
int main()
{
	int n,m;
	cin>>n>>m;
	char maze[10][10]={"0X00","000X","00X0","X000","XX00"};
	int sol [10][10]={0};
	ratingrid(maze,sol,n,m,1,1);
	return 0;
}

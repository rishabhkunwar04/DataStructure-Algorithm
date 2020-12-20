
#include<iostream>
using namespace std;

bool ratinamaze(char maze[1000][1000],int sol[1000][1000],int i,int j,int n,int m)
{

	//base case
	if(i==n-1 && j==m-1)
	{
		sol[i][j]=1;
		// return true;
		return true;
	}



	sol[i][j]=1;
    if(j+1<m && maze[i][j+1]!='X')
    {
    	bool kyaAageRastaMila=ratinamaze(maze,sol,i,j+1,n,m);
    	if(kyaAageRastaMila)
    	{
    		return true;
    	}
    }

    if(i+1<n && maze[i+1][j]!='X')
    {
    	bool kyaNeecheRastaMila=ratinamaze(maze,sol,i+1,j,n,m);
    	if(kyaNeecheRastaMila)
    	{
    		return true;
    	}
    }

    sol[i][j]=0;
    return false;

}


int main()
{
	char maze[1000][1000];
	int sol[1000][1000]={0};
	int n,m;
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>maze[i][j];
		}
	}
	if(ratinamaze(maze,sol,0,0,n,m))
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<sol[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else
	{
		cout<<"-1";
	}

}

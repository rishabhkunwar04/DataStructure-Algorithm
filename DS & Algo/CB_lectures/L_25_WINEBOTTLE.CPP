#include<iostream>
using namespace std;
int bottomup(int *a,int n)
{
	int dp[100][100]=0;
	int day=n;
	for(int i=0;i<n;i++)
	{
		dp[i][i]=wine[i]*day;
	}
	day--;
	for(int len=2;len<=n;len++)
	{
		int i=0;
		int max=n-len;
		while(i<=max)
		{
			int j=i+len-1;
			 int op1= a[i]*day+dp[i+1][j];
	         int op2=a[j]*day+dp[i][j-1];
	        dp[i][j]= max(op1,op2);
	        i++;
			
		}
		day--;
		
	}
	
}
int topdown(int *a,int i,int j,int day,int dp[][100] )
{
	if(i>j)
	{
		dp[i][j]=0;
		return 0;		
	}
	if(dp[i][j]!=-1)
	{
		return dp[i][j];
	}

    int op1= a[i]*day+topdown(a,i+1,j,day+1,dp);
	int op2=a[j]*day+topdown(a,i,j-1,day+1,dp);
	dp[i][j]= max(op1,op2);
	return dp[i][j];	
}
int wine(int *a,int i,int j,int day)
{
	if(i>j)
	{
		return 0;
	}
	int op1= a[i]*day+wine(a,i+1,j,day+1);
	int op2=a[j]*day+wine(a,i,j-1,day+1);
	return max(op1,op2);
}
int main()
{
	int n;
	cin>>n;
	int a[100];
	int dp[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			dp[i][j]=-1;
		}
	}
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<bottomup(a,n)<<endl;
	cout<<topdown(a,0,n-1,1,dp)<<endl;
    cout<<wine(a,0,n-1,1);
	return 0;
}

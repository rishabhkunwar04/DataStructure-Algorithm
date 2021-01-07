#include<iostream>
using namespace std;
int knapsackbu(int *wts,int *profit,int capacity,int n)
{
	int dp[100][100]={0};
	profit[0]=0;
	wts[0]=0;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=capacity;j++)
		{
			if(i==0 ||j==0)
			{
				dp[i][j]=0;
			}
			int inc=0,exc=0;
			if(wts[i-1]<=j)
			{
				inc=profit[i-1]+dp[i-1][j-wts[n-1]];
			}
				exc=dp[i-1][j];
		dp[i][j]=max(inc,exc);
		}
	
	}
	return dp[n][capacity];
}
int knapsack(int *wts,int *profit,int capacity,int n)
{
	if(n==0 || capacity==0)
	{
		return 0;
	}
	int inc=0,exc=0;
	if(wts[n-1]<=capacity)
	{
		inc=profit[n-1]+knapsack(wts,profit,capacity-wts[n-1],n-1);
	}
	exc=knapsack(wts,profit,capacity,n-1);
	return max(inc,exc);
	
	
}
int main()
{
	int wts[]={2,2,3,1};
	int profit[]={10,20,10,15};
	int capacity;
	cin>>capacity;
	int n=sizeof(wts)/sizeof(int);
	cout<<knapsack(wts,profit,capacity,n)<<endl;
	cout<<knapsackbu(wts,profit,capacity,n)<<endl;
	return 0;
}

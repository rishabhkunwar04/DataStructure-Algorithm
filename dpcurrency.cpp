#include<iostream>
using namespace std;
int bottomup(int amount,int n,int *coins)
{
	dp[1000];
	dp[0]=0;
	for(int i=1;i<=amount;i++)
	{
		if()
		for(int j=0;j<n;j++)
		{
			dp[i]=min(dp[i],1+dp[i-coins[j]]);
		}
	}
	return dp[n];
}
int coindp(int amount, int *coins, int n)
{
if(amount==0)
{
return 0;
}
int answ=INT_MAX;
for(int i=0;i<n;i++)
{
if(amount>=coins[i] )
{
answ=min(answ,1+coindp((amount-coins[i]),arr,n)	;
}


}
return answ;
}

int topdown(int amount, int *arr, int n,int* dp)
{
if(amount==0)
{
dp[amount]=0;
return 0;
}
if(dp[amount] !=-1)
{
return dp[amount];
}
int answ=INT_MAX;
for(int i=0;i<n;i++)
{
if(amount>=coins[i] )
{
answ=min(answ,1+coindp((amount-coins[i]),arr,n)	;
}
}
dp[amount]=answ; 
return answ;

}


int main()
{
int n,amount ;
cin>>n;
int coins[10000];
for(int i=0;i<n;i++)
{
cin>>coins[i];
}
int dp[10000];
for(int i=0;i<=n;i++)
{
dp[i]=-1;
}
cout<<coindp(amount,coins,n) 
int z=topdown( amount,arr, n,dp);
cout<<z;
cout<<bottomup(amount,n,coins)


}




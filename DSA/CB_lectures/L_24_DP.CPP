//DP INTRO WITH FIBONACCI SERIES.

#include<iostream>
using namespace std;

int topdown(int n,int *dp)
{
if(n==0 ||n==1)
{
dp[n]=n;
return n;
}

if(dp[n] !=-1)
{
return dp[n];
}
int answ=topdown(n-1,dp)+topdown(n-2,dp);
dp[n]=answ;
return dp[n];

}

int bottomup(int n)
{
int dp[10000];
dp[0]=0;
dp[1]=1;
for(int i=2;i<=n;i++)
{
dp[i]=dp[i-1]+dp[i-2];
}
return dp[n];

}

/*int findminstep(int n,int* dp)  //simple recursive approch make the given no = 1 by three options.
{
if(n==1)
{
return 0;
}
int op1=INT_MAX;
int op2=INT_MAX;
int op3=INT_MAX;
op1=1+findminstep(n-1,dp);
if(n%2==0)
{
op2=1+findminstep(n/2,dp);
}
if(n%3==0)
{
op3=1+findminstep(n/3,dp);
}
int answ= min(op1,min(op2,op3));
return answ;
}*/


int findminstepdptd(int n,int* dp) //top down aprroch use bu for bottom up approch 
{
if(n==1)
{
dp[1]=0;
return 0;
}
if(dp[n] !=-1)
{
return dp[n];
}
int op1=INT_MAX;
int op2=INT_MAX;
int op3=INT_MAX;
op1=1+findminstepdptd(n-1,dp);
if(n%2==0)
{
op2=1+findminstepdptd(n/2,dp);
}
if(n%3==0)
{
op3=1+findminstepdptd(n/3,dp);
}
int z=min(op1,min(op2,op3));
dp[n]=z;
return z;

}

int findminstepdpbu(int n)
{
int dp[10000];
dp[1]=0;
int op1=INT_MAX;
int op2=INT_MAX;
int op3=INT_MAX;
for(int i=2;i<=n;i++ )
{
op1=op2=op3=INT_MAX;
op1=dp[i-1];
if(i%2==0)
{
op2=dp[i/2];
}
if(i%3==0)
{
op3=dp[i/3];
}
int z=min(op1,min(op2,op3))+1;
dp[i]=z;

}
return dp[n];

}



int fib(int n)
{
if(n==1 || n==0)
{
return n;
}
int z=fib(n-1)+fib(n-2);
return z;
}

int main()
{
int n;
cin>>n;
int dp[10000];
for(int i=0;i<=n;i++)
{
dp[i]=-1;
}
cout<<topdown(n,dp)<<endl;
int z=fib(n);
cout<<z;
cout<<endl; 
int y=bottomup(n);
cout<<y;
int z=findminstepdptd(n,dp);
cout<<z;

int z=findminstepdpbu(n);
cout<<z;

}




//    N STAIR
#include<bits/stdc++.h> 
using namespace std;
int nstaircase(int n)
{
if(n==1 || n==2 )
{
return n;
}
if(n==3 )
{
return 4;
}
/*if(n==0)
{
return 1;
}
if(n<0)
{
return 0;
}*/
int z=nstaircase(n-1)+  nstaircase(n-2)+   nstaircase(n-3);
return z;
}
int nstaircase1(int n,int k)
{
if(n==1 || n==2 )
{
return n;
}
if(n==3 )
{
return 4;
}


//or base case can be
/*if(n==0)
{
return 1;
}
if(n<0)
{
return 0;
}*/
int answ=0;
for(int i=1;i<=k;i++)
{
answ=nstaircase1(n-i,k)+answ;	
}
//int z=nstaircase(n-1)+  nstaircase(n-2)+   nstaircase(n-3);
return answ;
}

int main()
{
int n;
cin>>n;
int k;
cin>>k;
int z=nstaircase(n);
cout<<z<<endl;
z=nstaircase1(n,k);
cout<<z;

}



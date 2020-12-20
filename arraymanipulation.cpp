/*#include<iostream>
#include<climits>
using namespace std;

int main()
{
     int n,m;
    cin>>n;
    cin>>m;
    int b[n]={0};
    int a[1000000][1000000];
    for(int i=0;i<m;i++)   //input of 2d array
    {
        for(int j=0;j<3;j++)
        {
             int x;
            cin>>x;
            a[i][j]=x;
        }


    } 
    int j=0;
    int ans=INT_MIN;
    for(int i=0;i<m;i++)
    {
        for(int k=a[i][j];k<=a[i][j+1];k++)
        {
             int sum=b[k]+a[i][j+2];
            b[k]=sum;
            ans=max(ans,b[k]);
        }
    }
    cout<<ans;
    return 0;
}*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int N,K,p,q,sum,i,j,max=0,x=0;

    cin>>N>>K;
    long int *a=new long int[N+1]();

    for(i=0;i<K;i++)
    {
        cin>>p>>q>>sum;
        a[p]+=sum;      //using prefix sum algo to reduce complexity
        if((q+1)<=N) a[q+1]-=sum;
    }

    for(i=1;i<=N;i++)
    {
       x=x+a[i];
       if(max<x) max=x;

    }

    cout<<max;
    return 0;
}


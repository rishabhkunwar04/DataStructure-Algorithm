#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int solve( vector<int>arr,int n)
{
  int A=0;
   for(int i=1;i<=n;i++)
   {
    bool flag=1;
    for(int j=0;j<i;j++)
    {
      
      if(arr[i]&arr[j]>0)
      {
        flag=1;
      }
    }
    if(flag)
    {
      for(int k=0;k<i;k++)
      {
        A+=(arr[i]^arr[k]);
      }
    }
   }
   int B=0;
   for(int i=1;i<=n;i++)
   {
    bool flag=1;
    for(int j=0;j<n;j++)
    {
      
      if(arr[i]&arr[j]>0)
      {
        flag=1;
      }
    }
    if(flag)
    {
      for(int k=i;k<n;k++)
      {
        A+=(arr[i]^arr[k]);
      }
    }
   }
   return A+B;
}


int main()
{ 
  int t;
  cin>>t;

  while(t--)
  {
    int n;cin>>n;

    vector<int>arr;
  
    for(int i=0;i<n;i++)
    {
      int x;cin>>x;
      arr.push_back(x);
    }
   cout<< solve(arr,n);
  }
    
    return 0;
}




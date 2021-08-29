#include <bits/stdc++.h>
#define ll long long int
#define INF 199999999600000001
#define MOD 1000000007
#define cpu() ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


void solve(int arr[10001],int n)
{
   vector<int>v;
  for(int i=0;i<n;i++)
  {
    v.push_back(1);
  }
    int res=n;
   
  bool flag=true;

  while(1){
    bool temp=true;
    for(int i=0;i<n;i++)
    {
      if(v[i]*2>arr[i])temp=false;
    }
    if(temp)
    {
      res+=1;
      for(int i=0;i<n;i++)
      {
        v[i]=v[i]*2;
      }
    }else break;
  }

    for(int i=0;i<n;i++)
    {
      res+=arr[i]-v[i];
    }
   cout<<res;


}


int main()
{ 
    int n;cin>>n;
    int arr[10001];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    solve(arr,n);

    
   
    return 0;
}


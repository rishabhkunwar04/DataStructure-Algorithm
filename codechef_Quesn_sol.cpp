/*
A tuple (a,b,c) is considered good if it consists of three prime numbers a, b and c such that a<b<c≤N and a+b=c.

Two tuples are considered different if they differ in at least one position. Given N,
 find the number of good tuples that can be formed by integers from 1 to N.


 #include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define INF 199999999600000001
#define MOD 1000000007
#define endl "\n"
using namespace std;

const int mxN=1e6+5;
int arr[mxN];

vector<int>v(mxN,0);



void good_prime()
{

    ll p=2;
    while(p*p<=mxN)
    {    
        //marking the even no
        for(ll i=2;i*p<=mxN;++i) {
            v[i*p]=1;
        }
        //updating p
        for(ll i=p+1;i<=mxN;++i)
        {
            if(v[i]==0)
            {
                p=i;
                break;
            }
        }
    }
    
     arr[0]=0,arr[1]=0;
    
        for(ll i=2;i<mxN;++i)
        {
            if(v[i]==0 && v[i-2]==0)
            {
                arr[i]=arr[i-1]+1;
            }
            else{
                arr[i]=arr[i-1];
            }
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    good_prime();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        cout<<arr[n];
        
        cout<<endl;
    }

    
   
    return 0;
}





*/

#include <bits/stdc++.h>
using namespace std;


void permut_fn(int arr[10000],int n)
{
  int v[100000];
  for(int i=1;i<=n;i++)
  {
    v[i]=0;
  }
  for(int i=1;i<=n;i++)
  {
    v[arr[i]]++;
  }

  queue<int>q;

  for(int j=1;j<=n;j++)
  {
    if(v[j]==0)q.push(j);
  }
  while(!q.empty())
  {
    cout<<q.front();
    q.pop();
  }
  // int k=1;
  // int cnt=0;
  // while(!q.empty())
  // {
  //   if(v[k]>1 && q.front()<k){ 
  //     return -1;

  //   }
  //   else{
  //       while(v[k]>1)
  //       {
  //         q.pop();
  //         cnt++;
  //         v[k]--;
  //       }
  //   }
  //   k++;
  // }
  // return cnt;

}



int main()
{
    int n;
    cin>>n;
    int arr[10000];
    for(int i=1;i<=n;i++)
    {
      cin>>arr[i];
    }
    permut_fn(arr,n);
   
    return 0;
}


////lunchtime may

##include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fin(n,arr) for(int i=0;i<n;++i)cin>>arr[i]
#define fout(n,arr) for(int i=0;i<n;++i)cout<<arr[i]<<" "
#define vin(n,v) for(int i=0;i<n;++i){int x;cin>>x;v.push_back(x);}
#define INF 199999999600000001
#define MOD 1000000007
#define endl '\n'
const int mxN=1e6+5;
#define cpu() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back

using namespace std;



int main()
{
  cpu()
  
    ll t;
    cin>>t;
    while(t--)
    {
      int n,k;
      cin>>n>>k;
      vector<int>v;
      vin(n,v);
      sort(v.rbegin(),v.rend());
      int sm1=0,sm2=0;
      for(int i=0;i<(n-2);i++)
      {
        if(i%2==0)sm1+=v[i];
        else sm2+=v[i];
      }
      sm2=sm2+v[n-2]+v[n-1];

         cout<<max(sm1,sm2);
      cout<<endl;

    }
    
   
    return 0;
}







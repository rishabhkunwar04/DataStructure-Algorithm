#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define INF 199999999600000001
#define MOD 1000000007
#define endl "\n"

using namespace std;

int good_prime(ll n)
{
    vector<int>v(n,0);

   // memset(v,0,sizeof(v));

    ll p=2;
    while(p*p<=n)
    {    
        //marking the even no
        for(ll i=2;i*p<=n;++i) {
            v[i*p]=1;
        }
        //updating p
        for(ll i=p+1;i<=n;++i)
        {
            if(v[i]==0)
            {
                p=i;
                break;
            }
        }
    }
    // for(int i=2;i<=n;++i){
    //     if(v[i]==0){
    //         cout<<i<<" ";
    //     }
    // }
     int ans=0;
        //finding no of good prime no
        for(ll i=3;i+2<n;++i)
        {
            if(v[i]==0)
            {
                if(v[i+2]==0)ans++;
            }
        }
return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        cout<<good_prime(n);
        
        cout<<endl;
    }

    
   
    return 0;
}


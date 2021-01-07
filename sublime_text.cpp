#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void billiard_game(ll n,ll k,ll x,ll y)
{
    vector<pair<ll,ll>>vect;
    ll flag=1;
    if(x==y)
    {
        flag=0;
        cout<<n<<" "<<n;
    }
    else{
        if(x>y)
        {
            ll d=n-x;
            ll d1=d+x;
            ll d2=d+y;
            vect.push_back(make_pair(d1,d2));
            vect.push_back(make_pair(d2,d1));
            vect.push_back(make_pair(0,d1-d2));
            vect.push_back(make_pair(d1-d2,0));

        }
        else{

            ll d=n-y;
            ll d1=d+x;
            ll d2=d+y;
            vect.push_back(make_pair(d1,d2));
            vect.push_back(make_pair(d2,d1));
            vect.push_back(make_pair(d2-d1,0));
             vect.push_back(make_pair(0,d2-d1));


        }
    }
    if(flag)
    {
        ll i=(k)%4;
        cout<<vect[i-1].first<<" "<<vect[i-1].second;
    }
}





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,k,x,y;
       cin>>n>>k>>x>>y;
       billiard_game(n,k,x,y);
        cout<<'\n';
    }

   
    return 0;
}


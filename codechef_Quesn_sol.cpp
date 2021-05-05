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



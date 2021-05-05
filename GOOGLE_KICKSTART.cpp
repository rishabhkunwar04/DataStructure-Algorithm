//ROUND_A ..rabit jump

/*#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fin(n,arr) for(int i=0;i<n;++i)cin>>arr[i]
#define fout(n,arr) for(int i=0;i<n;++i)cout<<arr[i]<<" "
#define INF 199999999600000001
#define MOD 1000000007
#define endl '\n'
const int mxN=1e6+5;

using namespace std;

void rabbit_jump(int r,int c,int arr[51][51],int ans[51][51],int t)
{
        priority_queue< pair< int, pair<int, int> > > pq;

     for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                pq.push({arr[i][j], {i, j}});
            }
        }
        int cnt=0;
        while(cnt<r*c)
        {
            pair<ll,pair<int,int>>pr=pq.top();
            pq.pop();
            ll d=pr.first;
            int x=pr.second.first;
            int y=pr.second.second;

            //
            if(x<1 || x>r ||y<1 ||y>c)continue;
            if(ans[x][y]==-1)
            {
                ans[x][y]=d;cnt++;

                pq.push({d-1,{x-1,y}});
                pq.push({d-1,{x+1,y}});
               pq.push({d-1,{x,y-1}});
                 pq.push({d-1,{x,y+1}});
              


            }
        }
        ll res=0;
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++)
            {
                res+=ans[i][j]-arr[i][j];
            }
        }
        cout << "Case #" << t << ": " << res << endl;


}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int r,c;
        cin>>r>>c;
        int arr[51][51];
        int ans[51][51];
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
              cin>>arr[i][j];
            }
        }
         for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
              ans[i][j]=-1;;
            }
        }

        rabbit_jump(r,c,arr,ans,i);
        
        
        cout<<endl;

    }
    
   
    return 0;
}

*/
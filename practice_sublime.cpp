#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int k;cin>>k;

        int diff=n-k;

     int i=1;
     int x=1;
     while(i<=n)
     {
        cout<<x<<" ";
        i++;
        if(diff>0)
        {
            cout<<(-x)<<" ";
            i++;
          diff--;
        }
        x++;
     }

    }

    return 0;
}


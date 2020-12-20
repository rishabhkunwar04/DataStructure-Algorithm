#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,bin=0,pos=10,r;
    int arr[100],ans=0;
    int i=0;
    cin >> n;
    while(n>0)
    {
        r=n%2;
       // arr[i]=r;
       // i++;
        bin=bin*pos+r;
        
        n=n/2;
    }
//    for(int j=0;j<=i;j++)
//    {
//        int x=0;
//        if(arr[j]=='1')
//        {
//            while(arr[j]!='0')
//            {
//              x++;
//              ans=max(ans,x);
//              j++;
//            }
//
//        }
//        
//    }
    cout<<bin;
    return 0;
}


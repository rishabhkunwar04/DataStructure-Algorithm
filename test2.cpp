#include<bits/stdc++.h>
using namespace std;
#define int long long


int unaffected(string s)
{
 string r=s;
   reverse(r.begin(),r.end());

   int cnt=0;

   for(int i=0;i<s.size();i++)
   {
    if(r[i]==s[i])cnt++;
   }
   return cnt;

}


int32_t main()
{
   string s;
   cin>>s;

   cout<<unaffected(s);
       
}
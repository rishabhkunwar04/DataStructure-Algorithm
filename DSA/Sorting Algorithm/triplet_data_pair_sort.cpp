#include<bits/stdc++.h>
using namespace std;
  bool compare( const pair<int,pair<int,int> > &p1,const pair<int,pair<int,int > >&p2)
  {
      if((p1.second.first+p1.second.second)==(p2.second.first+p2.second.second))
      {
          return (p1.second.first<p2.second.first);
      }
      else{
          return (p1.second.first+p1.second.second<p2.second.first+p2.second.second);
      }
  }
int main()
{
    int n;
    cin>>n;
   vector< pair<int,pair<int,int> > >p;
    for(int i=0;i<n;i++)
    {
        int o,pr;
        cin>>o>>pr;
        p.push_back(make_pair(i+1,make_pair(o,pr)));
    }
    sort(p.begin(),p.end(),compare);

    for(int i=0;i<p.size();i++)
    {
        cout<<p[i].first<<" ";
    }
    return 0;
}

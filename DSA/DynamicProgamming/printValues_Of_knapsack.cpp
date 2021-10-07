
//RECURSIVE APPROACH

#include <bits/stdc++.h>
#define ll long long int
#define MOD 1e7
using namespace std;

void copyArr(int arr[], int arrDest[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        arrDest[i] = arr[i];
    }
}


int knp( vector<int>durn,vector<int>cost,int tc,int n,int i,int *arr)
{
  if(i==n || tc==0)return 0;

   if(durn[i]>tc)
   { 
    return knp(durn,cost,tc,n,i+1,arr);
   }

     int with= cost[i]+knp(durn,cost,tc-durn[i],n,i+1,arr);

  /* Consider the hypothetical situation in which, during the execution of your 
  function, with is greater than without: during the with calculation arr is filled with the 
  correct values; but then start the without calculation which is going to overwrite the arr values.

Since with is greater than without, the returned arr will be the wrong one, and this is the cause of the problem.

A simple fix would be to make a copy of the arr returned by the with calculation so it is not going to be overwritten
 by the without calculation, for example:*/

     // copy the "with" arr
      int arrWith[n];
     copyArr(arr, arrWith, n);

     int without=  knp(durn,cost,tc,n,i+1,arr);

  if(with>without){
    
        // restore the "with" arr
       copyArr(arrWith, arr, n);

       arr[i]=1;
       return with;
   }
   else{
       arr[i]=0;
       return without;
   }


} 


int main()
{ 
   vector<int>durn{60,120,360,240,180};
   vector<int>cost{150,300,400,500,600};
   int tc=8;
   int n=durn.size();

   int arr[n];

   int res=knp(durn,cost,tc*60,n,0,arr);
   cout<<res<<'\n';

   map<int,pair<int,int>,greater<>>mp;

   for(int i=0;i<n;i++)
   {
     if(arr[i]==1){
     mp[cost[i]]={i+1,durn[i]};
     }
   }

   for(auto x:mp)
   {
    cout<<"Advertisement "<<x.second.first<<" with duration "<<x.second.second<<" with charge "<<"$ "<<x.first<<'\n';
   }
   

    return 0;
}


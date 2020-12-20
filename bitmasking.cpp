#include<iostream>
using namespace std;

//CLEAR BIT of no to //
/* int clearbit(int &n,int i)
 {
 	int mask=1<<i;  //or//int mask=~(1<<i)
 	n=(n ^ mask);// or // n=n&mask
 	return n;
 }
int main()
{
    int n,i;
    cin>>n>>i;
    cout<<clearbit(n,i);

	return 0;
}
  //UNIQUE NO 2 //

  int uniq2(int *a,int n)
  {
  	int res=0;
  	for(int i=0;i<n;i++)
  	{
  		res=res^a[i];
	  }
	  // finding set bits
	  int i=0;
	  int temp=res;
	  while(temp>0)                                                                                                                                                          C 
	  {
	  	if(temp&1)
	  	{
	  		break;
		  }
		  i++;
		  temp=temp>>1;
	  }
	  //forming bitmask
	  int mask=1<<i;
	  int firstno=0;
	  for(int i=0;i<n;i++)
	  {
	  	if((mask&a[i])!=0)
	  	{
	  		firstno=firstno^a[i];
		  }
	  }
	  int second=(res^firstno);
	  cout<<firstno<<" "<<second;
  }
  int main()
  {
  	int a[]={1,1,2,2,3,4,4,5,};
  	int n=sizeof(a)/sizeof(int);
  	uniq2(a,n);
  	return 0;
  }*/

//FLIP EVERY BIT OF A NO 32 BIT FORMAT
/*#include <bits/stdc++.h>

using namespace std;



int main()
{
  int t;cin>>t;
  while(t--)
  {
    unsigned int n;
    cin>>n;
    cout<<~n<<endl;
  }
  


    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int XorSum(vector<ll>v,ll l,ll r)
{
  int res=0;
  for(ll i=l;i<=r;i++)
  {
      res^=v[i];
  }
  return res;
}

int main()
{
  int q;cin>>q;
 // assert(1<=q&&q<=100000);
  while(q--)
  {
    ll l,r;
    cin>>l>>r;
   // assert(1<=l&& l<=r &&r<=1000000000000000);
    vector<ll>v;
    v.push_back(0);
    for(int i=1;i<=r;i++)
    {
      int x=v[i-1]^i;
      v.push_back(x);
    }
    cout<<XorSum(v,l,r)<<endl;
  }

  return 0;
}

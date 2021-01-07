#include<iostream>
#include<climits>
using namespace std;
int gcd(int c,int d)
{
	if(d==0)
	{
		return c;
	}
	 
	gcd(d,c%d);
}

int main()
{
	int a,b;
	cin>>a>>b;
	int c=min(a,b);
	int d=max(a,b);
    cout<<gcd(c,d);
	return 0;
}

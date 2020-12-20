#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		float a,b;
		cin>>a>>b;
		cout<<(a/b)<<endl;
		cout<<fixed<<setprecision(3)<<(a/b);
	}
	return 0;
}

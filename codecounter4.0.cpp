#include<bits/stdc++.h>
using namespace std;

//SUM OF SET BITS
/*int count_setbits(int a,int b)
{
	int count=0;
	int ans=0;
	for(int i=a;i<=b;i++)
	{
		if(i<0)
		{
			i=i*(-1);
		}
		while(i>0)
		{
		//	count=count+(i&1);
		//	i=i>>1;
		i=(i&(i-1));
		count++;
		}
		ans+=count;
	}
	return ans;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a,b;
		cin>>a>>b;
		cout<<count_setbits(a,b)<<endl;
	}
	return 0;
}*/

//SOLDIER AND BOMB SUM ON X axis
/* int soldier(int a[],int b[],int n)
 {
 	int sum=0;
 	for(int i=0;i<n-1;i++)
 	{
 		for(int j=i+1;j<n;j++)
 		{
 			sum+=((a[j]-a[i])*max(b[j],b[i]));
		}
	 }
	   return sum;
 }
int main()
{
	int t;
	cin>>t;
	int a[100],b[100];
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		cout<<soldier(a,b,n)<<endl;
	}
	return 0;
}*/

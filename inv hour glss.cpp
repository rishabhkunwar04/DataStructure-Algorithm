#include<iostream>
using namespace std;
int main()
{
	int n,l,i,s;
	cin>>n;
	int a=0;
	for(l=n;l>0;l--)
	{
		
		for(i=n;i>=l;i--)
		{
			cout<<i;
		}
	   for(s=1;s<=2*l-1;s++)
	   {
	       cout<<" ";
     	}		
      	for(i=l;i<=n;i++)
       {
         	cout<<i;
	   }
	   cout<<endl;
    }
    for(i=n;i>=0;i--)
    {
    	cout<<i;
	}
	for(i=1;i<=n;i++)
	{
		cout<<i;
	}
	cout<<endl;
    for(l=1;l<=n;l++)
    {
    	for(i=n;i>=l;i--)
    	{
    		cout<<i;
		}
		for(s=1;s<=2*l-1;s++)
		{
			cout<<" ";
		}
		for(i=l;i<=n;i++)
		{
			cout<<i;
		}
		cout<<endl;
		
	}
	return 0;
}

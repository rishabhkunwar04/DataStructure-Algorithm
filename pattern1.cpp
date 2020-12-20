#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=1;
	int b=0;
	for(int l=1;l<=n;l++)
	{
		if(l%2==0)
		{
			cout<<a;
			for(int e=1;e<=l-2;e++)
			{
				cout<<b;
			}
			cout<<a<<endl;	
		}
		else
		{
			for(int e=1;e<=l;e++)
			{
				cout<<a;
			}
			cout<<endl;	
		}
		
	}
	return 0;
}

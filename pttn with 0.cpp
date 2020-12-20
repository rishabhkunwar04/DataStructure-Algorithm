#include<iostream>
using namespace std;
int main()
{
	int n;
	int a=0;
	cin>>n;
	for(int l=1;l<=n;l++)
	{
		if(l==1)
		{
			cout<<l<<endl;
			continue;
		}
		cout<<l-1<<"\t";
		for(int i=0;i<l-2;i++)
		{
			cout<<a<<"\t";
		}
		cout<<l-1<<endl;
	}
	return 0;
}

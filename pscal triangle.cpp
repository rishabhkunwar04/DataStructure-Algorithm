#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int l=1;l<=n;l++)
	{
		int c=1;
		for(int i=1;i<=l;i++)
		{
			cout<<c<<"\t";
			c=c*(l-i)/i;
		}
		cout<<endl;
    }
    return 0;
}

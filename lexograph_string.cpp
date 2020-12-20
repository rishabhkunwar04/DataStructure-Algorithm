#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string name;
	char ch[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>name;
		ch[i]=name;
	}
	sort(ch,ch+n);
	for(int i=0;i<n;i++)
	{
		cout<<ch[i]<<endl;
	}
	
	return 0;
	
}

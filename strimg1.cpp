#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	char ch[n][100];
	for(int i=0;i<n;i++)
	{
		cin.ignore();	  
		cin>>ch[i];
      
	}

	for(int i=0;i<n;i++)
	{
		cout<<ch[i]<<endl;
	}
	return 0;
	
}

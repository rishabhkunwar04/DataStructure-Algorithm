//#include<bits/stdc++.h>
#include<iostream>
//#include<string.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	//char ch[n][100];
	string a[n]; 
	//cin.ignore();
	for(int i=0;i<n;i++)
	{
		
		getline(cin,a[i]);
    }
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
	
}

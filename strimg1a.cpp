//#include<bits/stdc++.h>
#include<iostream>
//#include<string.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	//char ch[n][100];
	char str[100]; 
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		
		cin.getline(str,100);
    }
	for(int i=0;i<n;i++)
	{
		cout<<str[i]<<endl;
	}
	return 0;
	
}

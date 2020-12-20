#include<iostream>
using namespace std;
void newno(char *a,char *b,char *out,int i,int j,int k)
{
	if(a[i]=='\0'&& b[j]=='\0')
	{
		out[k]='\0';
		cout<<out<<endl;
		return;
	}
	if(a[i]==b[j])
	{
		out[k]='0';
	}
	else
	{
		out[k]='1';
	}
	
	newno(a,b,out,i+1,j+1,k+1);
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		char a[100];
		char b[100];
		char out[100];
		cin>>a>>b;
		newno(a,b,out,0,0,0);
	}
	return 0;
}

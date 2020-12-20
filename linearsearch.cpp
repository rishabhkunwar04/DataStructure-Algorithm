#include<iostream>
using namespace std;
void linearsearch(int a[1000000],int n,int key) 
{
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
			
		}
		
	}
	int i;
	if(flag==1)
		{
			cout<<i;
		}
	return;
}

int main()
{
	int a[1000000],n,key;
	cin>>n;
	cin>>key;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	linearsearch(a,n,key);
	return 0;
}

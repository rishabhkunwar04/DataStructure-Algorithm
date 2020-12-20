#include<iostream>
using namespace std;
int search(int *a,int n,int i,int data)
{
	if(n==0)
	{
		return -1;
	}
	if(a[i]==data)
	{
		return i;
	}
	search(a,n,i+1,data);
	
}
int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
    }
	int data;
	cin>>data;  
    cout<<search(a,n,0,data)<<endl;
	
	return 0;
}


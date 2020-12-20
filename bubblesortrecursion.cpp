#include<iostream>
using namespace std;
/*void bubblesort(int *a,int n,int i)  //meathod 1
{
	if(i==n-1)
	{
		return;
	}
	for(int j=0;j<n-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			swap(a[j],a[j+1]);
		}
	}
	bubblesort(a,n,i+1);
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
	bubblesort(a,n,0);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}*/



void bubblesort(int *a,int n,int i,int j)    //meathod 2
{
	if(i==n-1)
	{
		return;
	}
	if(j==n-i-1)
	{
		bubblesort(a,n,i+1,0);
		return;
	}
	if(a[j]>a[j+1])
	{
		swap(a[j],a[j+1]);
	}
	bubblesort(a,n,i,j+1);
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
	bubblesort(a,n,0,0);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

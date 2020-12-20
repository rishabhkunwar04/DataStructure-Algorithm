#include<iostream>
using namespace std;
void insertionsort(int a[],int n) 
{
for(int i=1;i<n;i++)
{
	int key=a[i];
	int j=i-1;
	while(j>=0&&a[j]>key)
	{
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=key;
}
}
void printarray(int a[],int n)
{
	for( int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<endl;
	return;
	
}
int main()
{
   int a[1000],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	insertionsort(a,n);
	printarray(a,n);
	return 0;
}

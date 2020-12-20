#include<iostream>
using namespace std;
/*void printarray(int *a,int n)    //meathod 1
{
	if(n==0)//base case
	{
		return;
	}
	cout<<a[0]<<" ";
	printarray(a+1,n-1);//recursive case
	
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
	printarray(a,n);
	
	return 0;
}*/


    //meathod 2
void printarray(int a[],int n,int i)
{
	if(i==n)//base case
	{
		return;
	}
	cout<<a[i]<<" ";
	printarray(a,n,i+1);//recursive case
	
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
	printarray(a,n,0);
	
	return 0;
}



#include<iostream>
using namespace std;
/*void printreversearray(int *a,int n)    //meathod 1
{
	if(n==0)//base case
	{
		return;
	}
	
	printreversearray(a+1,n-1);//recursive case
	cout<<a[0]<<" ";
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
	printreversearray(a,n);
	
	return 0;
}*/


    //meathod 2
void printreversearray(int a[],int n,int i)
{
	if(i==n)//base case
	{
		return;
	}
	printreversearray(a,n,i+1);//recursive case
	cout<<a[i]<<" ";
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
	printreversearray(a,n,0);
	
	return 0;
}



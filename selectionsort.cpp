#include<iostream>
using namespace std;
void selectionsort(int a[1000000],int n) 
{
	for(int i=0;i<n-1;i++)
	{
	     int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
			swap(a[i],a[min]);
		}
		
	}
	return;
}
void printarray(int a[],int n)
{
	for( int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return;
	
}
int main()
{
	int a[1000000],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	selectionsort(a,n);
	printarray(a,n);
	return 0;
}

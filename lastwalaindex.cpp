#include<iostream>
using namespace std;
int lastindex(int *a,int n,int i,int data)
{
	if(i==n)//base case
	{
		return -1;
	}
	int abhiwalaindex,nextindexdedo;
	if(a[i]==data)
	{
		abhiwalaindex=i;
		nextindexdedo=lastindex(a,n,i+1,data);
		if(abhiwalaindex<nextindexdedo)
		{
			abhiwalaindex=nextindexdedo;
			
		}
		return abhiwalaindex;
		
	}
	return lastindex(a,n,i+1,data);
	
	
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
	cout<<lastindex(a,n,0,data);
	
	return 0;
}

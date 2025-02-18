#include<iostream>
using namespace std;

int rotatedbinary_serc(int arr[],int s,int e,int k)
{
	if(s>e)return -1;
	
	int mid=(s+e)/2;

	if(arr[mid]==k)return mid;
	
	if(arr[s]<=k)
	{
		if(arr[mid]<=k || arr[mid]>=k){
			return rotatedbinary_serc(arr,s,mid-1,k);
		}
		else
		{
			return rotatedbinary_serc(arr,mid+1,e,k);
			
		}
	}
	
	if(arr[mid]<=k && arr[e]>=k)
	{
		return rotatedbinary_serc(arr,s,mid-1,k);

	}
	else
	{
		return rotatedbinary_serc(arr,mid+1,e,k);

	}
	
}

int main()
{
	int arr[]={4,5,6,7,1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=2;
	cout<<rotatedbinary_serc(arr,0,n-1,k)<<endl;
	return 0;
}

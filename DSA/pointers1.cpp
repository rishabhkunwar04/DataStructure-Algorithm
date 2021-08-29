#include<iostream>
using namespace std;
/*void selectionsort(int *arr,int n;)
{
	for(i=0;i<n-1;i++)
	{
	  int min=i;
	  for(j=i+1;j<n;j++)      //selection sort by pointer
	  {
	  	if(*[arr+min]>*[arr+j)
	  	{
	  		min=j;
	  		
		}
    }
		swap(*[arrmin],*[arr+j]);
	  
	}
	return 0;
	
}
int main()
{
	int n;
	cin>>n;
	int arr[1000000]
	for(i=0;i<n;i++)
	{
		cin>>a[i]
	}
	selectionsort(arr,n);
	return 0;
}
/*void swap(int *a,int *b)  
{
	int temp=*a;
	*a=*b;          //swapping with pointers
	*b=temp;
	                                        
}
int main()
{
	int a=10,b=15;
	cout<<"before swapping"<<a<<" "<<b<<endl;
	swap(&a,&b);
    cout<<"after swapping"<<a<<" "<<b<<endl;
     return 0;*/
/*	int arr[]={1,2,3,4,5,6};
	cout<<arr<<endl;
	cout<<&arr<<endl;     //all 3 gives same value
	cout<<&arr[0]<<endl;
}*/


void bubblesort(int *arr,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1)           //bubble sort with pointers
		{
			if(*[arr+j]>*[arr+j+1])
			{
				swap(*[arr+j],*[arr+j+1])
			}
		}
		return;
	}
	
}
int main()
{
	int n;
	cin>>n;
	int arr[1000000]
	for(i=0;i<n;i++)
	{
		cin>>a[i]
	}
	bubblesort(arr,n);
		for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}


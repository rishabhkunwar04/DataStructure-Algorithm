#include<iostream>
using namespace std;

//SELECTION SORT

//int main()    
//{
//	int n,a[100];
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	for(int i=0;i<n-1;i++)
//	{
//	   int min=i;
//		for(int j=i+1;j<n;j++)
//		{
//			if(a[min]>a[j])
//			{
//				min=j;
//			}
//	
//		}
//		swap(a[i],a[min]);
//	
//	}
//		for(int i=0;i<n;i++)
//		{
//			cout<<a[i]<<" ";
//		}
//	return 0;
//}

  //INSERTION SORT
  
// int main()
// {
// 	int n,a[100];
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	for(int i=1;i<n;i++)
//	{
//		int no=a[i];
//		for(int j=i-1;j>=0&&a[j]>no;j--)
//		{
//			a[j+1]=a[j];
//		}
//		int j;
//		a[j+1]=no;
//	}
//		for(int i=0;i<n;i++)
//	    {
//		cout<<a[i]<<" ";
//	
//		}
//	
// 	
// 	return 0;
// }


//COUNTING SORT
 int main()
 {
 	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int freq[10]={0};
	for(int i=0;i<n;i++)
	{
		int index=a[i]-'a';
		freq[index]++;
	  	
	}
	for(int i=0;i<n;i++)
	{
		int index;
		while(freq[index]!=0)
		{
			cout<<i<<" ";
			
			freq[index]--;
		}
	}
	return 0;
}


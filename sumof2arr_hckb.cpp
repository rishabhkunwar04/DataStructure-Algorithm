#include<iostream>
using namespace std;

void sum(int* arr1, int* arr2, int n, int m)
	{
		int arr[1000];
		int size;
		if(n>m)
		{
			size=n+1;
		}
		else
		{
			size=m+1;
		}
		
		int k = size;
		for(int i=0;i<k;i++)
		{
			arr[i]=0;
		}
		
		while(k>0 || m>0 || n>0)
		{
			int sum=(arr1[n]+arr2[m])%10;
			int carry =(arr1[n]+ arr2[m])/10;
			
			arr[k]+=sum;
			arr[k-1]+=carry;
			
			k--;
			m--;
			n--;
            //When n or m become less than 0 we keep them in range but make their value 0
            if(m<0)
                {m=0;
                 arr2[0]=0;
                }
            if(n<0)
                {n=0;
                 arr1[0]=0;
                }
		}

        //Earlier you code was failing for the test case
        // 1
        // 4
        // 9 9 9 9
        // 1
        // 1
        //Added this loop to check whether any digit>=10. If it is then we divide it by 10 and add the carry
        for(int i=size;i>0;i--)
            {arr[i-1]+=arr[i]/10;
             arr[i]%=10;
            }
        int i=0;
        //You have to only print the leftmost digit if it is greater than 0
		if(arr[0]>0)
            i=0;
        else 
            i=1;
		for(;i<size;i++)
		{
			cout<<arr[i]<<", ";
		}
		
		cout<< "END";
		
	}



int main()
{
	int n;
	cin>>n;
	int arr1[1000];
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	int m;
	cin>>m;
	int arr2[1000];
	for(int j=0;j<m;j++)
	{
		cin>>arr2[j];
	}
	
	sum(arr1,arr2,n,m);
}

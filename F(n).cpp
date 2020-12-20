#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	int sum=0;
        cin>>a;	     
    for(int i=1;i<=a;i++)
    {
    	if(i%2==0)
    	{
    		sum=sum+i;
		}
		if(i%2!=0)
		{
			sum=sum-i;
		}
    	
	}
	cout<<sum<<endl;
    
   
    }
    
	
    return 0;
}


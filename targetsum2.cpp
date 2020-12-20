#include<iostream>
using namespace std;
int main() 
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==m)
            {
            	if(a[i]<a[j])
            	{
            	 cout<<a[i]<<" "<<"and"<<" "<<a[j]<<endl;	
				}
                if(a[j]<a[i])
                {
                	cout<<a[j]<<" "<<"and"<<" "<<a[i]<<endl;
                	
                	
				}
            }
        }
    }
	return 0;
}

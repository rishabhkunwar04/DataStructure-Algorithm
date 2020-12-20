#include<iostream>
using namespace std;
int main() 
{
    int n,i,j,k;
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
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n-2;k++)
            {
                if(a[i]+a[j]+a[k]==m)
                {
                    cout<<a[i]<<","<<" "<<a[j]<<" "<<"and"<<" "<<a[k]<<endl;
                }
                
            }
          
        }
    }
	return 0;
}

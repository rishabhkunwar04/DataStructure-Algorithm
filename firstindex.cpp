#include<iostream>
using namespace std;
int firstindex(int a[],int n,int m,int i)
{
    if(i==n-1)
    {
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            return i;
        }
    }
}
int main() 
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    cout<<firstindex(a,n,m,0)<<endl;
	return 0;
}

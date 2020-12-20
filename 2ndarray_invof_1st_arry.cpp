#include<iostream>
using namespace std;
bool mirrorinverse(int *a,int *b,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[a[i]]!=b[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[n];
    for(int i=0;i<n;i++)
    {
    	cin>>b[i];
    	
	}
    mirrorinverse(a,b,n);
    if(mirrorinverse(a,b,n))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
	return 0;
}

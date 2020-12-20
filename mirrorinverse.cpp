#include<iostream>
using namespace std;
bool mirrorinverse(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[a[i]]!=i)
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
    mirrorinverse(a,n);
    if(mirrorinverse(a,n))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
	return 0;
}

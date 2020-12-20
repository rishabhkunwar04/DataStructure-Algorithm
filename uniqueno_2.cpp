#include <iostream>
using namespace std;
int main()
{
    int a[10000],i=0,x=0,y=0,n,xr=0,p;
    cin>>n;
    i=0;
    while(i<n)
    {
        cin>>a[i];
        xr=xr^a[i++];
    }
    i=0;
    //To get the rightmost set bit
    int check= xr & ~(xr-1);
    while(i<n)
    {
        if(check&a[i])   //Compare with the rightmost set bit of every number
            x=x^a[i];
        else
            y=y^a[i];
        i++;
        //xr=xr>>1;    //No need to shift
    }
    i=0;
    cout<<min(x,y)<<" "<<max(x,y);    //To print the small number first
}


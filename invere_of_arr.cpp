#include<iostream>
using namespace std;
int main() 
{ 
    
	int n;
    cin>>n;
    int a[n];
    int brr[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
    	int z=a[i];
    	brr[z]=i;
    	//cout<<a[z]<<" ";
        // 1 2 3 4 5    
    }
    for(int i=0;i<n;i++)
    {
    	cout<<brr[i]<<" ";
    }
	return 0;

}

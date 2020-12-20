#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<2*n;i++)
    {
    
        cout<<"*";
    }
    cout<<endl;
    for(int l=1;l<n;l++)
    {
        for(int i=1;i<=n-l;i++)
        {
            cout<<"*";
        }
        for(int s=1;s<=2*l-1;s++)
        {
            cout<<" ";
        }
         for(int i=1;i<=n-l;i++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for(int l=1;l<n-1;l++)
    {
        for(int i=1;i<=l+1;i++)
        {
            cout<<"*";
        }
        for(int s=n;s>=2*l-1;s--)
        {
            cout<<" ";
        }
         for(int i=1;i<=l+1;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
      for(int i=1;i<2*n;i++)
    {
    
        cout<<"*";
    }
    
	return 0;
}

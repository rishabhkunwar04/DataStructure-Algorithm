#include<iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    for(int l=(n+1)/2;l>=1;l--)
    {
        if(l==(n+1)/2)
        {
            for(int i=0;i<n;i++)
            {
                cout<<"*"<<"\t";
                
            }
            
            cout<<endl;
            continue;
        }
        for(int i=1;i<=l;i++)
        {
            cout<<"*"<<"\t";
        }
        for(int s=1;s<=n-2*l;s++)
        {
            cout<<" "<<"\t";
        }
         for(int i=1;i<=l;i++)
        {
            cout<<"*"<<"\t";
        }
        cout<<endl;
    }
    
    for(int l=((n+1)/2)-1;l>=1;l--)
    {
    	  if(l==1)
        {
            
            for(int i=0;i<n;i++)
            {
                cout<<"*"<<"\t";
                
            }
            break;
            
        }
        for(int i=1;i<=l;i++)
        {
            cout<<"*"<<"\t";
        }
        for(int s=1;s<=n-2*l;s++)
        {
            cout<<" "<<"\t";
        }
        for(int i=1;i<=l;i++)
        {
            cout<<"*"<<"\t";
        }
        cout<<endl;
      
        
    }
    
	return 0;
}

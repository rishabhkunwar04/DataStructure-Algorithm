#include<iostream>
using namespace std;
int x[1000];
int y[1000];
int sum(int * arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int count=0;   //You have to display the count too

void split(int *arr,int n,int i,int j,int k)
{
    if(i==n)
    {
        int s1=sum(x,j);
        int s2=sum(y,k);
        if(s1==s2)
        {
            for(int i=0;i<j;i++)
            {
                cout<<x[i]<<" ";
            }
            cout<<"and ";
            for(int i=0;i<k;i++)
            {
                cout<<y[i]<<" ";
            }
            cout<<endl;   //Print it in a new line
            count++;
        }
        return ;
        
    }
    x[j]=arr[i];
    split(arr,n,i+1,j+1,k);
    //j--;    //Why would you decrement j?
    y[k]=arr[i];
    split(arr,n,i+1,j,k+1);
    
}

int main() 
{
    int n,x;
    cin>>n;
    int arr[100000];
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr[i]=x;
    }
    split(arr,n,0,0,0);
    cout<<count;
    
	return 0;
}

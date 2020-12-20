#include<iostream>
using namespace std;
 //BRIBED QUEUE
/*void bribe_queue(int a[],int n)
{
    int x=0;
    for(int i=0;i<n-1;i++)
    {
        int flag=0;

        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                flag=1;
                x++;
                swap(a[j],a[j+1]);
            }
        }
        if(flag==0)
          break;
        
    }
    cout<<x<<endl;
}

int main()
{
    int a[100000];
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
          a[j]=j+1;
          cin>>a[j];
        }
        bribe_queue(a,n);
    }
    return 0;
}*/

//SORTING UNORDERED ARRAY WITHOUT ANY DUPLICATE IN MIN POSSIBLE SWAP

/* int swapsort(int a[],int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
                
            }

        }
        if(min!=i)
		{
		 swap(a[i],a[min]);
		 count++;

				}        

    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int a[100000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<swapsort(a,n);

    return 0;
}*/


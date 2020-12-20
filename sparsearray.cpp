#include<iostream>
#include<cstring>
using namespace std;

void querie(char a[],char b[],int out[])
{
    for(int i=0;b[i]!='\0';i++)
    {
        int c=0;
        for(int j=0;a[j]!='\0';j++)
        {
            if(b[i]==a[j])
            {
                c++;
            }

        }
        out[i]=c;
    }
   return;
}

int main()
{
    int n;
    int out[1000];
    cin>>n;
    char a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a;
    
    }
    int q;
    cin>>q;
    char b[1000];
    for(int i=0;i<q;i++)
    {
        cin>>b;
    }
    querie(a,b,out);
     for(int i=0;i<q;i++)
    {
        cout<<out[i]<<endl;
    }
    
    return 0;
}

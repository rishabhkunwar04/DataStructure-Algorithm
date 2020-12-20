#include<iostream>
#include<cstring>
using namespace std;

void xatend(char *a)
{
    char b[100];
    int k=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='x')
        {
            b[k]=a[i]; //storing in other string
            k++; 
            //shifting
            
            for(int j=i;a[j]!='\0';j++)
            {
                a[j]=a[j+1];
            }
        }
        b[k]='\0';  //we assign by null so that cant take garbage value
    }
    int l1=strlen(a);
    int l2=strlen(b);
    
    //appending two string
    for(int i=0;i<=l2;i++)
    {
        a[l1+i]=b[i];
    }
    return;
}
int main() 
{
    char a[100];
    cin>>a;
    xatend(a);
    cout<<a;
	return 0;
}

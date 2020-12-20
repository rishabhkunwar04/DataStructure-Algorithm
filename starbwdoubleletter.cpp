#include<bits/stdc++.h>
using namespace std;
char stringp(char a[1000],char *out,int j,int i,int x)
{
    if(a[i]=='\0')
    {
        out[j]='\0';
        for(int j=0;out[j]!='\0';j++)
        {
            cout<<out[j];
        }
    }
    if(a[i]==a[i+1])
    {
        x++;
        for(int j=x;j>i+1;j--)
        {
            a[j]=a[j-1];
        }
        a[i+1]='*';
        
        a[x+1]='\0';
        
    }
    stringp(a,out,j,i+1,x); 
}
int main() 
{
    char a[1000];
    char out[1000];
    cin>>a;
    int x=strlen(a);
    stringp(a,out,0,0,x);
	return 0;
}

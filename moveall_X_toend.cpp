#include<iostream>
#include<cstring>
using namespace std;
void bubble(char*a,int i)
{
    int j=i;
    while(j<strlen(a)-1)   //No need to subtract i here let the element go to the last position
    {
        swap(a[j],a[j+1]);
        j++;
    }
    return;
}
void xend(char*a,int i)
{
    if(a[i]=='\0')
    {
        cout<<a;
        return;
    }
    if(a[i]=='x')
        {bubble(a,i);
        }
    xend(a,i+1);
}
int main()
{
    char a[100];
    //cin.getline(a,100);
    cin>>a;   //Use cin for string inputs
    xend(a,0);
    return 0;
}


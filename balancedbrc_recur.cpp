#include<iostream>
using namespace std;
bool balancedbrc(char *a,int i)
{
    if(a[i]=='\0')
    {
        return true;
    }
}
int main() 
{
    char a[100];
    cin>>a;
    balancedbrc(a,0);
    if(balancedbrc)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
	return 0;
}

#include<iostream>
using namespace std;
void pattern(int n,int i)
{
    if(i==n)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=j;k++)
            {
                cout<<"*"<<"\t";
            }
            cout<<endl;
        }
        return;
    }
    pattern(n,i+1);
}
int main() 
{
    int n;
    cin>>n;
    pattern(n,1);
	return 0;
}

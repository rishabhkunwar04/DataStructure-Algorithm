#include <iostream>
using namespace std;
int count=0;
void toh(int n,char source,char helper,char destination)
{
    if(n==0)
    {
        return;
    } 
    toh(n-1,source,destination,helper);
    count++;
    cout<<"Move"<<" "<<n<<"th"<<" "<<"disc from"<<" "<<source<<" "<<"to"<<" "<<destination<<endl;
    toh(n-1,helper,source,destination);
}
int main()
{
    int n;
    cin>>n;
    char source='T1';
     char helper='T3';
     char destination='T2';
    toh(n,source,helper,destination);
     cout<<count;
    return 0;
    
}


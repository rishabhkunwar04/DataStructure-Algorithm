#include <iostream>
#include<stack>
using namespace std;
int main()
{
    //creating a eratoss.... sieve named 'farr'
    long long int arr[10000] = {0},farr[10000],k=0;
    for (int i = 2; i < 10000; i++)
    {
        for (int j = i * i; j < 10000; j+=i)
        {
            arr[j - 1] = 1;
        }
    }
    for (int i = 1; i < 10000; i++)
    {
        if (arr[i - 1] == 0)
            {
                farr[k++]=i;
            }
    }
    int n,q,d,i;
    cin>>n>>q;
    i=0;
     stack<int> a;
     stack<int> b;
     stack<int> a1;
    while(i<n)
    {
        cin>>d;
        a.push(d);
        i++;
    }
    i=0;
    while(i<q)
    {
         if(i%2==0)//alternatively transferring values from a to a1 and then from a1 to a
         {
            while(!a.empty())
            {
                if(a.top()%farr[i+1]==0)
                    {
                        b.push(a.top());
                        a.pop();
                    }
                else
                {
                    a1.push(a.top());
                    a.pop();
                }
            }
         }
         else
         {
             while(!a1.empty())
            {
                if(a1.top()%farr[i+1]==0)
                    {
                        b.push(a1.top());
                        a1.pop();
                    }
                else
                {
                    a.push(a1.top());
                    a1.pop();
                }
            }
         }
        i++;
        //Keep printing and popping elements from b in the loop
        while(!b.empty())
        {
            cout<<b.top()<<endl;
            b.pop();
        }
    }
    // while(!b.empty())
    // {
    //     cout<<b.top()<<endl;
    //     b.pop();
    // }
    //printing both a1 & a as one of them would be empty
    while(!a1.empty())
    {
        cout<<a1.top()<<endl;
        a1.pop();
    }
    while(!a.empty())
    {
        cout<<a.top()<<endl;
        a.pop();
    }
}


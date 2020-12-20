//valid binary string

/*#include<bits/stdc++.h>
using namespace std;

int binary_string(string s,int d,int &c)
{
    for(int i=0;i<s.size()-d+1;i++)
    {
        int t=d;
        int flag=0;
        int j=i;
    
        while(t--)
        {
            if(s[j++]=='1')
            {
                flag=1;
                break;
            }
            
        }
        
        if(flag==0)
        {
            c++;
            s[j-1]='1';
        }
    }
return c;
}

int main()
{
    string s;
    int d;
    cin>>s>>d;
    int c=0;
   cout<< binary_string(s,d,c)<<endl;
   return 0;
}*/


//arrange students

/*#include<bits/stdc++.h>
using namespace std;


void boy_girl(int b[],int g[],int n)
{
    int i=1;
    int flag=0;
    if(b[0]<g[0])
    {
        while(i<n)
        {
            if(b[i]>g[i] || b[i]<g[i-1])
            {
                flag=1;
                break;
            }
            i++;
        }
    }
    else
    {
         while(i<n)
        {
            if(g[i]>b[i] || g[i]<b[i-1] )
            {
                flag=1;
                break;
            }
            i++;
        }

    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int b[101];
        int g[101];

     for(int i=0;i<n;i++)
     {
        cin>>b[i];
     }
     for(int i=0;i<n;i++)
     {
        cin>>g[i];
     }
     sort(b,b+n);
     sort(g,g+n);
    boy_girl(b,g,n);

    }
    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007; 


int large_no(int l,int r,int k)
{
    int temp=0;
   
    for(int i=l+1;i<=r;i++)
    {
        int n=i;
        int c=0;
        while(n>0)
        {
            int r=(n%10);
            if(r!=0)
            {
                c=(c+1)%M;
            }
            n=(n/10);
        }
        if(c==k)
        {
            temp=(temp+1)%M;
        }
    }
    return (temp);
}

int main()
{


    int l,r,k;
    cin>>l>>r>>k;
  
     l=(l%M);
     r=(r%M);

    cout<<large_no(l,r,k)<<endl;
    return 0;
}*/

/*#include<bits/stdc++.h>
#include<cstring>
using namespace std;

void max_xor(string ch,int k)
{
    vector<int>v;
    for(int i=0;i<ch.length();i++)
    {
        if(ch[i]=='0' && k>0)
        {
            v.push_back(1);
            k--;
        }
        else
        {
         v.push_back(0);

        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }

    
}
 int main()
 {
    int t;cin>>t;
    while(t--)
    { 
        string ch;
        cin>>ch;
        int k;
        cin>>k;

        max_xor(ch,k);
        cout<<endl;
    }
    return 0;
 }*/

//PACIFIC ASIA VI//

// array sum operation

/*
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

 const unsigned int MOD = 1000000007; 

 void out_put(vector<int>v,vector<int>arr,int sum)
 {
    for(int i=0;i<arr.size();i++)
    {
        int d=arr[i];
    
        if(binary_search(v.begin(),v.end(),d))
        {
            
            //if elemnt found swapp first and last element
            swap(v[0],v[v.size()-1]);
            cout<<sum<<'\n';
        }
        else{
         sum=sum-v[v.size()-1];
         sum=sum+arr[i];
         v[v.size()-1]=arr[i];
         cout<<sum<<'\n';
        }
    } 
 
 }


int main()
{
    int n,m;
    cin>>n>>m;
    assert(2<=n<=100000 &&2<=m<=100000);
    int k=1;
    vector<int>v;
    int sum=0;
    while(n--)
    {
      sum+=k;
     v.push_back(k);
     k++;
    }

     vector<int>arr;
    while(m--)
    {
        int x;cin>>x;
        arr.push_back(x);
    }
     out_put(v,arr,sum);



    return 0;
}*/


//solving queries with cup

/*#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

 const unsigned int MOD = 1000000007; 



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,s,q;
    cin>>n>>m>>s>>q;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        v.push_back(0);
    }
    
    while(m--)
    {
        int x;cin>>x;
        v[x]=1;
    }
    while(s--)
    {
        int a,b;
        cin>>a>>b;
    
        swap(v[a],v[b]);
        
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int sum=0;
        for(int i=l;i<=r;i++)
        {
            sum+=v[i];

        }
        cout<<sum<<" ";
    }
    

    return 0;
}*/
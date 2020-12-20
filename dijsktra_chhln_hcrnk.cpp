#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//sorted 2d matrix in spiral way
/*int main() {
      
    int n;
    cin>>n;
    int m[100][100];
    int out[100][100]={{0}};
    int a[100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>m[i][j];
        }
    }
    int x=0;
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[x++]=m[i][j];
            
            
        }
    }
    sort(a,a+x);
    int y=0;
    int sr=0,er=n-1,sc=0,ec=n-1;
    while(sr<=er && sc<=ec)
    {
        for(int i=sc;i<=ec;i++)
        {
          out[sr][i]=a[y]; 
            y++;
        }
        sr++;
        for(int i=sr;i<=er;i++)
        {
            out[i][ec]=a[y];
            y++;
        }
        ec--;
        if(sr<=er)
        {
           for(int i=ec;i>=sc;i--)
           {
            out[er][i]=a[y];
               y++;
            } 
            er--;
            
        }
         if(sc<=ec)
        {
           for(int i=er;i>=sr;i--)
           {
            out[i][sc]=a[y];
               y++;
            } 
            sc++;   
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<out[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}*/
//help ramu
/*int main() 
{ 
    int n;
    cin>>n;
    int a[100000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int r=1;
     for(int j=0;j<n;j++)
     {
         r*=a[j];
     }
     sort(a,a+n);
     int s=a[0];
     int e=a[n-1];
    for(int i=s;i<=e;i++)
     {
         long long int p=1;
         for(int j=1;j<=n;j++)
         {
             p*=i;
             
         } 
         
         if(p>r)
         {
             cout<<i;
             break;
         }
     }
    return 0;
}*/
//BOROBORO DORODORO
/*int isprime(int sum)
{
  //int x=sqrt(sum);
  int x=sum;
    int flag=0;
    for(int i=2;i<=x;i++)
    {
        if(x%i==0)
        {
           flag=1; 
            break;
        }
    }
    if(flag==0)
    {
     return 1;
    }
    else
    {
      return 0;
    }
}
int totalprime(long long int n)
{
    int count=0;
    int digitsum=0;
    for(int i=2;i<=n;i++)
    {
        int no=i;
        while(no>0)
        {
            int r=(no%10);
            digitsum+=r;
            no=(no/10);   
        } 
        int sum=(digitsum%13);
        if(isprime(sum)==1)
        {
            count++;
        }
    }
    return count;
}
int main() {

    int t;
    cin>>t;
    
    for(int i=1;i<=t;i++)
    {
      long long int n;
      cin>>n;
       cout<<(totalprime(n)%1000000007)<<endl;
    }
    return 0;
}*/
//MAGIC MATH
/*int main() {
    
    long long int n;
    cin>>n;
     long long int sum=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            int res=0;
          if(i<=j)
          {
             for(int k=1;k<=i;k++)
             {
                 if(i%k==0 && j%k==0)
                 {
                     res+=k;
                 }
             }
          }
            else
            {
              for(int k=1;k<=j;k++)
             {
                 if(i%k==0 && j%k==0)
                 {
                     res+=k;
                 }
             }  
            }
            sum+=res;
        }
    }
    cout<<(sum)%1000000009;
    return 0;
}*/
// ASH AND POKEMON
/*int main() {
      
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,m;
        cin>>n>>m;
        for(int j=1;j<=m;j++)
        {
            int l,k;
            cin>>l>>k;
        }
        if(m<=(n-1))
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}*/

//DRUNKEN STEPS
/*int main() {

     int n;
    cin>>n;
     int t=0;
     int steps=0;
    while(steps<n)
    {
        steps=steps+5;
         t++;
        if(steps<n)
        {
            steps=steps-3;
            t++;
        }
    }

    cout<<t;
    return 0;
}*/

//GEETA BABITA DANGAL GIRL
/*int main() {
    
    int count=0;
    char ch[1000];
    cin>>ch;
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==ch[i+1])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    count++;
    cout<<count;
   // cout<<(count/2);
    return 0;
}*/



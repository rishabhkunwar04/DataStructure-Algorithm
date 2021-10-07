// #include <bits/stdc++.h>
// #define ll long long int
// #define MOD 1e7
// using namespace std;


// bool cube(int N)
// {
//     int c;
 
//     for (int i=1; i <= N; i++) {
 
        
//         c = i * i * i;
 
       
//         if (c== N) {
//             return true;
//                    }
//         else if (c > N) {
//             return false;
//         }
//     }
//     return false;
// }

// int main()
// { 
//     int n;cin>>n;
//     vector<int>v;
//     for(int i=0;i<n;i++)
//     {
//         int x;cin>>x;
//         v.push_back(x);
//     }
//     long int cnt=0;
//    for(int i=0;i<n;i++)
//    {
//     if(cube(v[i]))
//     {
//         cnt++;
//     }
//    }
//    cout<<cnt;
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long int
#define MOD 1e7
using namespace std;


int funcn(int arr[],int n)
{
    
    sort(arr,arr+n);
    int sum=0;
    for(int i=n-1;i>=(n-4);i--)
    {
        sum+=arr[i];
    }
    
   return sum;

}
int main()
{ 
  int arr[]= { 5, 4, 6, 2, 1, 3, 8, 9, -1 };
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<funcn(arr,n);
   
    return 0;

 }







 /*int n=arr.size();
    sort(arr, arr + k);
    sort(arr + k, arr + n, greater<int>());

    return arr; */

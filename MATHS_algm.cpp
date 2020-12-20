//FACTORIAL OF VERY LARGE NO

/*#include<iostream>
using namespace std;
#define max 10000

void factorial(int n)
{
	int arr[max];
	int size=1;
	 arr[0]=1;
	for(int x=2;x<=n;x++)
	{
		int carry=0;
 	for(int i=0;i<size;i++)
		{
			 int product=arr[i]*x+carry;
			carry=product/10;
			arr[i]=product%10;
		
		}
			while(carry)
			{
				arr[size]=carry%10;
				carry=carry/10;
				size++;
			}
	}
	for(int i=size-1;i>=0;i--)
	{
		cout<<arr[i];
	}
	
}

int main()
{
	int n;
	cin>>n;
	factorial(n);
	return 0;
}*/
//GCD EUCLID ALGM

/*#include<iostream>
#include<climits>
using namespace std;
int gcd(int c,int d)
{
	if(d==0)
	{
		return c;
	}
	 
	gcd(d,c%d);
}

int main()
{
	int a,b;
	cin>>a>>b;
	int c=min(a,b);
	int d=max(a,b);
    cout<<gcd(c,d);
	return 0;
}*/

//EXTENDED EUCLID ALGM
/*#include < iostream >

int d, x, y;
void extendedEuclid(int A, int B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

int main( ) {
extendedEuclid(16, 10);
cout << ”The GCD of 16 and 10 is ” << d << endl;
cout << ”Coefficients x and y are ”<< x <<  “and  “ << y << endl;
return 0;   
}*/


//FAST EXPONENTIATION by bitmasking

/*#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll fast_exp(ll x,ll p)
{
  ll res=1;
  while(p>0)
  {
  	if(p&1)
  	{
  		res=(res*x);
  	}
    x=x*x;
    p=p>>1;
  }
  return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,p;
    cin>>x>>p;
   cout<<fast_exp(x,p);

    
    return 0;
}
*/

//INCLUSION EXCLUSION PRINCIPAL

/*#include <iostream>
using namespace std;

//Inclusion-Exclusion Using Bitmasking

int main() {
    int a[] = {2,3,5};
    int n = sizeof(a)/sizeof(int);
    int ans = 0;
    int no = 999;

    for(int i=1;i<(1<<n);i++){
        int mask = i;
        int bits = __builtin_popcount(mask);
        int temp = 1;
        int pos = 0;
            while(mask>0){
                int lastBit = (mask&1);
                if(lastBit){
                    temp *= a[pos];
                }
                mask >>= 1;
                pos++;
            }
            if(bits&1){
                ans += (no/temp);
            }
            else{
                ans -= (no/temp);
            }
    }
    cout<<ans<<endl;


    return 0;
}*/

//divisible subarray(gfg)

//prefix sum meathod

/*#include <bits/stdc++.h> 
using namespace std; 
void CheckSubarray(int arr[], int N) 
{ 
  
    // Prefix sum array to store cumulative sum 
    int presum[N + 1] = { 0 }; 
  
    // Single state dynamic programming 
    // relation for prefix sum array 
    for (int i = 1; i <= N; i += 1) { 
  
        presum[i] = presum[i - 1] + arr[i - 1]; 
    } 
  
    // Generating all sub-arrays 
    for (int i = 1; i <= N; i += 1) { 
  
        for (int j = i; j <= N; j += 1) { 
  
            // If the sum of the sub-array[i:j] 
            // is a multiple of N 
            if ((presum[j] - presum[i - 1]) % N == 0) { 
                cout << i - 1 << " " << j - 1; 
                return; 
            } 
        } 
    } 
  
    cout << -1; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { 7, 5, 3, 7 }; 
  
    int N = sizeof(arr) / sizeof(arr[0]); 
  
    CheckSubarray(arr, N); 
  
    return 0; 
} */

//SEGMENTED SEIVE

/*#include <bits/stdc++.h> 
using namespace std; 
  

void simpleSieve(int limit, vector<int> &prime) 
{ 
    
    bool mark[limit+1]; 
    memset(mark, true, sizeof(mark)); 
  
    for (int p=2; p*p<limit; p++) 
    { 
        // If p is not changed, then it is a prime

        if (mark[p] == true) 
        { 
            // Update all multiples of p 

            for (int i=p*2; i<limit; i+=p) 
                mark[i] = false; 
        } 
    } 
  
    // Print all prime numbers and store them in prime 

    for (int p=2; p<limit; p++) 
    { 
        if (mark[p] == true) 
        { 
            prime.push_back(p); 
            cout << p << " "; 
        } 
    } 
} 
  

void segmentedSieve(int n) 
{ 
    // Compute all primes smaller than or equal 
    // to square root of n using simple sieve 

    int limit = floor(sqrt(n))+1; 
    vector<int> prime;  
    simpleSieve(limit, prime);  
  
    // Divide the range [0..n-1] in different segments 
    // We have chosen segment size as sqrt(n). 

    int low = limit; 
    int high = 2*limit; 
  
    // While all segments of range [0..n-1] are not processed, 
    // process one segment at a time 

    while (low < n) 
    { 
        if (high >= n)  
           high = n; 
          
        // To mark primes in current range. A value in mark[i] 
        // will finally be false if 'i-low' is Not a prime, 
        // else true. 

        bool mark[limit+1]; 
        memset(mark, true, sizeof(mark)); 
  
        // Use the found primes by simpleSieve() to find 
        // primes in current range 

        for (int i = 0; i < prime.size(); i++) 
        { 
            // Find the minimum number in [low..high] that is 
            // a multiple of prime[i] (divisible by prime[i]) 
            // For example, if low is 31 and prime[i] is 3, 
            // we start with 33.

            int loLim = floor(low/prime[i]) * prime[i]; 
            if (loLim < low) 
                loLim += prime[i]; 
  
            /* Mark multiples of prime[i] in [low..high]: 
                We are marking j - low for j, i.e. each number 
                in range [low, high] is mapped to [0, high-low] 
                so if range is [50, 100] marking 50 corresponds 
                to marking 0, marking 51 corresponds to 1 and 
                so on. In this way we need to allocate space only 
                for range

            for (int j=loLim; j<high; j+=prime[i]) 
                mark[j-low] = false; 
        } 
  
        // Numbers which are not marked as false are prime 

        for (int i = low; i<high; i++) 
            if (mark[i - low] == true) 
                cout << i << " "; 
  
        // Update low and high for next segment 
        low = low + limit; 
        high = high + limit; 
    } 
} 
  
// Driver program to test above function 
int main() 
{ 
    int n = 100; 
    cout << "Primes smaller than " << n << ":n"; 
    segmentedSieve(n); 
    return 0; 
}*/


//FERMATS LITTLE THEOREM

/*#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define ull unsigned long long


using namespace std;

ull cal(ull b,ull p,ull div)
{
    ull k=1,l=b;
    while(p)
    {
        if(p & 1)
        {
            k=(k*l)%div;
        }
        l=(l*l)%div;
        p=p/2;
    }
    return k;
}

int main()
{
    int t;
    ull res,m,n,div=1000000007,div2;
    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        m=a.size();
        n=b.size();

        ull base=0,power=0;

        for(ull i=0; i<m; i++)
        {
            base=((base*10)+(a[i]-'0'))%div;
        }
        div2=div-1;
        for(ull i=0; i<n; i++)
        {
            power=((power*10)+(b[i]-'0'))%div2;
        }
        if(power==0)
            cout<<1<<endl;
        else
        {
            res=cal(base,power,div);
            cout<<res<<endl;
        }


    }

    return 0;
}
*/

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

 const unsigned int MOD = 1000000007; 

 void simple_sieve(int n,int limit,vector<int>&arr)
 {
 	bool prime [limit+1];
 	memset(prime,true,sizeof(prime));
 	int p=2;
 	while(p*p<=limit)
 	{
 		for(int i=2;i*p<limit;i++)
 		{
 			prime[i*p]=false;
 		}
 		for(int i=p+1;i<=limit;i++)
 		{
 			if(prime[i])
 			{
 				p=i;
 				break;
 			}
 		}
 	}
 	for(int i=2;i<limit;i++)
 	{
 		if(prime[i])
 			arr.push_back(i);
 	}

 }

 void segmentedSieve(int low,int high)
 {
 	vector<int>arr;
  
    int limit=floor(sqrt(high))+1;
    simple_sieve(low,limit,arr);
    int mark=high-low+1;
    bool prime[mark+1];
    memset(prime,true,sizeof(prime));
    for(int i=0;i<arr.size();i++)
    {
    	int lowlim=floor(low/arr[i])*arr[i];
    	if(lowlim<low)
    	{
    		lowlim+=arr[i];
    	}
    	for(int j=lowlim;j<high;j+=arr[i])
    	{
    		prime[j-low]=false;
    	}
    }
    //printing absolute difference
    vector<int>v;
    for (int i = low; i<high; i++) 
    {
            if (prime[i - low] == true) 
            {
                v.push_back(i);
            }
    }
  
   
    int cnt=0;
    for(int i=0;i+1<v.size();++i)
    {
      if(v[i+1]-v[i]==2)
        cnt++;
    }
    cout<<cnt<<'\n';


 }


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    segmentedSieve(n,m);
    
     
        
    return 0;
}






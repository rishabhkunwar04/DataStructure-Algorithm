// BINARY SEARCH ITERATIVE
/*#include<iostream>
using namespace std;
int binarysearch(int a[10000],int n,int key)
{
	int s=0;
	int e=0;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(a[mid]==key)
		{
			cout<<mid;
		}
		else if(mid<key)
		{
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}
	return -1;
}
int main()
{
	int a[10000],n,key;
	cin>>key;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	binarysearch(a,n,key);
	
}
//BINARY SEARCH RECURSIVE

#include<iostream>
using namespace std;
int binarysearch(int *a,int s,int e,int data)
{
	
	if(s>e)
	{
		return -1;
	}
	 int mid=(s+e)/2; 
	if(a[mid]==data)
	{
		return mid;
	}
	if(a[mid]<data)
	{
		s=mid+1;
	}
	else
	{
		e=mid-1;
	}
     return	binarysearch(a,s,e,data);
	
	
	
}
int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int data;
	cin>>data;
    int z=binarysearch(a,0,n-1,data);
    cout<<z;
	return 0;
}

//BINARY SEARCH IN 2D ARR

#include<iostream>
using namespace std;
 bool binaryserc(int arr[100][100],int s,int e,int i,int c,int key)
{
//	int a[100];
	int mid=(s+e)/2;
	if(arr[i][mid]==key)
	{
		cout<<"found"<<i<<" "<<mid;
		
		
	}
	else if(arr[i][mid]<key)
	{
		s=mid+1;
		e=c;
	}
	else if(arr[i][mid]>key)
	{
		e=mid-1;
		s=i;
	}
   //return;	
}
int main()
{
	int r,c,key;
	cin>>r>>c;
	cin>>key;
	int arr[100][100];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<r;i++)
	{
		int s=i;
		int e=c;
		binaryserc(arr,s,e,i,c,key);
	}
	return 0;
}*/

//ROTATED BINARY SEARCH

/*#include<iostream>
using namespace std;

int rotatedbinary_serc(int arr[],int s,int e,int k)
{
	if(s>e)return -1;
	
	int mid=(s+e)/2;

	if(arr[mid]==k)return mid;
	
	if(arr[s]<=arr[mid])
	{
		if(arr[s]<=k && arr[mid]>=k){
			return rotatedbinary_serc(arr,s,mid-1,k);
		}
		else
		{
			return rotatedbinary_serc(arr,mid+1,e,k);
			
		}
	}
	
	if(arr[mid]<=k && arr[e]>=k)
	{
		return rotatedbinary_serc(arr,mid+1,e,k);

	}
	else
	{
		return rotatedbinary_serc(arr,s,mid-1,k);

	}
	
}

int main()
{
	int arr[]={4,5,6,7,1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=2;
	cout<<rotatedbinary_serc(arr,0,n-1,k)<<endl;
	return 0;
}*/

//BOOK ALLOCATION PROBLEM

/*#include<bits/stdc++.h>
using namespace std;

bool isvalid(int v[],int max,int k,int n)//determining for max value allocation is possible or not
{
     int st=1;
	 int sum=0;

	for(int i=0;i<n;++i)
	{
		if(v[i]>max)return false;

     if(sum+v[i]>max)
     {
         sum=v[i];
     	 st++;
     	//if student become greater han k
	      if(st>k)
	      {
	        return false;	
	      }
    }
   else
     {
     	 sum+=v[i];

     }
     
	}
	return true;
}

int BookAlloc(int v[],int k,int n)
{
	int sum=0;
	int s=0;
	for(int i=0;i<n;++i)
	{
		sum+=v[i];
		s=max(s,v[i]);
	}
	int e=sum;
	//if no of student is large than no of books
	if(n<k)
	{
		return -1;
	}

	int res=-1;

	while(s<=e)
	{
		
		int max=(s+e)/2;

		//check for allocation
		if(isvalid(v,max,k,n))
		{
			res=max;
			e=max-1;
		}
		else{

			s=max+1;
		}
	}
	return res;
}

int main()
{
	int n;cin>>n;
    int v[1000];
   for(int i=0;i<n;i++)
   {
   	cin>>v[i];
   }
    int k;cin>>k;
    cout<<BookAlloc(v,k,n);

	return 0;
}*/

//AGGRESSIVE COWS

/*#include<bits/stdc++.h>
using namespace std;

bool isvalid(int arr[],int mid,int n,int k)
{
	int cow=1;
	int s=arr[0];
	for(int i=1;i<n;i++)
	{

       if((arr[i]-s)>=mid)
       {
       	cow++;
       	s=arr[i];
       }
       if(cow>=k)
       {
       	return true;
       }
	}
	return false;
}

int aggressive_cow(int arr[],int n,int k)
{
	sort(arr,arr+n);
	int s=arr[0];
	int e=arr[n-1];
	int res=0;
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		//checking that is it possible to place cow with minimum mid val
		if(isvalid(arr,mid,n,k))
		{
           res=mid;
           s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}
	return res;

}


int main()
{
	int t;cin>>t;
	while(t--)
	{

	int n;cin>>n;
	int k;cin>>k;

    int arr[1000];
   for(int i=0;i<n;i++)
   {
   	cin>>arr[i];
   }
   
    cout<<aggressive_cow(arr,n,k);

	}
	return 0;
}*/

//PARATA (SPOJ)

/*#include <iostream>
#include<algorithm>
using namespace std;
bool isPossible(int cook[],int n,int prata,int time)
{
    int num = 0;
    for(int i=0;i<n;i++)
    {
        int t = 0;
        int next_time = cook[i];
        while(t + next_time<=time)
        {
            num += 1;
            t += next_time;
            next_time += cook[i];
            if(num >= prata)
                return true;
        }
    }
    return false;
}
long minTimeNeeded(int cook[],int n,int prata)
{
    int s = 0;
    int e = cook[n-1]*prata*(prata+1)/2;
    int mid,ans = -1;
    while(s<=e)
    {
        mid = (s+e)/2;
        if(isPossible(cook,n,prata,mid)){
            e = mid-1;
            ans = mid;
        }
        else
            s = mid + 1;
    }
    return ans;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int prata;cin>>prata;
        int cook[51];
        int n;cin>>n;
        for(int i=0;i<n;i++)
            cin>>cook[i];
        sort(cook,cook+n);
        cout<<minTimeNeeded(cook,n,prata)<<endl;
    }
}*/

//FIND MISSING no in AP

/*#include<bits/stdc++.h>
using namespace std;
int findMissingUtil(int arr[], int low,  
                           int high, int diff) 
{ 
    // There must be two elements to find the missing 

    if (high <= low) 
        return INT_MAX; 
  
    // Find index of middle element 

    int mid = low + (high - low) / 2; 
  
    // The element just after the middle element is missing. 
    // The arr[mid+1] must exist, because we return when 
    // (low == high) and take floor of (high-low)/2 

    if (arr[mid + 1] - arr[mid] != diff) 
        return (arr[mid] + diff); 
  
    // The element just before mid is missing 
    if (mid > 0 && arr[mid] - arr[mid - 1] != diff) 
        return (arr[mid - 1] + diff); 
  
    // If the elements till mid follow AP, then recur 
    // for right half 
    if (arr[mid] == arr[0] + mid * diff) 
        return findMissingUtil(arr, mid + 1,  
                               high, diff); 
  
    // Else recur for left half 
    return findMissingUtil(arr, low, mid - 1, diff); 
} 
  
int findMissing(int arr[], int n)  
{     int diff = (arr[n - 1] - arr[0]) / n; 
  
     
    return findMissingUtil(arr, 0, n - 1, diff); 
} 
  
int main() 
{ 
    
    int arr[] = {2, 4, 8, 10, 12, 14}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "The missing element is " 
         <<findMissing(arr, n); 
    return 0; 
}  */


//DUPLICATE NUMBER ****
    
    // Using Binary search
    // TC: O(nlogn), SC: O(1)
    int binarySearchSolution(vector<int>& nums) {
        // The idea is that it is known that there is a duplicate, so 
        // we can use pigeon hole concept here. We do binary search on the search
        // space of [1:N], then count the number of elements <= middle. If the 
        // duplicate is on the left side, then count should be more than mid,
        // else it is on the right side. Initially search space is [1: N], then
        // each time narrow down the search space
        int left = 1, right = nums.size() - 1;
        while(left < right) {
            int mid = left + (right - left) / 2;
            
            // count the number of elements smaller/ equal than middle element
            int c = 0;
            for(const int& el: nums)
                if(el <= mid)
                    ++c;
            
            if(c > mid)
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
    

        // Using Floyd Cycle detection
    // TC: O(N), SC: O(1)
    
    /*
        Assume each nums value as an address just like in linked list node addr.
        Then since there is one number whith duplicates, that means there are multiple instances
        of the same address, so it is a cycle just like in linked list. Do the same thing
        as in linked list.
    */
    int floydSolution(vector<int>& nums) {
        // Each index is taken 1 based, as if it is zero based, then
        // for nums[2] = 3, if we goto nums[nums[2] - 1], it is again nums[2]
        // infinite loop
        int hare = nums[0], tortoise = nums[0];
        
        do {
            hare = nums[nums[hare]];
            tortoise = nums[tortoise];
        } while(hare != tortoise);
        
        // to find the starting of cycle, make tortoise to start from begining
        tortoise = nums[0];
        while(hare != tortoise) {
            hare = nums[hare];
            tortoise = nums[tortoise];
        }
        
        return hare;
    }


//FIND MINM IN ROTATED SORTED ARRAY
    class Solution {
  public int findMin(int[] nums) {
    // If the list has just one element then return that element.
    if (nums.length == 1) {
      return nums[0];
    }

    // initializing left and right pointers.
    int left = 0, right = nums.length - 1;

    // if the last element is greater than the first element then there is no rotation.
    // e.g. 1 < 2 < 3 < 4 < 5 < 7. Already sorted array.
    // Hence the smallest element is first element. A[0]
    if (nums[right] > nums[0]) {
      return nums[0];
    }
    
    // Binary search way
    while (right >= left) {
      // Find the mid element
      int mid = left + (right - left) / 2;

      // if the mid element is greater than its next element then mid+1 element is the smallest
      // This point would be the point of change. From higher to lower value.
      if (nums[mid] > nums[mid + 1]) {
        return nums[mid + 1];
      }

      // if the mid element is lesser than its previous element then mid element is the smallest
      if (nums[mid - 1] > nums[mid]) {
        return nums[mid];
      }

      // if the mid elements value is greater than the 0th element this means
      // the least value is still somewhere to the right as we are still dealing with elements
      // greater than nums[0]
      if (nums[mid] > nums[0]) {
        left = mid + 1;
      } else {
        // if nums[0] is greater than the mid value then this means the smallest value is somewhere to
        // the left
        right = mid - 1;
      }
    }
    return -1;
  }












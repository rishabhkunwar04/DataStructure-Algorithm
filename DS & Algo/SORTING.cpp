/**BUBBLE SORT**/
/*#include<iostream>
using namespace std;
void bubblesort(int *a,int n,int i)  //meathod 1
{
	if(i==n-1)
	{
		return;
	}
	for(int j=0;j<n-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			swap(a[j],a[j+1]);
		}
	}
	bubblesort(a,n,i+1);
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
	bubblesort(a,n,0);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}*/


/*
void bubblesort(int *a,int n,int i,int j)    //meathod 2
{
	if(i==n-1)
	{
		return;
	}
	if(j==n-i-1)
	{
		bubblesort(a,n,i+1,0);
		return;
	}
	if(a[j]>a[j+1])
	{
		swap(a[j],a[j+1]);
	}
	bubblesort(a,n,i,j+1);
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
	bubblesort(a,n,0,0);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}*/

//**SELECTION SORT**/

/*void selection_sort (int A[ ], int n) {
        // temporary variable to store the position of minimum element

        int minimum;        
        // reduces the effective size of the array by one in  each iteration.

        for(int i = 0; i < n-1 ; i++)  {

           // assuming the first element to be the minimum of the unsorted array .
             minimum = i ;

          // gives the effective size of the unsorted  array .

            for(int j = i+1; j < n ; j++ ) {
                if(A[ j ] < A[ minimum ])  {                //finds the minimum element
                minimum = j ;
                }
             }
          // putting minimum element on its proper position.
          swap ( A[ minimum ], A[ i ]) ; 
        }
   }*/

/*
void insertion_sort ( int A[ ] , int n) 
{
     for( int i = 0 ;i < n ; i++ ) {
    //storing current element whose left side is checked for its 
             correct position .

      int temp = A[ i ];    
      int j = i;

       // check whether the adjacent element in left side is greater or
         //   less than the current element. 

          while(  j > 0  && temp < A[ j -1]) {

           // moving the left side element to one position forward.
                A[ j ] = A[ j-1];   
                j= j - 1;

           }
         // moving current element to its  correct position.
           A[ j ] = temp;       
     }  
}
*/

//**MERGE SORT***/
/*
#include<iostream>
using namespace std;
void merge(int *a,int *x,int *y,int s,int e)
{
	int i=s;
	int mid=(s+e)/2;
	int j=mid+1;
	int k=s;
	while(i<=mid&&j<=e)
	{
		if(x[i]>y[j])
		{
			a[k]=y[j];
			k++;
			j++;
			
		}
		else
		{
			a[k]=x[i];
			k++;
			i++;
		}
		
	}
	while(i<=mid)
	{
		a[k]=x[i];
		k++;
		i++;
	}
	while(j<=e)
	{
		a[k]=y[j];
		k++;
		j++;
	}
	return;
	
}
void mergesort(int *a,int s,int e)
{
	if(s>=e) //base case
	{
		return;
	}
	int mid=(s+e)/2;
	int x[1000],y[1000];
	for(int i=s;i<=mid;i++)
	{
		x[i]=a[i];
	}
	for(int i=mid+1;i<=e;i++)
	{
		y[i]=a[i];
	}
	//recursive case
	mergesort(x,s,mid);
	mergesort(y,mid+1,e);
	merge(a,x,y,s,e);
}
int main()
{
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	mergesort(a,0,n-1);
	cout<<"sorted arr";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
*/


/*****QUICK SORT***/

/*
int partition ( int A[],int start ,int end) {
    int i = start + 1;
    int piv = A[start] ;            //make the first element as pivot element.
    for(int j =start + 1; j <= end ; j++ )  {
    rearrange the array by putting elements which are less than pivot
       on one side and which are greater that on other. 

          if ( A[ j ] < piv) {
                 swap (A[ i ],A [ j ]);
            i += 1;
        }
   }
   swap ( A[ start ] ,A[ i-1 ] ) ;  //put the pivot element in its proper place.
   return i-1;                      //return the position of the pivot
}


void quick_sort ( int A[ ] ,int start , int end ) {
   if( start < end ) {
        //stores the position of pivot element
         int piv_pos = partition (A,start , end ) ;     
         quick_sort (A,start , piv_pos -1);    //sorts the left side of pivot.
         quick_sort ( A,piv_pos +1 , end) ; //sorts the right side of pivot.
   }
}
*/

/**COUNTING SORT***/

/*
void counting_sort(int A[], int Aux[], int sortedA[], int N) {

    // First, find the maximum value in A[]
    int K = 0;
    for(int i=0; i<N; i++) {
        K = max(K, A[i]);
    }

    // Initialize the elements of Aux[] with 0
    for(int i=0 ; i<=K; i++) {
        Aux[i] = 0;
    }

    // Store the frequencies of each distinct element of A[],
    // by mapping its value as the index of Aux[] array
    for(int i=0; i<N; i++) {
        Aux[A[i]]++;
    }

    int j = 0;
    for(int i=0; i<=K; i++) {
        int tmp = Aux[i];
        // Aux stores which element occurs how many times,
        // Add i in sortedA[] according to the number of times i occured in A[]
        while(tmp--) {
            //cout << Aux[i] << endl;
            sortedA[j] = i;
            j++;
        }
    }
}

*/

/*******RADIX SORT***/
/*
void countsort(int arr[],int n,int place)
{
        int i,freq[range]={0};         //range for integers is 10 as digits range from 0-9
        int output[n];
        for(i=0;i<n;i++)
                freq[(arr[i]/place)%range]++;
        for(i=1;i<range;i++)
                freq[i]+=freq[i-1];
        for(i=n-1;i>=0;i--)
        {
                output[freq[(arr[i]/place)%range]-1]=arr[i];
                freq[(arr[i]/place)%range]--;
        }
        for(i=0;i<n;i++)
                arr[i]=output[i];
}
void radixsort(ll arr[],int n,int maxx)            //maxx is the maximum element in the array
{
        int mul=1;
        while(maxx)
        {
                countsort(arr,n,mul);
                mul*=10;
                maxx/=10;
        }
}

*/
/******BUCKET SORT***/
/*
void bucketSort(float[] a,int n)
{
    for(each floating integer 'x' in n)
    {
        insert x into bucket[n*x]; 
    }
    for(each bucket)
    {
        sort(bucket);
    }
}*/


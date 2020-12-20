//MAXM AND MINM OF ARRAY RETURNING TOGETHER USING CLASS

/*#include<iostream>
using namespace std;
 
// structure is used to return 
// two values from minMax() 
class Pair 
{
 public: 
    int min;
    int max;
}; 
 
class Pair getMinMax(int arr[], int low,
                                 int high)
{
    class Pair minmax, mml, mmr;     
    int mid;
     
    // If there is only one element 
    if (low == high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];     
        return minmax;
    } 
     
    // If there are two elements 
    if (high == low + 1)
    { 
        if (arr[low] > arr[high]) 
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        } 
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        } 
        return minmax;
    }
     
    // If there are more than 2 elements 
    mid = (low + high) / 2; 
    mml = getMinMax(arr, low, mid);
    mmr = getMinMax(arr, mid + 1, high); 
     
    // Compare minimums of two parts
    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;     
     
    // Compare maximums of two parts
    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;     
     
    return minmax;
}
 
int main()
{
    int arr[] = { 1000, 11, 445,
                  1, 330, 3000 };
    int arr_size = 6;
     
    class Pair minmax = getMinMax(arr, 0, 
                             arr_size - 1);
                              
    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;
          
    return 0;
}
 */

//SORTING ARRAY OF 0,1,2 IN LINEAR TIME
/*
#include <bits/stdc++.h>
using namespace std;
 int main(){
    int n;cin>>n;
    int arr[100005];
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
    }

    int i =1,j=1;
    for(int k=1;k<=n;k++)
    {
        if(arr[k]==0)
        {
            swap(arr[i++],arr[k]);
            swap(arr[j++],arr[k]);

        }
        else if(arr[k]==1)
        {
            swap(arr[j++],arr[k]);
        }
    }

    //output
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
 }

*/

// UNION AND INTERSECTION OF TWO ARRAY
/*
#include <bits/stdc++.h>
using namespace std;
 
// Prints union of arr1[0..n1-1] and arr2[0..n2-1]
void printUnion(int arr1[], int arr2[], int n1, int n2)
{
    set<int> hs;
 
    // Inhsert the elements of arr1[] to set hs
    for (int i = 0; i < n1; i++)
        hs.insert(arr1[i]);
 
    // Insert the elements of arr2[] to set hs
    for (int i = 0; i < n2; i++)
        hs.insert(arr2[i]);
 
    // Print the content of set hs
    for (auto it = hs.begin(); it != hs.end(); it++)
        cout << *it << " ";
    cout << endl;
}
 
// Prints intersection of arr1[0..n1-1] and
// arr2[0..n2-1]
void printIntersection(int arr1[], int arr2[], int n1,
                       int n2)
{
    set<int> hs;
 
    // Insert the elements of arr1[] to set S
    for (int i = 0; i < n1; i++)
        hs.insert(arr1[i]);
 
    for (int i = 0; i < n2; i++)
 
        // If element is present in set then
        // push it to vector V
        if (hs.find(arr2[i]) != hs.end())
            cout << arr2[i] << " ";
}
 
int main()
{
    int arr1[] = { 7, 1, 5, 2, 3, 6 };
    int arr2[] = { 3, 8, 6, 20, 7 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
 
    // Function call
    printUnion(arr1, arr2, n1, n2);
    printIntersection(arr1, arr2, n1, n2);
 
    return 0;
}*/

//MERGE TWO SORTED ARRAY IN O(1) SPACE
/*
#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
 
    cout << '\n';
}

void merge(int X[], int Y[], int m, int n)
{
    // consider each element X[i] of array X and ignore the element
    // if it is already in correct order else swap it with next smaller
    // element which happens to be first element of Y
    for (int i = 0; i < m;  i++)
    {
        // compare current element of X[] with first element of Y[]
        if (X[i] > Y[0])
        {
            swap(X[i], Y[0]);
            int first = Y[0];
 
            // move Y[0] to its correct position to maintain sorted
            // order of Y[]. Note: Y[1..n-1] is already sorted
            int k;
            for (k = 1; k < n && Y[k] < first; k++) {
                Y[k - 1] = Y[k];
            }
 
            Y[k - 1] = first;
        }
    }
}
 
int main()
{
    int X[] = { 1, 4, 7, 8, 10 };
    int Y[] = { 2, 3, 9 };
 
    int m = sizeof(X) / sizeof(X[0]);
    int n = sizeof(Y) / sizeof(Y[0]);
 
    merge(X, Y, m, n);
 
    cout << "X: "; printArray(X, m);
    cout << "Y: "; printArray(Y, n);
 
    return 0;
}

*/
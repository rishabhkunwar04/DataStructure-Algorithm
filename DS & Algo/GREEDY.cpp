//job scheduling

// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
/*#include<iostream> 
#include<algorithm> 
using namespace std; 
  
// A structure to represent a job 
struct Job 
{ 
   char id;     // Job Id 
   int dead;    // Deadline of job 
   int profit;  // Profit if job is over before or on deadline 
}; 
  
// This function is used for sorting all jobs according to profit 
bool comparison(Job a, Job b) 
{ 
     return (a.profit > b.profit); 
} 
  
// Returns minimum number of platforms reqquired 
void printJobScheduling(Job arr[], int n) 
{ 
    // Sort all jobs according to decreasing order of prfit 
    sort(arr, arr+n, comparison); 
  
    int result[n]; // To store result (Sequence of jobs) 
    bool slot[n];  // To keep track of free time slots 
  
    // Initialize all slots to be free 
    for (int i=0; i<n; i++) 
        slot[i] = false; 
  
    // Iterate through all given jobs 
    for (int i=0; i<n; i++) 
    { 
       // Find a free slot for this job (Note that we start 
       // from the last possible slot) 
       for (int j=min(n, arr[i].dead)-1; j>=0; j--) 
       { 
          // Free slot found 
          if (slot[j]==false) 
          { 
             result[j] = i;  // Add this job to result 
             slot[j] = true; // Make this slot occupied 
             break; 
          } 
       } 
    } 
  
    // Print the result 
    for (int i=0; i<n; i++) 
       if (slot[i]) 
         cout << arr[result[i]].id << " "; 
} 
  
// Driver code 
int main() 
{ 
    Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, 
                   {'d', 1, 25}, {'e', 3, 15}}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "Following is maximum profit sequence of jobs \n"; 
    
    // Function call 
    printJobScheduling(arr, n); 
    return 0; 
} */


//activity selection

/*
#include <iostream> 
using namespace std; 
class Activitiy 
{ 
public:
    int start, finish; 
}; 
  
bool activityCompare(Activitiy s1, Activitiy s2) 
{ 
    return (s1.finish < s2.finish); 
} 
  
void printMaxActivities(Activitiy arr[], int n) 
{ 
    sort(arr, arr+n, activityCompare); 
    cout << "Following activities are selected n"; 
    int i = 0; 
    cout << "(" << arr[i].start << ", " << arr[i].finish << "), "; 
    for (int j = 1; j < n; j++) 
    { 
      if (arr[j].start >= arr[i].finish) 
      { 
          cout << "(" << arr[j].start << ", "
              << arr[j].finish << "), "; 
          i = j; 
      } 
    } 
} 
  
int main(int argc, char const *argv[]) 
{ 
    Activitiy arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printMaxActivities(arr, n); 
    return 0; 
} */


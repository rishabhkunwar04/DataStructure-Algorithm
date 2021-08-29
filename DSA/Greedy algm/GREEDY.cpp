//*****JOB SCHEDULING ALGORITHM

// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
/*#include<algorithm> 
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


//******ACTIVITY SELECTION

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


//*** HUFFMAN CODING

#include <bits/stdc++.h>
using namespace std;
 
// A Huffman tree node
struct MinHeapNode {
 
    // One of the input characters
    char data;
 
    // Frequency of the character
    unsigned freq;
 
    // Left and right child
    MinHeapNode *left, *right;
 
    MinHeapNode(char data, unsigned freq)
 
    {
 
        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }
};
 
// For comparison of
// two heap nodes (needed in min heap)
struct compare {
 
    bool operator()(MinHeapNode* l, MinHeapNode* r)
 
    {
        return (l->freq > r->freq);
    }
};
 
// Prints huffman codes from
// the root of Huffman Tree.
void printCodes(struct MinHeapNode* root, string str)
{
 
    if (!root)
        return;
 
    if (root->data != '$')
        cout << root->data << ": " << str << "\n";
 
    printCodes(root->left, str + "0");
    printCodes(root->right, str + "1");
}
 
// The main function that builds a Huffman Tree and
// print codes by traversing the built Huffman Tree
void HuffmanCodes(char data[], int freq[], int size)
{
    struct MinHeapNode *left, *right, *top;
 
    // Create a min heap & inserts all characters of data[]
    priority_queue<MinHeapNode*, vector<MinHeapNode*>, compare> minHeap;
 
    for (int i = 0; i < size; ++i)
        minHeap.push(new MinHeapNode(data[i], freq[i]));
 
    // Iterate while size of heap doesn't become 1
    while (minHeap.size() != 1) {
 
        // Extract the two minimum
        // freq items from min heap
        left = minHeap.top();
        minHeap.pop();
 
        right = minHeap.top();
        minHeap.pop();
 
        // Create a new internal node with
        // frequency equal to the sum of the
        // two nodes frequencies. Make the
        // two extracted node as left and right children
        // of this new node. Add this node
        // to the min heap '$' is a special value
        // for internal nodes, not used
        top = new MinHeapNode('$', left->freq + right->freq);
 
        top->left = left;
        top->right = right;
 
        minHeap.push(top);
    }
 
    // Print Huffman codes using
    // the Huffman tree built above
    printCodes(minHeap.top(), "");
}
 
// Driver Code
int main()
{
 
    char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int freq[] = { 5, 9, 12, 13, 16, 45 };
 
    int size = sizeof(arr) / sizeof(arr[0]);
 
    HuffmanCodes(arr, freq, size);
 
    return 0;
}


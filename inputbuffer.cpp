
#include<iostream> 
#include<vector> 
using namespace std; 
  
int main() 
{ 
    int a; 
    char ch[80]; 
      
    // Enter input from user  
    // - 4 for example 
    cin >> a; 
     // cin.sync();  //it discard all input buffer
     // cin>>ws;
      cin.ignore();
    // Get input from user - 
    // "GeeksforGeeks" for example 
    cin.getline(ch,80); 
      
    // Prints 4 
    cout << a << endl; 
      
    // Printing string : This does  
    // not print string 
    cout << ch << endl; 
      
    return 0; 
} 



//IN C++ char to int conversion
#include <iostream>
#include <string>
using namespace std;
int main() {
   char s1[] = "45";
   char c = 's';
   
   int x = stoi(s1);
   cout << "The value of x : " << x;
   
   int y = (int)(c);
   cout << "\nThe value of y : " << y;
   
   return 0;
}
//IN C char to int conversion
#include<stdio.h>
#include<stdlib.h>
int main() {
   const char *str = "12345";
   char c = 's';
   int x, y, z;
   
   sscanf(str, "%d", &x); // Using sscanf
   printf("\nThe value of x : %d", x);
   
   y = atoi(str); // Using atoi()
   printf("\nThe value of y : %d", y);
   
   z = (int)(c); // Using typecasting
   printf("\nThe value of z : %d", z);
   
   return 0;
}

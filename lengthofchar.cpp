#include<iostream>
using namespace std;
int length(char *ch)
{
	int i;
   for( i=0;ch[i]!='\0';i++)
   {
   	
   }
   return i;
	
}  
  int main()
  {
  	char ch[100];
  	cin.ignore();
  	cin.getline(ch,100);
  	int z=length(ch);
  	cout<<z;
	}  

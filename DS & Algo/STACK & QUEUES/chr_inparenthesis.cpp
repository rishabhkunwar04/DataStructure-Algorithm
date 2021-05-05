#include<iostream>
using namespace std;
int main() 
{
    char ch[100];
    cin>>ch;
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='(')
        {
            
        
          for(int j=i+1;ch[j]!=')';j++)
          {
          	cout<<ch[j];
		  }
            
        }
    }
	return 0;
}

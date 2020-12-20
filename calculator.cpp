#include<iostream>
using namespace std;
void operation(char ch,int a,int b)
{
    if(ch=='+')
    {
        cout<<a+b<<endl;
        //operation(ch,a,b);
    }
     else if(ch=='*')
    {
        cout<<a*b<<endl;
        //operation(ch,a,b);
    }
    else if(ch=='-')
    {
        cout<<a-b<<endl;
       // operation(ch,a,b);
    }
     else if(ch=='/'&&b!=0)
    {
        cout<<a/b<<endl;
        //operation(ch,a,b);
    }
    else if(ch=='%'&&b!=0)
    {
        cout<<a%b<<endl;
       // operation(ch,a,b);
    }
    else if(ch=='x'||ch=='X')
    {
    	return;
	}
    else
    {
        cout<<"invalid input"<<"."<<"try again";
    }
    
    
}
int main()
{
    char ch;
    cin>>ch;
    int a,b;
    cin>>a;
    cin>>b;
   
   operation(ch,a,b);
	return 0;
}

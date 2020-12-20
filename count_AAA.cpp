#include<iostream>
#include<cstring>
using namespace std;
void print(char c[],int i,int &a)
{
    int n=strlen(c);
    if(i==n)
    {
        return ;
        
    }
    if(c[i]=='a'&&c[i+1]=='a'&& c[i+2]=='a'&& i+2<n)
   a++;
    print(c,i+1,a);
}
void print2(char c[],int i,int &b)
{
    int n=strlen(c);
    if(i>=n)    //Include the case when i will overshoot n without becoming equal to it as you are incrementing i+=3
    {
        return ;
        
    }
    if(c[i]=='a'&&c[i+1]=='a'&& c[i+2]=='a'&& i+2<n)
         b++;
    print2(c,i+3,b);   //You were calling print() here
}
int main()
{
    char c[100];
    int a=0;  
      int b=0;
    cin.getline(c,100);
    print(c,0,a);
     print2(c,0,b);
    cout<<a<<endl;
      cout<<b;
	return 0;
}

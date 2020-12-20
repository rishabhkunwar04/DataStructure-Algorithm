#include<iostream>
#include<cstring>  //include cstring for strcpy() function
using namespace std;
char str[1000][1000];
int c=-1;
void sub(char* in, char* out, int i, int j)
{
    if(in[i]=='\0')
    {
    	c++;
        out[j]='\0';   // = instead of ==
        strcpy(str[c],out);  // semi colon missing
        return;  // return was missing
    }
    int x=in[i]-'0';
    //cout<<x;
    out[j]=char(x+96);
    sub(in,out,i+1,j+1);
    int a=in[i]-'0';
    int b=in[i+1]-'0';
    int z =(10*a)+b;
    if(z<26 && in[i+1]!='\0')  //Add condition that i+1 is a valid index
    {
        out[j]=char(z+96);
       	sub(in,out,i+2,j+1);    
    }
}



int main() 
{
    char in[1000];
    char out[1000];
    cin>>in;
   	sub(in,out,0,0);
   	cout<<"[";
    for(int i=0;i<=c;i++)
    {
    	if(i !=c)
    	{
    		cout<<str[i]<<", ";
		}
		else
		{
			cout<<str[i]<<"]";
		}
	}
    
    return 0;
}

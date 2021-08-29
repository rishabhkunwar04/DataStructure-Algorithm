#include<iostream>
using namespace std;
void readline(char *ch,char delimeter='\n')
{
	int i=0;
	char c=cin.get();
	while(c!=delimeter)
	{
		ch[i]=c;
		i++;
		c=cin.get();
	}
	ch[i]='\0';
	
	
}
int main()
{
	char ch[]={'a','b','c','\0'};
	char ch1[]="hello";
	char ch2[1000];
	readline(ch2);
	cout<<ch2;
	
}

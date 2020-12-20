#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[]="stringtokenizer, is the section wise, broken, string,!";
	char *ptr;
	ptr=strtok(str, ",");
	while(ptr!=NULL)
	{
		cout<<ptr<<endl;
		ptr=strtok(NULL, ",");
	}
	return 0;
}

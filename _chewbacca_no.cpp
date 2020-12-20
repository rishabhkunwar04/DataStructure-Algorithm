#include<iostream>
#include<string.h>
using namespace std;
void chewbacca(char *ch)
{

	
	for(int i=0;ch[i]!='\0';i++)
	{
		int digit=ch[i]-'0';
		if(digit==9)
		{
			continue;
		}
		if(digit>=5)
		{
			digit=9-digit;
			ch[i]=digit;
		}
	}
	cout<<ch;
}
int main()
{
	char ch[100];
	cin>>ch;
	chewbacca(ch);
	return 0;
}

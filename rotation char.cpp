#include<iostream>
using namespace std;
int length(char *ch);

void rotate(char *ch, int n)
{
	int l=length(ch);
	int j=l-1;
	while(j>=0)
	{
		ch[j+n]=ch[j];
		j--;
	}
	for(int i=0;i<n;i++)
	{
	  ch[i]	=ch[l+i];
	  
	}
	ch[l]='\0';
	
}
int length(char *ch)
{
	int i;
	for(i=0;ch[i]!='\0';i++)
	{
	}
	return i;
}
int main()
{
	int n;
	cin>>n;
	char ch[10000];
	cin.ignore();
	cin.getline(ch,10000);
	int z=length(ch);
	rotate(ch,n);
	cout<<ch;
	return 0;
}

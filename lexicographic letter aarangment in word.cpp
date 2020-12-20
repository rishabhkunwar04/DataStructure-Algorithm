#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a[100];
   char ch[100];
   cin>>ch;
   int l=strlen(ch);
   	for(int i=0;i<l-1;i++)
	{
		for(int j=i+1;j<l;j++)
		{
			if(ch[i]>ch[j])
			{
				swap(ch[j],ch[i]);
			}
		}
		
	}
	for(int i=0;i<l;i++)
	{
		cout<<ch[i];
		
	}	
	
  return 0;	
}

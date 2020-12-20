#include<iostream>
using namespace std;
int main()
{
	char a[10000],b[10000];
	cin>>a;
	int freq[26]={0};
	for(int i=0;a[i]!='\0';i++)
	{
		int index=a[i]-'a';
		freq[index]++;
	}
	cin>>b;
	for(int i=0;b[i]!='\0';i++)
	{
		int index=b[i]-'a';
		freq[index]--;
	}
	int i;
	for(i=0;i<26;i++)
	{
		if(freq[i]!=0)
		{
			cout<<"not permutation";
			break;
		}
	}
	if(i==26)
	{
		cout<<"permutation";
	}
	
	return 0;
	
}

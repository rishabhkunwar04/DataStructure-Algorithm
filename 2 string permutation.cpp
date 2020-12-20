#include<iostream>
using namespace std;
void permutation(char*a,char *b)
{
	int freq[26]={0};
	for(int i=0;a[i]!='\0';i++)
	{
		int index=a[i]-'a';
		freq[index]++;	
	}
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
			cout<<"not permutation"<<endl;
			break;
		}
	}
	if(i==26)
	{
		cout<<"permutation"<<endl;
	}

}
int main()
{
	char a[1000];
	cin.ignore();
	cin.getline(a,1000);
	char b[1000];
	cin.ignore();
	cin.getline(b,1000);
	permutation(a,b);

	return 0;
}

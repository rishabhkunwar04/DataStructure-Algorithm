#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool compare(string a,string b)
{
	return a>b;
}
int main()
{
	string s1[]="hi chcdhf *";
	//cout<<s1.length()<<endl;
	string s[]={"afa","sfdf","ghjk"};
	sort(s,s+3,compare);
	for(int i=0;i<3;i++)
	{
		cout<<s[i]<<"  ";
	}
	return 0;
}


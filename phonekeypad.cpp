#include<iostream>
using namespace std;
char ch[][10]={"","ABC","DEF","GHI","JKL","MNO","PQR","STU","VWXYZ"};
void phonekeypad(char *in,char *out,int i,int j)
{
	if(in[i]=='\0')  //base case
	{
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	int index=in[i]-'0';
	for(int k=0;ch[index][k]!='\0';k++)
	{
		out[j]=ch[index][k];
		phonekeypad(in,out,i+1,j+1);
	}
}
int main()
{
	char in[100];
	cin>>in;
	char out[100];
	phonekeypad(in,out,0,0);
	return 0;
}

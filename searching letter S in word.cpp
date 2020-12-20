#include<iostream>
using namespace std;
int main()
{
 int i;
 char ch[100];
 cin>>ch;
 char ch1='s';
 cin>>ch1;
 for(i=0;ch[i]!='\0';i++)
 {
 	if(ch[i]==ch1)
 	{
 		cout<<"exist"<<endl;
 		break;
	 }
 }
 if(ch[i]=='\0')
 {
 	cout<<"not exist";
 }
 return 0;
}

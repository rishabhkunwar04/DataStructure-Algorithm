#include<iostream>
using namespace std;
int main()
{

  int i;	
 int n;
 cin>>n;
 string ch[n];
 for(int i=0;i<n;i++)
 {
 	cin>>ch[i];
 }
 
 char ch1[100];
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

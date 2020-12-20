#include<iostream>
using namespace std;
void toh(int n,char source,char helper,char destination)
{
	//base case
	if(n==0)
	{
		return;
	}
	//recursive case
	toh(n-1,source,destination,helper);
	cout<<"taking "<<" "<<n<<"disk from source"<<" "<<source<<"to"<<" "<<destination<<endl;
	toh(n-1,helper,source,destination);
}
int main()
{
	int n;
	cin>>n;
	char source='A';
	char helper='B';
	char destination='C';
	toh(n,source,helper,destination);
	return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
bool mycompare(pair<string,int>p1,pair<string,int>p2)
{
	if(p1.second==p2.second)
	{
		return p1.first<p2.first;
	}
	return p1.second>p2.second;
}
int main()
{
 int min_sal,n;
 cin>>min_sal>>n;
 pair<string,int> obj[100];
 for(int i=0;i<n;i++)
 {
 	string name;
 	int sal;
 	cin>>name>>sal;
 	obj[i].first=name;
 	obj[i].second=sal;
 }
 
 sort(obj,obj+n,mycompare);
 for(int i=0;i<n;i++)
 {
 	cout<<obj[i].first<<" "<<obj[i].second<<endl;
 }
 
return 0;	
}

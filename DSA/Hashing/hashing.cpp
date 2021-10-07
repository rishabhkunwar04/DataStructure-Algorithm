 // INBUILT FUNCN FOR HASH MAP

//hash map types->unordered_map(unsorted wrt to key)+ map(sorted wrt to key not by value) 

#include<iostream>
#include<unordered_map>// header file for unordered map
using namespace std;    // #include<map> header file for map

int main()
{
	unordered_map<string,int>ump;
	// 3 MEATHOD TO INSERT

	ump.insert(make_pair("orange",200));
	//or
	pair<string,int>p("kiwi",100);
	ump.insert(p);
	//or
    ump["apple"]=200;
    for(auto x:ump)
    {
    	cout<<x.first<<" "<<x.second<<endl;
	}
	//DELETE FUNCTION
	 ump.erase("kiwi");

	//SEARCH

	if(ump.count("apple")==1)//count funcn return either 0 or 1
    {
        cout<<"price of apple=="<<ump["apple"]<<endl;
    }
    //ITERATOR SEARCH

    auto f=ump.find("kiwi");
    if(f!=ump.end())
    {
        cout<<"price of kiwi ="<<(f->second)<<endl;
    }
    else
        cout<<"not found";

	return 0;
}



//SUM PAIRS

#include<iostream>
#include<unordered_set>
using namespace std;


void find_pair(int arr[],int n,int sum)
{

    unordered_set<int> m;

    for(int i=0;i<n;i++)
    {
        int f=sum-arr[i];
        if(m.find(f)!=m.end())
        cout<<"("<<arr[i]<<","<<f<<")"<<endl;
        m.insert(arr[i]);

    }
}
int main(){
   int arr[]={2,8,1,9,3,7,4,6};
   int n=sizeof(arr)/sizeof(arr[0]);
   int sum=10;
   find_pair(arr,n,sum);
return 0;
}



//max frequent element

/#include<iostream>
#include<map>
using namespace std;

void most_freq(int arr[],int n)
{
    map<int,int>m;
    for(int i=0;i<n;i++)
    {

        m[arr[i]]++;
    }
    int ans=0;
    int temp=0;
    for(auto i:m)
    {
        if(temp<i.second)
        {
            ans=i.first;
            temp=i.second;
        }

    }
    cout<<ans<<"="<<temp;
}

int main()
{
    int arr[]={2,3,3,2,2,2,2,6,7,8,8,5,5,1,0};
    int n=sizeof(arr)/sizeof(int);
    most_freq(arr,n);

    return 0;
}

  Q Find missing and repeating number 

using namespace std;
#include <bits/stdc++.h>
void solve(int arr[], int n){
    int xor1=0;
    for(int i=0;i<n;i++){
        xor1^=arr[i];
        xor1^=(i+1);
    }
    int missing=0;
    int repeating=0;
    xor1=(xor1)&(-xor1);
    for(int i=0;i<n;i++){
        if(xor1&arr[i]){
            missing^=arr[i];
        }
        else
        {
            repeating^=arr[i];
        }
        if(xor1&(i+1)){
            missing^=(i+1);
        }
        else
        {
            repeating^=(i+1);
        }
    }
    cout<<"MISSING NO: "<<missing<<endl;
    cout<<"REPEATING NO: "<<repeating<<endl;
   
}
int main()
{
    int arr[]={8,1,3,2,7,6,4,6};
    int n=8;
    solve(arr,n);
    return 0;
}

Q All elements are repeating 3 times except for 1 element which is repeating 1 time. Find that number 

using namespace std;
#include <bits/stdc++.h>
int solve(int arr[], int n){
   int hash[32]={0};
   for(int i=0;i<n;i++){
       for(int j=0;j<32;j++){
           if(((1<<j)&arr[i])!=0){
               hash[j]++;
           }
       }
   }
   for(int j=0;j<32;j++){
       hash[j]=(hash[j]%3);
       //cout<<hash[j]<<" ";
   }
   //cout<<endl;
   
   int no=0;
   for(int i=0;i<32;i++){
       no+=(hash[i]*pow(2,i));
   }
    return no;
}
int main()
{
    int arr[]={1,2,2,1,1,2,3};
    int n=8;
    cout<<solve(arr,n)<<endl;;
    return 0;
}


Q WAP TO IMPLEMENT POWER FUNCTION IN O(log(n)) ITERATIVELY

using namespace std;
#include <bits/stdc++.h>
int pow1(int x, unsigned int n)
{
    int res=1;
    while(n){
        if(n&1)
            res=res*x;
        n=n>>1;
        x=x*x;
    }
    return res;
}
int main()
{
    int x=2,n=3;
    cout<<pow1(x,n)<<endl;;
    return 0;
}

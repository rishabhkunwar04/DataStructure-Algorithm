 // INBUILT FUNCN FOR HASH MAP

//hash map types->unordered_map(unsorted)+ map(sorted)

/*#include<iostream>
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
}*/



//SUM PAIRS

/*#include<iostream>
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
}*/



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
}/*

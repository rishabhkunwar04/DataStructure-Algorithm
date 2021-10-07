// MIN HEAP

#include<iostream>
#include<vector>
using namespace std;
class minheap
{
	void heapify(int index)
	{
		int left=2*index;
		int right=2*index+1;
		int min_index=index;
		if(left<v.size() &&v[left]<v[min_index])
		{
			min_index=left;
		}
		if(right<v.size()&&v[right]<v[min_index])
		{
			min_index=right;
			
		}
		if(v[min_index]<v[index])
		{
			swap(v[min_index],v[index]);
			heapify(min_index);
		}
	}
	public:
		vector<int>v;
		minheap()
		{
			v.push_back(-1);
		}
		void push(int data)
		{
			v.push_back(data);
			int index=v.size()-1;
			int parent=index/2;
			while(index>1 && v[parent]>v[index] )
			{
				swap(v[parent],v[index]);
				index=parent;
				parent=index/2;
			}
		}
		void pop()
		{
			int index=v.size()-1;
			int parent=1;
			swap(v[parent],v[index]);
			v.pop_back();
			heapify(1);
		}
		int top()
		{
			return v[1];
		}
		bool empty()
		{
			return v.size()==1;
		}
};
int main()
{
	int a[]={4,12,65,89,42,45};
	int n=sizeof(a)/sizeof(int);
	minheap mh;
	for(int i=0;i<n;i++)
	{
		mh.push(a[i]);
	}
	while(!mh.empty())
	{
		cout<<mh.top()<<" ";
		mh.pop();
	}
	
	return 0;
}
//MAX HEAP

#include<iostream>
#include<vector>
using namespace std;

class maxheap
{	void heapify(int index)
	{
		int left=2*index;
		int right=2*index+1;
		int min_index=index;
		if(left<v.size() &&v[left]>v[min_index])
		{
			min_index=left;
		}
		if(right<v.size()&&v[right]>v[min_index])
		{
			min_index=right;
			
		}
		if(v[min_index]>v[index])
		{
			swap(v[min_index],v[index]);
			heapify(min_index);
		}
	}

 public:
 vector<int>v;

 maxheap() //constructor
 {
 	v.push_back(-1);
 }

	void push(int d)  //insertion in arry of maxheap
	{
		v.push_back(d);
		int index=v.size()-1;
		int parent=index/2;
		while(parent>1 && v[parent]<v[index])
		{
			swap(v[parent],v[index]);
			index=parent;
			parent=index/2;
		}
	}
	void pop()
	{
		int parent=1;
		swap(v[parent],v[v.size()-1]);
		v.pop_back();
	heapify(1);
	
	}
	
	int top()
	{
		return v[1];
	}
	
	bool empty()
	{
		return v.size()==1;
	}
};

int main()
{
	int a[]={99,11,22,88,33};
	int n=sizeof(a)/sizeof(int);
	
	maxheap mh;
	for(int i=0;i<n;i++)
	{
		mh.push(a[i]);
	}
	while(!mh.empty())
	{
		cout<<mh.top()<<" ";
		mh.pop();
	}
	return 0;
}



 // STL FOR MAX HEAP

/*#include<iostream>
#include<queue>    //header file for inbuilt heap function
using namespace std;                        
int main()
{
	priority_queue<int>pq;
	int a[]={20,48,99,13,10};
	int n=sizeof(a)/sizeof(int);
	for(int i=0;i<n;i++)
	{
		pq.push(a[i]);
	}
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		pq.pop();
	}
	return 0;
}*/

//STL FOR MIN HEAP

/*#include<iostream>
#include<queue>//header file for inbuilt heap function
using namespace std;

class comparator
{
	public:
	bool operator()(int a,int b)  //operator overloading
	{
		return a>b;
	}
		} ;                       
int main()
{
	priority_queue<int,vector<int>,comparator>pq;
	int a[]={20,48,99,13,10};
	int n=sizeof(a)/sizeof(int);
	for(int i=0;i<n;i++)
	{
		pq.push(a[i]);
	}
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		pq.pop();
	}
	return 0;
}*/

// Another STL meathod FOR MIN HEAP

/*#include<iostream>
#include<queue>//header file for inbuilt heap function
using namespace std;
                      
int main()
{
	priority_queue<int,vector<int>,greater<int>>pq;
	int a[]={20,48,99,13,10};
	int n=sizeof(a)/sizeof(int);
	for(int i=0;i<n;i++)
	{
		pq.push(a[i]);
	}
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		pq.pop();
	}
	return 0;
}*/


// when -1 comes print th3 max 3 no

/*#include<iostream>
#include<queue>
using namespace std;


class comparator
{
	public:
	bool operator()(int a,int b)
	{
		return a>b;
	}
};
void print(	priority_queue<int,vector<int>,comparator>pq)  
{
  while(!pq.empty())
  {
  	cout<<pq.top()<<" ";
  	pq.pop();
	  }	
	  cout<<endl;
}
int main()
{

   int k=3;
	priority_queue<int,vector<int>,comparator>pq;  //or we can directly use //    	priority_queue<int,vector<int>,greater>pq;
	int count=0;
   while(1)                           
   {
   	int data;
   	cin>>data;
   	if(data==-1)
   	{
   		print(pq);
	   }
	   if(count<k)
	   {
	   	count++;
	   	pq.push(data);
	   }
	   else if(count>k)
	   {
	   	if(pq.top()<data)
	   	{
	   		pq.pop();
	   		pq.push(data);
		   }
	   }
	   else	if(pq.top()<data)
	   	{
	   		pq.pop();
	   		pq.push(data);
		   }
   }
	
	return 0;
}*/
//FUNCTOR 

/*#include <iostream>
#include<queue>
#include<vector>
#include<functional> //header file to use functors
using namespace std;

class Car{
  public:
    int x;
    int y;
    int id;
    
    Car(int id,int x,int y){
        this->id = id;
        this->x = x;
        this->y = y;
    }
    int dist(){
        return x*x + y*y;
    }
    void print(){
        cout<<"ID : "<<id;
        cout<<"Location : "<<x<<", "<<y<<endl;
    }
};

//Functor - Functional Objects
//
class CarCompare{
  public:
    //Method to overload () operator
    bool operator()(Car a,Car b){
        //cout<<"Comparing "<<a <<" and "<<b<<endl;
        return a.dist() > b.dist();
    }
    
};


int main() {
    
    
    //priority_queue<int> pq_max;
    priority_queue<Car,vector<Car>,CarCompare> pq;
    
    int x[10] = {5,6,17,18,9,11,0,3};
    int y[10] = {1,-2,8,9,10,91,1,2};
    
    
    //Insert these in q 
    for(int i=0;i<8;i++){
        Car c(i,x[i],y[i]);
        pq.push(c);
    }
    
    //Heap - Max 
    while(!pq.empty()){
        Car p = pq.top();
        p.print();
        pq.pop();
    }
    
    
    return 0;
}*/

/*//MEGE K SORTED ARRAY

// your task is tocomplete this function
// function should return an pointer to output array int*
// of size k*k
int *mergeKArrays(int arr[][N], int k)
{
    priority_queue <pair<int,int>, vector <pair<int,int>>, greater <pair<int,int>>> pq;

    int *array=(int*)malloc(sizeof(int)*k*k);
    int pos[k]={0};
    for(int i=0;i<k;i++){
        pq.push({arr[i][0],i});  //pushing the first element of every array
    }
    
    int i=0;
    for(int i=0;i<k*k;i++){
        pair <int,int> p;
        p=pq.top();
        pq.pop();
    
        array[i]=p.first;
    
        pos[p.second]++;
        int ind=pos[p.second];
        if(ind<k)
        pq.push({arr[p.second][ind],p.second});
        
    } 
    
    
    return array;
}*/

//MERGE K SORTED ARRAY
/*struct pq_ele
{
    int ele; int i; int j;
    pq_ele(int a, int b, int c) : ele(a), i(b), j(c) {}
};
class Compare
{
  public:
    bool operator()(pq_ele & a, pq_ele & b)
    { return a.ele > b.ele;}
};

int *mergeKArrays(int arr[][N], int k)
{
    int index = 0;
    int * res= new int[k*k];
    priority_queue<pq_ele, vector<pq_ele>, Compare> pq;
    for(int i=0; i<k; i++)
        pq.push(pq_ele(arr[i][0], i, 1));
    while(!pq.empty())
    //while(index < k*)
    {
        pq_ele r = pq.top(); pq.pop();
        res[index++] = r.ele;
        if(r.j < k)
            pq.push(pq_ele(arr[r.i][r.j], r.i, r.j+1));
    }
    
    return res;
}*/

//KTH LARGEST ELEMENT IN STREAM

/*#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class comparator
{
  public:
  bool operator()(int a,int b)
  {
      return a>b;
  }
};
int main()
{
    priority_queue<int,vector<int>,comparator>pq;
    int t;
    cin>>t;
    int a[100000];
    for(int i=1;i<=t;i++)
    {
        int k;
        int n;
        cin>>k>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        pq.push(a[0]);
        cout<<"-1"<<" ";

        for(int i=1;i<k-1;i++)
        {
              cout<<"-1"<<" ";
              if(pq.top()<=a[i])
              {
              pq.push(a[i]);
              }
        }
        for(int i=k-1;i<n;i++)
        {
            if(pq.top()<=a[i])
            {
            pq.push(a[i]);
            }
            cout<<pq.top()<<" ";
            pq.pop();
        }
       cout<<endl;
    }
    return 0;
    
}*/

// MEDIAN OF RUNNING STREAM

/*#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {
	int t;
	cin >> t;
	priority_queue<long int, vector<long int>> max_heap;
	priority_queue<long int, vector<long int>, greater<long int>> min_heap;
	while(t--)
	{
	    
	    long int n;
	    cin >> n;
	    if(min_heap.size()==0)
	        min_heap.push(n);
	    else
	    {
	        if(n>=min_heap.top())
	        {
	           min_heap.push(n);
	        }
	        else
	            max_heap.push(n);
	        if(min_heap.size()>max_heap.size()+1)
	        {
	            max_heap.push(min_heap.top());
	            min_heap.pop();
	        } 
	        else if(max_heap.size()>min_heap.size())
	        {
	            min_heap.push(max_heap.top());
	            max_heap.pop();
	        }
	    }
	    if(min_heap.size()==max_heap.size())
	        cout << (min_heap.top()+max_heap.top())/2 << endl;
	    else
	       cout << min_heap.top() << endl; 
	    
	}
	return 0;
}*/

//**** PRIORITY QUEUEUE ********////
#include <bits/stdc++.h>
  
using namespace std;
  
// Driver program to test methods of graph class
int main()
{
    // By default a max heap is created ordered
    // by first element of pair.
    priority_queue<pair<int, int> > pq;
  
    pq.push(make_pair(10, 200));
    pq.push(make_pair(20, 100));
    pq.push(make_pair(15, 400));
  
    pair<int, int> top = pq.top();
    cout << top.first << " " << top.second;
    return 0;
}
 

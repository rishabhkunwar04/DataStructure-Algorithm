//IMPLEMENTATION OF QUEUE

/*#include<iostream>
using namespace std;
template<typename T>
class queue
{
	int r,f,cs,ms;
	T *arr;
	public:
		queue(int ds=5)
		{
		  ms=ds;
		  r=ms-1;
		  f=0;
		  cs=0;
		  arr=new T(ms);
			
		}
		bool isFull()
		{
		   return cs==ms;	
		}
		void push(T val)
		{
			if(!isFull())
			{
			r=(r+1)%ms;
			arr[r]=val;	
			cs++;
			}
		}
		bool isEmpty()
		{
			return cs==0;
		}
		void pop()
		{
			if(!isEmpty())
			{
				f=(f+1)%ms;
				cs--;
				
			}
		}
		
		 T front()
		{
			return arr[f];
		}
};

int main()
{
	queue<int>q;
	for(int i=1;i<=5;i++)
	{
		q.push(i);
	}
	q.pop();
	q.push(6);
	if(!q.isEmpty())
	{
		cout<<q.front()<<" ";
	}
		return 0;
}*/

//inbuilt queue

/*#include<iostream>
#include<queue>

using namespace std;

int main()
{
	queue<int>q;

	for(int i=0;i<8;i++)
	{
		q.push(i);
	}
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;

	return 0;
}*/

//sliding window
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int n;cin>>n;
	queue<int>q;
	int sum=0;
	int x;cin>>x;
	while(x!=-1)
	{
		q.push(x);
		sum+=x;
		if(q.size()>n)
		{
			sum-=q.front();
			q.pop();	
		}
	cout<<(double)(sum)/q.size()<<" ";
	cin>>x;
	}
	cout<<endl;
	return 0;
}


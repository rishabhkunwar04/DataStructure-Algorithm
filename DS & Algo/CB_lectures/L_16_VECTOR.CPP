    
#include<iostream>
#include<vector>

using namespace std;


/*bool compare(int a,int b)
{
	return a>b;
}

int main()
{
	vector<int>v1;

	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		v1.push_back(i);
	}

	for(int i=0;i<n;i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;

	v1.pop_back();
	v1.pop_back();
	v1.push_back(10);
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	cout<<v1.capacity()<<endl;

	sort(v1.begin(),v1.end(),compare);

	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;

	return 0;
}*/


class Vector
{

public:
	int *arr;
	int cs;
	int ms;

	Vector(int n)
	{
		arr=new int[n];
		cs=0;
		ms=n;
	}


	void push_back(int data)
	{

		if(cs==ms)
		{
			int oldsize=ms;
			int *oldarr=arr;
			ms=2*ms;
			arr=new int[ms];
			for(int i=0;i<oldsize;i++)
			{
				arr[i]=oldarr[i];
			}
			delete []oldarr;

		}

		arr[cs]=data;
		cs++;
	}

	void pop_back()
	{
		if(cs>0)
		{
			cs--;
		}
	}


	int size()
	{
		return cs;
	}

	int capacity()
	{
		return ms;
	}


	bool empty()
	{
		return cs==0;
	}

	int operator[](int i)
	{
		return arr[i];
	}

};


int main()
{
	Vector v(8);
	for(int i=0;i<16;i++)
	{
		v.push_back(i);
	}

	v.pop_back();
	v.pop_back();
	cout<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}

	return 0;
}











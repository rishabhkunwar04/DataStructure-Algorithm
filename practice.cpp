/*#include<iostream>
#include<cstring>  
using namespace std;
char str[1000][1000];
int c=-1;
void sub(char* in, char* out, int i, int j)
{
    if(in[i]=='\0')
    {
    	c++;
        out[j]='\0';   // = instead of ==
        strcpy(str[c],out);  // semi colon missing
        return;  // return was missing
    }
    int x=in[i]-'0';
    //cout<<x;
    out[j]=char(x+96);
    sub(in,out,i+1,j+1);
    int a=in[i]-'0';
    int b=in[i+1]-'0';
    int z =(10*a)+b;
    if(z<26 && in[i+1]!='\0')  //Add condition that i+1 is a valid index
    {
        out[j]=char(z+96);
       	sub(in,out,i+2,j+1);    
    }
}*/
/*#include<iostream>
#include<climits>
using namespace std;
int main()
{
	return 0;
}
 




int main() 
{
    char in[1000];
    char out[1000];
    cin>>in;
   	sub(in,out,0,0);
   	cout<<"[";
    for(int i=0;i<=c;i++)
    {
    	if(i !=c)
    	{
    		cout<<str[i]<<", ";
		}
		else
		{
			cout<<str[i]<<"]";
		}
	}
    
    return 0;
}*/
/*int lowerbound(int a[],int key,int n,int i)
{
	if(i==0)
	{
		return -1;
	}
	if(a[i]==key)
	{
	  int lastindex=i;
	  return lastindex;
	}
	lowerbound(a,key,n,i-1);
}

int upperbound(int a[],int key,int n,int i)
{
	if(i==n)
	{
	  return -1;	
	}
	if(a[i]==key)
	{
		int firstindex=i;
		return firstindex;
	}
	upperbound(a,key,n,i+1);
}
int main()
{
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int t;
	cin>>t;
	while(t>0)
	{
		int key;
		cin>>key;
		cout<<upperbound(a,key,n,0)<<" ";
		cout<<lowerbound(a,key,n,n-1)<<endl;
		t--;
		
	}
	return 0;
}*/

/*#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node* next;
	
	node(int d)
	{
		data=d;
		next=NULL;
		}	
};

void insertAtEnd(node* &head,node* &tail,int d)
{
	
	node* n=new node(d);
	if(head==NULL)
	{
		head=n;
		tail=n;
		tail->next=NULL;
	
	}
	else
	{
	tail->next=n;
	tail=n;	
	tail->next=NULL;
	}
}
void print(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}

 void deletebefore(node*&head,node*&tail,int key)
{
	node*curr=head;
	node*prev=head;
	curr=curr->next;
	while(curr->next!=NULL)
	{
		if(curr->next->data==key)
		{
		prev->next=curr->next;
		curr->next=NULL;
		delete(curr);	
		}
		prev=prev->next;
		curr=curr->next;
	}
	  print(head);


}
int main()
{
	node* head=NULL;
	node* tail=NULL;
	int n;
	cin>>n;
	while(n>0)
	{
		int data;
		cin>>data;
		insertAtEnd(head,tail,data);
		n--;
	}
    print(head);
    int key;
    cin>>key;
    deletebefore(head,tail,key);
	return 0;
}*/

//SWAP OF FIRST AND LAST NODE
/*#include<iostream>
using namespace std;

class node
{
	public:
	node* next;
	int data;
	 
	 node(int d)  //constructor
	 {
	 	data=d;
	 	next=NULL;
		 }			
};

void insertAtTail(node* &head,node* &tail,int data)
{
	node*temp=new node(data);
	if(head==NULL){
		head=temp;
		tail=temp;
		tail->next=NULL;
	}
	else
	{
		tail->next=temp;
		tail=temp;
		tail->next=NULL;
	}

}

void print(node* head)
{
	node* temp=head;
	while(temp)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}
 
 
 void swap_last_first(node* &head,node* &tail)
 {
 	node*ptr=head;
 	while(ptr->next->next!=NULL)
 	{
 		ptr=ptr->next;
	 }
	 node*temp=ptr->next;
	 ptr->next->next=head->next;
	 ptr->next=head;
	 head->next=NULL;
	 head=temp;
	 
	 
 }

int main()
{
	node* head=NULL;
	node* tail=NULL;
	int data;
	cin>>data;
	
	while(data!=-1)
	{
		insertAtTail(head,tail,data);
		cin>>data;
	}
	print(head);
	cout<<endl;
	swap_last_first(head,tail);
	print(head);
	return 0;
}
*/
//Apat pattern printing
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int l=1;l<=n;l++)
	{
		if(l%2==0)
		{
			for(int i=1;i<=l;i++)
			{
				if(i==1 || i==l)
				{
					cout<<"1"<<" ";
				}
				else
				cout<<"0"<<" ";
			}
		}
		else
		{
			for(int i=1;i<=l;i++)
			{
				cout<<"1"<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}*/
 //varible size array

/*
#include<iostream>
using namespace std;

int main() {
	// get length of 2D array and number of queries
	int n, q;
	cin >> n >> q;

	// create 2D array
	int** a = new int*[n]();

	// fill 2D array with 1D subarrays
	for (int i = 0; i < n; i++) {
		// get the length of the 1D array at a[i]
		int k;
		cin >> k;

		// create the 1D subarray with the given length
		int* i_arr = new int[k]();

		// fill the subarray with k values
		for (int j = 0; j < k; j++) {
			cin >> i_arr[j];
		}

		// store the subarray in a
		a[i] = i_arr;
	}


	// run queries on a
	for (int q_num = 0; q_num < q; q_num++) {
		// get i, j as the 'query' to get a value from a
		int i, j;
		cin >> i >> j;
		cout << a[i][j] << endl;
	}

	// delete 2D array (each subarray must be deleted)
	for (int i = 0; i < n; i++) {
		delete[] a[i];
	}
	delete[] a;

	return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
	// get length of array 'a' and number of queries
	int n, q;
	cin >> n >> q;

	// create vector of vectors
	vector<vector<int>> a(n);

	// fill each 2D vector i with k_i values
	for (int i = 0; i < n; i++) {
		// get the length k of the vector at a[i]
		int k;
		cin >> k;

		// fill the vector with k values
		a[i].resize(k);
		for (int j = 0; j < k; j++) {
			cin >> a[i][j];
		}
	}

	// run queries on a
	for (int q_num = 0; q_num < q; q_num++) {
		// get i, j as the 'query' to get a value from a
		int i, j;
		cin >> i >> j;
		cout << a[i][j] << endl;
	}

	return 0;
}
#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.

class Student{
int age;
string first_name;
string last_name;
int standard;
public:
 Student()
    {
        age = 0;
        standard = 0;
        first_name.clear();
        last_name.clear();
    }
 void set_age(int a)
 {
     age=a;
 }
 int get_age()
 {
     return age;
 }
 void set_first_name(string newfirstname)
 {
  first_name=newfirstname;
 }
 string get_first_name()
 {
     return first_name;
 }
 void set_last_name(string newname)
 {
     last_name=newname
 }
 string get_last_name()
 {
     return last_name;
 }

  void set_standard(int a)
 {
     standard=a;
 }
 int get_standard()
 {
     return standard;
 }
 string to_string()
 {
     stringstream ss;
     ss>>age>>','>>first_name>>','>>last_name>>','>>standard;
     return ss.str();
 }

};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}*/


//hacker rank classes and object
/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
 
// Write your Student class here

class Student{
    int score[5];
    int sum;
    public:
    Student(){sum=0;}
    void input()
    {
        for(int i=0;i<5;i++)
        {
            cin>>score[i];
            sum+=score[i];
        }
    }
    int calculateTotalScore(){
        return sum;

    }

};
int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}

*/
/*

#include <bits/stdc++.h>

using namespace std;


int toys(vector<int> w) {

sort(w.begin(),w.end());
int c=1;
int wt=w[0];
for(int i=0;i<w.size();i++)
{
   if(w[i]<=(wt+4))
   { continue;}
   c+=1;
   wt=w[i];
} 
return c;
}


int main()
{
  int n;cin>>n;
  vector<int>w(n);
  for(int i=0;i<n;i++)
  {
    cin>>w[i];
  }
  cout<<toys(w);

  return 0;
}

*/

/*

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the decentNumber function below.
void decentNumber(int n) {
  if(n%3==0)
  {
    for(int i=1;i<=n;i++)
    { cout<<"5";}
  }
  else if((n-5)%3==0)
  {
    for(int i=1;i<=n-5;i++)cout<<"5";
    for(int i=1;i<=5;i++)cout<<"3";
  }
  else if((n-3)%5==0)
  {
    for(int i=1;i<=3;i++)cout<<"5";
    for(int i=1;i<=n-3;i++)cout<<"3";
  }
   else if(n%5==0)
  {
    for(int i=1;i<=n;i++)
    { cout<<"3";}
  }

  else cout<<"-1";
  cout<<endl;

  }
*/

/*
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> r(n); // children ratings
    vector<int> c(n); // candies allocated to each child
    
    // take in r[] and parse left to right
    int numcandies=1; // num of candies to give
    c[0]=1;
    cin >> r[0];
    for (int i=1;i<n;i++) {
        cin >> r[i];
        if (r[i]>r[i-1]) numcandies++;
        else if (r[i]<=r[i-1]) numcandies=1;
        c[i]=numcandies;
    }

    // 2nd parse right to left and accumulate total
    numcandies=1;
    long total=c[n-1];
    for (int i=n-2;i>=0;i--) {
        if (r[i]>r[i+1]) numcandies++;
        else if (r[i]<=r[i+1]) numcandies=1;
        c[i]=(numcandies>c[i]?numcandies:c[i]); //use the larger of 2 parses
        total+=c[i];
    }    
    
    cout << total;
    return 0;
}
*/


/*#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
  

int pylons(int k, vector<int> arr) {
    int result = 0;
    
    // start from the beginning and find the furthest city to build the plant
    int i = 0;
    while (i < arr.size()) {
        // do backward search from the furthest possible to current
        bool found = false;
        for (int j = i + k-1; (j >= i - k+1) && (j >= 0); j--) {
          
            if (j < arr.size()){
                if (arr[j] == 1) {
                    
                    // put plant here and 
                    result++;
                    // calculate the new beginning
                    i = j + k;
                    found = true;
                    break;
                }
            }
        }
        
        if (!found) return -1;
    }
    
    return result;
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int freq[26]={0};
    char ch[26];
    int c=0;
    for(int i=0;i<=n;i++)
    {
        cin.getline(ch,26);
       for(int j=0;ch[j]!='\0';j++)
        {
            int index=ch[j]-'a';
            if(freq[index]==0)
            {
                c++;
                freq[index]=1;
            }
        }
    }
   cout<<c;
return 0;
}*/


#include<iostream>
using namespace std;

int first_occurance(int *a,int s,int e,int k)
{
	int mid=(s+e)/2;
    int ans=0;
	if(a[mid]==k)
	{
		ans=mid;
	}
	if(s==e)
	{
		return ans;
	}
	first_occurance(a,s,mid-1,k);
}

int main()
{
	int n;cin>>n;
	int *a=new int[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int s=0,e=n-1;
	int k;cin>>k;
	cout<<first_occurance(a,s,e,k)<<endl;
//	cout<<last_occurance(a,s,e,k)<<endl;
	
	return 0;
}




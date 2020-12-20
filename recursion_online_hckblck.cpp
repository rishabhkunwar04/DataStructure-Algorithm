 
 
 //#include<iostream>
// using namespace std;
 //IS RECRSN BALANCED
/* int c=0;
   bool isbalanced(char* ch,int i)
   {
   	//base case
   	if(ch[i]=='\0')
   	{
   		if(c==0)
   		{
   			return true;
		   }
   		
   		else
   		{
   			return false;
		   }
   		
   		
	   }
	   
	   if(ch[i]=='['|| ch[i]=='{'||ch[i]=='(')
	   {
	   	c++;
	   }
	    
	   if(ch[i]==']'|| ch[i]=='}'||ch[i]==')')
	   {
	   	c--;
	   }
	   isbalanced(ch,i+1);
   }
 int main()
 {
 	char ch[100];
 	cin.getline(ch,100);
 	if(isbalanced(ch,0))
 	{
 		cout<<"true";
	 }
	 else
	 {
	 	cout<<"false";
	 }
 	
 	return 0;
 }*/

 #include<iostream>
using namespace std;
//UPPER AND LOWER BOUND

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


//CODE THE STRING

/*#include<iostream>
#include<cstring>  //include cstring for strcpy() function
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


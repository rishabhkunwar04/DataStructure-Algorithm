#include<iostream>
#include<string.h>
using namespace std;
//PANGRAM CHECKING
/*bool check_pangram(string &str)
{
    int mark[100];
  for(int i=0;i<str.length();i++)
  {
      if(str[i]>='a'&&str[i]<='z')
      {
          int index=str[i]-'a';
          mark[index]=true;
      }
      if(str[i]>='A'&&str[i]<='Z')
      {
          int index=str[i]-'A';
          mark[index]=true;
      }
  }
  for(int i=0;i<str.length();i++)
  {
      if(mark[i]==true)
      {
          return true;
      }
      else
      return false;
  }
  return false;
}

int main() {s
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    string str;
	    cin>>str;
	check_pangram(str);

	if(check_pangram())
	{
	    cout<<"1"<<endl;
	}
	else
	cout<<"0"<<endl;
	}
	return 0;
}*/
//REMOVE PUNCUATION

/*int main()  
{ 
    // input string 
    string str = "Welcome???@@##$ to#$% Geeks%$^for$%^&Geeks"; 
  
    for (int i = 0, len = str.size(); i < len; i++) 
    { 
        // check whether parsing character is punctuation or not 
        if (ispunct(str[i])) 
        { 
            str.erase(i--, 1); 
            len = str.size(); 
        } 
    } 
      
    // print string without punctuation 
    cout << str; 
    return 0; 
} */
/*int len=str.size();i<len;i++)
   {
   	 str.erase(1);
   	 break;
	} 

  
    cout << "After erase() : "; 
    cout << str; 
} 
  

int main() 
{ 
    string str("Hello World!"); 
  
    cout << "Before erase() : "; 
    cout << str << endl; 
    eraseDemo(str); 
  
    return 0; 
} */

/*int roundoff(int n)
{
    int r=n%10;
    if(r<=5)
    {
        return (n=n-r);
    }
    else
    return (n+=(10-r)); 
}

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	   cout<<roundoff(n)<<endl;
	}
	return 0;
}*/
//ONE EXTRA CHAR IN STRING
/*int main() {
char ch1[100];
char ch2[100];
cin>>ch1>>ch2;
int freq[26]={0};
for(int i=0;ch1[i]!='\0';i++)
{
    int index=ch1[i]-'a';
    freq[index]++;
    
}
for(int i=0;ch2[i]!='\0';i++)
{
    int index=ch2[i]-'a';
    freq[index]--;
    
}
for(int j=0;j<26;j++)
{
    if(freq[j]!=0)
    {
    	char ch=97+j;
    	cout<<ch;
    	
        //cout<<(char)(97+j)<<" ";
    }
}
	return 0;
}*/

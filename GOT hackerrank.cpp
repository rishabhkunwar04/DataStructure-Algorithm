#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	
    char s[100000];
	cin.getline(s,100000); 
	if('a'<=s[100000]<='z')
	{
		
   // string s[1000000];
     //getline(cin,s[1000000]);
    if(strlen(s)%2==0)
    {
           int freq[26]={0};
      for(int i=0;s[i]!='\0';i++)
      {
        int index=s[i]-'a';
        freq[index]++;    
      }
        for(int i=0;i<26;i++)
        {
        	int flag=0;
            if(freq[i]%2==0)
            {
                flag=1;
            }
        } 
		int flag;
		if(flag==1)
		{
			cout<<"YES";
		 } 
		 else
		 {
		 	cout<<"NO";
		 }
          
    }
    else
    {
      int freq[26]={0};
      for(int i=0;s[i]!='\0';i++)
      {
        int index=s[i]-'a';
        freq[index]++;    
      }
      int flag=0;
        for(int i=0;i<26;i++)
        {
        	
            if(freq[i]%2!=0)
            {
             flag++;  
            }
        }
        if(flag==1)
        {
        	cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
        
    }
	}

     return 0;
}   

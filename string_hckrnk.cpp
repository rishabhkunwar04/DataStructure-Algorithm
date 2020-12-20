
//palindromic index//

/*#include<iostream>
#include<string>
using namespace std;
int main(){
    int r,a;
    cin>>r;
    while(r--)
        {
            string z;
            cin>>z;
            int q=z.size();
            for( a=0;a<=(q/2);a++)
                {
                    if(z[a]!=z[q-1-a])
                        {
                             if((z[a+1]==z[q-1-a])&&(z[a+2]==z[q-1-a-1]))
                            cout<<a<<endl;
                           else if((z[a]==z[q-1-a-1])&&(z[a+1]==z[q-1-a-2]))
                            cout<<q-1-a<<endl;
                            
                            goto jump; //this statment jump the command to the place where jump statemnt is mentioned
                        }
                }
                cout<<"-1"<<endl;
        jump:;//program jump here
        }
    return 0;
}*/


//ANAGRAM CHECK//


/*#include<bits/stdc++.h>
using namespace std;

int main()
{
  int q;
cin >> q;

for(int a0 = 0; a0 < q; a0++){
    string s;
    cin >> s;

    if (s.length()%2) cout << -1 << endl;
    else {
        vector <int> s1(26);
        vector <int> s2(26);
        for (int i=0;i<s.length()/2;i++) {
            s1[s[i]-'a']++;
            s2[s[i+s.length()/2]-'a']++;
        } 

        int min=0;
        for (int i=0;i<26;i++) if (s2[i]>s1[i]) min+=(s2[i]-s1[i]);
        cout << min << endl;
    }
}

    return 0;
}*/
//ANAGRAM TO PALINDROME POSSIBLE OR NOT//

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    map<char,int>m;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    if(s.length()&1)
    {

        int c=0;
       for(auto x:m)
       {
        if(x.second%2!=0)
        {
            c++;
        }
        
      }
       
       if(c==1)cout<<"YES";
       else cout<<"NO";
    }

    else
    {

    
        int flag=0;
        for(auto x:m)
        {
            if(x.second%2!=0)
            {
                flag=1;
                break;
            }
        }
        
        if(flag==0)
        {
            cout<<"YES";
        }
        else cout<<"NO";

    }
    return 0;
}*/
//SHERLOCK AND ANAGRAM //

/*#include<bits/stdc++.h>
using namespace std;

int sherlockAndAnagrams(string a){
    // Complete this function
int ana = 0;
int diff = 1;
for(int i=0;i<a.size()-1;i++){
    vector<string> substrings(0);
    for(int j=0;j<a.size()-diff+1;j++){
        substrings.push_back(a.substr(j,diff));
    }
    for(int j=0;j<substrings.size();j++){
        sort(substrings[j].begin(),substrings[j].end());
    }
    for(int x=0;x<substrings.size();x++){
        for(int y=x+1;y<substrings.size();y++){
        if(substrings[x]==substrings[y]){
            ana++;
        }
      }
    }
    diff++;
}
return ana;
}

int main()
{
    string s;
    cin>>s;
    cout<<sherlockAndAnagrams(s);
    return 0;
}*/

//COMMON CHILD//
/*#include <iostream>  //DYNAMIC PROGRAMMING//
#include<string>
using namespace std;
int dp[5005][5005];
int main()
{
    string a,b;
    int i,j;
    cin>>a>>b;
    for(i=1;i<=a.size();i++)
    {
        for(j=1;j<=b.size();j++)
        {
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            if(a[i-1]==b[j-1])
            dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
        }
    }
    cout<<dp[a.size()][b.size()];
    return 0;
}*/


/*

#include<bits/stdc++.h>
using namespace std;

stack<char>s1;
stack<char>s2;

void lexo_stack(string ch1,string ch2)
{
    for(int i=ch1.length()-1;i>=0;i--)
    {
        s1.push(ch1[i]);
    }
    for(int i=ch2.length()-1;i>=0;i--)
    {
        s2.push(ch2[i]);
    }
    string res;
    int j=0;

    while(!s1.empty() && !s2.empty())
    {
        if((s1.top()-'A')>(s2.top()-'A'))
        {
          res[j++]=s2.top();
          s2.pop();
        }
        else{
            res[j++]=s1.top();
            s1.pop();
        }
        if(s1.empty())
        {
            while(!s2.empty())
            {
                res[j++]=s2.top();
                s2.pop();
            }
        }
          if(s2.empty())
        {
            while(!s1.empty())
            {
                res[j++]=s1.top();
                s1.pop();
            }
        }
    }
    res[j]='\0';

    for(int j=0;res[j]!='\0';j++)
    {
      cout<<res[j];
    }


}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string ch1;
        string ch2;
        cin>>ch1;
        cin>>ch2;
      lexo_stack(ch1,ch2);

        cout<<endl;
    }

}}*/
//valid binary string

/*#include<bits/stdc++.h>
using namespace std;

int binary_string(string s,int d,int &c)
{
    for(int i=0;i<s.size()-d+1;i++)
    {
        int t=d;
        int flag=0;
        int j=i;
        while(t--)
        {
            if(s[j++]&1)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)c++;
    }
return c;
}

int main()
{
    string s;
    int d;
    cin>>s>>d;
    int c=0;
   cout<< binary_string(s,d,c)<<endl;
   return 0;
}*/


//PERMUTATION OF STRING


// C++ program to print all  
// permutations with duplicates allowed  
#include <bits/stdc++.h> 
using namespace std; 
  
  
// Function to print permutations of string  
// This function takes three parameters:  
// 1. String  
// 2. Starting index of the string  
// 3. Ending index of the string.  
void permute(string a, int l, int r)  
{  
    // Base case  
    if (l == r)  
        cout<<a<<endl;  
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute(a, l+1, r);  
  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
}  
  
// Driver Code  
int main()  
{  
    string str = "ABC";  
    int n = str.size();  
    permute(str, 0, n-1);  
    return 0;  
}  
  
// This


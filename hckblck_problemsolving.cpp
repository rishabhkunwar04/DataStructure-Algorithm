#include <bits/stdc++.h>

using namespace std;

string superReducedString(string s) {
for(int i=0;s[i]!='\0';i++)
{
    if(s[i]==s[i+1])
    {
        for(int i=0;s[i]!='\0';i++)
        {
            s[i]=s[i+2];
        }
        int x=strlen(s);
        s[x]='\0';

        
    }
}
return s;

}

int main()
{

    string s;
    getline(cin,s);

    cout<<superReducedString(s);


    return 0;
}


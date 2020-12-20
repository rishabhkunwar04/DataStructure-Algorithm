#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    char ch[100];
    cin>>ch;
    int x=strlen(ch);
    for(int i=0;ch[i]!='\0';i++)
    {
        int pos=0;
        for(int j=i;ch[j]!='\0';j++)
        {
            pos++;
            if(pos==3)
            {
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
    cout<<x/3<<endl;
    
	return 0;
} 

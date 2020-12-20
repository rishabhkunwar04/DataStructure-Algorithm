#include<iostream>
using namespace std;

bool brackets(char *ch,char *arr,int i,int j)
{
    if(ch[i]=='\0')
    {
        if(arr[0]==0)
        {
           return true;
        }
        else
        {
            return false;
        }
    }
    
    switch(ch[i])
    {
        case '{':
        case '[':
        case '(':arr[j]=ch[i];
                brackets(ch,arr,i+1,j+1);
                break;
        case '}':if(arr[j-1]=='{')
                {
                    arr[j-1]=0;
                    brackets(ch,arr,i+1,j-1);
                    //return true;   //You don't have to return true here. It is possible that the brackets coming next may be unbalanced.
                }
                else
                {
                    return false;
                }
                break;
        case ']':if(arr[j-1]=='[')
                {
                    arr[j-1]=0;
                    brackets(ch,arr,i+1,j-1);
                    //return true;   //Same reason
                }
                else
                {
                    return false;
                }
                break;
        case ')':if(arr[j-1]=='(')
                {
                    arr[j-1]=0;
                    brackets(ch,arr,i+1,j-1);
                    //return true;    //Same reason
                }
                else
                {
                    return false;
                }
                break;
        default: brackets(ch,arr,i+1,j);
                break;
    }
   
   
}

int main() {
    char ch[1000];
    cin.getline(ch,1000);
    char arr[1000]={0};
    if(brackets(ch,arr,0,0))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
	return 0;
}

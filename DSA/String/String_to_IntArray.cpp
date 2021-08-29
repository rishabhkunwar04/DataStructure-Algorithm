#include<bits/stdc++.h>
using namespace std;

//meathod 1
int main(){

     string str;
     getline(cin,str);
    int str_len = str.length();
   
    int arr[str_len] = { 0 };
    int j=0;

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ',' || str[i] == ' '){
            continue;   
          }  
           else{
            arr[j++]=str[i]-'0';
           }
    }
    for(int i=0;i<j;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

//meathod 2
int main(){

     string str;
     getline(cin,str);
    int str_len = str.length();
   
    int arr[str_len] = { 0 };
     int j=0;

     stringstream ss(str);
     string ch;
     while(getline(ss,ch,','))
     {
       arr[j++]=stoi(ch);

     }

    for(int i=0;i<j;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}



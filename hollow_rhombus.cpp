#include<iostream>
using namespace std;
int main() {
    int n, i=1, line=1;
    //cout<<"Enter n : ";      No output statements other than the required answer
    cin>>n;
    //cout<<endl;
    while(line<=n) {
        while(i<=n-line) {    //Initialization of i is missing
            cout<<" ";
            i=i+1;
        }

        if (line==1||line==5) {     //You have to make it for n not 5
                i=0;
                while(i<n){
                    cout<<"*";
                    i=i+1;
                }}

        else
            {cout<<"*"<<"   "<<"*";}    //You need to have a for loop for the space. You can't print 2 spaces for every n. 


    line=line+1;
    cout<<endl;
        }

	return 0;
}


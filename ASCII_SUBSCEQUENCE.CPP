#include<iostream>
using namespace std;
void subsq(char *in,char *out,int i,int j,int &count)
{
    //base case
    if(in[i]=='\0')
    {
        out[j]='\0';
        count++;
        
         int k=0;
    while(out[k]!='\0')
    {
        if(out[k]<27)   
            cout<<out[k]+96;
        else
            cout<<out[k];
        k++;
    }
    cout<<" ";
         
        return;
    }
    //exclude
    subsq(in,out,i+1,j,count);
    out[j]=in[i];
     //include
    subsq(in,out,i+1,j+1,count);
    
    out[j]=(in[i]-96);
    subsq(in,out,i+1,j+1,count);


}
int main() {
    char in[100];
    cin>>in;
    char out[100];
    int count=0;
    subsq(in,out,0,0,count);
    cout<<"\n"<<count;
	return 0;
}

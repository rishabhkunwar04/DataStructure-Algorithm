#include<iostream>
using namespace std;

void replace_pi(char *in, char *out,int i, int j)
{
	if(in[i]=='\0')
	{
		out[j]='\0';
		return ;
	}
	if(in[i]=='p' && in[i+1]=='i')
	{
		out[j]='3';
		out[j+1]='.';
		out[j+2]='1';
		out[j+3]='4';
		j=j+4;
		i=i+2;
	}
    else
    {
	    out[j]=in[i];   //Put this in else
        j++;
        i++;
    }
	replace_pi(in,out,i,j);  //Normally pass i j here and update the i j according to the conditions
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		char in[1005],out[1200];    //Increase the size of the character array
		cin>>in;
		replace_pi(in,out,0,0);
		cout<<out<<endl;  //Print in a new line
	}

}

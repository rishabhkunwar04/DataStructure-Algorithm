#include<bits/stdc++.h>
using namespace std;
void goodpswd(char in[],char out[])
{
	int temp;
	for(int i=0;in[i]!='\0';i++)
	{
		temp=0;
		if(in[i]>='a'&& in[i]<='z')
		{
			temp=1;
		}
	}
	if(temp==1)
	{
			
    int j=0,flag;
    for(int i=0;in[i]!='\0';i++)
    {
        if(i%2)
        {
            out[j]=in[i];
            j++;
            
        }
    }
    out[j]='\0';
    int x=strlen(out);
    while(x>=j)
    {
         flag=0;
        if(out[j++]==out[x--])
        {
            flag=1;
        }
        
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
	}
	else
	{
		cout<<"NO"<<endl;
	}

}
int main()
{
    int t;
    cin>>t;
    char out[10000];
    for(int i=1;i<=t;i++)
    {
        char in[10000];
        cin>>in;
        goodpswd(in,out);
    }
    return 0;
}

#include<iostream>
#include<cstring>
using namespace std;

int num=0;
char ans[100][20];  //to store all subsequences

void sub(char in[],char out[],int i,int j)
{
    if(i==strlen(in))
    {
        out[j]='\0';
        for(int k=0;k<=i;k++)ans[num][k]=out[k];  //copying output string to array of strings
        num++;
        return;
    }
    sub(in,out,i+1,j);
    out[j]=in[i];
    sub(in,out,i+1,j+1);
    return;
}

void lsort(char a[][20],int n)   //to arrange the subsequences in lexicographical order
{
    for(int i=0;i<n-1;i++)
    {
        for(int k=0;k<n-i-1;k++)
        {
            for(int j=0;a[k][j]!='\0';j++)
            {
                if(a[k][j]>a[k+1][j])
                {
                    swap(a[k],a[k+1]);
                    break;
                }
                else if(a[k][j]<a[k+1][j])    //Add the condition if a[k][j] is smaller than a[k+1][j] no need to check further and break without swapping
                {
                    break;
                }
                //j loop would continue on if the characters are same
            }
        }
    }
}

int main()
{
    char a[100],b[100];
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        sub(a,b,0,0);
        lsort(ans,num);
        for(int i=0;i<num;i++)
        {
            cout<<ans[i]<<endl;
        }
        num=0; //empty ans array 
    }
    return 0;
}



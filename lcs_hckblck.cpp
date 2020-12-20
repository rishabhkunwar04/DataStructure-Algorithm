#include<iostream>
#include<cstring>
using namespace std;
int func(char *s1,char *s2,char *s3)
{
    int l1=strlen(s1);
    int l2=strlen(s2);
    int l3=strlen(s3);
    int dp[100][100][100];
    dp[0][0][0]=0;
    for(int i=0;i<l1;i++)
    {
        dp[i][0][0]=0;
    }
    for(int i=0;i<l2;i++)
    {
        dp[0][i][0]=0;
    }
    for(int i=0;i<l3;i++)
    {
        dp[0][0][i]=0;
    }
    for(int i=1;i<=l1;i++)
    {
        for(int j=1;j<=l2;j++)
        {
            for(int k=1;k<=l3;k++)
            {
                if(s1[i-1]==s2[j-1]&&s2[j-1]==s3[k-1]&&s1[i-1]==s3[k-1])
                {
                    dp[i][j][k]=dp[i-1][j-1][k-1]+1;
                }
                else
                {
                    dp[i][j][k]=max(dp[i][j][k-1],max(dp[i-1][j][k],dp[i][j-1][k]));
                }
            }

        }
    }

    return dp[l1][l2][l3];
}
int main()
{
    int t;
    cin>>t;   //Take care of the test cases
    while(t--)
    {
        //Increase the size of the strings
        char s1[100];
        char s2[100];
        char s3[100];
        cin>>s1>>s2>>s3;
        cout<<func(s1,s2,s3)<<endl;
    }
}


#include<iostream>
#include<cstring>
using namespace std;
void aslivalue(char *a)//created this function to remove zeroes from the beginning of a number if any, for eg: 022 becomes 22
{
    long long unsigned int i=0,k=-1;
    char b[10000];
    if(a[0]=='0')
    {
        while(a[i]!='\0')
        {
            if(a[i]!='0')
            {
                break;
            }
            i++;
        }
        while(a[i]!='\0')
        {
            a[++k]=a[i++];
        }
    }
}
int compnum(char *a,char *b)//compares numerically,
{
    aslivalue(a);
    aslivalue(b);
    return strcmp(a,b);
}
int main()
{
    long long unsigned int n,i=0,ke,j,k,q,t;
    char a[10000][100],rev[100],com[100],all[10000][100],temp[100];
    cin>>n;
    cin.ignore();
    while(i<n)
    {
        cin.getline(a[i],50);
        i++;
    }
    cin>>ke;cin.ignore();
    //cin.getline(rev,100);
    //cin.getline(com,100);
    cin>>rev;  //Use cin for inputting rev as input is in single line separated by a space. cin.getline() will take the complete in rev
    cin>>com;

            i=0;
            while(i<n)//creating another string 'all' to store the required column
            {
                j=0;k=0;
                while(k<ke-1)
                {
                    if(a[i][j]==' '&&a[i][j]!='\0')k++;
                    j++;
                }
                q=0;
                while(a[i][j]!=' '&&a[i][j]!='\0')
                {
                    all[i][q++]=a[i][j++];
                }
                i++;
            }
        if(rev[0]=='f')
        {
            if(com[0]=='l')//lexico....
            {
                i=0;
                while(i<n)
                {
                    t=i;
                    j=i;
                   while(j<n)
                   {
                       if(strcmp(all[t],all[j])>0)
                       {
                           t=j;
                       }
                       j++;
                   }
                   cout<<a[t]<<endl;
                   strcpy(a[t],a[i]);
                   strcpy(all[t],all[i]);
                   i++;
                }
            }
            else //numerically
            {
                i=0;
                while(i<n)
                {
                    t=i;
                    j=i;
                   while(j<n)
                   {
                       if(compnum(all[t],all[j])==1)
                       {
                           t=j;
                       }
                       j++;
                   }
                   cout<<a[t]<<endl;
                   strcpy(a[t],a[i]);
                   strcpy(all[t],all[i]);
                   i++;
                }
            }
    }
    else // if reverse is true. copied the above code and printed from greatest to smallest
    {
       if(com[0]=='l')
            {
                i=0;
                while(i<n)
                {
                    t=i;
                    j=i;
                   while(j<n)
                   {
                       if(strcmp(all[t],all[j])<0)
                       {
                           t=j;
                       }
                       j++;
                   }
                   cout<<a[t]<<endl;
                   strcpy(a[t],a[i]);
                   strcpy(all[t],all[i]);
                   i++;
                }
            }
            else
            {
                i=0;
                while(i<n)
                {
                    t=i;
                    j=i;
                   while(j<n)
                   {
                       if(compnum(all[t],all[j])==-1)
                       {
                           t=j;
                       }
                       j++;
                   }
                   cout<<a[t]<<endl;
                   strcpy(a[t],a[i]);
                   strcpy(all[t],all[i]);
                   i++;
                }
            }
    }
}




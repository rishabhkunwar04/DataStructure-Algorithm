#include<iostream>
using namespace std;
int main()
{
	int r,c,a[100][100];
	cin>>r>>c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
		cout<<endl;
	}
	  for(int j=0;j<r;j++)
	   {
			if(j%2==0)
	       {
		    for(int i=0;i<c;i++)
		    {
			cout<<a[j][i]<<",";
		    }
		
	
	       }
        	else
           {  
	       	for(int i=c-1;i>=0;i--)
		    {
			cout<<a[j][i]<<",";
		    }
	       }
    	}

	cout<<"END";
	return 0;
}

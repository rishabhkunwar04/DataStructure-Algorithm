#include<iostream>
using namespace std;

int c=1;
bool issafetoput(int sol[10][10],int i,int j,int n)
{
	for(int k=0;k<n;k++)//for checking in same row and column 
	{
		if(sol[k][j]||sol[i][k])
		{
			return false;
		}
	} 
	int k=i,l=j;  //left diagonal checking
	while(k>=0&&l>=0)
	{
		if(sol[k][l])
		{
			return false;
			
		}
		k--;
		l--;
	}
	k=i;
	l=j;
	while(k>=0&&l<n) //right diagonal checking
	{
		if(sol[k][l])
		{
			return false;
		}
		k--;
		l++;
	}
	return true;
	
}
bool nqueen(int n,int i,int sol[10][10])
{
	if(i==n) //base case
	{
		cout<<"WAY "<<c<<"::"<<endl<<endl;
		c++; 
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<sol[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}
	//recursive case
	for(int j=0;j<n;j++)
	{
	  if(issafetoput(sol,i,j,n))
	  {
	  	sol[i][j]=1;
	  	bool kyaaagerakhpaya=nqueen(n,i+1,sol);
	  	if(kyaaagerakhpaya)
	  	{
	  		return true;
		  }
		  sol[i][j]=0;
	  	
	  }	
		
	}
	return false;

}
int main()
{
	system("color f4");
	
	int n;
	cout<<"ENTER THE SIZE OF N"<<"\n"; //printf("enter the size \n");
	cin>>n; //scanf("%d",&n);
	cout<<endl<<"MATRIX BOARD"<<endl<<endl;
	int a[10][10];
	int m=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[m][m]<<" ";
		}
		cout<<endl;
	}
	if(n<4)
	{
		cout<<"NOT POSSIBLE WITH THIS MATRIX SIZE";
		return 0;
	}
	cout<<endl<<"WAYS TO PLACE QUEEN IN BOARD OF N*N:-"<<endl<<endl;
	int sol[10][10]={{0}};
	nqueen(n,0,sol);
	cout<<endl;
	return 0;
}

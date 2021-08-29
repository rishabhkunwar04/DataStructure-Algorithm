 #include<iostream>
using namespace std;
int main()
{
//	int a[]={0,1,1,2,1,2,0,1,2};
//	int n=sizeof(a[])/sizeof(n);
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	int l=0,mid=0,e=n-1;
	while(mid<e)
	{
		
	mid++;
	if(a[mid]==1)
	mid++;
	else if(a[mid]==2)
	{
		swap(a[mid],a[e]);
		e--;
	}
	else if(a[mid]==0)
	{
		swap(a[mid],a[l]);
		mid++;
		l++;
	}
		
	}
	for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
	}
	
	
}

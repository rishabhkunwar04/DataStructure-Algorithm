#include<stdio.h>
#include<conio.h>


int main()
{
    
  int arr[]={1,2,3,4,5,6,7,8};

  int n= sizeof(arr)/sizeof(int);    
  int m= sizeof(arr)/sizeof(arr[0]);   
  printf("%d %d",n,m);

   
    return 0;
}


#include<iostream>
using namespace std;

//CLEAR BIT of no to //
/* int clearbit(int &n,int i)
 {
 	int mask=1<<i;  //or//int mask=~(1<<i)
 	n=(n ^ mask);// or // n=n&mask
 	return n;
 }
int main()
{
    int n,i;
    cin>>n>>i;
    cout<<clearbit(n,i);

	return 0;
}
  //UNIQUE NO 2 //

  int uniq2(int *a,int n)
  {
  	int res=0;
  	for(int i=0;i<n;i++)
  	{
  		res=res^a[i];
	  }
	  // finding set bits
	  int i=0;
	  int temp=res;
	  while(temp>0)                                                                                                                                                          C 
	  {
	  	if(temp&1)
	  	{
	  		break;
		  }
		  i++;
		  temp=temp>>1;
	  }
	  //forming bitmask
	  int mask=1<<i;
	  int firstno=0;
	  for(int i=0;i<n;i++)
	  {
	  	if((mask&a[i])!=0)
	  	{
	  		firstno=firstno^a[i];
		  }
	  }
	  int second=(res^firstno);
	  cout<<firstno<<" "<<second;
  }
  int main()
  {
  	int a[]={1,1,2,2,3,4,4,5,};
  	int n=sizeof(a)/sizeof(int);
  	uniq2(a,n);
  	return 0;
  }*/

//FLIP EVERY BIT OF A NO 32 BIT FORMAT

/*#include <bits/stdc++.h>

using namespace std;



int main()
{
  int t;cin>>t;
  while(t--)
  {
    unsigned int n;
    cin>>n;
    cout<<~n<<endl;
  }
  


    return 0;
}*/
//** DIVISION OF TWO INTEGER
#include <bits/stdc++.h>
using namespace std;
 
// Function to divide a by b and
// return floor value it
int divide(long long dividend, long long divisor) {
 
  // Calculate sign of divisor i.e.,
  // sign will be negative only iff
  // either one of them is negative
  // otherwise it will be positive
  int sign = ((dividend < 0) ^
              (divisor < 0)) ? -1 : 1;
 
  // remove sign of operands
  dividend = abs(dividend);
  divisor = abs(divisor);
 
  // Initialize the quotient
  long long quotient = 0, temp = 0;
 
  // test down from the highest bit and
  // accumulate the tentative value for
  // valid bit
  for (int i = 31; i >= 0; --i) {
 
    if (temp + (divisor << i) <= dividend) {
      temp += divisor << i;
      quotient |= 1LL << i;
    }
  }
 
  return sign * quotient;
}
 
// Driver code
int main() {
  int a = 10, b = 3;
  cout << divide(a, b) << "\n";
 
  a = 43, b = -8;
  cout << divide(a, b);
 
  return 0;
}
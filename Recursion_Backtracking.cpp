/* RECURSION */

/*#include<bits/stdc++.h>
using namespace std;
#include<cstring>
#include<ctime>
#include<cstdlib>

//bottom to up printing

 void inarr(int n)
{
	if(n==0)
	{
    	return;
	}
	inarr(n-1);
	cout<<n<<" ";

}

//bottom to down printing

void decarr(int n)
{
	if(n==0)
	{

		return;
	}
	cout<<n<<" ";
	decarr(n-1);
}

int main()
{
	int n;
	cin>>n;
	inarr(n);
	cout<<endl;
	decarr(n);
	return 0;
}
*/
  //product of two no by recn without using * opr

/*int product_recn(int a,int b,int sum,int i)
{
	if(i==b)
	{
		return sum;
	}
	sum+=a;
	product_recn(a,b,sum,i+1);
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<product_recn(a,b,0,0);
	return 0;
}*/

//MERGE SORT

/*void merge(int *a,int s,int e)
{
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	int k=s;
	int temp[100];

	while(i<=mid && j<=e)
	{
		if(a[i]<=a[j])
		{
			temp[k++]=a[i++];
		}
		else
		{
			temp[k++]=a[j++];
		}
	}
	while(i<=mid)   //if right sub array exhaust
	{
	temp[k++]=a[i++];
	}
	while(j<=e)   //when left subarray exhaust
	{
		temp[k++]=a[j++];
	}
	//copying to original array
	for(int i=s;i<=e;i++)
	{
		a[i]=temp[i];
	}


}
void mergesort(int a[],int s,int e)
{
	if(s>=e)
	{
		return;
	}
	int mid=(s+e)/2;
	mergesort(a,s,mid);
	mergesort(a,mid+1,e);
	merge(a,s,e);
}
int main()
{
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<",";
	}
	return 0;
}*/

// RANDOMISED QUICKSORT


/*void shuffle(int *a,int s,int e)
{
	srand(time(NULL));
	for(int i=e;i>0;i--)
	{
		//creating one rand index
		int j=rand()%(i+1);
		swap(a[i],a[j]);
	}

}

//QUICK SORT
  int search_pivotindex(int *a,int s,int e)
  {
      int pivot=a[e];
      int i=s-1;
      int j=s;

      for(;j<e;j++)
      {
          if(a[j]<=pivot)
          {
              i++;       //bring smaller to left of pivot
              swap(a[i],a[j]);
          }
      }
      swap(a[i+1],a[e]);//swap of pivot
      return i+1;
  }

 void quicksort(int *a,int s,int e)
 {
  if(s>=e)
  {
      return;
  }
  int p=search_pivotindex(a,s,e);  //finding pivot index
  quicksort(a,s,p-1);//left side quicksort
  quicksort(a,p+1,e);//right side quick sort

 }
int main()
{

    int a[]={1,2,3,4,5,6,7,8};
    int n=sizeof(a)/sizeof(int);
    shuffle(a,0,n-1);
    //printing shuffled array
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
	}
	cout<<endl;

    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)  //printing sorted array
    {

        cout<<a[i]<<" ";
    }
 return 0;
}*/
 //STRINGTOINT

/* int stringtoint(char *s,int l)
 {
 	if(l==0)
 	{
 		return 0;
	 }
 	int lastterm=s[l-1]-'0';
 	int ans=stringtoint(s,l-1)*10+lastterm;
 	return ans;

 }
int main()
{
	char s[100];
	cin>>s;
	cout<<stringtoint(s,strlen(s));
	return 0;
}*/

//PERMUTATION OF STRING
/*void permutation(char *in,int i)
{
	if(in[i]=='\0')
	{
		cout<<in<<endl;
		return;
	}
	for(int j=i;in[j]!='\0';j++)
	{
		swap(in[i],in[j]);
		permutation(in,i+1);
		swap(in[i],in[j]);

	}
}
int main()
{
	char in[100];
	//cin.ignore();
	cin.getline(in,100);
   // cin>>in;
	permutation(in,0);
	return 0;
}*/

//PHONEKEYPAD PROBLEM

/*char ch[][10]={"","ABC","DEF","GHI","JKL","MNO","PQR","STU","UVW","XYZ"};
void keypad(char *in,char *out,int i,int j)
{
	if(in[i]=='\0')
	{
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
    int index=in[i]-'0';
	for(int k=0;ch[index][k]!='\0';k++)
	{
		out[j]=ch[index][k];
		keypad(in,out,i+1,j+1);
	    	}

}
int main()
{
	char in[100],out[100];
	cin>>in;
	keypad(in,out,0,0);
	return 0;
}*/

//BUBBLESORT

/*void bubblesort(int a[],int n,int i,int j)
{
	if(i==n-1)
	{
		return;
	}
	if(j==n-i-1)
	{
		bubblesort(a,n,i+1,0);
		return;
	}
	if(a[j]>a[j+1])
	{
		swap(a[j],a[j+1]);
	}
	bubblesort(a,n,i,j+1);
}
int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bubblesort(a,n,0,0);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}*/


//sorting array

/*#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

 const unsigned int MOD = 1000000007; 


void insert_no(vector<int>&arr,int temp)
{
	//base case
	if(arr.size()==0 || arr[arr.size()-1]<=temp)
	{
		arr.push_back(temp);
		return;
	}
	int val=arr[arr.size()-1];
	arr.pop_back();
	insert_no(arr,temp);
	arr.push_back(val);


}

void sort_array(vector<int>&arr)
{
	if(arr.size()==1) //base case
		return;
	 //recursive case
	int temp=arr[arr.size()-1];
	arr.pop_back();
	sort_array(arr);
	//calling insertion function
	insert_no(arr,temp);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin>>n;
    vector<int>arr;
    while(n--)
    {
    	int x;cin>>x;
    	arr.push_back(x);
    }
    sort_array(arr);
    //print output
    for(int i=0;i<arr.size();i++)
    {
    	cout<<arr[i]<<" ";
    }
    
    return 0;
}*/

// grnerate all binary no of size k without consequtive 1
 
/*#include<bits/stdc++.h> 
using namespace std ; 
  
void generateAllStrings(int K, char str[], int n) 
{ 
    // print binary string without consecutive 1's 
    if (n  == K) 
    { 
        // terminate binary string 
        str[n] = '\0' ; 
        cout << str << " "; 
        return ; 
    } 
  
    // if previous character is '1' then we put 
    // only 0 at end of string 
    //example str = "01" then new string be "010" 
    if (str[n-1] == '1') 
    { 
        str[n] = '0'; 
        generateAllStrings (K , str , n+1); 
    } 
  
    // if previous character is '0' than we put 
    // both '1' and '0' at end of string 
    // example str = "00" then new  string "001" and "000" 
    if (str[n-1] == '0') 
    { 
        str[n] = '0'; 
        generateAllStrings(K, str, n+1); 
        str[n] = '1'; 
        generateAllStrings(K, str, n+1) ; 
    } 
} 
  
int main() 
{ 
    int K = 3; 
      char str[K]; 

    // Generate all Binary string starts with '0'
     str[0] = '0' ; 
    generateAllStrings ( K , str , 1 ) ;


    // Generate all Binary string starts with '1' 
    str[0] = '1' ; 
    generateAllStrings ( K , str , 1 ); 

    return 0; 
} */

//sum of powers
/*#include <iostream>
#include <vector>

using namespace std;

int power (int a, int n) { //power of a no by recursion optimised code
    if(n == 0)
        return 1;
    // else
    if(n % 2 == 0) {
        int temp = power(a, n / 2);
        return temp * temp;
    }
    // else
    return a * power(a, n - 1);
}


int solve(int x, const vector<int> &powers, int index) {
    if(index == 0) {
        return (x == 1) ? 1 : 0;
    }
    // else
    if(x == powers[index])
        return 1 + solve(x, powers, index - 1);
    // else
    int res = 0;
    res += solve(x - powers[index], powers, index - 1);
    res += solve(x, powers, index - 1);
    return res;
}


int main() {
    int x, n;
    cin >> x >> n;
    
    int pow = 1;
    vector<int> powers;
    for(int a = 2; pow <= x; a++) {
        powers.push_back(pow);
        pow = power(a, n);
    }
    
    cout << solve(x, powers, powers.size() - 1) << endl;        
    return 0;
}
*/



/// BACKTRACKING ///

//N-QUEEN

/*bool issafetoput(int sol[][10],int i,int j,int n)
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
	while(k>=00&&l<n) //right diagonal checking
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
bool nqueen(int n,int i,int sol[][10])
{
	if(i==n) //base case
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<sol[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
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
	int n;
	cin>>n;
	int sol[10][10]={{0}};
	nqueen(n,0,sol);
	cout<<endl;
	return 0;
}*/

//ELEPHANT WAYS

 /*#include<iostream>
using namespace std;

int elephantways(int i,int j)
{
	if(i==0 && j==0)
	{
		return 1;
	}

	int ans=0;
	for(int k=1;k<=i;k++)
	{
		ans+=elephantways(i-k,j);
	}

	for(int k=1;k<=j;k++)
	{
		ans+=elephantways(i,j-k);
	}

	return ans;
}


int main()
{
	int i,j;
	cin>>i>>j;
	cout<<elephantways(i,j)<<endl;
	return 0;
}*/

//GRID WAYS

/*int grid(int i,int j)
{
	if(i==0 && j==0)
	{
		return 1;
	}

	if(i<0 || j<0)
	{
		return 0;
	}
	int ans=grid(i,j-1)+grid(i-1,j);
	return ans;

}


int main()
{
	int n,m;
	cin>>n>>m;
	cout<<grid(n,m)<<endl;
	return 0;
}*/

//SUDOKU SOLVER

/*bool isSafeToPut(int mat[9][9],int n,int i,int j,int no)
{
   for(int k=0;k<n;k++)
   {
       if(mat[i][k]==no || mat[k][j]==0)  //checking for hz and vert colm and row resp"
       {
           return false;
       }
   }
   //checking for square box
   int x=sqrt(n);
   int starti=(i/x)*x;
    int startj=(j/x)*x;
    for(int i=starti;i<starti+x;i++)
    {
        for(int j=startj;j<startj+x;j++)
        {
            if(mat[i][j]==no)
            {
                return false;
            }
        }
    }
    return true;


}
bool sudokusolver(int mat[9][9],int n,int i,int j)
{
    //base case
    if(i==n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    if(j==n)
    {
        return sudokusolver(mat,n,i+1,0);
    }
     if(mat[i][j]!=0)
     {
         return sudokusolver(mat,n,i,j+1);
     }
      for(int no=1;no<=n;no++)
      {

        if(isSafeToPut(mat,n,i,j,no))
        {
            mat[i][j]=no;
          bool KyaRakhPaya=sudokusolver(mat,n,i,j+1);
          if(KyaRakhPaya)
           {
            return true;

           }
           mat[i][j]=0;
        }
     }
     return false;


}


int main()
{
    int mat[9][9] =
        {{5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}};

        sudokusolver(mat,9,0,0);

    return 0;
}*/

 // KNIGHT MOVE Problem
/*#include <iostream>
#include <iomanip>
using namespace std;
const int D = 8;

bool canPlace(int board[D][D], int n, int r, int c){
    return 
        r >= 0 && r < n &&
        c >= 0 && c < n &&
        board[r][c] == 0;
}

bool solveKnightMove(int board[D][D], int n, int move_no, int curRow, int curCol){
    if (move_no == n*n){
        return true;
    }

    int rowDir[] = {+2, +1, -1, -2, -2, -1, +1, +2};
    int colDir[] = {+1, +2, +2, +1, -1, -2, -2, -1};
    for(int curDir = 0; curDir < 8; ++curDir){
        int nextRow = curRow + rowDir[curDir];
        int nextCol = curCol + colDir[curDir];
        if (canPlace(board, n, nextRow, nextCol) == true){
            // place the knight
            board[nextRow][nextCol] = move_no + 1; // place the knight
            bool isSuccessful = solveKnightMove(board, n, move_no + 1, nextRow, nextCol);
            if (isSuccessful == true) return true;
            board[nextRow][nextCol] = 0;    // erase the knight
        }
    }
    return false;
}

void printBoard(int board[D][D], int n){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << setw(3) << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int board[D][D] = {0};
    int n; cin >> n;

    board[0][0] = 1;
    bool ans = solveKnightMove(board, n, 1, 0, 0);
    if (ans == true){
        // my function was able to solve it
        printBoard(board, n);
    }
    else {
        cout << "Sorry Man! Can't visit your board";
    }

    
}
*/


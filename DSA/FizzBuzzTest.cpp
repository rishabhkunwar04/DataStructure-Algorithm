//1.
#include <bits/stdc++.h>

using namespace std;


void fizzBuzz(int n) {
  for(int i=1;i<=n;i++)
  {
  if(i%15==0)cout<<"FizzBuzz"<<'\n';
  else if(i%3==0)cout<<"Fizz"<<'\n';
  else if(i%5==0) cout<<"Buzz"<<'\n';
  else cout<<i<<'\n';
  }
 

}

//2.
include <bits/stdc++.h>

using namespace std;


void solve(int n) {
  for(int i=1;i<=n;i++)
  {
     
     string str="";
   if(i%3==0)str+="Fizz";
   if(i%5==0) str+="Buzz";
  if(i%3!=0 && i%5!=0) str+=to_string(i);  
  cout<<str<<'\n';
    
  }
  int main()
  {
    int n;cin>>n;
    solve(n);
    return 0;
  }


//3

#include <bits/stdc++.h>

using namespace std;

void fizzBuzz(int n) {
  int t3=3,t5=5;
  for(int i=1;i<=n;i++)
  { 
       string str="";
       
      if(i!=t3 && i!=t5) str+=to_string(i);
       if(i==t3){
         str+="Fizz";
         t3+=3;
       }
       if(i==t5) 
       {
         str+="Buzz";
         t5+=5;
       }
      
      cout<<str<<'\n';
    
  }

  //4.
  #include <bits/stdc++.h>

using namespace std;

void fizzBuzz(int n) {
  int t3=0,t5=0;
  for(int i=1;i<=n;i++)
  { 
       string str="";
        t3++;
        t5++;

       if(t3==3){
         str+="Fizz";
         t3=0;
       }
       if(t5==5) 
       {
         str+="Buzz";
         t5=0
       }
       
       if(str==""){
        cout<<i<<'\n';
       }else cout<<str<<'\n';

      
    
  }
 


#include<iostream>
using namespace std;

bool secinv(int a[],int b[],int c[],int n){
  int i;
   for(i=0;i<n;i++){
     b[a[i]]=i;
   }
   for(i=0;i<n;i++){
    if(b[i]==c[i]){
        return 1;
    }
    else{
        return 0;
    }
   }
}
int main(){
  int a[1000];
  int b[1000];
  int c[1000];
  int n;
  int i;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  for(i=0;i<n;i++){
    cin>>c[i];
  }
  if(secinv(a,b,c,n)==1){   //Use brackets correctly
    cout<<"true";
  }
  else if(secinv(a,b,c,n)==0){
    cout<<"false";
  }
  return 0;
}


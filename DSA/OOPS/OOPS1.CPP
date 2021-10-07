
//CONSTRUCTOR

#include<bits/stdc++.h>
using namespace std;

class Car{
private:
    int price;
public:
    int model_no;
   
    
    //Constructor 
    Car(){   
    }

    // Constructor with parameters - Parametrised Constructor 
    Car(int p,int mn){
         cout<<"constructor "<<this<<'\n'; //this hold the adds of current object
        price = p;
        model_no = mn;
          
    } 
    
};

int main() {
    
    Car c(10,2000);
    cout<<"main "<<&c<<'\n';
   
 
    return 0;
    
}

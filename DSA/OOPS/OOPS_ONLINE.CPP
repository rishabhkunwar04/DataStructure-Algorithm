
#include<iostram>
using namespace std;

 //SHALLOW COPY AND DEEP COPY
 
class Car{
private:
    int price;
public:
    int model_no;
    char *name;
    
    //Constructor 
    Car(){
        //Override the default Constructor
        name = NULL;
        cout<<"Making a car.."<<endl;
    }
    // Constructor with parameters - Parametrised Constructor 
    Car(int p,int mn,char *n){
        price = p;
        model_no = mn;
        int l  = strlen(n);
        name = new char[l+1];
        strcpy(name,n);
        
    }
   
   //Deep Copy Constructor 
   Car(Car &X){
       // cout<<"Making a Copy of Car";
        price = X.price;
        model_no = X.model_no;
        int l = strlen(X.name);
        name = new char[l+1];
        strcpy(name,X.name);
    }
    
    void setName(char *n){
        if(name==NULL){
            name = new char[strlen(n)+1];
            strcpy(name,n);
        }
        else{
            //Later...
            //Delete the oldname array and allocate a new one.
            
        }
    }
    
    void start(){
        cout<<"Grrrr...starting the car "<<name<<endl;
    }
    void setPrice(int p){
        if(p>1000){ //only positive value accepted
            price  = p;
        }
        else{
            price = 1000;
        }
    }
    int getPrice(){
        return price;
    }
    void print(){
        cout<<name<<endl;
        cout<<model_no<<endl;
        cout<<price<<endl;
        cout<<endl;
    }
    
};

int main() {
    
    Car C;
    //Initialisation
    //C.price =-500;
    C.setPrice(1500);
    C.setName("Nano");
    C.model_no = 1001;
    //C.start();
    C.print();
    
    Car D(100,200,"BMW");
    
    Car E(D); //Default Copy Constructor
    E.name[0] ='G';
    
    D.print();
    E.print();
 
    return 0;
    
}
    
    //CONST PARM,CONST FUNCN,DESTRUCTOR

/*class Car{
private:
    int price;
public:
    int model_no;
    char *name;
    const int tyres;
    
    //Constructor 
    Car():name(NULL),tyres(4){
    }
    // Constructor with parameters - Parametrised Constructor 
    Car(int p,int mn,char *n,int t=4):price(p),model_no(mn),tyres(t){
        int l  = strlen(n);
        name = new char[l+1];
        strcpy(name,n);
        
    }
   
   //Deep Copy Constructor 
   Car(Car &X):tyres(X.tyres){
       // cout<<"Making a Copy of Car";
        price = X.price;
        model_no = X.model_no;
        int l = strlen(X.name);
        name = new char[l+1];
        strcpy(name,X.name);
    }
    
    void operator = (const Car &X){
        cout<<"In Copy Assignment Operator"<<endl;
        price = X.price;
        model_no = X.model_no;
        int l = strlen(X.name);
        name = new char[l+1];
        strcpy(name,X.name);
        
    }
    
    void setName(const char *n){
        if(name==NULL){
            name = new char[strlen(n)+1];
            strcpy(name,n);
        }
        else{
            //Later...
            //Delete the oldname array and allocate a new one.
            
        }
    }
    
    void start() const{
        cout<<"Grrrr...starting the car "<<name<<endl;
    }
    void setPrice(const int p){
        if(p>1000){
            price  = p;
        }
        else{
            price = 1000;
        }
    }
    int getPrice() const{
        return price;
    }
    void print() const{
        cout<<name<<endl;
        cout<<model_no<<endl;
        cout<<price<<endl;
        cout<<endl;
    }
    ~Car(){
        cout<<"Destroying the Car "<<name<<endl;
        //Write code to delete all dynamic data member
        if(name!=NULL){
            delete [] name;
        }
    }
    
};

int main() {
    
    Car C;
    //Initialisation
    //C.price =-500;
    C.setPrice(1500);
    C.setName("Nano");
    C.model_no = 1001;
    //C.start();
    C.print();
    
    Car D(100,200,"BMW");
    
    Car E(200,400,"Audi") ;//Default Copy Constructor
   
   // E.name[0] ='G';
     D = E; //Copy Assigment Operator ->Shallow Copy 
     D.name[0] = 'O';
     D.print();
     E.print();
     
     cout<<E.tyres<<endl;
    
    
    //Suppose we create a dynamic object 
    Car *DC = new Car(100,200,"Dynamic Tesla Car");
    
    delete DC;
    
 
    return 0;
    
}*/
    
//CLASS OF COMPLEX NO

/*class complex
{
	int real,img; //by default private class
	public:
	complex()  //constructor
	{
		real=0;
		img=0;
    }
   complex(int i,int r)//parametrised constructor
   {
   	  real=r;
   	  img=i;
   }
   //setter and getter function
   void setREAL(int r)
   {
   	 real=r; 
   }
   void setIMG(int i)
   {
   	 img=i;
   }
   int getREAL()
   {
   	return real;
   }
   int getIMG()
   {
   	return img;
   }
    void print()
	{
		cout<<real<<"+"<<img<<"i"<<endl;
    }
    
    void add(complex &x)
    {
    	real+=x.real;
    	img+=x.img;
	}
	//operator overloading
	void operator+(complex &x)//we pass by reference it save mempory it just make copy if we pass only x it make anthr bucket
	{
	  	real+=x.real;
    	img+=x.img;	
	}
};
    
int main()
{
	complex c1(5,10);
	c1.print();
	complex c2;
	c2.setREAL(2);
	c2.setIMG(4);
	c2.print();
	//without operator overloading
	c1.add(c2);
	c1.print();
	//operator  overloading
	c1+c2;//in such call we cant simply do oprn by funcn it give error
	//similar to c1.+(c2);
	c1.print();
	return 0;
	
	}  */  
  // VECTOR CLASS(user defined)
  
 /* class Vector 
  {
  	int *arry;  
  	int cs;
  	int ms;
  	
  	public:
  	Vector(int df=10) //parametrised constructor
	  {
	  	ms=df;
	  	cs=0;
	  	arry=new int[ms];
	  }	
  		
  
  // 
  void push_back(int data)
  {
    if(cs==ms)
  	{
	  
  	  int *oldarry=arry;
  	  arry=new int[2*ms];
  	  ms*=ms;
  	   
  	   for(int i=0;i<cs;i++)  
  	    {
  		arry[i]=oldarry[i];
	    }
	 delete [] oldarry;
    }
	  arry[cs]=data;
	  cs++;
	  
  }
   // 
   bool isempty()
   {
   	return cs==0;
   }
   //
   void pop_back()
   {
   	 if(!isempty())
    	{
   		 cs--;
	    }
   }
   void print()
   {
   	for(int i=0;i<cs;i++)
   	{
   		cout<<arry[i]<<" ,";
	   }
   }
};
   int main()
   {
   	Vector v;
   	for(int i=0;i<5;i++)
   	{
   		v.push_back(i*i);
	   }
	   v.print();
   	return 0;
   }*/

//Let us define a Vector Class(User defined Vector)
/*class Vector{
    //Data Members and some functions
    int *arr;
    int cs;
    int maxSize;

public:
    Vector(int defaultSize=4){
        maxSize = defaultSize;
        cs = 0;
        arr = new int[maxSize];
    }
    void operator()(string s){
        cout<<s<<"is an awesome Place";
    }

    void push_back(int data){
        if(cs==maxSize){
            //Doubling Operations
            int *oldArr = arr;
            arr = new int[2*maxSize];
            maxSize = 2*maxSize;
            
            for(int i=0;i<cs;i++){
                arr[i] = oldArr[i];
            }
            //Delete the oldArr
            delete [] oldArr;
        }
        arr[cs] = data;
        cs++;
    }
    bool empty(){
        return cs==0;
    }
    int getSize(){
        return cs;
    }
    int getMaxSize(){
        return maxSize;
    }
    void pop_back(){
        if(!empty()){
            cs--;
        }
    }
    void print(){
        for(int i=0;i<cs;i++){
            cout<<arr[i]<<",";
        }
    }
    int at(int i){
        return arr[i];
    }
    //Operators over user defined [], (), +, * , - , ! etc
    //Box by reference 
    int& operator[](int i){
        return arr[i];
    }
};

ostream& operator << (ostream &os, Vector v){
    cout<<"In << operator"<<endl;
    v.print();
    return os;
}
istream& operator>>(istream &is,Vector &v){
    //Input a vector

    return is;
}

int main() {
    Vector v(1000);
    //Operator () Call
    //v("Dehradun");

    Vector fun; //Default Copy Constructors - Shallow Copy
    //Looking like like a function, but it is an object [Functor : Functional Objects]
    //fun("Nainital");

    for(int i=0;i<=3;i++){
        v.push_back(i*i);
    }

    fun = v; // Copy Assignment Operators -> Shallow Copy 

    cout<<v.getMaxSize()<<endl;
    v.push_back(7);
    cout<<v.getMaxSize()<<endl;
    v.print();

    //For Loop 
    for(int i=0;i<v.getSize();i++){
      //  cout<<v[i]<<endl;
    }
    
    cout<<endl;
    cout<<v<<fun;

    v[2] = 8;
    v[2] >>= 6;
    cout<<"FInal value" <<endl;
    cout<< v[2];

    

    return 0;
}*/
  
  
  //STL SET

/*#include <iostream>
#include <set>
using namespace std;


int main() {
    //1. Stores elements in sorted order
    // 2. Unique elements, each repeating element occurs only once
    set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(1);
    s.insert(5);
    s.insert(2);
    s.insert(3);

    for(int x:s){
       // cout<<x <<endl;
    }
    //Iterators are like pointers
    for(set<int>::iterator it = s.begin() ;it!=s.end();it++){
        cout<<(*it) <<endl;
    }
    
    return 0;
}*/
  
/*  
 // STL:-PAIR USING VECTOR
#include <iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

bool myComp(pair<string,int> p1,pair<string,int> p2){
    if(p1.first.length()==p2.first.length()){
        return p1.first > p2.first;
    }
    return p1.first.length() < p2.first.length();

}
bool priceComp(pair<string,int> p1,pair<string,int> p2){
    return p1.second < p2.second;
}

pair<string,int> myFunc(){
    pair<string,int> p;
    p.first = "Mango";
    p.second = 90;

    return p;
}

int main() {

    vector<pair<string,int> > v;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        //cout<<s;
        int p;
        cin>>p;
        pair<string,int> myPair(s,p);
        v.push_back(myPair);
    }
    sort(v.begin(),v.end(),priceComp);
    for(auto p:v){
        cout<<p.first<<" : "<<p.second<<endl; 
    }
    


    return 0;
}

*/

class Box{
    private:
    int l, b, h;
    public:
    Box(){
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int length, int breadth, int height){
        l = length;
        b = breadth;
        h = height;
    }
    Box(const Box& B){  //copy constructor
        l = B.l;
        b = B.b;
        h = B.h;
    }
    
    int getLenght(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }
    long long CalculateVolume(){
        return (long long)l*b*h;
    }
    
    bool operator < ( Box&A,Box& B){
        if( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)) ){
            return true;
        }else{
            return false;
        }
    };
    
    friend ostream& operator<< (ostream& output, const Box& B){//friend function can acess the private member  ..here we are
        output << B.l << " " << B.b << " " << B.h;              // overloading ostream operator
        return output;
    }
};




















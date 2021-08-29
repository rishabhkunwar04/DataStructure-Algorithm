////operator overloading

// #include <iostream>  
// using namespace std;  
// class A  
// {  
    
//     int x;  
//       public:  
//       A(){}  
//     A(int i)  
//     {  
//        x=i;  
//     }  
//     void operator+(A);  
//     void display();  
// };  
  
// void A :: operator+(A a)  
// {  
     
//     int m = x+a.x;  
//     cout<<"The result of the addition of two objects is : "<<m;  
  
// }  
// int main()  
// {  
//     A a1(5);  
//     A a2(4);  
//     a1+a2;  
//     return 0;  
// }


//virtual function

// #include <iostream>  
// using namespace std;  
// class A  
// {  
//    int x=5;  
//     public:  
//     void display()  
//     {  
//         std::cout << "Value of x is : " << x<<std::endl;  
//     }  
// };  
// class B: public A  
// {  
//     int y = 10;  
//     public:  
//     void display()  
//     {  
//         std::cout << "Value of y is : " <<y<< std::endl;  
//     }  
// };  
// int main()  
//  {  
//     A *a;  
//     B b;  
//     a = &b;  
//    a->display(); 

//     return 0;  
// } 



// #include<iostream>
// using namespace std;
 
// class Empty { };
 
// class Derived: Empty { int a; };
 
// int main()
// {
//     cout << sizeof(Derived); //its op is 4 byte;
//     return 0;
// }





// #include<iostream>
// using namespace std;
 
// class Empty { };
 
// int main()
// {
//     Empty a, b;
 
//     if (&a == &b)
//       cout << "impossible " << endl;
//     else
//       cout << "Fine " << endl; //its op is fine because different objects have diff addresses
 
//    return 0;
// }




// #include<iostream>
//  using namespace std;
 
// class Test {
// public:
//     int x; 
// };
// int main()
// {
//   Test t;
//   cout << t.x; //it will give garbage value
//   return 0;
// }



//FRIEND FUNCTION IN CPP...it is not avilable in java..it can access the private and public member of base classs


// #include <iostream>
// class A {
// private:
//     int a;
 
// public:
//     A() { a = 0; }
//     friend class B; // Friend Class
// };
 
// class B {
// private:
//     int b;
 
// public:
//     void showA(A& x)
//     {
//         // Since B is friend of A, it can access
//         // private members of A
//         std::cout << "A::a=" << x.a;
//     }
// };
 
// int main()
// {
//     A a;
//     B b;
//     b.showA(a);
//     return 0;
// }
// Output: 

// A::a=0




// #include <iostream>
 
// class A {
//     int a;
 
// public:
//     A() { a = 0; }
 
//     // global friend function
//     friend void showA(A&);
// };
 
// void showA(A& x)
// {
//     // Since showA() is a friend, it can access
//     // private members of A
//     std::cout << "A::a=" << x.a;
// }
 
// int main()
// {
//     A a;
//     showA(a);
//     return 0;
// }
// Output: 

// A::a = 0




// As we can see from the figure that data members/function of class A are inherited twice to class D. 
// One through class B and second through class C. When any data / function member of class A is accessed by an object of class D, 
// ambiguity arises as to which data/function member would be called? One inherited through B or the other inherited throu


// #include <iostream>
// using namespace std;
  
// class A {
// public:
//     void show()
//     {
//         cout << "Hello form A \n";  
//     }
// };
  
// class B : public A {
// };
  
// class C : public A {
// };
  
// class D : public B, public C {
// };
  
// int main()
// {
//     D object;
//     object.show();
// }

// How to resolve this issue?
// To resolve this ambiguity when class A is inherited in both class B and class C, 
// it is declared as virtual base class by placing a keyword virtual as :

// Syntax for Virtual Base Classes:

// Syntax 1:
// class B : virtual public A 
// {
// };

// Syntax 2:
// class C : public virtual A
// {
// };
// Note: virtual can be written before or after the public. Now only one copy of data/function member
//  will be copied to class C and class B and class A becomes the virtual base class.
// Virtual base classes offer a way to save space and avoid ambiguities in class hierarchies that 
// use multiple inheritances. When a base class is specified as a virtual base, it can act as an 
// indirect base more than once without duplication of its data members. 
// A single copy of its data members is shared by all the base classes that use virtual base.




//
// #include <iostream>
// using namespace std;
  
// class A {
// public:
//     int a;
//     A() // constructor
//     {
//         a = 10;
//     }
// };
  
// class B : public virtual A {
// };
  
// class C : public virtual A {
// };
  
// class D : public B, public C {
// };
  
// int main()
// {
//     D object; // object creation of class d
//     cout << "a = " << object.a << endl;
  
//     return 0;
// }

// Output:
// a = 10
// Explanation :The class A has just one data member a which is public. T
// his class is virtually inherited in class B 
// and class C. Now class B and class C becomes virtual base class and no duplication of data member a is done.

// Example 2:
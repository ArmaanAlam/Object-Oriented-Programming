// #include<iostream>
// using namespace std;

// int main(){
//     int a=3;
//     int *b;
//     b=&a;
//     cout<<a<<endl; //value of a=3 
//     cout<<*b<<endl; //value of *b=3 because b is pointing to a and using (*) this we get value of a
//     cout<<b<<endl;  //b is the pointer variable it is pointing to the address of a variable  //0x61ff0c
//     cout<<&a<<endl;  //using ampersand symbol we get address of the variable //0x61ff0c
//     cout<<&b<<endl; //address of the pointer ( pointer is also a variable but instead of storing the data it store the address of other variable)
//     return 0;
// } 


#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void dsiplay(){
        cout<<"Base class member value of a = "<<a<<endl;
    }
};
class B : public A{
    public:
    int b;
    void display(){
        cout<<"Base class member value of a = "<<a<<endl;
        cout<<"Derived class member value of b = "<<b<<endl;
    }
};
int main(){
    A * a_pointer; //Bass class pointer
    A a_object;


    B * b_pointer; //Derived class pointer
    B b_object;


//     a_pointer  = & b_object;  //Base class pointer pointing derived class object 
//     // (* a_pointer).a=34;
//     // (* a_pointer).dsiplay();
//     a_pointer->a=34;
//    // a_pointer->b=304;  // error we can access even though they are inherited because we created base class pointer
//     a_pointer->dsiplay();
    
   
    // b_pointer = & b_object; // By using derived class pointer we can access all the member variable and member function ;
    // b_pointer->a=34;        //But this is not similar in the case of bas class pointer  we can only access  member variable and member function of base class
    // b_pointer->b=304;
    // b_pointer->display();  //first base class ka function run hoga 
    // b_pointer->dsiplay();
    return 0;
}
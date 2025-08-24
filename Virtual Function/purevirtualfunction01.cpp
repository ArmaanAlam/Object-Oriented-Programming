#include<iostream>
using namespace std;
class A{
    public:
    // virtual void display(){   //virtual function 
    //     cout<<"Class A"<<endl;
    // };
    virtual void display()=0;   //pure virtual function
};
class B: public A{
    public :
    void display(){
        cout<<"Class B"<<endl;
    }
};
class C: public B{
    public:
    void display(){
        cout<<"Class C"<<endl;
    }
};
int main(){
  //  A a1;  //class A become the abstract class because it has a pure virtual function because of this we cannot create the object of Class A
    B b1;
    C c1;

    A *a_pointer;
    
    a_pointer=&b1;
    a_pointer=&c1;
    
    // (*a_pointer).display();   //if we run this programe without using virtual function it will run diplay function of base class 2 times
    // (*a_pointer).display();

     a_pointer->display();       //if we use virtual function than it will run class C siplay function 2 times because display function is overide 2 times 1st in class B amd 2nd time in class A
     a_pointer->display();       // it will always run the latest overiding function 
     
    return 0;
}

//Inheriting path 
// class A ---> Class B ---> Class C
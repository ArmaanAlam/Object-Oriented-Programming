#include<iostream>
using namespace std;
class A{
    public:
    int a;
    virtual void display(){
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
    A * a_pointer;
    A object_a;
    B * b_pointer;
    B object_b;

    a_pointer=&object_b;
    // (*a_pointer).a=32;
    // (*a_pointer).display();
    a_pointer->display();//It will run the derived class function because we declare virtual function in base class 
    return 0;
    }

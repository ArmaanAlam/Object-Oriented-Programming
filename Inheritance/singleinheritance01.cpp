#include<iostream>
using namespace std;
class A{
    int data1; // private by default and is not inheritable
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void A :: setdata(){
    data1=100;
    data2=200;
}

int A ::getdata1(){//We cannot access data1 directly so we created getdata1 function in public section to inherit data1 and accessible in class B 
    return data1;
}

int A::getdata2(){// We can access data2 and getdata2 function directly because both are in public section and we can inherit them also
    return data2;
}

class B : public A {
    int data3; // private by default and is not inheritable
    public:
    void process();
    void display();
};

void B ::process(){
    data3=data2+getdata1();//We are calling getdata1 function because we cannot access data1 directly because it is in private section and getdata1() is in public section we create to access data1 value
}

void B::display(){
    cout<<"Data1 value is "<<getdata1()<<endl;
    cout<<"Data2 value is "<<data2<<endl;
    cout<<"Data3 value is "<<data3<<endl;
}

int main(){
    B b1;
    b1.setdata();
    b1.process();
    b1.display();
    return 0;
}
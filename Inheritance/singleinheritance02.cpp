#include<iostream>
using namespace std;
class A{
    int data1; 
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

int A ::getdata1(){
    return data1;
}

int A::getdata2(){
    return data2;
}

class B : private A {
    int data3;
    public:
    void process();
    void display();
};

void B ::process(){
    setdata();//now we are able to use setdata() because it is call in process function and process() is declare in public sectionpro
    data3=data2+getdata1();
}

void B::display(){
    cout<<"Data1 value is "<<getdata1()<<endl;
    cout<<"Data2 value is "<<data2<<endl;
    cout<<"Data3 value is "<<data3<<endl;
}

int main(){
    B b1;
    //b1.setdata(); error we cannot access the setdata functtion now it become private member of class B
    b1.process();//setdata is now private it is only accessible by class B member function 
    b1.display();
    return 0;
}
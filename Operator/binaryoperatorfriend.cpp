#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    A(int x,int y){
        a=x;b=y;
        cout<<"Parameterized Constructor"<<endl;
    }
    void display(){
        cout<<a<<endl<<b<<endl;
    }
    friend A operator +(A ob1, A ob2);
};

A  operator +(A ob1, A ob2){
    A ob3(0,0);
    ob3.a=ob1.a+ob2.a;
    ob3.b=ob1.b+ob2.b;
    return ob3;
}

int main(){
    A a1(5,5),a2(5,5);


    a1.display();


    a2.display();
   // A a3(0,0);               // error if we directly declare eg: A a3;
    A a3=a1+a2;          // a3 = operator+ (a1,a2)  usualy calling operator overloading syntax
    a3.display();

    return 0;
}


#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    void set(int x, int y){
        a=x;b=y;
    }
    void display(){
    cout<<a<<endl<<b<<endl;
    }
    friend A operator -(  A &ob1);
};

A operator -( A &ob1){
    A ob2;
    ob2.a=-ob1.a;         //   A negative ab2(ob1)  usual function call syntax
    ob2.b=-ob1.b;
    return ob2;
}

int main(){
    A a1;
    a1.set(2,3);
    a1.display();

    A a2;
    a2.set(2,3);
    (-a2).display();
    A a3;
    a3.set(-2,-3);
    (-a3).display();

    return 0;
}

#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    A(int x,int y){
        a=x;b=y;
    }

    void display(){
        cout<<a<<endl<<b<<endl;
    }

    A operator +(A ob1){    // a3=a2.operator+(a1); usual function call syntax
        A ob2(0,0);
        ob2.a=a+ob1.a;
        ob2.b=b+ob1.b;
        return ob2;
    }
};
int main(){
    A a1(2,3),a2(2,3);
    a1.display();
    a2.display();
    A a3=a1+a2;
    a3.display();

    return 0;
}

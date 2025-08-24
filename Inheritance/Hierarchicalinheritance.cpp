#include<iostream>
using namespace std;

class A{
   public:
    int a,b;
    void setdata(int x, int y){
    a=x;b=y;
    }
};

class B : public A{
    public:
    void getadd(){
        cout<<a+b<<endl;
    }
};

class C : public A{
    public:
    void getsub(){
        cout<<a-b<<endl;
    }
};

class D : public A{
    public:
    void getmul(){
        cout<<a*b<<endl;
    }
};

class E : public A{
    public:
    void getdiv(){
        cout<<a/b<<endl;
    }
};

int main(){
    B b1;
    b1.setdata(10,5);
    b1.getadd();
    
    C c1;
    c1.setdata(16,23);
    c1.getsub();

    D d1;
    d1.setdata(3,5);
    d1.getmul();

    E e1;
    e1.setdata(50,5);
    e1.getdiv();

    return 0;
}
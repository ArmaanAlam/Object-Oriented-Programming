#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void set(int x){
        a=x;
        cout<<a<<endl;
    }
};
class B: public A{
    protected:
    int b;
    public:
    void set(int y){
        b=y;
        cout<<"class B"<<endl;
        cout<<b<<endl;
    }
};
class C:public B{
    protected:
    int c;
    public:
    void set(int z){
        c=z;
        cout<<"Class C"<<endl;
        cout<<c<<endl;
    }
};
int main(){
    B b1;
    b1.set(3);
    return 0;
}
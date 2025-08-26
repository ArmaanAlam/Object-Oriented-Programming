#include<iostream>
using namespace std;
class A{
    static int a;
    int b;
    char c;
    public:
    void setdata(){
        b=1;
    }
    void getdata(){
        cout<<a<<endl;
        cout<<b<<endl;
        //a++;
    }
    void static fun(){
        cout<<a<<endl;
        // cout<<b<<endl;   //static function cannot access the member variable it only access static variable
        a++;
    }
};

int A::a=0;

int main(){
  A a1;
  a1.setdata();
  a1.getdata();
  a1.fun();

    A a2;
  a2.setdata();
  a2.getdata();
  a2.fun();

    A a3;
  a3.setdata();
  a3.getdata();
  a3.fun();

    return 0;
}
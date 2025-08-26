#include<iostream>
using namespace std;

class A{
    public:
    int a;
    static int b;
    void static setget(int y){
     // a=x;
        b=y;                      
    }
    void display(){
        cout<<"Static Variable "<<b<<" and instance variable is "<<a<<endl;
        b++;
    }
};

int A :: b=100;

int main(){

    A a1,a2,a3;

    //a1.setget(2);
    a1.display(); 
    a2.display();
    a3.display();
    return 0;
}
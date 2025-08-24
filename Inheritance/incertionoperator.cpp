#include<iostream>
#include<string>
using namespace std;
class A{
    int age;
    string name;
    public:
    friend ostream& operator <<( ostream& ,A &);
    A(int x,string y){
    age=x;
    name=y;
    }
};

ostream& operator <<( ostream& co,A &ob1){
    co<<ob1.age<<endl<<ob1.name;
    return co;
}

int main(){
    A a1(18,"Armaan");
    cout<<a1;
    return 0;
}
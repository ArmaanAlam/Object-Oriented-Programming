#include<iostream>
#include<string>
using namespace std;
class A{
    int age;
    string name;
    public:
    friend istream & operator >>(istream &, A &);
    void display(){
        cout<<age<<endl<<name;
    }
};

istream& operator >>(istream &input, A & ob1){
    input>>ob1.age>>ob1.name;
    return input;
}

int main(){
    A a1;
    cin>>a1;
    a1.display();
    return 0;
}
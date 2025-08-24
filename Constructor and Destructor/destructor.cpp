#include<iostream>
using namespace std;

 int count=0;

class A{
   
    public:
    A(){
        count++;
        cout<<"Constructor is called "<<count<<endl;
    }
    ~A(){
        cout<<"Destructor is called "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"Into the main function"<<endl;
    cout<<"Object c1 created and constructor will invoked automatically"<<endl;
    A c1;
    {
        A c2,c3;
    }
    cout<<"Exiting the main and object c1"<<endl;
    return 0;a
}
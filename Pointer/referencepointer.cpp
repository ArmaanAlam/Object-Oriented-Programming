#include<iostream>
using namespace std;

int main(){
    // call by reference
    // int a=5;
    // int &b=a;
    // cout<<a<<endl;
    // cout<<b<<endl;
    // cout<<&a<<endl;
    // cout<<&b<<endl;
    
    cout<<endl;

    // Call by Pointer
    int a=5;
    int *b=&a;
    cout<<a<<endl;
    cout<<*b<<endl;
    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<&b<<endl;
    return 0;
}
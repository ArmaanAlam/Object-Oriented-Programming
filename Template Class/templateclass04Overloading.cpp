#include<iostream>
using namespace std;
template <class T >
class A{
    public :
    T a;
    A(T x){
        a=x;
    }
    void display();
};

void fun(int b){  //we are passing int value to the function so fun(int) will invoked because it get highest priority the template function
    cout<<"With in Build-in data type use in the function"<<endl;
}

template<class T>
void fun(T b){
    cout<<"With in generic data type use in the function"<<endl;
}

int main(){
    // A<float> a1(4.53);
    // cout<<a1.a<<endl;
    // a1.display();

    //  A<char> a1('k');
    // cout<<a1.a<<endl;
    // a1.display();

    fun(0); //Exact match takes the highest priority

    return 0;
}
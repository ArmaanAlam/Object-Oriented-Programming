// So far, we have already covered the C++ templates with single parameters. 
// In the last tutorial, we learnt about templates with multiple parameters,
// when it comes to handling different data types of two or more containers. 
// Today, we’ll be learning a very easy yet powerful attribute of templates, its ability to have default parameters. 
// Its ability to have default specifications about the data type, when it receives no arguments from the main.

#include<iostream>
using namespace std;
template < class T1=int , class T2=double , class T3=char >
class A{
    T1 a; T2 b; T3 c;
    public:
    A( T1 x , T2 y , T3 z){
        a=x;b=y;c=z;
    }
    void getcon(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};

int main(){
    // A<int,double,char> a1(2.45,7.058,'c);
    // a1.getcon();

    A<> a1(4.32,8.0584,'c');
    a1.getcon();
    cout<<endl<<endl;

    A<char,int,char> a2('a',8.0584,'c');
    a2.getcon();

    return 0;
}
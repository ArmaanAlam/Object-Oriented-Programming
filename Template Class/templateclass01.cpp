#include<iostream>
using namespace std;

/*
template<class T1, class T2, .........>
class nameOfClass{ 
    //body
}
*/

template <class T1, class T2>
class A{
    T2 a; T2 b;
    public:
    void setdata(T2 x,T2 y){
        a=x;
        b=y;
    }
    T2 getdata(){
        return a+b;
    }
};

int main(){

    A<int,float> a1,a2;
    a1.setdata(8,7);
    cout<<a1.getdata()<<endl;

    a2.setdata(8.34,6.78);
    cout<<a2.getdata()<<endl;

    return 0;

}
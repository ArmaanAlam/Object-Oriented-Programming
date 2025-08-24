// #include<iostream>
// using namespace std;

// template < class T1, class T2 , class T3 >
// class A{
//     T3 a;
//     T3 b;
//     T3 c;
//     public:
//     A(){
//         cout<<"Constructor"<<endl;
//     }
//     void set(T1 x, T1 y, T1 z){
//          a=x;b=y;c=z;
//     }
//     T1 get01(){
//         return a*b*c;
//     }
//     T2 get02(){
//         return a*b*c;
//     }
//     T3 get03(){
//         return a*b*c;
//     }
// };
// int main(){
//     A <int,float,double> a1;
//     a1.set(3.455,8.9382,5.927);
//     cout<<a1.get01()<<endl;
//     cout<<a1.get02()<<endl;
//     cout<<a1.get03()<<endl;
//     return 0;
// }
// output
// Constructor
// 120
// 120
// 120


#include<iostream>
using namespace std;

template < class T1, class T2 , class T3 >
class A{
    T3 a;
    T3 b;
    T3 c;
    public:
    A(){
        cout<<"Constructor"<<endl;
    }
    void set(T3 x, T3 y, T3 z){
         a=x;b=y;c=z;
    }
    T1 get01(){
        return a*b*c;
    }
    T2 get02(){
        return a*b*c;
    }
    T3 get03(){
        return a*b*c;
    }
};
int main(){
    A <int,float,double> a1;
    a1.set(3.455,8.9382,5.927);
    cout<<a1.get01()<<endl;
    cout<<a1.get02()<<endl;
    cout<<a1.get03()<<endl;
    return 0;
}
// output
// Constructor
// 183
// 183.035
// 183.035
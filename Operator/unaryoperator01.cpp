// #include<iostream>
// using namespace std;
// class A{
//     int a,b;
//     public:
//     void setget(int x, int y){
//         a=x;b=y;
//     }
//     void display(){
//         cout<<a<<endl<<b<<endl;
//     }
    
//     A operator ++(){
//         A ob1;
//         ob1.a=++a;
//    }

// };
// int main(){
//     A a1;
//     a1.setget(2,2);
//     a1.display();

//     A a2;
//     a2.setget(2,2);
//     (++a2).display();

//     return 0;
// }





#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    A(int x,int y){
        a=x;b=y;
        cout<<"Parameterized Constructor"<<endl;
    }
    void display(){
        cout<<a<<endl<<b<<endl;
    }
    
    A operator ++(){
        A ob1(0,0);
        ob1.a=++a;
   }

};
int main(){
    A a1(2,2);
    a1.display();
    
    A a2(2,2);
    (++a2).display();

    return 0;
}

















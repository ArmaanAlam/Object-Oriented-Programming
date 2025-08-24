// #include<iostream>
// using namespace std;
// class A{
//     int a;
//     public:
//     A(){
//        a=0;
//         }
//     A(int x){
//         a=x;
//     }
//     void show(){
//     cout<<"The value of a is "<<a<<endl;
//     }
//      A(A & ob1){
//         a=ob1.a;
//     }
// };
// int main(){
//     A c1(4),c2(100),c3,c4(c1),c5(c2);
//     c1.show();
//     c2.show();
//     c3.show();
//     c4.show();
//     c5.show();

//     return 0;
// }


#include<iostream>
using namespace std;
class abc{

int a, b;

public:

abc(int x, int y){
a = x; b = y;
}

abc(abc &p){
a = p.a;
b = p.b;
}

void showdata(){
cout << a << " " << b <<endl;
}
};

int main(){

abc c1(10, 20);
abc c2(c1);
c1.showdata();
c2.showdata();

}
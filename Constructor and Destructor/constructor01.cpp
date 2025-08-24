#include<iostream>
using namespace std;
class A{
    int a,b;
public:
A(int x, int y){//parametrize constructor
    a=x;
    b=y;
    // a=2;b=5;
    // cout<<"Hello World"<<endl;
    // cout<<a+b<<endl;
}
//  A(int x,int y){
//     a=x;b=y;
//  }

void getdata(){
    cout<<a+b<<endl; 
    }
};

int main(){
    
    A c1=A(2,3);
    c1.getdata();

    
    A c2=A(54,3);
    c2.getdata();
   

    // A c1,c2,c3;
    // A c1(2,3),c2(4,3),c3(54,46);
    // c1.getdata();
    // c2.getdata();
    // c3.getdata();
    return 0;
}
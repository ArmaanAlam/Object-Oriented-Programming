#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(int x){
        a=x;
    }
    bool operator ==(A ob1){
      if ( a == ob1.a)
      {
        cout<<"Both are equal";
      }
      else{
        cout<<"both are not equal";
      }

    }
};
int main(){
    A a1(4),a2(4);
    a1==a2;
    return 0;
}
#include <iostream>
using namespace std;

//class A is the base class of B and B is the base class of C
//Multilevel inheritance is a type of inheritance in which one derived class is inherited from another derived class. 

class A{
protected:
    int roll;

public:
    void setroll(int r){
        roll = r;
    }
    void getroll(){
        cout << "Roll no is " << roll << endl;
    }
};

class B : public A{
protected:
    float math, com;

public:
    void setmark(float m, float c){
        math = m;
        com = c;
    }
    void getmark(){
        cout<<"Maths marks = "<<math<<endl;
        cout<<"Computer marks = "<<com<<endl;
    }
};

class C : public B{
    float per;
    public:
    void getpercentage(){
     //   getroll();
      //  getmark();
        cout<<"Your percentage is "<<(math+com)/2<<endl;
    }
};

int main(){
    C a1;
    a1.setroll(34);
    a1.getroll();
    a1.setmark(89.88,98.34);
    a1.getmark();
    a1.getpercentage();
    return 0;
}
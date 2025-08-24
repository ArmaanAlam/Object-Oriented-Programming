// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };
// Multiple inheritances are a type of inheritance in which one derived class is inherited with more than one base class
#include <iostream>
using namespace std;

class A
{
protected:
    int data1; 

public:
    void setdata1(int a)
    {
        data1 = a;
    }
};

class B
{
protected:
    int data2;

public:
    void setdata2(int a)
    {
        data2 = a;
    }
};

class C
{
protected:
    int data3;

public:
    void setdata3(int a)
    {
        data3 = a;
    }
};

class D : public A, public B, public C
{
    protected:
    int data4;

public:
    void setdata4(){
        data4=data1+data2+data3;
    }
    void display()
    {
       // setdata4();
        cout << data1 << endl;
        cout << data2 << endl;
        cout << data3 << endl;
        cout << data4 << endl;
    }
  
};

int
main()
{
   D d1;
   d1.setdata1(8);
   d1.setdata2(7);
   d1.setdata3(7);
   d1.setdata4();
   d1.display();
    return 0;
}
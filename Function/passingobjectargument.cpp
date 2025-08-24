#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void setsumdata(complex ob1, complex ob2)//complex number isse class ke object ha aur isme ham c1,c2 object ke a and b ki value pass karenge 
    {
        a = ob1.a + ob2.a;
        b = ob1.b + ob2.b;
    }

    void print(void)
    {
        cout << a+b << endl;
    }
};

int main()
{
    cout << "Hello World " << endl;
    cout << "Today we will learn to add two complex number" << endl;
    complex c1, c2, c3; // creating three object c1,c2,c3 using the code setdata , setsumdata , print

    c1.setdata(2, 2);
    c1.print();

    c2.setdata(3, 6);
    c2.print();

    c3.setsumdata(c1, c2); // we can write (c2,c1) also order is not important because it is only passing the value of a & b
    c3.print();            // of object c1,c2 means it is passing the argument as c1 and c2 in object c3

    return 0;
}

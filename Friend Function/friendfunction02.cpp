#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    friend A settwosum(A a1, A a2); // Here the return type of the settwosum function is A(class)
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void print()
    {
        cout << a + b << endl;
    }
};

A settwosum(A a1, A a2) // Here the return type of the function is A(000000class)
{
    A a3;
    a3.a = a1.a + a2.a;
    a3.b = a1.b + a2.b;
    return a3;
}

int main()
{
    A c1, c2, sum;
    c1.setdata(1, 1);
    c1.print();

    c2.setdata(1, 1);
    c2.print();

    sum = settwosum(c1, c2);
    sum.print();

    return 0;
}

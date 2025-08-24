#include <iostream>
using namespace std;

class A; // forwar declaration

class B
{
public:
    int x, y;
    int sqrsum(A, A);
};

class A
{
    int a, b;

public:
    friend int B ::sqrsum(A ob1, A ob2);
    // friend class B; declaring the whole class as friend then no need to declare individually as a friend function
    void getdata(int x, int y)
    {
        a = x;
        b = y;
        cout << a + b << endl;
    }
};

int B ::sqrsum(A ob1, A ob2)
{
    B ob3;
    ob3.x = (ob1.a) * (ob2.a);
    ob3.y = (ob1.b) * (ob2.b);

    return (ob3.x + ob3.y);
}

int main()
{
    A c1, c2;

    c1.getdata(6, 4);
    c2.getdata(7, 4);

    B c3;

    int c4 = c3.sqrsum(c1, c2);
    cout << c4;

    return 0;
}
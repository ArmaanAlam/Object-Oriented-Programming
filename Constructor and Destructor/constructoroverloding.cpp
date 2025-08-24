#include <iostream>
using namespace std;
class A
{
    int a, b, c;

public:
    A(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    A(int x, int y)
    {
        a = x;
        b = y;
        c = 0;
    }
    A(int x)
    {
        a = x;
        b = 0;
        c = 0;
    }

    A(){
        a=0;b=0;c=0;
    }
    void getdata()
    {
        cout << a + b + c <<endl;
    }
};
int main()
{

  A c1(5,3,9);
  c1.getdata();

   A c2(5,3);
  c2.getdata();
     A c3(5);
  c3.getdata();

      A c4;
  c4.getdata();

    return 0;
}

// #include <iostream>
// using namespace std;
// class A
// {
//     int a, b, c;

// public:
//     A(int x, int y, int z)
//     {
//         a = x;
//         b = y;
//         c = z;
//         cout << a + b + c << endl;
//     }

//     A(int x, int y)
//     {
//         a = x;
//         b = y;
//         c = 0;
//         cout << a + b + c << endl;
//     }
//     A(int x)
//     {
//         a = x;
//         b = 0;
//         c = 0;
//         cout << a + b + c << endl;
//     }
// };
// int main()
// {

//     A c3(6);

//     A c2(4, 7);

//     A c1(2, 5, 2);

//     return 0;
// }
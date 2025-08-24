// #include <iostream>
// using namespace std;
// class complex
// //syntax to declare friend function
// //friendn___class_name___function_name(arguments if passed in the function);
// {
//     int a, b;
//     friend complex setsumdata(complex ob1, complex ob2);

// public:
//     void setdata(int x, int y)
//     {
//         a = x;
//         b = y;
//     }

//     void getdata()
//     {
//         cout << "The complex number is " << a << " + " << b << "i" << endl;
//     }

//     // void sumdata(complex ob1, complex ob2)
//     // {
//     //     a = ob1.a + ob2.a;
//     //     b = ob1.b + ob2.b;
//     // }
// };

// complex setsumdata(complex ob1, complex ob2)
// {
//     complex o3;
//     o3.setdata((ob1.a + ob2.a), (ob1.b + ob2.b));
//     return o3;
// }



// int main()
// {
//     cout << "Hello Good Morning" << endl;
//     complex c1, c2, sum, c3;
//     c1.setdata(5, 8);
//     c1.getdata();

//     c2.setdata(7, 3);
//     c2.getdata();

//     sum = setsumdata(c1, c2);
//     sum.getdata();

//     c3.sumdata(c1, c2);
//     c3.getdata();

//     return 0;

// }



#include<iostream>
using namespace std;
class A{
    int a,b;
    public :
     friend void getsum(A ob1 , A ob2);
    void getdata(int x,int y){
        a=x;
        b=y;
       cout<<a+b<<endl;
    }
};

void getsum(A ob1 , A ob2){
    int x,y;
    x=(ob1.a+ob2.a);
    y=(ob1.b+ob2.b);
    cout<<x+y;
}
int main(){

    A c1,c2;

    c1.getdata(3,3);
    c2.getdata(7,7);

    getsum(c1,c2);//friend function is not call using object of that class like c1.getsum() or c2.getsum()
    //it is invoked like normal object
    
    return 0;
}
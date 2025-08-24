// #include<iostream>
// using namespace std;
// class A{
//     public:
//     float sal=3000;
// };
// class B : public A{
//     public:
//     float b=1000;
//     float a=sal;
// };
// int main(){
//     B c1;
//     cout<<c1.sal<<endl;
//     cout<<c1.b<<endl;
//     cout<<c1.a<<endl;
//     cout<<c1.sal+c1.b<<endl;
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Base Class
// class Employee
// {
// public:
//     Employee() {}
//     int id;
//     float salary;
//     Employee(int inpId)
//     {
//         id = inpId;
//         salary = 34.0;
//     }
  
// };

// // Creating a Programmer class derived from Employee Base class
// class Programmer : public Employee
// {
// public:
//     int languageCode;
//     Programmer(int inpId)
//     {
//         id = inpId;
//         languageCode = 9;
//     }
//     void getData(){
//         cout<<id<<endl;
//     }
// };
// int main()
// {
//     Employee harry(1), rohan(2);
//     cout << harry.salary << endl;
//     cout << rohan.salary << endl;
//     Programmer skillF(10);
//     cout << skillF.languageCode<<endl;
//     cout << skillF.id<<endl;
//     skillF.getData();
//     return 0;
// }
#include<iostream>
using namespace std;
class A{
    //private: error because we can not inherit the private data of class A in class B
    public:
    A(){}
    int id ;
    A(int inid){
        id = inid;
    }
};
class B : public A{  //if we use private than all the member variables and function of class A become private inside the class B so we can not directly call the member variables and function of class A using the object of class B
    public :
    int languageCode = 9;
    B(int inpId){
        id = inpId;
    }
    void getData(){
        cout<<id<<endl;
    }
};


int main(){
    A c1(20);
    B c2(15);
    cout<<c1.id<<endl;
    cout<<c2.id<<endl;
    c2.getData();
    cout<<c2.languageCode;
        
    return 0;
}
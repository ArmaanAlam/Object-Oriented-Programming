// #include<iostream>
// using namespace std;
// class A{
//     int a,b;
//     public:
//     void setget(int x,int y){
//         a=x;b=y;
//     }
        
//     void display(){
//         cout<<a<<endl<<b<<endl;
//     }

//     A operator*(A ob1);

   
// };

//  A A :: operator *(A ob1){    // a3=a1.operator*(a2); usual function call syntax
//         A ob2;
//         ob2.a=a*ob1.a;
//         ob2.b=b*ob1.b;
//         return ob2;
//     }

// int main(){
//     A a1;
//     a1.setget(2,3);
//     a1.display();

//     A a2;
//     a2.setget(2,3);
//     a2.display();

//     A a3;
//     a3=a1*a2;
//     a3.display();
    
//     return 0;
// }












// #include<iostream>
// using namespace std;
// class A{
//     int a,b;
//     public:
//     A(int x,int y){
//         a=x;b=y;
//     }
        
//     void display(){
//         cout<<a<<endl<<b<<endl;
//         cout<<"Parameterized Constructor"<<endl;
//     }

//     A operator*(A ob1);

   
// };

//  A A :: operator *(A ob1){    // a3=a1.operator*(a2); usual function call syntax
//         A ob2(0,0);
//         ob2.a=a*ob1.a;
//         ob2.b=b*ob1.b;
//         return ob2;
//     }

// int main(){
//     A a1(2,3),a2(2,3);
//     a1.display();
//     a2.display();
//     A a3(0,0);
//     a3=a1*a2;      // a3 = a1.operator* (a2)
//     a3.display();
    
//     return 0;
// }










// #include<iostream>
// using namespace std;
// class A{
//     int a,b;
//     public:
//     A(int x,int y){
//         a=x;b=y;
//     }
        
//     void display(){
//         cout<<a<<endl<<b<<endl;
//         cout<<"Parameterized Constructor"<<endl;
//     }

//     A operator*(A ob1);

   
// };

//  A A :: operator *(A ob1){    // a3=a1.operator*(a2); usual function call syntax
//         A ob2(0,0);
//         ob2.a=a*ob1.a;
//         ob2.b=b*ob1.b;
//         return ob2;
//     }

// int main(){
//     A a1(2,3),a2(2,3);
//     a1.display();
//     a2.display();
//  //   A a3(0,0);
//     A a3=a1*a2;      // a3 = a1.operator* (a2)
//     a3.display();
    
//     return 0;
// }











// #include<iostream>
// using namespace std;

// class A {
//     int a, b;

// public:
//     A(int x, int y) {
//         a = x;
//         b = y;
//     }

//     void display() {
//         cout << a << endl << b << endl;
//     }

//     A operator +(A ob1) {
//         A result(a + ob1.a, b + ob1.b);
//         return result;
//     }
// };

// int main() {
//     A a1(2, 3), a2(2, 3);
//     a1.display();
//     a2.display();
//     A a3 = a1 + a2;
//     a3.display();

//     return 0;
// }

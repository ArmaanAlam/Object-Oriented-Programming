// #include<iostream>
// using namespace std;
// class A{
//     int a,b;
//     public:
//     void set(int x,int y){
//         a=x;b=y;
//     }
//     void get(){
//         cout<<a<<endl<<b<<endl;
//     }

//    friend A  operator++ (A ob1);
// };

//  A operator++ (A ob1){
   
//     ++ob1.a;
//     ++ob1.b;
//     return ob1;
// }

// int main(){
//     A a1,a2;

//     a1.set(2,2);
//     a1.get();

//     a2.set(2,2);
//     (++a2).get();

//     return 0;
// }







// #include<iostream>
// using namespace std;
// class A{
//     int a,b;
//     public:
//     void set(int x,int y){
//         a=x;b=y;
//     }
//     void get(){
//         cout<<a<<endl<<b<<endl;
//     }

//    friend A  operator++ (A ob1);
// };

//  A operator++ (A ob1){                    //    A operator++ (A ob1){     // Another correct way to wite this without using any extra object 
//     A ob2;                                //    ++ob1.a;
//     ob2.a=++ob1.a;                        //    ++ob1.b;
//     ob2.b=++ob1.b;                        //    return ob1;
//     return ob2;                           //       }
// }

// int main(){
//     A a1,a2;

//     a1.set(2,2);
//     a1.get();

//     a2.set(2,2);
//     (++a2).get();

//     return 0;
// }







// #include<iostream>
// using namespace std;
// class A{
//     int a,b;
//     public:
//     A(int x,int y){
//         a=x;b=y;
//         cout<<"Paramaterized Constructor"<<endl;
//     }
//     void get(){
//         cout<<a<<endl<<b<<endl;
//     }

//    friend A  operator++ (A ob1);
// };

//  A operator++ (A ob1){                    //    A operator++ (A ob1){     // Another correct way to wite this without using any extra object 
//     A ob2(0,0);                                //    ++ob1.a;
//     ob2.a=++ob1.a;                        //    ++ob1.b;
//     ob2.b=++ob1.b;                        //    return ob1;
//     return ob2;                           //       }
// }

// int main(){
    
//     A a1(2,2);
//     a1.get();

//     A a2(2,2);
//     (++a2).get();

//     return 0;
// }










// #include<iostream>
// using namespace std;
// class A{
//     int a,b;
//     public:
//     A(int x,int y){
//         a=x;b=y;
//         cout<<"Paramaterized Constructor"<<endl;
//     }
//     void get(){
//         cout<<a<<endl<<b<<endl;
//     }

//    friend A  operator++ (A ob1);
// };

//  A operator++ (A ob1){                   
//     //A ob2(0,0);                               
//     //ob2.a=++ob1.a;                        
//     //ob2.b=++ob1.b;                       
//     //return ob2;

//     ++ob1.a;
//     ++ob1.b;
//     return ob1;                          
// }

// int main(){
    
//     A a1(2,2);
//     a1.get();

//     A a2(2,2);
//     (++a2).get();

//     return 0;
// }
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     A(){
//         cout<<"Default constructor of class A "<<endl;
//     }
// };

// class B{
//     public:
//     B(){
//         cout<<"Default constructor of class B  "<<endl;
//     }
// };

// class C : public A, public B{
//     public:
//     C(){
//         cout<<"Default constructor of class C "<<endl;
//     }
// };
// // output will be ::
// // Default constructor of class A
// // Default constructor of class B
// // Default constructor of class C

// // class C : public A,virtual public B{    
// //     public:
// //     C(){
// //         cout<<"Default constructor of class C "<<endl;
// //     }
// // };
// // output will be ::
// // Default constructor of class B  
// // Default constructor of class A
// // Default constructor of class C


// // class C : virtual public A, public B{    
// //     public:
// //     C(){
// //         cout<<"Default constructor of class C "<<endl;
// //     }
// // };
// // output will be ::
// // Default constructor of class A 
// // Default constructor of class B
// // Default constructor of class C


// // class C : virtual public A, virtual public B{    
// //     public:
// //     C(){
// //         cout<<"Default constructor of class C "<<endl;
// //     }
// // };
// // output will be ::
// // Default constructor of class A 
// // Default constructor of class B
// // Default constructor of class C



// int main(){
//     C c1;
//     return 0;
// }


#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Class A"<<endl;
    }
    ~A(){
        cout<<"Class A"<<endl;
    }
};
class B :public A{
    public:
    B(){
        cout<<"Class B"<<endl;
    }
    ~B(){
        cout<<"Class B"<<endl;
    }
};

int main(){
    B b1;
    return 0;
}
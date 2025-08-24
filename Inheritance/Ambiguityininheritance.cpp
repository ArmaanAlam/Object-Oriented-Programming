#include<iostream>
using namespace std;
class A{
   public:
   void setdata(){
    cout<<"Class A"<<endl;
   }
};
class B{
   public:
   void setdata(){
    cout<<"Class B"<<endl;
   }
};
class C{
   public:
   void setdata(){
    cout<<"Class C"<<endl;
   }
};
class D : public A, public B, public C{
   public:
   // void setdata(){
   //  A::setdata();
   //  B::setdata();
   //  D::setdata();
   // //  cout<<"Class D"<<endl;
   // }
   };

int main(){
    D d1;
   //  d1.A::setdata();
   //  d1.B::setdata();
   //  d1.C::setdata();
    d1.setdata();
    return 0;
}


// #include<iostream>
// using namespace std;
// class A{
//    public:
//    void setdata(){
//     cout<<"Class A"<<endl;
//    }
// };
// class B{
//    public:
//    void setdata(){
//     cout<<"Class B"<<endl;
//    }
// };
// class C{
//    public:
//    void setdata(){
//     cout<<"Class C"<<endl;
//    }
// };
// class D : public A, public B, public C{
//    public:
//    void setdata(){
//    //  A::setdata();
//    //  B::setdata();
//    //  C::setdata();
//    cout<<"Class D"<<endl;
//    }
//    };

// int main(){
//    D d1;
//    d1.A::setdata();
//    d1.B::setdata();
//    d1.C::setdata();
//    // d1.D::setdata();
//    d1.setdata();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class A{
//    public:
//    void setdata(){
//       cout<<"Class A"<<endl;
//    }
// };

// class B : public A{
//    public:
//    void setdata(){
//       cout<<"Class B"<<endl;
//    }
// };

// class C : public A{
//    public:
//    void setdata(){
//       cout<<"Class C"<<endl;
//    }
// };

// int main(){
//    C c1;
//    c1.setdata();
//    B b1;
//    b1.A::setdata();
//    return 0;
// }

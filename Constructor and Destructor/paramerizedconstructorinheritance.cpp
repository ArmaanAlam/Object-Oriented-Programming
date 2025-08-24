    #include<iostream>
    using namespace std;
    class A{
        protected:
        int data1;
        public:
        A(int a){
            data1=a;
            cout<<"Constructor of class A and data1 is "<<data1<<endl;
        }
    };
    class B{
        protected:
        int data2;
        public:
        B(int b){
            data2=b;
            cout<<"Constructor of class B and data1 is "<<data2<<endl;
        }
    };
    class C : public A,public B{
       // private:
        protected:
        int data3;
        public:
        C(int e, int d, int c):A(e),B(d)
        {
            data3=c;
            cout<<"Constructor of class C and data3 is "<<data3<<endl;
        }
    };

    //  class C : virtual public A,public B{
    //   //  protected:
    //     int data3;
    //     public:
    //     C(int a, int b, int c):A(a),B(b)
    //     {
    //         data3=c;
    //         cout<<"Constructor of class C and data3 is "<<data3<<endl;
    //     }
    // };
    //Output is :
    //   Constructor of class A and data1 is 1
    //   Constructor of class B and data1 is 2
    //   Constructor of class C and data3 is 3




    //    class C : public A,virtual public  B{
    //   //  protected:
    //     int data3;
    //     public:
    //     C(int a, int b, int c):A(a),B(b)
    //     {
    //         data3=c;
    //         cout<<"Constructor of class C and data3 is "<<data3<<endl;
    //     }
    // };
    //Output is :
    //   Constructor of class B and data1 is 2
    //   Constructor of class A and data1 is 1
    //   Constructor of class c and data3 is 3






//   class C : virtual public A,virtual public  B{
//       //  protected:
//         int data3;
//         public:
//         C(int a, int b, int c):A(a),B(b)
//         {
//             data3=c;
//             cout<<"Constructor of class C and data3 is "<<data3<<endl;
//         }
//     };
    //   Output is :
    //   Constructor of class A and data1 is 1
    //   Constructor of class B and data1 is 2
    //   Constructor of class C and data3 is 3



    int main(){
        C c1(1,2,3);
        return 0;
    }
// #include<iostream>
// using namespace std;

// // when we using static variable than memory is allocate in stack
// // when we using dynamic variable than memory is allocate in heap

// int main(){

//     int *prt=new int ;  // hear we created pointer variable which store address of int data type 
//     cout<<prt<<endl;  // 0x11715b0  // address of int data type that we created dynamically 
//     cout<<*prt<<endl;  // 18312760  //address of pointer variable
//     delete prt; //deleting the allocated heap memeory    

//     return 0;
// }







// #include<iostream>
// using namespace std;

// int main(){
//     int *a=new int[5];   //here we created a_name pointer variable which points on int data type of 5 blocks of arrays

//     for (int i = 0; i < 5; i++) { //  taking the value of arrays 
//         cin>>a[i]; }


//     for (int j = 0; j < 5; j++){   // display the value od arrays
//         cout<<a[j]<<" ";}
    
//     delete[]  a;  //deleting the allocated heap memeory    
//     return 0;
// }





#include<iostream>
using namespace std;
class A{
    public:
    string name;
    A(){
        cout<<"Default constructor"<<endl; }
    void print(){
        cout<<"Name is "<<name<<endl;
    }
};

int main(){
    A *a1_obj = new A;   // here we created dynamic object name (a1_obj) pointer means this object point to the class A just like we created the dynamic variables using new keyword
    (*a1_obj).name="Armaan";  // while using pointer object constructor also get executed
    (*a1_obj).print(); 
    return 0;
}
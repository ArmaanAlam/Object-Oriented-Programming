/*
Pointers in C++
Pointers are variables that are used to store the address.
Pointers are created using “*”. An example program of pointers is shown below
*/

// #include<iostream>
// using namespace std;

// int main(){
//     // Basic Example
//     int a = 4;
//     int* ptr = &a;
//     cout<<"The value of a is "<<*(ptr)<<endl;
  
//     return 0;
// }




/*
New Keyword
Another example program for pointers and the use of a “new” keyword is shown below.

#include<iostream>
using namespace std;

int main(){
    
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;
    
    return 0;
}
We created a float pointer “p” and dynamically created a float which has value “40.78” and assigned that value to pointer “p”
And printed the value at the address of pointer “p”
The output of the following program is shown below,

we get the output value “40.78” because pointer “p” is pointing to an address whose value is “40.78”.
Another example program for pointers array and the use of a “new” keyword with an array is shown below.
*/






/*
#include<iostream>
using namespace std;

int main(){
  
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
   
    return 0;
}
We created an integer pointer “arr” and dynamically created an array of size three which is assigned to the pointer “arr”
The values “10”, “20”, and “30” are assigned to the ”1”, “2”, and “3” indexes of an array
And printed the value at the array indexes “1”, “2”, and “3”
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int* p = new int(10);
//     //*p = 10;
//     cout << *p << endl;
//     cout << p << endl;

//     delete p;
//     return 0;
// }
#include<iostream>
using namespace std;
class A{
   int a,b;
   public:
   void setdata(int x, int y){
    a=x;
    b=y;
   }
   void getdata(){
    cout<<a<<endl;
    cout<<b<<endl;
   }
};

int main(){
    
    A a1;
    A *prt=&a1;
    (*prt).setdata(3,7);
    (*prt).getdata();
    cout<<prt<<endl;
    cout<<&a1<<endl;



    //   A *prt = new A;
    //   (*prt).setdata(1,5);
    //   (*prt).getdata();
    //   cout<<prt;
    return 0;
}
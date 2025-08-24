#include<iostream>
using namespace std; 

class c2;

class c1{
    int val1;
    friend void exchange(c1 & , c2 &);
    public:
        void indata(int a){
            val1 = a;
        }

        void display(void){
            cout<< val1 <<endl;
        }
};

class c2{
    int val2;
    friend void exchange(c1 &, c2 &);//Here we are not passing object we are passing reference to that object 
    // basically we are making copies of c1 and c2  
    public:
        void indata(int a){
            val2 = a;
        }

        void display(void){
            cout<< val2 <<endl;
        }
};

void exchange(c1 &x, c2 &y){ //This line meaning ( x is the variable but it is a reference variable of c1 & as the value of c1 changes the value of x also change simlilar to c2 &y)
    int tmp = x.val1; //symbol(& refer to reference)
    x.val1 = y.val2;
    y.val2 = tmp;
}
int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1, oc2);

    cout<<"The value of c1 after exchanging becomes: ";
    oc1.display();
    cout<<"The value of c2 after exchanging becomes: ";
    oc2.display();
    
    return 0;
}

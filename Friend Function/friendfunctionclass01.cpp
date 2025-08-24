#include<iostream>
using namespace std;

class Y;//Forward Declaration because of line 13 where we are saying that there is a friend function void addclass asking permission to access the data from class X & Y  
class X{
    int data;

    public:

    void setdata(int a){
        data=a;
    }
    friend void addclass(X,Y);
};

class Y{
    int value;

    public:

    void setdata(int b){
        value=b;
    }
    friend void addclass(X,Y);
};

void addclass(X ob1, Y ob2){
    cout<<"The value of both class is "<<(ob1.data+ob2.value)<<endl;
}


int main(){
    cout<<"Hello World"<<endl;
    int n1,n2;

    cout<<"Enter the value of number  "<<endl;
    cin>>n1;
    cin>>n2;
   
    
    X a1;
    a1.setdata(n1);
    Y b1;
    b1.setdata(n2);

    addclass(a1,b1);
    
    return 0;
}
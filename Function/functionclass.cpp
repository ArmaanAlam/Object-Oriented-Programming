#include<iostream>
using namespace std;
class complex{
    int a,b;

    public:
    void setdata(int x,int y);
    void getdata();
};

void complex::setdata(int x,int y){
   a=x;
   b=y;
}

void complex :: getdata(void){
    cout<<"The compplex number is "<<a<<"+"<<b<<"i"<<endl;
}


int main(){
    // complex c1,c2;
    // c1.setdata(2,5);
    // c1.getdata();

    // c2.setdata(2,5);
    // c2.getdata();
    
    return 0;
}
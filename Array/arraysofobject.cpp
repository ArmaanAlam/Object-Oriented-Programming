#include<iostream>
using namespace std;
class employee{
 int id ;
 int salary;

 public:
 void setdata(){
    salary=10000;
    cout<<"Enter you ID "<<endl;
    cin>>id;
} 


void getdata(){
    cout<<"Your ID is "<<id<<" and your salary is "<<salary<<endl;
}

}; 


int main(){
    cout<<"Hello my employee good morning to everyone "<<endl;
    employee harry[5];
    for (int  i = 0; i < 5; i++)
    {
        harry[i].setdata();
        harry[i].getdata();
    }
        
    return 0;
}
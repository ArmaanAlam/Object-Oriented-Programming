
//Array of object is just like we created the array of variable 
// In arrays of variable data type will be int , float , etc but in arrays of object data type become class name 
#include<iostream>
using namespace std;
class employee{
    int id ;
    int salary;

    public:

    void setdata(){
        salary=1000;
        cout<<"Enter your ID : ";
        cin>>id;
    }

    void getdata(){
        cout<<"The ID : "<<id<<" of the person has the salary increment of "<<salary<<endl;
     }
};


int main(){
     
    cout<<"Hello World Good Morning "<<endl;
    employee facebook[100];//Here employee is now become data type of variable facebook which contain linear memory of 100 of similar data type class
    //Here we are defining the function once and useing multiples times


//Here we can call object like this also
// facebook[0].setdata();
// facebook[0].getdata();

// facebook[1].setdata();
// facebook[1].getdata();

// facebook[2].setdata();
// facebook[2].getdata();

//and also using for loop also like below


    for (int i = 0; i < 5; i++)
    {
        facebook[i].setdata();
        facebook[i].getdata();
    }
    
    
    return 0;
}
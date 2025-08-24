#include<iostream>
using namespace std;
class Employee{
      private://in this type variable is only access by function of that class not outside the class
      int ID;
      string name;
       
       public :
       int age;

void setdata(int a, string b);//we can define the function in or out the class 
void getdata(){
    cout<<"Employee ID is "<<ID<<endl;
    cout<<"Empolyee Name is "<<name<<endl;
    cout<<"Employee age is "<<age<<endl;
}

};

void Employee::setdata(int a, string b){
    ID=a;  //order is important if we write like this a=ID it will gives us error 
    name=b;

}

int main(){
    cout<<"Hello world"<<endl;
    cout<<"Employee Information"<<endl;
    Employee naushad;

//we can not access naushad.name or naushad.ID directly it will give us error because it is private not public


    naushad.age=39;//age is public variable so we can access directly 
    naushad.setdata(123456789 , "Naushad Alam");
    naushad.getdata();
    //if we declare age public data type here it will gives us reeor because we are declaring it after calling so it will give garbage value  
   

    return 0;
}
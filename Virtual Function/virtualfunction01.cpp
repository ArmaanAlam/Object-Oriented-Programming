#include<iostream>
using namespace std;
class A{
    protected:
    string title;
    double rating;
    public :
    A (string t,double r ){
        title=t;
        rating=r;
    }
    virtual void display(){
        cout<<"Base class display function"<<endl;
    };
};

class B : public A{
    protected:
    int vedlength;
    public:
    B(string t, double r ,int v) : A(t,r)
    {
        vedlength=v;
    }
    void display(){
        cout<<title<<endl;
        cout<<vedlength<<endl;
        cout<<rating<<endl;
    }
};
class C : public A{
    protected:
    int wordlength;
    public :
    C(string t, double r, int w) : A(t,r)
    {
        wordlength=w;
    }
    void display(){
        cout<<title<<endl;
        cout<<wordlength<<endl;
        cout<<rating<<endl;
    }
};
int main(){
    string title;
    double rating;
    int vidlength,worldlength;

    title="Code with Harry";              //Code with Harry
    rating=4.98;                          //876
    vidlength=876;                        //4.98
    B b1(title,rating,vidlength);
    // b1.display();

    
    title="Code with Harry";               //Code with Harry
    rating=3.84;                           //12000
    worldlength=12000;                     //3.84
    C c1(title,rating,worldlength);
    // c1.display();

    A *a_pointer[2];
    
    a_pointer[0]=&b1;
    a_pointer[1]=&c1;

    a_pointer[0]->display();
    a_pointer[1]->display();

    return 0;
}


// Rules for virtual function


// They cannot be static
// They are accessed by object pointers
// Virtual functions can be a friend of another class
// A virtual function in the base class might not be used.
// If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class


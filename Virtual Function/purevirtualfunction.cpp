#include <iostream>
using namespace std;
//Pure virtual function is a function that doesn’t perform any operation 
//And the function is declared by assigning the value 0 to it.
// Pure virtual functions are declared in abstract classes.


// Abstract base class is a class that has at least one pure virtual function in its body. 
// The classes which are inheriting the base class must need to override the virtual function of the abstract class otherwise compiler will throw an error.
//We cannot create object of abstract class

class A
{
protected:
    string title;
    double rating;

public:
    A(string t, double r)
    {
        title = t;
        rating = r;
    }
    virtual void display() = 0; // pure virtual function
};

class B : public A
{
protected:
    int vedlength;

public:
    B(string t, double r, int v) : A(t, r)
    {
        vedlength = v;
    }
    void display()
    {
        cout << title << endl;
        cout << vedlength << endl;
        cout << rating << endl;
    }
};
class C : public A
{
protected:
    int wordlength;

public:
    C(string t, double r, int w) : A(t, r)
    {
        wordlength = w;
    }
    void display()
    {
        cout << title << endl;
        cout << wordlength << endl;
        cout << rating << endl;
    }
};
int main()
{
    string title;
    double rating;
    int vidlength, worldlength;

    title = "Code with Harry"; // Code with Harry
    rating = 4.98;             // 876
    vidlength = 876;           // 4.98
    B b1(title, rating, vidlength);
    // b1.display();

    title = "Code with Harry"; // Code with Harry
    rating = 3.84;             // 12000
    worldlength = 12000;       // 3.84
    C c1(title, rating, worldlength);
    // c1.display();

    A *a_pointer[2];

    a_pointer[0] = &b1;
    a_pointer[1] = &c1;

    a_pointer[0]->display();
    a_pointer[1]->display();

    // A a1;  //pure virtual function is declare in class A so it become abstract class and we cannot create object of abstract class
    // a1.display();    //abstract class consist at least more one pure virtual function

    return 0;
}
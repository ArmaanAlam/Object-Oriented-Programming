#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:

    Employee() {
        name = "armaan";
        employeeID = 0;
        salary = 0.0;
    }


    Employee(string empName, int empID, double empSalary) {
        name = empName;
        employeeID = empID;
        salary = empSalary;
    }


    void setEmployeeInfo() {
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cout << "Enter Salary: $";
        cin >> salary;
    }


    void displayEmployeeInfo() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }


    void giveRaise(double raiseAmount) {
        salary += raiseAmount;
        cout << name << " has received a raise of $" << raiseAmount << endl;
        cout << "New Salary: $" << salary << endl;
    }
};

int main() {
    // Create an Employee object using the default constructor
    Employee emp1;

    // Set employee information for emp1
    emp1.setEmployeeInfo();

    // Create an Employee object using the parameterized constructor
    Employee emp2("Jane Smith", 102, 60000.0);

    // Display employee information
    cout << "\nEmployee 1 Information:" << endl;
    emp1.displayEmployeeInfo();

    cout << "\nEmployee 2 Information:" << endl;
    emp2.displayEmployeeInfo();

    // Give a raise to employee 1
    emp1.giveRaise(5000.0);

    return 0;
}

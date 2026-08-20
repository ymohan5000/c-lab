#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void getPersonData()
    {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
    }
};

class Employee : public Person
{
protected:
    int employeeID;
    float salary;

public:
    void getEmployeeData()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Salary: ";
        cin >> salary;

        cin.ignore();
    }
};

class Manager : public Employee
{
private:
    string department;

public:
    void getManagerData()
    {
        cout << "Enter Department: ";
        getline(cin, department);
    }

    void display()
    {
        cout << "\n--- Manager Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main()
{
    cout << "Author Name: Mohan Yadav" << endl;

    Manager m;

    m.getPersonData();
    m.getEmployeeData();
    m.getManagerData();

    m.display();

    return 0;
}
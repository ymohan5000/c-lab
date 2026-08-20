#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeID;
    string name;
    float salary;

public:
    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayData()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee emp;

    cout << "Author Name: Mohan Yadav" << endl;

    emp.getData();
    emp.displayData();

    return 0;
}
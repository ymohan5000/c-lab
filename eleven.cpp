#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    // Parameterized Constructor
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    cout << "Author Name: Mohan Yadav" << endl;

    Student s(101, "Mohan Yadav");

    cout << "\n--- Student Details ---" << endl;
    s.display();

    return 0;
}
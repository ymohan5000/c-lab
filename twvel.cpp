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

    // Copy Constructor
    Student(const Student &s)
    {
        rollNo = s.rollNo;
        name = s.name;
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

    Student s1(101, "Mohan Yadav");

    // Copy constructor is called
    Student s2(s1);

    cout << "\n--- Original Object ---" << endl;
    s1.display();

    cout << "\n--- Copied Object ---" << endl;
    s2.display();

    return 0;
}
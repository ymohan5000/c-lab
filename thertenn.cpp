#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    // Default Constructor
    Student()
    {
        rollNo = 0;
        name = "Unknown";
    }

    // Constructor with one parameter
    Student(int r)
    {
        rollNo = r;
        name = "Unknown";
    }

    // Constructor with two parameters
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

    Student s1;
    Student s2(102);
    Student s3(103, "Mohan Yadav");

    cout << "\n--- Student 1: Default Constructor ---" << endl;
    s1.display();

    cout << "\n--- Student 2: One Parameter ---" << endl;
    s2.display();

    cout << "\n--- Student 3: Two Parameters ---" << endl;
    s3.display();

    return 0;
}
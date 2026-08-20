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

class Student : public Person
{
private:
    int rollNo;
    string faculty;

public:
    void getStudentData()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Faculty: ";
        getline(cin, faculty);
    }

    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Faculty: " << faculty << endl;
    }
};

int main()
{
    cout << "Author Name: Mohan Yadav" << endl;

    Student s;

    s.getPersonData();
    s.getStudentData();
    s.display();

    return 0;
}
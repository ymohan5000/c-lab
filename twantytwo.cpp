#include <iostream>
using namespace std;

class Student
{
private:
    static int count;

public:
    Student()
    {
        count++;
    }

    // Static member function
    static void displayCount()
    {
        cout << "Number of Student Objects = "
             << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main()
{
    cout << "Author Name: Mohan Yadav" << endl;

    Student s1;
    Student s2;
    Student s3;

    Student::displayCount();

    return 0;
}
#include <iostream>
using namespace std;

class Base
{
public:
    // Normal function
    void normalFunction()
    {
        cout << "Normal function of Base class" << endl;
    }

    // Virtual function
    virtual void virtualFunction()
    {
        cout << "Virtual function of Base class" << endl;
    }
};

class Derived : public Base
{
public:
    // Function overriding
    void normalFunction()
    {
        cout << "Normal function of Derived class" << endl;
    }

    void virtualFunction() override
    {
        cout << "Virtual function of Derived class" << endl;
    }
};

int main()
{
    cout << "Author Name: Mohan Yadav" << endl;

    Derived d;
    Base *ptr;

    ptr = &d;

    cout << "\n--- Normal Function ---" << endl;
    ptr->normalFunction();

    cout << "\n--- Virtual Function ---" << endl;
    ptr->virtualFunction();

    return 0;
}
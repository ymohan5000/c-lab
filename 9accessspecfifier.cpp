#include <iostream>
using namespace std;

class Base
{
public:
    int publicData;

protected:
    int protectedData;

private:
    int privateData;

public:
    void setData()
    {
        publicData = 10;
        protectedData = 20;
        privateData = 30;
    }

    void displayPrivate()
    {
        cout << "Private Data: " << privateData << endl;
    }
};

class Derived : public Base
{
public:
    void displayProtected()
    {
        cout << "Public Data: " << publicData << endl;
        cout << "Protected Data: " << protectedData << endl;
    }
};

int main()
{
    Derived obj;

    cout << "Author Name: Mohan Yadav" << endl;

    obj.setData();

    cout << "\n--- Access Specifiers Demonstration ---" << endl;

    // Public member can be accessed outside the class
    cout << "Public Data from main: "
         << obj.publicData << endl;

    // Protected member is accessed through derived class
    obj.displayProtected();

    // Private member is accessed through base class member function
    obj.displayPrivate();

    return 0;
}
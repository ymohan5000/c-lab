#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Author Name: Mohan Yadav" << endl;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    try
    {
        if (b == 0)
        {
            throw b;
        }

        cout << "Result = " << (float)a / b << endl;
    }
    catch (int)
    {
        cout << "Exception: Cannot divide by zero!" << endl;
    }

    return 0;
}
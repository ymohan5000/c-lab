#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Calculator c;

    cout << "Author Name: Mohan Yadav" << endl;

    cout << "Sum of two numbers = "
         << c.add(10, 20) << endl;

    cout << "Sum of three numbers = "
         << c.add(10, 20, 30) << endl;

    return 0;
}
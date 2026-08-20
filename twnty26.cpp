#include <iostream>
using namespace std;

// Class Template
template <class T>
class Calculator
{
private:
    T a, b;

public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    T add()
    {
        return a + b;
    }

    T subtract()
    {
        return a - b;
    }

    T multiply()
    {
        return a * b;
    }

    T divide()
    {
        return a / b;
    }

    void display()
    {
        cout << "Addition = " << add() << endl;
        cout << "Subtraction = " << subtract() << endl;
        cout << "Multiplication = " << multiply() << endl;
        cout << "Division = " << divide() << endl;
    }
};

int main()
{
    int a, b;

    cout << "Author Name: Mohan Yadav" << endl;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    Calculator<int> c(a, b);

    cout << "\n--- Arithmetic Operations ---" << endl;
    c.display();

    return 0;
}
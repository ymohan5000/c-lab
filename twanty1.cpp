#include <iostream>
using namespace std;

class Number
{
private:
    int a;
    int b;

public:
    Number(int x, int y)
    {
        a = x;
        b = y;
    }

    // Friend function declaration
    friend void calculateSum(Number n);
};

// Friend function definition
void calculateSum(Number n)
{
    cout << "Sum = " << n.a + n.b << endl;
}

int main()
{
    cout << "Author Name: Mohan Yadav" << endl;

    Number n(20, 30);

    calculateSum(n);

    return 0;
}
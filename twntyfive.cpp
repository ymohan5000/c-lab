#include <iostream>
using namespace std;

// Function Template
template <class T>
T greatest(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;

    cout << "Author Name: Mohan Yadav" << endl;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Greatest number = "
         << greatest(a, b) << endl;

    return 0;
}
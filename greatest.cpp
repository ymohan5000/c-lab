#include <iostream>
using namespace std;

int greatest(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b, result;

    cout << "Author Name: Mohan Yadav" << endl;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    result = greatest(a, b);

    cout << "Greatest number = " << result << endl;

    return 0;
}
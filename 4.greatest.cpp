#include <iostream>
using namespace std;

int maxNumber(int x, int y)
{
    if (x > y)
        return x;
    return y;
}

int main()
{
    int x, y;

    cout << "Author Name: Sudip Pandey" << endl;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Greatest number = " << maxNumber(x, y);

    return 0;
}

#include <iostream>
using namespace std;

class Calculate
{
public:
    // Area of square
    int area(int side)
    {
        return side * side;
    }

    // Area of rectangle
    int area(int length, int breadth)
    {
        return length * breadth;
    }

    // Area of triangle
    float area(float base, float height)
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Calculate c;

    cout << "Author Name: Mohan Yadav" << endl;

    cout << "\nArea of Square = "
         << c.area(5) << endl;

    cout << "Area of Rectangle = "
         << c.area(10, 5) << endl;

    cout << "Area of Triangle = "
         << c.area(10.0f, 6.0f) << endl;

    return 0;
}
#include <iostream>
using namespace std;

class Shape
{
public:
    // Pure virtual function
    virtual void area() = 0;
};

class Rectangle : public Shape
{
private:
    float length;
    float breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void area() override
    {
        cout << "Area of Rectangle = "
             << length * breadth << endl;
    }
};

int main()
{
    cout << "Author Name: Mohan Yadav" << endl;

    Rectangle r(10, 5);

    r.area();

    return 0;
}
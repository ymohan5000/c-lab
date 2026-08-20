#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Operator overloading
    Complex operator+(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    cout << "Author Name: Mohan Yadav" << endl;

    Complex c1(5, 3);
    Complex c2(2, 4);

    Complex c3 = c1 + c2;

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}
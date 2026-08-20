#include <iostream>
using namespace std;

int main()
{
    cout << "Author Name: Mohan Yadav" << endl;

    // Dynamic memory allocation
    int *ptr = new int;

    *ptr = 100;

    cout << "Value stored in dynamically allocated memory: "
         << *ptr << endl;

    // Release memory
    delete ptr;

    // Avoid dangling pointer
    ptr = nullptr;

    cout << "Memory released successfully." << endl;

    return 0;
}
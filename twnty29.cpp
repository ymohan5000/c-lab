#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;

    cout << "Author Name: Mohan Yadav" << endl;

    // Open file for reading
    ifstream file("student.txt");

    // Check if file is opened
    if (!file)
    {
        cout << "Error: File not found!" << endl;
        return 1;
    }

    cout << "\n--- Data from File ---" << endl;

    // Read file line by line
    while (getline(file, line))
    {
        cout << line << endl;
    }

    // Close file
    file.close();

    return 0;
}
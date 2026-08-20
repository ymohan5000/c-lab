#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "Author Name: Mohan Yadav" << endl;

    // Create and open file
    ofstream file("student.txt");

    // Check if file is opened
    if (!file)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Write data into file
    file << "Student Details" << endl;
    file << "----------------" << endl;
    file << "Name: Mohan Yadav" << endl;
    file << "Roll No: 101" << endl;
    file << "Course: BSc CSIT" << endl;
    file << "College: Butwal Multiple Campus" << endl;

    // Close file
    file.close();

    cout << "Data written to file successfully." << endl;

    return 0;
}
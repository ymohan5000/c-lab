#include <iostream>
using namespace std;

int maximum(int arr[], int n)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    int arr[100], n;

    cout << "Author Name: Mohan Yadav" << endl;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Maximum element = "
         << maximum(arr, n) << endl;

    return 0;
}
#include <iostream>
using namespace std;

void printReverseArray(int arr[], int n)
{

    for (int i = n-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;

    cout << "Enter the number of elements: ";

    cin >> n;

    if (n <= 0)
    {

        cout << "Invalid input. Number of elements must be later than e." << endl;
        return 0;
    } // Terminate the Program

    int arr[n]; // Declare an array to store the numbers

    cout << "Enter " << n << " numbers, one per line: " << endl;

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    cout << "Numbers in reverse order: ";
    printReverseArray(arr, n);

    return 0;
}
// Terminate the Program
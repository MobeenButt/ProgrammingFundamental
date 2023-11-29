#include <iostream>
using namespace std;

bool isAlreadyEntered(int arr[], int size, int number) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            return true; // Number is already in the array
        }
    }
    return false; // Number is not in the array
}



int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Number of elements must be greater than 0." << endl;
        return 0;
    }

    int arr[n]; // Declare an array to store the numbers

    cout << "Enter " << n << " numbers, one per line: " << endl;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        if (isAlreadyEntered(arr, i, number)) {
            cout << "Already Entered: " << number << endl;
            i--; // Decrement i to allow the user to enter the number again
        } else {
            arr[i] = number;
        }
    return 0;
}
}

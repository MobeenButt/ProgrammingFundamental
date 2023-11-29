#include <iostream>
using namespace std;

bool special(int arr[], int arraysize);

int main() {
    int arraysize;
    cout << "Enter the size of the array: ";
    cin >> arraysize;
    int arr[arraysize];
    cout << "Enter " << arraysize << " elements of the array:" << endl;
    for (int i = 0; i < arraysize; i++) {
        cin >> arr[i];
    }
    if (special(arr, arraysize)) {
        cout << "The array is special";
    } else {
        cout << "The array is not special";
    }

    return 0;
}

bool special(int arr[], int arraysize) {
    for (int i = 0; i < arraysize; i++) {
        if ((i % 2 != 0 && arr[i] % 2 == 0) || (arraysize % 2 == 0 && arr[i] % 2 != 0)) {
            return false;
        }
    }

    return true;
}

#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of rows for the array: ";
    cin >> size;
    cout << "Enter the elements of the array: \n";

    int arr[size][3];

    for (int i = 0; i < size; i++)
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }

    int identicalCount = 0;

    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            bool areIdentical = true;

            for (int k = 0; k < 3; ++k) {
                if (arr[i][k] != arr[j][k]) {
                    areIdentical = false;
                    break;
                }
            }

            if (areIdentical) {
                identicalCount++;
            }
        }
    }

    cout << "The count of identical rows in the array is: " << identicalCount << endl;

    return 0;
}

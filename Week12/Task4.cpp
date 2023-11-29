#include <iostream>
using namespace std;

int sum(int elements[][3], int size);

int main() {
    int size;

    cout << "Enter row size: ";
    cin >> size;

    int elements[size][3];  

    cout << "Enter the elements of the matrix: \n";

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 3; j++) {  
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> elements[i][j];
        }
    }

    cout << "The sum of elements in the matrix is: " << sum(elements, size);
    return 0;  
}

int sum(int elements[][3], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 3; j++) {
            sum = sum + elements[i][j];
        }
    }
    return sum;
}

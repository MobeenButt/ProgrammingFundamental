#include <iostream>
using namespace std;
int findLargestColumn(int elements[][5], int size);

int main()
{
    int size;
    cout << "Enter row size: ";
    cin >> size;

    int elements[size][5];

    cout << "Enter the elements of the matrix: \n";

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> elements[i][j];
        }
    }
    cout << endl<<"Original Matrix: "<<endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << elements[i][j] << "\t";
        }
        cout << endl;
    }
    int res = findLargestColumn(elements, size);
    for (int i = 0; i < size; i++)
    {
        int temp = elements[i][0];
        elements[i][0] = elements[i][res];
        elements[i][res] = temp;
    }
    cout <<endl <<"Matrix after largest column moved to first: "<<endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << elements[i][j] << "\t";
        }
        cout << endl;
    }
}
int findLargestColumn(int elements[][5], int size)
{
    int lc = 0;
    int sum = 0;
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum = sum + elements[i][j];
        }
        if (sum > lc)
        {
            lc = sum;
            max = i;
        }
    }
    return max;
}
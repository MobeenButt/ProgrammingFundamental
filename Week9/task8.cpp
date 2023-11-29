#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter the number of elements for the first array (must be 2): ";
    cin >> n;

    
    int arr[n]; // Declare an array to store the numbers

    cout << "Enter " << n << " elements for the first array, one per line: " << endl;
    
    for (int i = 0; i<n; i++)
    {   
        cin >> arr[i];
    }
    int n1;

    cout << "Enter the number of elements for the second array: ";
    cin >> n1;

   int arr1[n1];
    cout << "Enter " << n1 << " elements for the second array, one per line: " << endl;
    
    for (int i = 0; i<n1; i++)
    {   
        cin >> arr1[i];
    }


    cout<<"Resulting array: [";
    cout<<arr[0]<<", ";
    for (int  i = 0; i < n1; i++)
    {
        cout<<arr1[i]<<", ";
    }
    cout<<arr[1];
    cout<<"]";
}

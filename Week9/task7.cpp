#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter the number of resistors in the series circuit: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input. Number of elements must be greater than 0." << endl;
        return 0;
    }

    float arr[n]; // Declare an array to store the numbers

    cout <<"Enter the resistance values (in ohms) of the "<<n<<" resistors, one per line: "<< endl;
    
    for (int i = 0; i<n; i++)
    {   
        cin >> arr[i];
    }
    float sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
cout<<"The total resistance of the series circuit is "<<sum<<" ohms.";
}

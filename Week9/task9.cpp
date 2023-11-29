#include<iostream>
using namespace std;
bool canPayWithChange(double change[], double totalDue);
main(){
    int idx=4;
    double totalDue;
    double change[idx];

    cout << "Enter quarters: ";
    cin >> change[0];

    cout << "Enter dimes: ";
    cin >> change[1];

    cout << "Enter nickels: ";
    cin >> change[2];

    cout << "Enter pennies: ";
    cin >> change[3];

    cout << "Enter the total amount due: $";
    cin >> totalDue;
    cout << "Can you pay the amount? ";
    if(canPayWithChange(change, totalDue))
    {
        cout <<"Yes";
    }
    else{
        cout << "No";
    }

}

bool canPayWithChange(double change[], double totalDue)
{
    change[0]=change[0]*0.25;
    change[1]=change[1]*0.10;
    change[2]=change[2]*0.05;
    change[3]=change[3]*0.01;

    double sum=0;
    for(int x=0; x<4 ; x++)
    {
        sum=sum+change[x];
    }

    if(sum>=totalDue)
    {
        return true;
    }
    else
    {
        return false;
    }

}
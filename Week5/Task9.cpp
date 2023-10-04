#include <iostream>
using namespace std;
string timeTravel(int hours, int min);

int main(){
	
	int hours, min;
	
	cout << "Enter Hours: ";
	cin >> hours;
	
	cout << "Enter Minutes: ";
	cin >> min;
	
	string a=timeTravel(hours,min);
	cout<<a;
	
}

string timeTravel(int hours, int min){
	min = min + 15;
    if (min>=61)
    {
        hours = hours + 1;
        min = min - 60;
        if (hours>=24)
        {
            hours=0;
        }
        
    }
    return to_string(hours) + ":" + to_string(min);
	
}

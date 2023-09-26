#include <iostream>
using namespace std;
void inchesToFeet(float length);
main(){
float inches;
cout<<"Enter the measurement in inches: ";
cin>>inches;
inchesToFeet(inches);
}
void inchesToFeet(float length)
{

float foot=length/12;
cout<<"Equivalent in feet: "<<foot;
}
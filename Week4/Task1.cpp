#include <iostream>
using namespace std;
void calculateFuel(float distance);
main()
{
float d;
cout<<"Enter the distance: ";
cin>>d;
calculateFuel(d);
}
void calculateFuel(float distance)
{

float fuel = 10 * distance;
cout<<"Fuel needed: "<<fuel;
}

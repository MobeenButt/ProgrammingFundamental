#include<iostream>
using namespace std;
main(){
cout<<"Enter the current world population: ";
int population;
cin>>population;
cout<<"Enter the monthly birth rate (number of births per month): ";
int births;
cin>>births;
int yearsToSpaceship;
yearsToSpaceship = 30 * 12;

int people;
people = population + (births * yearsToSpaceship);
cout<<"The population in three decades will be: "<<people;
}
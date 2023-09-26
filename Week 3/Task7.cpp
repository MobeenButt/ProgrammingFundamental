#include<iostream>
using namespace std;
main(){ 
cout<<"Enter the number of hours: ";
int hours;
cin>>hours;
int sec;
sec = hours * 3600;
cout<<hours<<" hours is equivalent to "<<sec<<" seconds.";
}
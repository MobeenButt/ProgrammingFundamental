#include<iostream>
using namespace std;
main(){ 
cout<<"Enter voltage (in volts): ";
float V;
cin>>V;
cout<<"Enter current (in amperes): ";
float C;
cin>>C;
float P;
P = V * C;
cout<<"The power is "<<P<<" watts.";
}
#include <iostream>
using namespace std;
main(){ 
cout<<"Enter weight in pounds: ";
float weight_in_pounds = 0.45;
float converting_value ;
cin>> converting_value;
float weight;
weight = weight_in_pounds * converting_value; 
cout <<converting_value<< " pounds is equal to "<<weight<<" kilograms.";
  return 0;
}
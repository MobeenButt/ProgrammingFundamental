#include<iostream>
#include<cmath>
using namespace std;
main(){
	float x,y,degree,radian;
	cout<<"Enter the distance from the base of the tree (in feet): ";
	cin>> x;
	cout<<"Enter the angle of elevation (in degrees): ";
	cin>> radian;
	degree = radian / 57.2958;
	y = x * tan(degree);
	cout<<"The height of the tree is: "<<y<< " feet";
	


}
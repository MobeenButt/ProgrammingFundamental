#include <iostream>
using namespace std;
void fuel(float dis);
main(){
	cout<<"Enter the distance: ";
	float dis;
	cin>> dis;
	fuel(dis);
}
void fuel(float dis){
	float fuel;
	fuel = dis * 10;
if(fuel>100){
	cout<<"Fuel needed: "<<fuel;}
if(fuel<100){
	cout<<"Fuel needed: 100";}

}
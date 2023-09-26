#include <iostream>
using namespace std;
void stickers(int cube);
main(){

	cout<<"Enter the side length of the Rubik's Cube: ";
	int cube;
	cin>>cube;
	stickers(cube);
}
void stickers(int cube){
	int stick = cube * cube * 6; 
	cout<<"Number of stickers needed: "<<stick;

}
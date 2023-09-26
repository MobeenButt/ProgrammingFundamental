#include <iostream>
using namespace std;
void score(int number);

main(){
	cout<<"Enter your score: ";
	int number;
	cin>>number;	
	score(number);
}
void score(int number){
if(number>50){
	cout<<"Pass";}
	if(number<=50){
	cout<<"Fail";}
}
	

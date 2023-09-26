#include<iostream>
using namespace std;
main(){
	cout<< "Enter the student's name: ";
	string name;
	cin>> name;
	cout<<"Enter matriculation marks (out of 1100): ";
	float marks;
	cin>> marks;
	cout<<"Enter intermediate marks (out of 550): ";
	float inter;
	cin>> inter;
	cout<<"Enter Ecat marks (out of 400): ";
	float ecat;
	cin>> ecat;
	float score;
	float finalagg;
	score = (ecat / 400 * 0.5) + (marks / 1100 * 0.1) + (inter / 550 * 0.4) ;
	finalagg = score * 100;
	cout<<"Aggregate score for "<< name<< " in UET is: "<<finalagg << "%"; 








}
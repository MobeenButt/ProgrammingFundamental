#include <iostream> 
using namespace std;
void symmetric(int n1);
main(){
    int n1;
    cout<<"Enter a three-digit number: ";
    cin>>n1;
    symmetric(n1);
}

void symmetric(int number){
    int n,num1,num3; 

	n=number;
    num1 = number / 100;
	num3 = number % 10;
	
	if (num1 == num3){
		cout << "The number is symmetrical.";
	}
	else{
		cout << "The number is not symmetrical.";
	}
}
    
    
    

#include <iostream>
using namespace std;

int main(){
	
	int number, tens, ones;
	
	cout << "Enter a number (1-99): ";
	cin >> number;
	
	tens = number / 10;
	ones = number % 10;
	
	if(tens == 2){
		cout << "Twenty";
	}
	if(tens == 3){
		cout << "Thirty";
	}	
	if(tens == 4){
		cout << "Forty";
	}
	if(tens == 5){
		cout << "Fifty";
	}
	if(tens == 6){
		cout << "Sixty";
	}
	if(tens == 7){
		cout << "Seventy";
	}
	if(tens == 8){
		cout << "Eighty";
	}
	if(tens == 9){
		cout << "Ninety";
	}
	
	
	if(ones == 1){
		cout << "One";
	}
	if(ones == 2){
		cout << "Two";
	}
	if(ones == 3){
		cout << "Three";
	}	
	if(ones == 4){
		cout << "Four";
	}
	if(ones == 5){
		cout << "Five";
	}
	if(ones == 6){
		cout << "Six";
	}
	if(ones == 7){
		cout << "Seven";
	}
	if(ones == 8){
		cout << "Eight";
	}
	if(ones == 9){
		cout << "Nine";
	}
	
}

#include <iostream>
using namespace std;
void evenorodd(int number);
main(){
	cout<<"Enter a number: ";
	int num;
	cin>>num;
	evenorodd(num);
}
void evenorodd(int number){
	if( number % 2 == 0 ){
	cout<<"Number "<<number<<" is even";
} 
	if( number % 2 == 1 ){	
	cout<<"Number "<<number<<" is odd";
}
}

 
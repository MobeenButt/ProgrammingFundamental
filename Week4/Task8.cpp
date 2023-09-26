#include <iostream>
using namespace std;
void amount(string day, int price);	
main(){
	string day;
	int price;
	cout<<"Enter the day of purchase: ";
	cin>>day;
	cout<<"Enter the total purchase amount: $";
	cin>>price;
	amount(day,price);
}
void amount(string day, int price){
if( day == "Sunday" ){
	int discount;
	discount = price * 0.1;
	int ne;
	ne = price - discount;
	cout<<"Payable Amount: $"<<ne;
}
	if( day != "Sunday"){
	cout<<"Payable Amount: $"<<price;
}
}
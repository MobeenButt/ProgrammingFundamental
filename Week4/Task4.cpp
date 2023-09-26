#include <iostream>

using namespace std;
	void sum(int n1,int n2);
	void mul(int n1,int n2);
	void sub(int n1,int n2);
	void dv(int n1,int n2);
	main(){
	int a,b;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	cout<<"Enter an operator (+, -, *, /): ";
	char op;
	cin>>op;
	if( op == '+')
	{
	
		sum(a,b); 
	}
	if( op == '*')
	{
	
		mul(a,b); 
	}
	if( op == '-')
	{
	
		sub(a,b); 
	}
	if( op == '/')
	{
	
		dv(a,b); 
	}
 }	
	void sum(int n1,int n2){

	int sum;
	sum = n1 + n2;
	cout<<"Addition: "<<sum;
}
	void mul(int n1,int n2){

	int mul;
	mul = n1 * n2;
	cout<<"Multiplication: "<<mul;
}
	void sub(int n1,int n2){

	int sub;
	sub = n1 - n2;
	cout<<"Subtraction: "<<sub;
}
	void dv(int n1,int n2){

	int dv;
	dv = n1 / n2;
	cout<<"Division: "<<dv;
}




























	
	
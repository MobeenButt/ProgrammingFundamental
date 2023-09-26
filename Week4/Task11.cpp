#include <iostream>
using namespace std;
void name(string enter);
main(){
	cout<<"Enter your name: ";
	string enter;
	cin>>enter;
	name(enter);
	while(true)
	{
	cout<<enter<<endl;
	}
}
void name(string enter){
	cout<<enter<<endl;}

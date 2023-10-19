#include<iostream>
using namespace std;
void printTable(int number);
main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
printTable(num);
}
void printTable(int number){
    for(int i=1;i<=10;i++){
        cout<<number<<" x "<<i<<" = "<<number*i<<endl;
    }
}
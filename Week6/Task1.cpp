#include<iostream>
using namespace std;
bool truefalse(int num1,int num2);
main(){
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
     cout<<truefalse( num1,num2);
    

}
bool truefalse(int num1,int num2){

    if(num1>num2){
        return true;
    }
    else{
        return false;
    }
}

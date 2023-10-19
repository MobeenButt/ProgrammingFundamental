#include<iostream>
using namespace std;
int frequencycheck(int num,int digit);
main(){
    int num,digit;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter the digit to check: ";
    cin>>digit;
    int result =frequencycheck(num,digit);
    cout<<"Frequency: "<<result;
}
int frequencycheck(int num,int digit){
    int frequency =0;
    while(num>0){
    int check = num%10;
    if(check==digit){
         frequency++;}
         num=num/10;
    }
    return frequency;
}
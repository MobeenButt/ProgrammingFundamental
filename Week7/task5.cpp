#include<iostream>
using namespace std;
int sumdigit(int num);
main(){
    int num;
   cout<<"Enter a number: ";
cin>>num;
int result=sumdigit(num);
cout<<"Sum of digits: "<<result;
}
int sumdigit(int num){
    int sum =0;
    while(num>0){
        int a=num%10;
        sum =sum+a;
        num=num/10;
    }
    return sum;
}
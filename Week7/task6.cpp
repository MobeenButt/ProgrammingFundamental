#include<iostream>
using namespace std;
int calculateGCD(int n1, int n2);
int calculateLCM(int n1, int n2);
main(){
    int n1,n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
int hcf=calculateGCD(n1,n2);
int lcm=calculateLCM(n1,n2);
cout<<"GCD: "<<hcf<<endl;
cout<<"LCM: "<<lcm<<endl;
}
int calculateGCD(int n1, int n2){
    while(n2 != 0){
        int a=n2;
        n2=n1%n2;
        n1=a;
    }
return n1;}
int calculateLCM(int n1,int n2){
    int gcd =calculateGCD(n1,n2);
    int lcm=(n1*n2)/gcd;

return lcm;
}
#include<iostream>
using namespace std;
void generatefibonacci(int length);
main(){
    int length;
    cout<<"Enter the length of the Fibonacci series: ";
    cin>>length;
    generatefibonacci(length);
}
void generatefibonacci(int length){
    int sum=0;
    int n1=0,n2=1;
    cout<<n1<<", "<<n2;
    for(int i=1;i<=length-2;i++){
        sum=n1+n2;
        cout<<", "<<sum;
        n1=n2;
        n2=sum;
    }
    }
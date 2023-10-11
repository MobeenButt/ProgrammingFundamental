#include<iostream>
using namespace std;
int parity(int num,int sum);
main(){
    int num,a,result;
    int sum=0;
    cout<<"Enter a 3-digit number: ";
    cin>>num;
    a=num;
    sum=sum+(a%10);
    a=a/10;
    sum=sum+(a%10);
    a=a/10;
    sum=sum+(a%10);
    result=parity( num, sum);
    cout<<result;
}
int parity(int num,int sum){
    int res;
    if((sum%2==0 && num%2==0)||(sum%2==1&&num%2==1))
    {
    res = 1;
    }
    else{
        res =0;}
        return res;
    }

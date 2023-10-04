#include<iostream>
using namespace std;
void evenorodd(int n);

int main()
{
    int num;
    cout<<"Enter a five-digit number: ";
    cin>>num;
    evenorodd(num);
}
void evenorodd(int n){
    int n1,n2,n3,n4,n5,ans;
    n1= n/10000;
    n2= ( n / 1000 ) % 10 ;
    n3= ( n / 100 ) % 10 ;
    n4= ( n / 10 ) % 10 ;
    n5= ( n / 1 ) % 10 ;

ans = n1+n2+n3+n4+n5;
if (ans%2==0)
{
    cout<<"Evenish";
}
else{
    cout<<"Oddish";
}




}
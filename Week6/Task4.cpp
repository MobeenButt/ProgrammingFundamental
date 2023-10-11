#include<iostream>
using namespace std;
int findGreatest(int a,int b,int c);
main(){
    int result;
int a,b,c;
cout<<"Enter the first number: ";
cin>>a;
cout<<"Enter the second number: ";
cin>>b;
cout<<"Enter the third number: ";
cin>>c;
result= findGreatest( a, b, c);
cout<<"The greatest number among "<<a<<", "<<b<<", and "<<c<<" is: "<<result;
}
int findGreatest(int a,int b,int c){
    int res;
if(a>=b&&a>=c){
    res=a;
}
if(b>=a&&b>=c){
    res=b;
}
if(c>=b&&c>=a){
    res=c;
}
return res;

}
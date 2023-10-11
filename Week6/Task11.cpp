#include<iostream>
using namespace std;
string title(float speed);
main(){
    float speed;
    cout<<"Enter the speed: ";
    cin>>speed;
    string result= title( speed);
    cout<<result;
}
   string title(float speed){
    string res;
    if(speed<=10){
        res="slow";
    }
     if(speed<=10){
        res="slow";
    }
     if(speed>10&&speed<=50){
        res="average";
    }
     if(speed>50&&speed<=150){
        res="fast";
    }
     if(speed>150&&speed<=1000){
        res="ultra-fast";
    }
     if(speed>1000){
        res="extremely fast";
    }
   return res;
   }
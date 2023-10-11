#include<iostream>
using namespace std;
float discount(string day,string month, float amount);
main(){
    float result;
    string day,month;
    float amount;
    cout<<"Enter Purchase Day: ";
    cin>>day;
    cout<<"Enter Purchase Month: ";
    cin>>month;
    cout<<"Enter Purchase Amount: ";
    cin>>amount;
    result=discount(day,month,amount);
    cout<<"Payable Amount after discount: "<<result;


}
float discount(string day,string month, float amount){
    float res=amount;
    if(day=="Sunday"&&( month=="October"|| month=="March"|| month=="August")){
        float discount=amount-(amount*0.1);
        res = discount;
    }
     
    return res;
}

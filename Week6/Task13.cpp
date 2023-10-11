#include<iostream>
using namespace std;
float lowestPrice(int, string);

main(){
    int kilometers;
    string periodofday;

    cout<<"Enter the number of kilometers: ";
    cin>>kilometers;
    
    cout<<"Enter the period of the day (day/night): ";
    cin>>periodofday;
   
    float result;
    result = lowestPrice(kilometers, periodofday);
    cout<<"Lowest price for " << kilometers << " kilometers: "<< result << " EUR";

}

float lowestPrice(int kilometers, string periodofday){
    float price;
    if(kilometers >= 20){
        price = kilometers * 0.09;

    }

  
    if(kilometers < 20 && periodofday == "day"){
        price = kilometers * 0.79;
        price = price + 0.70;

    }
    
    if(kilometers < 20 && periodofday == "night"){
        price = kilometers * 0.90;
        price = price + 0.70;

    }
    
    if(kilometers >= 100){
        price = kilometers * 0.06;
    }
    
    return price;
   

    

}
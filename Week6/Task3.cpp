#include<iostream>
using namespace std;
float perimeter(string a, float n1);
main(){
    float result;
    float num1;
    string a;
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>>a;
    cout<<"Enter the value: ";
    cin>>num1;
    result = perimeter( a, num1);
    cout<<"The perimeter is: "<<result;

}
float perimeter(string a, float n1){
    float res;
    if(a=="s"){
        res= n1*4;
    }
     if(a=="c"){
        res= n1*6.28;
    }
     if(a=="t"){
        res= n1*3;
    }
     if(a=="h"){
        res= n1*6;
    }
    return res;
}
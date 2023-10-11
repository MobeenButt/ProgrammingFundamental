#include<iostream>
using namespace std;
float title(string name,int row,int col);
main(){
    float result;
    string name;
    int row,col;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>name;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of coulmns: ";
    cin>>col;
   result= title(name,row,col);
cout<<result;
}
   float title(string name,int row,int col){
    float ticket;
    if(name=="Premiere"){
        ticket=col* row *12.00;

    }
     if(name=="Normal"){
        ticket=col* row *7.50;
            }
     if(name=="Discount"){
        ticket=col* row *5;
    
    }
   return ticket;
   }
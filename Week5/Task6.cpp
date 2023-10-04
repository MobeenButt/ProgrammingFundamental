#include<iostream>

using namespace std;
void character(char a);
main(){
   char a;
   cout<<"Enter a character (A/a)" ;
   cin>>a;
 character(a);  

}
void character(char a){

if(a == 'A'){
    cout<<"You have entered Capital "<<a;

}
if(a == 'a'){
    cout<<"You have entered small "<<a;
}

}
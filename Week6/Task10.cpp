#include<iostream>
using namespace std;
bool title(int a,int b, int c);
main(){
    int res;
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
      cout<<"Enter the second number: ";
      cin>>b;
        cout<<"Enter the third number: ";
        cin>>c;
    
cout<< title(a,b,c);
}
   bool title(int a,int b, int c){
if(a==b&& a==c){
    return true;
}
else{
    return 0;
}
   }
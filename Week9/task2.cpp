#include<iostream>
using namespace std;

main(){
    string letter;
    cout<<"Enter a string: ";
    cin>>letter;
    int x=0;
    while (letter[x]!='\0')
    {
        x=x+1;
    }
    
     cout<<"Reversed String: ";
    for (int i=x-1 ;i>=0 ; i--)
    {
     cout<<letter[i];
    }
    
}
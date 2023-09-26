#include<iostream>
using namespace std;
main(){
cout<<"Enter the size in megabytes (MB): ";
float MB;
cin>>MB;
float KB;
KB = MB * 1024;
float bytes;
bytes = KB * 1024;
float bits;
bits = bytes * 8;
cout<<MB<<" MB is equivalent to "<<bits<<" bits."; 
}
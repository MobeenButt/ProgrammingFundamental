#include <iostream>
using namespace std;
int prime(int num);
bool isprime(int num);

main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num; 
    cout<<isprime(num);
    cout<<prime(num);
}
bool isprime(int num)
{
    for(int i=2;i*i<=num;i++)
{
    if(num%2==0){
        return false;
    }
    
}   return true;     
    }
int prime(int num){
    int count =0;
    for(int i=2;i<=num;i++){
        if(isprime(num)){
            count++;
        }
    }
    return count;
}
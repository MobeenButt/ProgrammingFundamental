#include <iostream>
using namespace std;
int totalDigits(int number);
int main() {
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    int numDigits = totalDigits(number);
    cout<<"Total number of digits: "<<numDigits<<endl;

}
int totalDigits(int number) {
    if (number < 0) {
        number = -number;
    }
    int count = 0;
    if (number == 0) {
        return 1;
    }
    while (number > 0) {
        count++;
        number =number/ 10;
    }

    return count;
}


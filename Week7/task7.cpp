#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    int n;
    cout<<"Enter numbers count: ";
    cin>>n;

    int count_p1 = 0, count_p2 = 0, count_p3 = 0, count_p4 = 0, count_p5 = 0;

    for (int i = 0; i < n; i++) {
        float num;
        cout<<"Enter a number: ";
        cin>>num;

        if (num < 200) {
            count_p1++;
        } else if (num >= 200 && num < 400) {
            count_p2++;
        } else if (num >= 400 && num < 600) {
            count_p3++;
        } else if (num >= 600 && num < 800) {
            count_p4++;
        } else {
            count_p5++;
        }
    }
double total =count_p1+count_p2+count_p3+count_p4+count_p5;

    double p1 = (count_p1 / total) * 100;
    double p2 = (count_p2 / total) * 100;
    double p3 = (count_p3 / total) * 100;
    double p4 = (count_p4 / total) * 100;
    double p5 = (count_p5 / total) * 100;

  
    cout<<fixed<<setprecision(2) << p1 << "%\n";
    cout<<fixed<<setprecision(2)  << p2 << "%\n";
   cout <<fixed<<setprecision(2) << p3 << "%\n";
    cout <<fixed<<setprecision(2) << p4 << "%\n";
    cout <<fixed<<setprecision(2) << p5 << "%\n";

    return 0;
}

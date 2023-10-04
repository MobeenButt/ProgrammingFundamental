#include<iostream>
#include<cmath>
using namespace std ;
int main () {
    float a , b , c , x , r1 , r2 , r3 , r4 ;
    cout << "Enter the value of a: " ;
    cin >> a ;
    cout << "Enter the value of b: " ;
    cin >> b ;
    cout << "Enter the value of c: " ;
    cin >> c ;
    x = (b*b)-4*a*c ;
    if (  x > 0  )
    {
        r1= (-b)/(2*a) ;
        r2=  (sqrt(x))/(2*a) ;
        r3  = r1 + r2 ;
        r4 = r1 - r2 ;
        cout << "Solutions: x = " << r3 << " and x = " << r4 ;
    }
    if ( x == 0 )
    {
        r1 = r2 = (-b)/(2*a) ;
        cout << "Solution: x = " << r1 ;
    }
    if ( x < 0)
    {
        r1 = (-b)/(2*a) ;
        r2 = (sqrt(-x))/(2*a) ;
        cout << "Complex Solutions: x = " << r1 << " + " << r2 << "i" << " and x = " << r1 << " - " << r2 << "i" ;
    }

}

#include <iostream>
using namespace std;
int calculatePrice(int money, int year);
main()
{
    int money, year;
    cout << "Enter Money: ";
    cin >> money;
    cout << "Enter Year: ";
    cin >> year;
    int result = calculatePrice(money, year);
    if (result > 0)
    {
        cout << "Yes! He will live a carefree life and will have " << result << " dollars left.";
    }
    else
    {
        cout << "He will need " << -result << " dollars to survive.";
    }
}
int calculatePrice(int money, int year)
{
    int age = 18;
    int cost = 12000;
    int dollar = 0;
    for (int i = 1800; i <= year; i++)
    {
        if (i % 2 == 0)
        {
            dollar += cost;
        }
        else
        {
            dollar += cost + 50 * age;
            age++;
        }
    }
    int remaining = money - dollar;
    return remaining;
}
#include<iostream>
using namespace std;
string calculateCost(float budget, string category, int numPeople);

main(){
    float budget;
    string category;
    int numPeople;

    cout<<"Enter the budget: ";
    cin>>budget;
    
    cout<<"Enter the category (VIP/Normal): ";
    cin>>category;
    
    cout<<"Enter the number of people in the group: ";
    cin>>numPeople;
    
    cout<<calculateCost(budget, category, numPeople);

}

string calculateCost(float budget, string category, int numPeople)
   { 
    float transportscost, finalCost;
    string result;
    
        if (numPeople >= 1 && numPeople <= 4)
        {
            budget = budget - (budget * 0.75);
        }
        
        if (numPeople >= 5 && numPeople <= 9)
        {
            budget = budget - (budget * 0.60);
        }
        
        if (numPeople >= 10 && numPeople <= 24)
        {
            budget = budget - (budget * 0.50);
        }
        
        if (numPeople >= 25 && numPeople <= 49)
        {
            budget = budget - (budget * 0.40);
        }
        
        if(numPeople >= 50)
        {
            budget = budget - (budget * 0.25);
        }
        
        if (category == "VIP")
        {
            transportscost = 499.99 * numPeople;
        }
        
        else{
            transportscost = 249.99 * numPeople;
        }
        
        finalCost = (budget - transportscost) + 0.000005;
        
        if (finalCost > 0.0)
        {
            result = "Yes! You have " + to_string(finalCost) + " leva left.";
            return result;
        }
        
        else
        {
            result="Not enough money! You need " + to_string(-finalCost) + " leva.";
            return result;
        }
           
}
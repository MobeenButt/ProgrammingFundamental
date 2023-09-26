#include<iostream>
using namespace std;
main(){
cout<<"Enter the name of the cricket team: ";
string team;
cin>>team;
int wins;
cout<<"Enter the number of wins: ";
cin>>wins;
int draws;
cout<<"Enter the number of draws: ";
cin>>draws;
int losses;
cout<<"Enter the number of losses: ";
cin>>losses;
int points;
points = ( wins * 3 ) + draws + ( losses * 0 ) ;
cout<<team<<" has obtained "<<points<<" points in the Asia Cup tournament."; 
return 0;
}
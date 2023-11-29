#include <iostream>
using namespace std;
string fire(string op[][5],int x,int y);
main()
{
 
    string battle[5][5] = {
        {".", ".", ".", "*", "*"},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", ".", "*", "*", "."},
    };
    string op;
    cout << "Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    cin >> op;
       int x, y;
if (op[0]=='A')
{
    x=0;
}
if (op[0]=='B')
{
    x=1;
}
if (op[0]=='C')
{
    x=2;
}
if (op[0]=='D')
{
    x=3;
}
if (op[0]=='E')
{
    x=4;
}
if (op[1]=='1')
{
    y=0;
}
if (op[1]=='2')
{
    y=1;
}
if (op[1]=='3')
{
    y=2;
}
if (op[1]=='4')
{
    y=3;
}
if (op[1]=='5')
{
    y=4;
}
cout<<"Result: "<<fire(battle,x,y);

}
string fire(string battle[][5],int x,int y){

    if (battle[x][y] == ".")
    {
        return "splash";
    }
    else if (battle[x][y] == "*")
    {
        return "BOOM";
    }
}

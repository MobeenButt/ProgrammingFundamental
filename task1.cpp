#include<iostream>
using namespace std;
bool brickfit(int a,int b,int c,int w,int h );
main(){
int a,b,c,w,h;
cin>>a>>b>>c>>w>>h;
cout<<brickfit(a,b,c,w,h);
}
bool brickfit(int a,int b,int c,int w,int h ){
    if((a<=w&&b<=h)||(a<=w&&c<=h)||(b<=w&&a<=h)||(b<=w&&c<=h)||(c<=w&&a<=h)||(c<=w&&b<=h))
{
    return true;
}
else{
return false;}

}
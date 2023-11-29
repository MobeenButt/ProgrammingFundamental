#include<iostream>
using namespace std;
 void vowelRem(string word);
main(){
    string word;
    cout<<"Enter a string: ";
    getline(cin,word);


cout<<"String with vowels removed: ";
vowelRem(word);

}
 void vowelRem(string word){ 
    int ascii;
    for (int i = 0;word[i]!='\0'; i++)
    {
        ascii=word[i];
        if (ascii==65 || ascii==69|| ascii ==73 || ascii==79||ascii==85||ascii==97||ascii==101||ascii==105||ascii==111||ascii==117)
        {
        }
        else{
            cout<<char(ascii);
        }
   }
    
}
    

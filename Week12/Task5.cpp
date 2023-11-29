#include <iostream>
using namespace std;

bool identity(int elements[3][3]);

int main() {
    

    int elements[3][3];  

    cout << "Enter the elements of the matrix: \n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {  
          cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> elements[i][j];
        }
    }

cout<<"The matrix you entered is: \n";
   for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {  
            cout <<elements[i][j]<<"\t";
        }
        cout<<endl;
    }
if(identity(elements)){
    cout<<"The entered matrix is an identity matrix.";
}
else{
    cout<<"The entered matrix is NOT an identity matrix.";
}
}
bool identity(int elements[3][3]){

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++){
          if ((elements[i][j] != 1));
return false;
}
for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++){
          if (( elements[i][j] != 0)){
            return false;
          }
        }
        return true;
}


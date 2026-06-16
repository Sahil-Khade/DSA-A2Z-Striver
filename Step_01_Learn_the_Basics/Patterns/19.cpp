// Input: 5
// Output:
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********


#include<iostream>
using namespace std;

void pattern(int rows){
    for(int i = 1; i <= rows; i++){
        for(int j = i; j <= rows; j++){
            cout << "*"; 
        }
        for(int space = 1; space <= 2*(i-1); space++){
            cout << " ";
        }
        for(int j = i; j <= rows; j++){
            cout << "*"; 
        }
        cout << endl;
    }
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            cout << "*"; 
        }
        for(int space = 1; space <= 2*(rows-i); space++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "*"; 
        }
        cout << endl;
    }
    
}

int main(){
    int n;
    cin >> n;
    pattern(n);
    return 0;
}
// Input: 5
// Output:
// A
// BB
// CCC
// DDDD
// EEEEE

#include<iostream>
using namespace std;

void pattern(int rows){
    for(int i = 1; i <= rows; i++){
        for(int j = 0; j < i; j++){
            cout << char('A'+i-1);
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
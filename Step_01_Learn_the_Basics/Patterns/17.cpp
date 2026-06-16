// Input: 5
// Output:
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include<iostream>
using namespace std;

void pattern(int rows){
    for(int i = 1; i <= rows; i++){
        for(int space = 1; space <= rows-i; space++){
            cout << " ";
        }
        for(int j = 0; j < i-1; j++){
            cout << char('A'+j);
        }
        for(int j = i-1; j >= 0; j--){
            cout << char('A'+j);
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
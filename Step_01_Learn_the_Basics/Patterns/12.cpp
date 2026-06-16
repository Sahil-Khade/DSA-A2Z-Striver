// Input: 5
// Output:
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

#include<iostream>
using namespace std;

void pattern(int rows){
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        for(int space = 1; space <= 2*(rows-i); space++){
            cout << " ";
        }
        for(int k = i; k >= 1; k--){
            cout << k;
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
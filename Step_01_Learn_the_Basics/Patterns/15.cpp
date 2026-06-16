// Input: 5
// Output:
// ABCDE
// ABCD
// ABC
// AB
// A

#include<iostream>
using namespace std;

void pattern(int rows){
    for(int i = 1; i <= rows; i++){
        for(int j = 0; j <= rows-i; j++){
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
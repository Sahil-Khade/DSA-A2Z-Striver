// Input: 5
// Output:
// 1
// 12
// 123
// 1234
// 12345

#include<iostream>
using namespace std;

void pattern(int rows){
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            cout << j ;
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
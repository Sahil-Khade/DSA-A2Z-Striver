// Input: 5
// Output:
// 12345
// 1234
// 123
// 12
// 1
#include<iostream>
using namespace std;

void pattern(int rows){
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= rows-i+1; j++){
            cout << j;
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
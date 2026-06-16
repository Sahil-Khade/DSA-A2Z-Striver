// Input: 5
// Output:
//     *
//    ***
//   *****
//  *******
// *********

#include<iostream>
using namespace std;

void pattern(int rows){
    for(int i = 1; i <= rows; i++){
        for(int space = i; space < rows; space++){
            cout << " ";
        }
        for(int j = 1; j <= 2*i-1; j++){
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
// Input: 5
// Output:
// *****
// *   *
// *   *
// *   *
// *****

#include<iostream>
using namespace std;

void pattern(int rows){
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= rows; j++){
            if(i == 1 || i == rows || j == 1 || j == rows){     //first and last row/column
                cout <<"*";
            }
            else{
                cout << " ";
            }
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
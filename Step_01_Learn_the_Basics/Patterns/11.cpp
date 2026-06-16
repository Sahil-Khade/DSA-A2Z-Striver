// Input: 5
// Output:
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 

#include<iostream>
using namespace std;

void pattern(int rows){
    int n;
    for(int i = 1; i <= rows; i++){
        int start = 1;
        if(i%2 == 0){
            start = 0;
        }
        for(int space = 1; space <= i; space++){
            cout << start << " ";
            start = 1-start;
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
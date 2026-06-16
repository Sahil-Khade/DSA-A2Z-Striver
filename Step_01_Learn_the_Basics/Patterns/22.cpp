// Input: 3
// Output:
// 33333
// 32223
// 32123
// 32223
// 33333

#include<iostream>
using namespace std;

void pattern(int rows){
    for(int i = 0; i < 2*rows-1 ; i++){
        for(int j = 0; j < 2*rows-1; j++ ){
            int top = i;
            int bottom = (2*rows - 2) - i;
            int left = j;
            int right = (2*rows - 2) - j;
            cout << (rows - min(min(top,bottom),min(left,right)));
            
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
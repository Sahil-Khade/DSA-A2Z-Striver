// Input: 5
// Output:
// E 
// D E 
// C D E 
// B C D E 
// A B C D E

#include<iostream>
using namespace std;

void pattern(int rows){
    for(int i = 1; i <= rows; i++){
        for(int j = rows-i+1; j <= rows; j++){
            cout << char('A'+j-1) << " ";
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
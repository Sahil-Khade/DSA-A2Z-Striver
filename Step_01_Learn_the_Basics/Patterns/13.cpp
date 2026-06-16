// Input: 5
// Output:
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

#include<iostream>
using namespace std;

int n = 1;
void pattern(int rows){
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            cout << n << " ";
            n++;
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
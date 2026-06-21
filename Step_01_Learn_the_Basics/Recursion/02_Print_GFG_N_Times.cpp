// Problem: Print GFG N Times (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/print-gfg-n-times/1

#include <iostream>
using namespace std;

void print(int i){
    if(i == 0) return;
    
    print(i - 1);
    
    cout << "GFG ";
}

int main(){
    int n;
    cin >> n;
    
    print(n);

    return 0;
}


// Approach: Recursive call for n-1 until base case, then print "GFG" while returning.
// Time: O(n)
// Space: O(n)   // recursion stack
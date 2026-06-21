// Problem: Print 1 To N Without Loop (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1

class Solution {
  public:
    void printTillN(int n) {
        
        if(n == 0) return;
        
        printTillN(n-1);
        
        cout << n << " ";        
    }
};


// Approach: Recursively call for n-1 until base case.
// Print n while returning from recursion.
// Time: O(n)
// Space: O(n)   // recursion stack
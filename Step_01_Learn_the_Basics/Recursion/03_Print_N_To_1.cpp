// Problem: Print N To 1 Without Loop (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/print-n-to-1-without-loop/1

class Solution {
  public:
    void printNos(int n) {
        
        if(n < 1) return;
        
        cout << n << " ";
        
        printNos(n-1);
    }
};


// Approach: Print n first then Recursively call for n-1 until base case.
// Time: O(n)
// Space: O(n)   // recursion stack
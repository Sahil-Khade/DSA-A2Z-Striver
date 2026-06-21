// Problem: Sum of First N Terms (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1

class Solution {
public:
    int sumOfSeries(int n) {

        if(n < 1) return 0;

        return (n * n * n) + sumOfSeries(n - 1);
    }
};


// Approach: Approach: Add current cube and recurse for n-1 until n = 0.
// Time: O(n)
// Space: O(n)   // recursion stack
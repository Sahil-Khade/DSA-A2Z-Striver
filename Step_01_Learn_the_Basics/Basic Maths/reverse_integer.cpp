// Problem: Reverse Integer (LeetCode)
// Link: https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        
        while (x != 0) {
            int rem = x % 10;  
            x /= 10;
            
            // check for overflow before multiplying
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) return 0;
            
            rev = rev * 10 + rem;
        }
        return rev;
    }
};


// Approach: Extract digits one by one, create reversed number. 
// Time: O(log n) number of digits 
// Space: O(1)


// Problem: Palindrome Number (LeetCode #9)
// Link: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return 0;
        long rev=0;         // rev may exceed 32 bit
        int prev = x;
        while(x>0){
            rev = rev*10 + x%10;
            x /=10;
        }
        if(prev == rev) return 1;
        else return 0;
        
    }
};


// Approach: Avoid negative no. reverse, create reverse compare with previous.
// Time Complexity: O(log n) number of digits
// Space Complexity: O(1)
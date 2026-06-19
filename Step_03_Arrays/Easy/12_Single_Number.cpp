// Problem: Single Number (LeetCode)
// Link: https://leetcode.com/problems/single-number/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XOR = 0;
        for(int i = 0; i < nums.size(); i++){
            XOR = XOR^nums[i];      // all numbers appear twice so x^x = 0
        }                           // the single one has no pair, so it stays after XOR
        return XOR;
    }
};

// Approach:
// XOR all array elements.
// Common pairs cancel out leave the single number.
// Time: O(n)
// Space: O(1)

// Method 1 (Better):
// Map to count frequencies and return element with frequency 1.
// Time: O(n log n)
// Space: O(n)
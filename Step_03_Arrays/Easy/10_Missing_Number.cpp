// Problem: Missing Number (LeetCode)
// Link: https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int XOR1 = 0;
        int XOR2 = 0;
        for(int i = 0; i <= n-1; i++){
            XOR1 = XOR1^(i+1);
            XOR2 = XOR2^nums[i];
        }
        return XOR1^XOR2;
    }
};

// Approach:
// XOR no. from 1 to n and all array elements.
// Common numbers cancel out leave the missing number.
// Time: O(n)
// Space: O(1)

// Example: nums = [3,0,1]
// XOR(1,2,3) = 0
// XOR(3,0,1) = 2
// 0 ^ 2 = 2  // Missing number = 2

// Method 1 (Better):
// Use sum of first n natural numbers.
// Missing = n*(n+1)/2 - sum of arr.
// Time: O(n)
// Space: O(1)

// Method 2 (Brute):
// hash array to mark visited numbers
// First unvisited index is the missing number.
// Time: O(n)
// Space: O(n)
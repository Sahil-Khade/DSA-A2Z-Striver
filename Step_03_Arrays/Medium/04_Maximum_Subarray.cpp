// Problem: Maximum Subarray (LeetCode)
// Link: https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int maxm = INT_MIN;

        for(int i = 0; i < n; i++){
            sum += nums[i];
            maxm = max(maxm, sum);

            if(sum < 0){
                sum = 0;      //negative sum cannot help future subarrays
            }
        }

        return maxm;
    }
};

// Approach:
// Use Kadane's Algorithm.
// Keep adding elements to sum.
// Update max sum.
// If sum becomes negative, reset it to 0.
// Time: O(n)
// Space: O(1)

// Method 1 (Better):
// Generate all subarrays and keep track of maximum sum.
// Time: O(n²)
// Space: O(1)
// Problem: Rotate Array (LeetCode) 
// Link: https://leetcode.com/problems/rotate-array/
// Right Rotation

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     int n = nums.size();
     k = k%n;                               //handle k > n 
     reverse(nums.begin(),nums.end());
     reverse(nums.begin(),nums.begin()+k);
     reverse(nums.begin()+k,nums.end());
    }
};

// Approach: reverse whole, reverse first k, reverse rest
// Example: nums=[1,2,3,4,5,6,7], k=3
// 1 whole [7,6,5,4,3,2,1]
// 2 first k [5,6,7,4,3,2,1]
// 3 rest [5,6,7,1,2,3,4]
// Time: O(n)
// Space: O(1)
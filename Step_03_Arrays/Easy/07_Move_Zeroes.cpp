// Problem: Move Zeroes (LeetCode)
// Link: https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums){
        int k = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){                 //place non-zero at k
                nums[k] = nums[i];
                k++;
            }
        }
        for(int i = k; i < nums.size(); i++){
            nums[i] = 0;                      //fill remaining as 0
        }
    }
};

// Approach: Two-pass in-place
// k tracks the index where next non-zero element to place
// Time: O(n)
// Space: O(1)


// Method 2 (not optimal):
// Use a temporary array to store non-zero elements, then copy them back and fill the rest with zeros.
// Time: O(n)
// Space: O(n)
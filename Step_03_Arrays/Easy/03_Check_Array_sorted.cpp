// Problem: Check if Array Is Sorted and Rotated (LeetCode)
// Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0; 
        for(int i = 1; i <= nums.size()-1; i++){
            if(nums[i] < nums[i-1]){        //count drops
                count++;
            }
        }
        if(nums[0] < nums[nums.size()-1]){  //check valid rotation
            count++;
        }
        return count <= 1;
    }
};

// Approach: compare adjacent elements, if rotated only one drop
// if rotated +1 last < first 
// if sorted     first < last +1
// if count > 1 unsorted or invalid rotation
// Time: O(n)
// Space: O(1)


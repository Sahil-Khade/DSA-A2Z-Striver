// Problem: Remove Duplicates from Sorted Array (LeetCode)
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for(int i = 1; i <= nums.size()-1; i++){
            if(nums[k] < nums[i]){          // keep only unique
                k++;
                nums[k] = nums[i];
            }
        }
        return k+1;                         
    }
};

// Approach: i for loop, k for unique keep nums[0], start from i=1
// if nums[i] > nums[k] k++ and update first k+1 are unique
// Time: O(n)
// Space: O(1)

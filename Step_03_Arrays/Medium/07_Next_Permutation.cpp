// Problem: Next Permutation (LeetCode)
// Link: https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;

        for(int i = n - 1; i > 0; i--){
            if(nums[i] > nums[i - 1]){
                pivot = i - 1;
                break;
            }
        }

        if(pivot == -1){            //already last permutation
            reverse(nums.begin(), nums.end());
            return;
        }

        for(int i = n - 1; i > pivot; i--){
            if(nums[i] > nums[pivot]){
                swap(nums[i], nums[pivot]);     //smallest possible increase
                break;
            }
        }

        reverse(nums.begin() + pivot + 1, nums.end());  //make remaining part as small as possible
    }
};

// Approach:
// Find the first pivot from the right that can be increased.
// If no pivot, reverse the whole array (last permutation -> first).
// Swap the pivot with the smallest greater element for a slight increase.
// Reverse the suffix to make the remaining part as small as possible.
// Time: O(n)
// Space: O(1)

// Example:
// 1 2 7 4 3 1
// Pivot = 2 -> Swap with 3 -> 1 3 7 4 2 1
// Reverse suffix -> 1 3 1 2 4 7
// Problem: Sort Colors (LeetCode)
// Link: https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;         //don't move mid, check swapped element at mid again
            }
            else{
                mid++;
            }
        }
    }
};

// Approach:
// Use Dutch National Flag Algorithm.
// low - boundary for 0s.
// mid - current element.
// high - boundary for 2s.
// If 0, swap with low and move both.
// If 1, move mid.
// If 2, swap with high and move high.
// Time: O(n)
// Space: O(1)


// Method 1 (Better):
// Count frequency of 0, 1, 2 in map then overwrite the array.
// Time: O(n)
// Space: O(1)
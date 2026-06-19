// Problem: Max Consecutive Ones (LeetCode)
// Link: https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0,max = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                count++;
                if(max < count) max = count;
            }
            else{
                count = 0;
            }
        }
        
        return max;
    }
};

// Approach:
// Traverse the array and count consecutive 1s then update max.
// Reset count when a 0 is found.
// Time: O(n)
// Space: O(1)
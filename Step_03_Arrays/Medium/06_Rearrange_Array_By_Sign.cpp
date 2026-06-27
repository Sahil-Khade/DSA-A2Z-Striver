// Problem: Rearrange Array Elements by Sign (LeetCode)
// Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> rearrange(n, 0);

        int pos = 0;
        int neg = 1;

        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                rearrange[pos] = nums[i];
                pos += 2;
            }
            else{
                rearrange[neg] = nums[i];
                neg += 2;
            }
        }

        return rearrange;
    }
};

// Approach:
// separate indices for positive and negative numbers.
// Positives at even indices and negatives at odd indices.
// Time: O(n)
// Space: O(n)
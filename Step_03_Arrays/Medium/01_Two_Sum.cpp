// Problem: Two Sum (LeetCode)
// Link: https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int x = target - nums[i];

            if(mp.find(x) != mp.end()){     //if x stored in map
                return {mp[x], i};
            }

            mp[nums[i]] = i;             //store current no. & index
        }

        return {};
    }
};

// Approach:
// Store elements and their indices in a hashmap.
// For each element, check if (target - current) already exists.
// If found, return both indices else, store current element and continue.
// Time: O(n)
// Space: O(n)



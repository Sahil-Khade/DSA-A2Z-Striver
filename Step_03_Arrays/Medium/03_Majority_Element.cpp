// Problem: Majority Element (LeetCode)
// Link: https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int candidate;

        for(int i = 0; i < n; i++){
            if(count == 0){             //count 0 select new candi..
                candidate = nums[i];
                count = 1;
            }
            else if(nums[i] == candidate){  //same no. 
                count++;
            }
            else{                       //differnt no. 
                count--;
            }
        }

        int freq = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == candidate){
                freq++;
            }
        }

        if(freq > n/2){
            return candidate;
        }

        return -1;
    }
};

// Approach:
// Use Moore's Voting Algorithm.
// Different elements cancel each other.
// If count becomes 0, choose current no. as new candidate.
// After first pass, candidate is a potential majority element.
// Verify its frequency in a second pass(> n/2).
// Time: O(n)
// Space: O(1)

// Majority element cannot be fully canceled by others combined.
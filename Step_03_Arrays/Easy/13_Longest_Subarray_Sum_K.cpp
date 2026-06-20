// Problem: Longest Subarray with Sum K (GeeksforGeeks) //For (+ve,0,-ve)
// Link: https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int, int> prefixsum;
        int sum = 0;
        int maxlen = 0;
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
            if(sum == k){
                maxlen = i+1;
            }
            if(prefixsum.find(sum-k) != prefixsum.end()){   //(sum-k) found 
                maxlen = max(maxlen, i - prefixsum[sum-k]);
            }
            if(prefixsum.find(sum) == prefixsum.end()){     //sum not found 
                prefixsum[sum] = i;
            }
        }
        return maxlen;
    }
};

// Approach:
// Store each prefix sum and its first occurrence in a hashmap.
// If sum == k, subarray (0..i) is valid.
// If (sum-k) exists, subarray (earlierIndex+1..i) has sum k.
// Keep first occurrence of a prefix sum to get max length.
// Time: O(n)
// Space: O(n)

// Example:
// Prefix sum 5 at index 2 and 6.
// Keep index 2 only, as i-2 > i-6.
// First occurrence gives longest subarray.
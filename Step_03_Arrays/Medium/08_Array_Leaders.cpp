// Problem: Array Leaders (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        int lead = INT_MIN;

        for(int i = n-1; i >= 0; i--){
            if(arr[i] >= lead){
                ans.push_back(arr[i]);
                lead = arr[i];      //update new leader
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Approach:
// Traverse from right & keep largest element so far in lead.
// If current element >= leader, it is also a leader.
// Reverse answer as leaders are collected from right to left.
// Time: O(n)
// Space: O(n)
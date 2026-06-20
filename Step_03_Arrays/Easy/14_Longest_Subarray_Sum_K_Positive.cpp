// Problem: Longest Subarray with Sum K (GeeksforGeeks) // For (+ve) only

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int j = 0;
        int sum = 0;
        int maxlen = 0;

        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];

            while(sum > k){
                sum -= arr[j];
                j++;
            }

            if(sum == k){
                maxlen = max(maxlen, i - j + 1);
            }
        }

        return maxlen;
    }
};

// Approach:
// Use sliding window and maintain current sum.
// Expand window by moving i.
// Shrink window when sum exceeds k.
// Update maxlen when sum equals k.
// Time: O(n)
// Space: O(1)
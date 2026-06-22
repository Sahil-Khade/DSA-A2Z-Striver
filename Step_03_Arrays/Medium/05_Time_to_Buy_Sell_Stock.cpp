// Problem: Best Time to Buy and Sell Stock (LeetCode)
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];
        int profit = 0;

        for(int i = 1; i < n; i++) {

            profit = max(profit, prices[i] - buy); // max profit if sold today
            buy = min(buy, prices[i]);             // minimum buy price so far
        }

        return profit;
    }
};

// Approach:
// Keep track of minimum buying price so far.
// Calculate profit if sold on current day.
// Update maximum profit and minimum buy price.
// Time: O(n)
// Space: O(1)

// Buy at lowest price so far and sell for maximum profit.
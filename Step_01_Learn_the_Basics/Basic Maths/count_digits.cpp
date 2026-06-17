// Problem: Count Digits that Divide (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/count-digits5716/1

class Solution {
public:
    int evenlyDivides(int n) {
        int count = 0;
        int div = n;
        while (n > 0) {
            int d = n % 10;
            n = n / 10;
            if (d != 0 && div % d == 0) {
                count++;
            }
        }
        return count;
    }
};


// Approach: Extract digits one by one, skip 0, check if divide perfectly.
// Time: O(log n) number of digits
// Space: O(1)


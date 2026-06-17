// Problem: Armstrong Number (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/armstrong-numbers/0

class Solution {
  public:
    bool armstrongNumber(int n) {
        int count = int(log10(n)+1);    // give count of no. of digits
        int num = n,arm = 0;
        
        while(n > 0){
            int rem = n%10;             
            arm = pow(rem,count) + arm;
            n /= 10;
        }
        if (num == arm) return 1;
        else return 0;
    }
};


// Approach: count digits, sum of each digit raised to power count.
// If sum equals original, then Armstrong number.
// Time : O(log n) 
// Space : O(1)

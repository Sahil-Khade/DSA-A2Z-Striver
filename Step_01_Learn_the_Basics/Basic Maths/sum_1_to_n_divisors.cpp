// Problem: Sum of Divisors from 1 to n (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

class Solution {
public:
    long long sumOfDivisors(long long n) {
        long long sum = 0;
        // from 1 to n
        for(long long j = 1; j <= n; j++){
            // find divisors of j
            for(long long i = 1; i <= sqrt(j); i++){
                if (j%i == 0){
                    sum += i;
                    if (i != j/i){
                        sum += j/i;
                    }
                }
            }
        }
        return sum;
    }
};

// Approach: for each number from 1 to n, find divisors using sqrt method.
// add divisors to sum.
// Time : O(n*sqrt(n))
// Space : O(1)

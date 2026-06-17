// Problem: Prime Number (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/prime-number2314/1

class Solution {
  public:
    bool isPrime(int n) {
        if(n <= 1) return false;
        for(int i = 2 ; i <= sqrt(n); i++){
            if(n%i==0) return false;
        }
        return true;
    }
};


// Approach: no. less than equal to 1 not prime
// factor always in pair one no. of pair always <= sqrt(n)
// check if from 2 to sqrt(n) divide then not prime else prime
// Time : O(sqrt(n))
// Space : O(1)

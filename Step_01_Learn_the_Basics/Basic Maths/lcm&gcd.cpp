// Problem: LCM And GCD (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1

class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
       
        vector<int> solution;
        for(int i = min(a,b); i >= 1 ; i--){     
            if(a%i == 0 && b%i == 0) {          
                solution.push_back((a*b)/i);    // lcm
                solution.push_back(i);          // gcd
                break;
            }
        }
        
        return solution;
    }
};


// Approach: gcd can be from min(a,b) or smaller divisor 
// first common divisor found is gcd. then lcm = (a*b)/gcd.
// Time : O(min(a,b))
// Space : O(1)
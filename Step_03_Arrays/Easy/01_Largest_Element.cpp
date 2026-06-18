// Problem: Largest Element in Array (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

class Solution {
public:
    int largest(vector<int> &arr) {
        int max = arr[0];
        for(int i = 1; i < arr.size(); i++){
            if (arr[i] > max){
                max = arr[i];
            }
        }
        return max;
    }
};

// Approach: Initialize max with first element.
// Iterate through array, update max if found larger element.
// Time: O(n)
// Space: O(1)


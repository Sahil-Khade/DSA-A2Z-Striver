// Problem: Largest Element in Array
// Link: https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
// Platform: GeeksforGeeks
// Difficulty: Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largest(vector<int> &arr) {
        int max = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }
};

/*
APPROACH:
Initialize max with first element.
Iterate through array, update max if found larger element.

TIME: O(n)
SPACE: O(1)
*/

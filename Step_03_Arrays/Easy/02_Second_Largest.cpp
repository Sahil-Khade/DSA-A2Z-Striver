// Problem: Second Largest in Array
// Link: https://www.geeksforgeeks.org/problems/second-largest3735/1
// Platform: GeeksforGeeks
// Difficulty: Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {

        if (arr.size() < 2) return -1;
        
        int second_l = -1;
        int largest = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > largest) {
                second_l = largest;
                largest = arr[i];
            } else if (arr[i] < largest && arr[i] > second_l) {
                second_l = arr[i];
            }
        }
        return second_l;
    }
};

/*
APPROACH:
Update second largest whenever a new largest is found, or when an element is in between them.

TIME: O(n)
SPACE: O(1)
*/

// Problem: Rotate Array (GeeksforGeeks)
// Link: https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1
// Left Rotation

class Solution {
public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;                           // handle d > n
        reverse(arr.begin(), arr.begin() + d);   
        reverse(arr.begin() + d, arr.end());     
        reverse(arr.begin(), arr.end());         
    }
};

// Approach: reverse first d, reverse rest, reverse whole
// Example: arr=[1,2,3,4,5], d=2
// 1 first d [2,1,3,4,5]
// 2 rest [2,1,5,4,3]
// 3 whole [3,4,5,1,2]
// Time: O(n)
// Space: O(1)
